#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001B[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 125, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0016C000;
    case 2u: goto L_0016C014;
    case 3u: goto L_0016C028;
    case 4u: goto L_0016C03C;
    case 5u: goto L_0016C044;
    case 6u: goto L_0016C050;
    case 7u: goto L_0016C064;
    case 8u: goto L_0016C078;
    case 9u: goto L_0016C094;
    case 10u: goto L_0016C0A0;
    case 11u: goto L_0016C0B4;
    case 12u: goto L_0016C0C8;
    case 13u: goto L_0016C0E4;
    case 14u: goto L_0016C0F0;
    case 15u: goto L_0016C104;
    case 16u: goto L_0016C118;
    case 17u: goto L_0016C134;
    case 18u: goto L_0016C140;
    case 19u: goto L_0016C154;
    case 20u: goto L_0016C168;
    case 21u: goto L_0016C184;
    case 22u: goto L_0016C194;
    case 23u: goto L_0016C1AC;
    case 24u: goto L_0016C1B4;
    case 25u: goto L_0016C1D0;
    case 26u: goto L_0016C200;
    case 27u: goto L_0016C26C;
    case 28u: goto L_0016C290;
    case 29u: goto L_0016C2F4;
    case 30u: goto L_0016C340;
    case 31u: goto L_0016C37C;
    case 32u: goto L_0016C384;
    case 33u: goto L_0016C38C;
    case 34u: goto L_0016C394;
    case 35u: goto L_0016C39C;
    case 36u: goto L_0016C3A4;
    case 37u: goto L_0016C3B0;
    case 38u: goto L_0016C3BC;
    case 39u: goto L_0016C40C;
    case 40u: goto L_0016C41C;
    case 41u: goto L_0016C434;
    case 42u: goto L_0016C4A0;
    case 43u: goto L_0016C510;
    case 44u: goto L_0016C518;
    case 45u: goto L_0016C568;
    case 46u: goto L_0016C57C;
    case 47u: goto L_0016C5AC;
    case 48u: goto L_0016C5C0;
    case 49u: goto L_0016C604;
    case 50u: goto L_0016C618;
    case 51u: goto L_0016C67C;
    case 52u: goto L_0016C68C;
    case 53u: goto L_0016C6A8;
    case 54u: goto L_0016C6B0;
    case 55u: goto L_0016C6F4;
    case 56u: goto L_0016C728;
    case 57u: goto L_0016C750;
    case 58u: goto L_0016C764;
    case 59u: goto L_0016C794;
    case 60u: goto L_0016C7A8;
    case 61u: goto L_0016C7D4;
    case 62u: goto L_0016C7E8;
    case 63u: goto L_0016C868;
    case 64u: goto L_0016C884;
    case 65u: goto L_0016C8C0;
    case 66u: goto L_0016C930;
    case 67u: goto L_0016C938;
    case 68u: goto L_0016C984;
    case 69u: goto L_0016C98C;
    case 70u: goto L_0016C9A0;
    case 71u: goto L_0016C9C8;
    case 72u: goto L_0016C9D0;
    case 73u: goto L_0016C9E4;
    case 74u: goto L_0016CA18;
    case 75u: goto L_0016CA20;
    case 76u: goto L_0016CA34;
    case 77u: goto L_0016CA8C;
    case 78u: goto L_0016CA9C;
    case 79u: goto L_0016CAC8;
    case 80u: goto L_0016CAF4;
    case 81u: goto L_0016CB14;
    case 82u: goto L_0016CB1C;
    case 83u: goto L_0016CB30;
    case 84u: goto L_0016CB58;
    case 85u: goto L_0016CB60;
    case 86u: goto L_0016CB74;
    case 87u: goto L_0016CB98;
    case 88u: goto L_0016CBA0;
    case 89u: goto L_0016CBB4;
    case 90u: goto L_0016CC2C;
    case 91u: goto L_0016CC48;
    case 92u: goto L_0016CC80;
    case 93u: goto L_0016CCAC;
    case 94u: goto L_0016CCE4;
    case 95u: goto L_0016CD00;
    case 96u: goto L_0016CD30;
    case 97u: goto L_0016CD60;
    case 98u: goto L_0016CD8C;
    case 99u: goto L_0016CDD0;
    case 100u: goto L_0016CDEC;
    case 101u: goto L_0016CE1C;
    case 102u: goto L_0016CE50;
    case 103u: goto L_0016CE70;
    case 104u: goto L_0016CE80;
    case 105u: goto L_0016CE8C;
    case 106u: goto L_0016CE98;
    case 107u: goto L_0016CEA4;
    case 108u: goto L_0016CEB8;
    case 109u: goto L_0016CEE0;
    case 110u: goto L_0016CF0C;
    case 111u: goto L_0016CF20;
    case 112u: goto L_0016CF30;
    case 113u: goto L_0016CF48;
    case 114u: goto L_0016CF60;
    case 115u: goto L_0016CF78;
    case 116u: goto L_0016CF90;
    case 117u: goto L_0016CFB0;
    case 118u: goto L_0016CFC0;
    case 119u: goto L_0016CFE4;
    case 120u: goto L_0016D000;
    case 121u: goto L_0016D018;
    case 122u: goto L_0016D030;
    case 123u: goto L_0016D054;
    case 124u: goto L_0016D070;
    case 125u: goto L_0016D074;
    case 126u: goto L_0016D088;
    case 127u: goto L_0016D0A0;
    case 128u: goto L_0016D11C;
    case 129u: goto L_0016D124;
    case 130u: goto L_0016D170;
    case 131u: goto L_0016D184;
    case 132u: goto L_0016D1B4;
    case 133u: goto L_0016D1C8;
    case 134u: goto L_0016D20C;
    case 135u: goto L_0016D220;
    case 136u: goto L_0016D24C;
    case 137u: goto L_0016D270;
    case 138u: goto L_0016D288;
    case 139u: goto L_0016D29C;
    case 140u: goto L_0016D2F0;
    case 141u: goto L_0016D324;
    case 142u: goto L_0016D338;
    case 143u: goto L_0016D360;
    case 144u: goto L_0016D38C;
    case 145u: goto L_0016D39C;
    case 146u: goto L_0016D3D0;
    case 147u: goto L_0016D3F8;
    case 148u: goto L_0016D424;
    case 149u: goto L_0016D434;
    case 150u: goto L_0016D448;
    case 151u: goto L_0016D470;
    case 152u: goto L_0016D4B4;
    case 153u: goto L_0016D4C4;
    case 154u: goto L_0016D4D8;
    case 155u: goto L_0016D4F0;
    case 156u: goto L_0016D510;
    case 157u: goto L_0016D550;
    case 158u: goto L_0016D560;
    case 159u: goto L_0016D574;
    case 160u: goto L_0016D580;
    case 161u: goto L_0016D5B8;
    case 162u: goto L_0016D620;
    case 163u: goto L_0016D630;
    case 164u: goto L_0016D658;
    case 165u: goto L_0016D668;
    case 166u: goto L_0016D67C;
    case 167u: goto L_0016D6AC;
    case 168u: goto L_0016D6D0;
    case 169u: goto L_0016D6DC;
    case 170u: goto L_0016D6E8;
    case 171u: goto L_0016D700;
    case 172u: goto L_0016D74C;
    case 173u: goto L_0016D76C;
    case 174u: goto L_0016D780;
    case 175u: goto L_0016D7A0;
    case 176u: goto L_0016D7E0;
    case 177u: goto L_0016D800;
    case 178u: goto L_0016D824;
    case 179u: goto L_0016D848;
    case 180u: goto L_0016D860;
    case 181u: goto L_0016D8A0;
    case 182u: goto L_0016D8E0;
    case 183u: goto L_0016D910;
    case 184u: goto L_0016D930;
    case 185u: goto L_0016D940;
    case 186u: goto L_0016D950;
    case 187u: goto L_0016D970;
    case 188u: goto L_0016DA20;
    case 189u: goto L_0016DA48;
    case 190u: goto L_0016DA9C;
    case 191u: goto L_0016DAE8;
    case 192u: goto L_0016DB40;
    case 193u: goto L_0016DB88;
    case 194u: goto L_0016DB98;
    case 195u: goto L_0016DBEC;
    case 196u: goto L_0016DC0C;
    case 197u: goto L_0016DC1C;
    case 198u: goto L_0016DC90;
    case 199u: goto L_0016DCA8;
    case 200u: goto L_0016DCB8;
    case 201u: goto L_0016DCF0;
    case 202u: goto L_0016DD18;
    case 203u: goto L_0016DD50;
    case 204u: goto L_0016DD9C;
    case 205u: goto L_0016DDBC;
    case 206u: goto L_0016DDCC;
    case 207u: goto L_0016DDDC;
    case 208u: goto L_0016DDF0;
    case 209u: goto L_0016DE10;
    case 210u: goto L_0016DE5C;
    case 211u: goto L_0016DE7C;
    case 212u: goto L_0016DE90;
    case 213u: goto L_0016DEB8;
    case 214u: goto L_0016DEF0;
    case 215u: goto L_0016DF30;
    case 216u: goto L_0016DF50;
    case 217u: goto L_0016DF74;
    case 218u: goto L_0016DF98;
    case 219u: goto L_0016DFB0;
    case 220u: goto L_0016DFF0;
    case 221u: goto L_0016E030;
    case 222u: goto L_0016E060;
    case 223u: goto L_0016E080;
    case 224u: goto L_0016E090;
    case 225u: goto L_0016E0A0;
    case 226u: goto L_0016E0B0;
    case 227u: goto L_0016E0C0;
    case 228u: goto L_0016E0D0;
    case 229u: goto L_0016E0E0;
    case 230u: goto L_0016E184;
    case 231u: goto L_0016E1A4;
    case 232u: goto L_0016E1C0;
    case 233u: goto L_0016E290;
    case 234u: goto L_0016E2B0;
    case 235u: goto L_0016E2C0;
    case 236u: goto L_0016E318;
    case 237u: goto L_0016E340;
    case 238u: goto L_0016E3A4;
    case 239u: goto L_0016E3B0;
    case 240u: goto L_0016E3D4;
    case 241u: goto L_0016E498;
    case 242u: goto L_0016E4B4;
    case 243u: goto L_0016E4D8;
    case 244u: goto L_0016E4F4;
    case 245u: goto L_0016E508;
    case 246u: goto L_0016E520;
    case 247u: goto L_0016E544;
    case 248u: goto L_0016E554;
    case 249u: goto L_0016E568;
    case 250u: goto L_0016E578;
    case 251u: goto L_0016E5B0;
    case 252u: goto L_0016E5D0;
    case 253u: goto L_0016E5E4;
    case 254u: goto L_0016E600;
    case 255u: goto L_0016E64C;
    case 256u: goto L_0016E704;
    case 257u: goto L_0016E718;
    case 258u: goto L_0016E73C;
    case 259u: goto L_0016E75C;
    case 260u: goto L_0016E7B8;
    case 261u: goto L_0016E7C8;
    case 262u: goto L_0016E800;
    case 263u: goto L_0016E810;
    case 264u: goto L_0016E874;
    case 265u: goto L_0016E888;
    case 266u: goto L_0016E9C8;
    case 267u: goto L_0016E9FC;
    case 268u: goto L_0016EA18;
    case 269u: goto L_0016EAB4;
    case 270u: goto L_0016EAD0;
    case 271u: goto L_0016EB00;
    case 272u: goto L_0016EB18;
    case 273u: goto L_0016EB3C;
    case 274u: goto L_0016EB7C;
    case 275u: goto L_0016EBDC;
    case 276u: goto L_0016EBEC;
    case 277u: goto L_0016EC24;
    case 278u: goto L_0016EC34;
    case 279u: goto L_0016EC50;
    case 280u: goto L_0016ED58;
    case 281u: goto L_0016ED8C;
    case 282u: goto L_0016EDA4;
    case 283u: goto L_0016EE30;
    case 284u: goto L_0016EE4C;
    case 285u: goto L_0016EE80;
    case 286u: goto L_0016EE98;
    case 287u: goto L_0016EEB8;
    case 288u: goto L_0016EEF8;
    case 289u: goto L_0016EF0C;
    case 290u: goto L_0016EFA4;
    case 291u: goto L_0016F004;
    case 292u: goto L_0016F01C;
    case 293u: goto L_0016F040;
    case 294u: goto L_0016F060;
    case 295u: goto L_0016F0D0;
    case 296u: goto L_0016F180;
    case 297u: goto L_0016F198;
    case 298u: goto L_0016F1CC;
    case 299u: goto L_0016F1DC;
    case 300u: goto L_0016F41C;
    case 301u: goto L_0016F454;
    case 302u: goto L_0016F474;
    case 303u: goto L_0016F500;
    case 304u: goto L_0016F51C;
    case 305u: goto L_0016F558;
    case 306u: goto L_0016F570;
    case 307u: goto L_0016F594;
    case 308u: goto L_0016F5D4;
    case 309u: goto L_0016F5E8;
    case 310u: goto L_0016F7B8;
    case 311u: goto L_0016F7F0;
    case 312u: goto L_0016F808;
    case 313u: goto L_0016F898;
    case 314u: goto L_0016F8B8;
    case 315u: goto L_0016F8F0;
    case 316u: goto L_0016F908;
    case 317u: goto L_0016F92C;
    case 318u: goto L_0016F96C;
    case 319u: goto L_0016F980;
    case 320u: goto L_0016F9C0;
    case 321u: goto L_0016F9E0;
    case 322u: goto L_0016FA5C;
    case 323u: goto L_0016FA7C;
    case 324u: goto L_0016FA90;
    case 325u: goto L_0016FAD0;
    case 326u: goto L_0016FAF0;
    case 327u: goto L_0016FB08;
    case 328u: goto L_0016FB14;
    case 329u: goto L_0016FB38;
    case 330u: goto L_0016FB50;
    case 331u: goto L_0016FB90;
    case 332u: goto L_0016FBD0;
    case 333u: goto L_0016FC00;
    case 334u: goto L_0016FC20;
    case 335u: goto L_0016FC8C;
    case 336u: goto L_0016FCAC;
    case 337u: goto L_0016FCC0;
    case 338u: goto L_0016FCE0;
    case 339u: goto L_0016FD14;
    case 340u: goto L_0016FD30;
    case 341u: goto L_0016FD3C;
    case 342u: goto L_0016FD80;
    case 343u: goto L_0016FDB8;
    case 344u: goto L_0016FDF8;
    case 345u: goto L_0016FE24;
    case 346u: goto L_0016FF64;
    case 347u: goto L_0016FF90;
    default: bad_entry(c, 0x0016C000u); return;
    }
L_0016C000:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0016C018; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C014u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0016C014u) [[unlikely]] return; }
L_0016C014:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016C018:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_0016C02C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C028u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0016C028u) [[unlikely]] return; }
L_0016C028:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0016C02C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 4;
L_0016C03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C044u); st32((c.r[18].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0016C044u) [[unlikely]] return; }
L_0016C044:
    set32(c.r[18], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C050u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0016C050u) [[unlikely]] return; }
L_0016C050:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0016C068; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C064u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0016C064u) [[unlikely]] return; }
L_0016C064:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016C068:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_0016C07C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C078u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0016C078u) [[unlikely]] return; }
L_0016C078:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0016C07C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C094u); st32((c.r[18].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0016C094u) [[unlikely]] return; }
L_0016C094:
    set32(c.r[18], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0016C0A0u) [[unlikely]] return; }
L_0016C0A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0016C0B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0B4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0016C0B4u) [[unlikely]] return; }
L_0016C0B4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016C0B8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_0016C0CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0C8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0016C0C8u) [[unlikely]] return; }
L_0016C0C8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0016C0CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0E4u); st32((c.r[18].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0016C0E4u) [[unlikely]] return; }
L_0016C0E4:
    set32(c.r[18], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C0F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0016C0F0u) [[unlikely]] return; }
L_0016C0F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0016C108; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C104u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0016C104u) [[unlikely]] return; }
L_0016C104:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016C108:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_0016C11C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C118u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0016C118u) [[unlikely]] return; }
L_0016C118:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0016C11C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C134u); st32((c.r[18].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0016C134u) [[unlikely]] return; }
L_0016C134:
    set32(c.r[18], c.r[17].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C140u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0016C140u) [[unlikely]] return; }
L_0016C140:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0016C158; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C154u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0016C154u) [[unlikely]] return; }
L_0016C154:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0016C158:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_0016C16C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C168u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0016C168u) [[unlikely]] return; }
L_0016C168:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0016C16C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C184u); st32((c.r[18].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0016C184u) [[unlikely]] return; }
L_0016C184:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C194u); st32((c.r[17].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0016C194u) [[unlikely]] return; }
L_0016C194:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[17].w[0] + 136u);
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C1ACu); st32((c.r[17].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0016C1ACu) [[unlikely]] return; }
L_0016C1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C1B4u);  if (depth < kMaxDepth) unit_00AD(c, 89u, depth + 1u); else { c.pc = 0x003B4D08u; return; } if (c.pc != 0x0016C1B4u) [[unlikely]] return; }
L_0016C1B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016C1D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[6], c.r[29].w[0] + 104u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C200u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AD(c, 147u, depth + 1u); else { c.pc = 0x003B5758u; return; } if (c.pc != 0x0016C200u) [[unlikely]] return; }
L_0016C200:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0016C2F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[17], ld32((c.r[2].w[0] - 6336u)));  if (t) { goto L_0016C244; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 31004u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_0016C248; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 6336u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_0016C244:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0016C248:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[16], c.r[16].w[0] + 27777u);  if (t) { goto L_0016C25C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 27791u);
    c.budget -= 2;
L_0016C25C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_0016C2F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C26Cu);  if (depth < kMaxDepth) unit_00AD(c, 217u, depth + 1u); else { c.pc = 0x003B6540u; return; } if (c.pc != 0x0016C26Cu) [[unlikely]] return; }
L_0016C26C:
    set32(c.r[7], ld32((c.r[28].w[0] - 31000u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[8].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] - 6240u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x01080000u);  if (t) { goto L_0016C2C4; } }
L_0016C290:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[6].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_0016C2C4; }
    set32(c.r[5], c.r[10].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_0016C2C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 6236u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0])));  if (t) { goto L_0016C2D0; } }
L_0016C2C0:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_0016C2C4:
    c.r[3].d[0] = c.r[10].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C290u | kUnwind; return; } goto L_0016C290; } }
L_0016C2D0:
    set32(c.r[9], ld32((c.r[29].w[0] + 104u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C2F4u); set32(c.r[6], c.r[6].w[0] + 27798u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0016C2F4u) [[unlikely]] return; }
L_0016C2F4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0016C304; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0016C304:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0016C318; }
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_0016C318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016C340:
    c.r[1].d[0] = c.r[5].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 8u);  goto L_0016C354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016C3A8; } }
L_0016C354:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 7u);  goto L_0016C3A8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0016C000u < 16384u) { entry = entries_001B[(t - 0x0016C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0016C37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016C3A8; } }
L_0016C384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0016C3A8; } }
L_0016C38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0016C3A8; } }
L_0016C394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0016C3A8; } }
L_0016C39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0016C3A8; } }
L_0016C3A4:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_0016C3A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016C3B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 40u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 3;
L_0016C3BC:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016C484; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C40Cu); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0016C40Cu) [[unlikely]] return; }
L_0016C40C:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_0016C460; } }
L_0016C41C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_0016C448; }
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C434u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016C434u) [[unlikely]] return; }
L_0016C434:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 32u));
    st64((c.r[16].w[0] + 32u), c.r[3].d[0]);
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 5;
L_0016C448:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[16].w[0] + 40u);
    set32(c.r[18], c.r[3].w[0] + 40u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
L_0016C460:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C41Cu | kUnwind; return; } goto L_0016C41C; } }
L_0016C484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016C4A0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0016C884; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_0016C51C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C510u); set32(c.r[5], c.r[5].w[0] + 27893u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0016C510u) [[unlikely]] return; }
L_0016C510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C518u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0016C518u) [[unlikely]] return; }
L_0016C518:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0016C51C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_0016C6D0; }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], 0u + 40u);
    set32(c.r[20], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[20].w[0] - c.r[18].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  goto L_0016C5F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0016C598; } }
L_0016C568:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0016C588; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C57Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016C57Cu) [[unlikely]] return; }
L_0016C57C:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 32u));
    st64((c.r[21].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
L_0016C588:
    set32(c.r[21], c.r[21].w[0] + 40u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0016C598:
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C568u | kUnwind; return; } goto L_0016C568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0016C5DC; } }
L_0016C5AC:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0016C5CC; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C5C0u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016C5C0u) [[unlikely]] return; }
L_0016C5C0:
    c.r[3].d[0] = ld64((c.r[22].w[0] + 32u));
    st64((c.r[21].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
L_0016C5CC:
    set32(c.r[22], c.r[22].w[0] + 40u);
    set32(c.r[21], c.r[21].w[0] + 40u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0016C5DC:
    c.r[3].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C5ACu | kUnwind; return; } goto L_0016C5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C6A0; } }
L_0016C5F0:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[30], c.r[3].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[20].w[0] - c.r[30].w[0]);  if (t) { goto L_0016C634; } }
L_0016C604:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0016C624; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C618u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016C618u) [[unlikely]] return; }
L_0016C618:
    c.r[3].d[0] = ld64((c.r[22].w[0] + 32u));
    st64((c.r[21].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
L_0016C624:
    set32(c.r[22], c.r[22].w[0] + 40u);
    set32(c.r[21], c.r[21].w[0] + 40u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0016C634:
    c.r[3].d[0] = c.r[22].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C604u | kUnwind; return; } goto L_0016C604; } }
    set32(c.r[4], c.r[23].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[20].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[19], c.r[18].w[0] + c.r[4].w[0]);  goto L_0016C694; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016C670; } }
    set32(c.r[16], c.r[16].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_0016C670:
    set32(c.r[19], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C694; } }
L_0016C67C:
    set32(c.r[20], c.r[20].w[0] - 40u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C68Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x0016C68Cu) [[unlikely]] return; }
L_0016C68C:
    c.r[3].d[0] = ld64((c.r[19].w[0] + 32u));
    st64((c.r[20].w[0] + 32u), c.r[3].d[0]);
    c.budget -= 2;
L_0016C694:
    c.r[1].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[19], c.r[19].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C67Cu | kUnwind; return; } goto L_0016C67C; }
L_0016C6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C6C0; } }
L_0016C6A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C6B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x0016C6B0u) [[unlikely]] return; }
L_0016C6B0:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 32u));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st64((c.r[18].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[18], c.r[18].w[0] + 40u);
    c.budget -= 4;
L_0016C6C0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C6A8u | kUnwind; return; } goto L_0016C6A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0016C888; } }
L_0016C6D0:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], 0u + 1u);  goto L_0016C6EC; }
L_0016C6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0016C708; } }
L_0016C6F4:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_0016C708; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_0016C708:
    c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C6F4u | kUnwind; return; } goto L_0016C6F4; }
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C728u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0016C728u) [[unlikely]] return; }
L_0016C728:
    st32((c.r[29].w[0] + 164u), c.r[20].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[21], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[21].w[0] + c.r[2].w[0]);  if (t) { goto L_0016C780; } }
L_0016C750:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0016C770; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C764u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016C764u) [[unlikely]] return; }
L_0016C764:
    c.r[2].d[0] = ld64((c.r[21].w[0] + 32u));
    st64((c.r[22].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
L_0016C770:
    set32(c.r[21], c.r[21].w[0] + 40u);
    set32(c.r[22], c.r[22].w[0] + 40u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_0016C780:
    c.r[2].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C750u | kUnwind; return; } goto L_0016C750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016C7C4; } }
L_0016C794:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0016C7B4; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016C7A8u) [[unlikely]] return; }
L_0016C7A8:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 32u));
    st64((c.r[22].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
L_0016C7B4:
    set32(c.r[22], c.r[22].w[0] + 40u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_0016C7C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C794u | kUnwind; return; } goto L_0016C794; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;  if (t) { goto L_0016C808; } }
L_0016C7D4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0016C7F4; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C7E8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016C7E8u) [[unlikely]] return; }
L_0016C7E8:
    c.r[2].d[0] = ld64((c.r[21].w[0] + 32u));
    st64((c.r[22].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
L_0016C7F4:
    set32(c.r[21], c.r[21].w[0] + 40u);
    set32(c.r[22], c.r[22].w[0] + 40u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0016C808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C7D4u | kUnwind; return; } goto L_0016C7D4; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0016C860; }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 17;
L_0016C860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C868u);  if (depth < kMaxDepth) unit_001B(c, 140u, depth + 1u); else { c.pc = 0x0016D2F0u; return; } if (c.pc != 0x0016C868u) [[unlikely]] return; }
L_0016C868:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C884; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016C884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C884u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0016C884u) [[unlikely]] return; }
L_0016C884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0016C888:
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
L_0016C8C0:
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
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0016CC48; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_0016C93C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C930u); set32(c.r[5], c.r[5].w[0] + 27893u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0016C930u) [[unlikely]] return; }
L_0016C930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C938u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0016C938u) [[unlikely]] return; }
L_0016C938:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0016C93C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_0016CAA4; }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[20].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_0016C970; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_0016C970:
    c.r[1].d[0] = c.r[22].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[30], c.r[19].w[0] << 5);  goto L_0016CA0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0016C9B4; } }
L_0016C984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C98Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0016C98Cu) [[unlikely]] return; }
L_0016C98C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_0016C9A4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 102u, depth + 1u); else { c.pc = 0x0016CE50u; return; } if (c.pc != 0x0016C9A0u) [[unlikely]] return; }
L_0016C9A0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0016C9A4:
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0016C9B4:
    c.r[1].d[0] = c.r[22].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C984u | kUnwind; return; } goto L_0016C984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0016C9F8; } }
L_0016C9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0016C9D0u) [[unlikely]] return; }
L_0016C9D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_0016C9E8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016C9E4u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 102u, depth + 1u); else { c.pc = 0x0016CE50u; return; } if (c.pc != 0x0016C9E4u) [[unlikely]] return; }
L_0016C9E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0016C9E8:
    set32(c.r[22], c.r[22].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0016C9F8:
    c.r[2].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016C9C8u | kUnwind; return; } goto L_0016C9C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0016CA90; } }
L_0016CA0C:
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] - c.r[30].w[0]);  if (t) { goto L_0016CA48; } }
L_0016CA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA20u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0016CA20u) [[unlikely]] return; }
L_0016CA20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_0016CA38; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA34u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 102u, depth + 1u); else { c.pc = 0x0016CE50u; return; } if (c.pc != 0x0016CA34u) [[unlikely]] return; }
L_0016CA34:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0016CA38:
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[23], c.r[23].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0016CA48:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CA18u | kUnwind; return; } goto L_0016CA18; }
    set32(c.r[2], c.r[22].w[0] - c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);  goto L_0016CA80; }
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016CA7C; } }
    set32(c.r[18], c.r[18].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_0016CA7C:
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_0016CA80:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA8Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 97u, depth + 1u); else { c.pc = 0x0016CD60u; return; } if (c.pc != 0x0016CA8Cu) [[unlikely]] return; }
L_0016CA8C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0016CA90:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CA9Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016CC80u; return; } if (c.pc != 0x0016CA9Cu) [[unlikely]] return; }
L_0016CA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0016CC4C; } }
L_0016CAA4:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_0016CAC0; }
L_0016CAC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0016CADC; } }
L_0016CAC8:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0016CADC; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_0016CADC:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CAC8u | kUnwind; return; } goto L_0016CAC8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CAF4u); set32(c.r[4], c.r[16].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0016CAF4u) [[unlikely]] return; }
L_0016CAF4:
    st32((c.r[29].w[0] + 164u), c.r[16].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_0016CB44; } }
L_0016CB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0016CB1Cu) [[unlikely]] return; }
L_0016CB1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0016CB34; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 102u, depth + 1u); else { c.pc = 0x0016CE50u; return; } if (c.pc != 0x0016CB30u) [[unlikely]] return; }
L_0016CB30:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0016CB34:
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_0016CB44:
    c.r[2].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CB14u | kUnwind; return; } goto L_0016CB14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016CB88; } }
L_0016CB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB60u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0016CB60u) [[unlikely]] return; }
L_0016CB60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0016CB78; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CB74u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 102u, depth + 1u); else { c.pc = 0x0016CE50u; return; } if (c.pc != 0x0016CB74u) [[unlikely]] return; }
L_0016CB74:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0016CB78:
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_0016CB88:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CB58u | kUnwind; return; } goto L_0016CB58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;  if (t) { goto L_0016CBCC; } }
L_0016CB98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CBA0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x0016CBA0u) [[unlikely]] return; }
L_0016CBA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_0016CBB8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CBB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 102u, depth + 1u); else { c.pc = 0x0016CE50u; return; } if (c.pc != 0x0016CBB4u) [[unlikely]] return; }
L_0016CBB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_0016CBB8:
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_0016CBCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CB98u | kUnwind; return; } goto L_0016CB98; }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[21].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0016CC24; }
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
L_0016CC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC2Cu);  if (depth < kMaxDepth) unit_001B(c, 143u, depth + 1u); else { c.pc = 0x0016D360u; return; } if (c.pc != 0x0016CC2Cu) [[unlikely]] return; }
L_0016CC2C:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016CC48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016CC48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CC48u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0016CC48u) [[unlikely]] return; }
L_0016CC48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0016CC4C:
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
L_0016CC80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0016CD38; } }
L_0016CCAC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 1u);  goto L_0016CCBC; }
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0016CCBC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0]));  goto L_0016CCD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 4u)));  if (t) { goto L_0016CCDC; } }
L_0016CCD4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0016CCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CCE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0016CCE4u) [[unlikely]] return; }
L_0016CCE4:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 104u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CD00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0016CD00u) [[unlikely]] return; }
L_0016CD00:
    set32(c.r[4], c.r[19].w[0] + 16u);
    set32(c.r[3], c.r[17].w[0] + 16u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[19], c.r[19].w[0] + 32u);  goto L_0016CD34; }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CD30u); set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 127u, depth + 1u); else { c.pc = 0x0016D0A0u; return; } if (c.pc != 0x0016CD30u) [[unlikely]] return; }
L_0016CD30:
    set32(c.r[19], c.r[19].w[0] + 32u);
    c.budget -= 1;
L_0016CD34:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_0016CD38:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CCACu | kUnwind; return; } goto L_0016CCAC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016CD60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0016CE1C; } }
L_0016CD8C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 32u);  if (t) { goto L_0016CDA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0016CDA8; } }
L_0016CDA4:
    set32(c.r[16], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0016CDA8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0016CDC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0016CDC8; } }
L_0016CDC0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0016CDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CDD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0016CDD0u) [[unlikely]] return; }
L_0016CDD0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 104u)));
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CDECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0016CDECu) [[unlikely]] return; }
L_0016CDEC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[18].w[0] + 16u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[1].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;  goto L_0016CE20; }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE1Cu); set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 127u, depth + 1u); else { c.pc = 0x0016D0A0u; return; } if (c.pc != 0x0016CE1Cu) [[unlikely]] return; }
L_0016CE1C:
    c.r[1].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0016CE20:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016CD8Cu | kUnwind; return; } goto L_0016CD8C; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0016CE50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE70u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0016CE70u) [[unlikely]] return; }
L_0016CE70:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE80u); set32(c.r[16], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_001B(c, 117u, depth + 1u); else { c.pc = 0x0016CFB0u; return; } if (c.pc != 0x0016CE80u) [[unlikely]] return; }
L_0016CE80:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE8Cu); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_001B(c, 116u, depth + 1u); else { c.pc = 0x0016CF90u; return; } if (c.pc != 0x0016CE8Cu) [[unlikely]] return; }
L_0016CE8C:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CE98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 112u, depth + 1u); else { c.pc = 0x0016CF30u; return; } if (c.pc != 0x0016CE98u) [[unlikely]] return; }
L_0016CE98:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CEA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 111u, depth + 1u); else { c.pc = 0x0016CF20u; return; } if (c.pc != 0x0016CEA4u) [[unlikely]] return; }
L_0016CEA4:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CEB8u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 109u, depth + 1u); else { c.pc = 0x0016CEE0u; return; } if (c.pc != 0x0016CEB8u) [[unlikely]] return; }
L_0016CEB8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0016CEE0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF0Cu); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_001B(c, 37u, depth + 1u); else { c.pc = 0x0016C3B0u; return; } if (c.pc != 0x0016CF0Cu) [[unlikely]] return; }
L_0016CF0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016CF20:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0016CF30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0016CF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF48u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0016CF48u) [[unlikely]] return; }
L_0016CF48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_0016CF68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF60u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0016CF60u) [[unlikely]] return; }
L_0016CF60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0016CF68:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0016CF80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CF78u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0016CF78u) [[unlikely]] return; }
L_0016CF78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016CF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0016CF80:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0016CF90:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0016CFB0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0016CFC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016D018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016CFE4u);  if (depth < kMaxDepth) unit_001B(c, 140u, depth + 1u); else { c.pc = 0x0016D2F0u; return; } if (c.pc != 0x0016CFE4u) [[unlikely]] return; }
L_0016CFE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0016D004; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D000u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0016D000u) [[unlikely]] return; }
L_0016D000:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0016D004:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0016D01C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D018u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0016D018u) [[unlikely]] return; }
L_0016D018:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016D01C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016D030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0016D088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D054u);  if (depth < kMaxDepth) unit_001B(c, 143u, depth + 1u); else { c.pc = 0x0016D360u; return; } if (c.pc != 0x0016D054u) [[unlikely]] return; }
L_0016D054:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0016D074; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0016D070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D070u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0016D070u) [[unlikely]] return; }
L_0016D070:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0016D074:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0016D08C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D088u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0016D088u) [[unlikely]] return; }
L_0016D088:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0016D08C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016D0A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[4], 0u + 40u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_0016D1F4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[29].w[0] + 124u);  goto L_0016D100; }
    set32(c.r[3], c.r[18].w[0] + 8u);
    c.budget -= 1;
L_0016D100:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[21], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[21].w[0] + c.r[3].w[0]);  if (t) { goto L_0016D134; } }
L_0016D11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D124u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x0016D124u) [[unlikely]] return; }
L_0016D124:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 32u));
    st64((c.r[21].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[17], c.r[17].w[0] + 40u);
    set32(c.r[21], c.r[21].w[0] + 40u);
    c.budget -= 4;
L_0016D134:
    c.r[3].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D11Cu | kUnwind; return; } goto L_0016D11C; }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_0016D1A4; }
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0016D188; } }
L_0016D170:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 40u);  goto L_0016D188; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D184u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0016D184u) [[unlikely]] return; }
L_0016D184:
    set32(c.r[21], c.r[21].w[0] + 40u);
    c.budget -= 1;
L_0016D188:
    c.r[3].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D170u | kUnwind; return; } goto L_0016D170; } }
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0016D2C0; } }
L_0016D1A4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0016D2C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D1E4; } }
L_0016D1B4:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_0016D1D4; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D1C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016D1C8u) [[unlikely]] return; }
L_0016D1C8:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 32u));
    st64((c.r[21].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
L_0016D1D4:
    set32(c.r[17], c.r[17].w[0] + 40u);
    set32(c.r[21], c.r[21].w[0] + 40u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0016D1E4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D1B4u | kUnwind; return; } goto L_0016D1B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D2C0; } }
L_0016D1F4:
    set32(c.r[19], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_0016D220; } }
L_0016D20C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[1].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;  goto L_0016D224; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D220u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0016D220u) [[unlikely]] return; }
L_0016D220:
    c.r[1].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0016D224:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D20Cu | kUnwind; return; } goto L_0016D20C; }
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[20].d[0] << 32;  goto L_0016D258; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 12u), 0u);  goto L_0016D250; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D24Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0016D24Cu) [[unlikely]] return; }
L_0016D24C:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 1;
L_0016D250:
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.budget -= 2;
L_0016D258:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D270u); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0016D270u) [[unlikely]] return; }
L_0016D270:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_0016D2B8; } }
L_0016D288:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_0016D2A8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D29Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0016D29Cu) [[unlikely]] return; }
L_0016D29C:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 32u));
    st64((c.r[19].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
L_0016D2A8:
    set32(c.r[17], c.r[17].w[0] + 40u);
    set32(c.r[19], c.r[19].w[0] + 40u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0016D2B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D288u | kUnwind; return; } goto L_0016D288; } }
L_0016D2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0016D2C4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0016D2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_0016D338; } }
L_0016D324:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;  goto L_0016D33C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D338u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0016D338u) [[unlikely]] return; }
L_0016D338:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0016D33C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D324u | kUnwind; return; } goto L_0016D324; }
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016D360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_0016D39C; } }
L_0016D38C:
    set32(c.r[17], c.r[17].w[0] - 32u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D39Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001A(c, 301u, depth + 1u); else { c.pc = 0x0016A190u; return; } if (c.pc != 0x0016D39Cu) [[unlikely]] return; }
L_0016D39C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D38Cu | kUnwind; return; } goto L_0016D38C; } }
    st32((c.r[18].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016D3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D3F8u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_00AD(c, 147u, depth + 1u); else { c.pc = 0x003B5758u; return; } if (c.pc != 0x0016D3F8u) [[unlikely]] return; }
L_0016D3F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0016D458; }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0016D41C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D454; } }
L_0016D41C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D424u);  if (depth < kMaxDepth) unit_00AD(c, 124u, depth + 1u); else { c.pc = 0x003B5278u; return; } if (c.pc != 0x0016D424u) [[unlikely]] return; }
L_0016D424:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D434u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016D434u) [[unlikely]] return; }
L_0016D434:
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  goto L_0016D450; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D448u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_001B(c, 30u, depth + 1u); else { c.pc = 0x0016C340u; return; } if (c.pc != 0x0016D448u) [[unlikely]] return; }
L_0016D448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0016D45C; } }
L_0016D450:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0016D454:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016D458:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0016D45C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0016D470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0016D49C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_0016D4A0; } }
L_0016D49C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0016D4A0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], 0u + 514u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D4B4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 116u, depth + 1u); else { c.pc = 0x003B5118u; return; } if (c.pc != 0x0016D4B4u) [[unlikely]] return; }
L_0016D4B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D4C4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016D4C4u) [[unlikely]] return; }
L_0016D4C4:
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { st32((c.r[16].w[0] + 24u), c.r[5].w[0]);  goto L_0016D4E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D4D8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_001B(c, 30u, depth + 1u); else { c.pc = 0x0016C340u; return; } if (c.pc != 0x0016D4D8u) [[unlikely]] return; }
L_0016D4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0016D4F8; } }
L_0016D4E0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D4F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 141u, depth + 1u); else { c.pc = 0x003B55E0u; return; } if (c.pc != 0x0016D4F0u) [[unlikely]] return; }
L_0016D4F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0016D4F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0016D510:
    set32(c.r[29], c.r[29].w[0] - 1296u);
    set32(c.r[8], 0u + 18u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[9], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 27968u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D550u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AD(c, 160u, depth + 1u); else { c.pc = 0x003B5A68u; return; } if (c.pc != 0x0016D550u) [[unlikely]] return; }
L_0016D550:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D560u); set32(c.r[6], c.r[29].w[0] + 1292u);  if (depth < kMaxDepth) unit_001B(c, 25u, depth + 1u); else { c.pc = 0x0016C1D0u; return; } if (c.pc != 0x0016D560u) [[unlikely]] return; }
L_0016D560:
    set32(c.r[5], ld32((c.r[29].w[0] + 1292u)));
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { c.r[17].d[0] = 0ull + 0ull;  goto L_0016D5E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D574u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_001B(c, 30u, depth + 1u); else { c.pc = 0x0016C340u; return; } if (c.pc != 0x0016D574u) [[unlikely]] return; }
L_0016D574:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0016D5FC; } }
L_0016D580:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[3].w[0] + 80u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0016D5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_0016D5B0; } }
L_0016D5AC:
    set32(c.r[5], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0016D5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D5B8u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x0016D5B8u) [[unlikely]] return; }
L_0016D5B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0016D5E4; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0016D5E0; } }
    st32((c.r[18].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0016D5FC; } }
L_0016D5E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0016D5E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 1292u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 6);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D580u | kUnwind; return; } goto L_0016D580; }
    st32((c.r[18].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0016D5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1296u);  c.pc = t; return; }
L_0016D620:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 28840u)));  c.pc = t; return; }
L_0016D630:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D658u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0016D658u) [[unlikely]] return; }
L_0016D658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0016D668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D668u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0016D668u) [[unlikely]] return; }
L_0016D668:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D67Cu); st32((c.r[28].w[0] - 28840u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_001A(c, 601u, depth + 1u); else { c.pc = 0x0016BD20u; return; } if (c.pc != 0x0016D67Cu) [[unlikely]] return; }
L_0016D67C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 80u));  goto L_0016D694; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_0016D69C; } }
L_0016D694:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[7].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0016D69C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0016D6ACu) [[unlikely]] return; }
L_0016D6AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28840u)));  if (t) { goto L_0016D6C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_0016D6C8; } }
L_0016D6C4:
    set32(c.r[5], c.r[29].w[0] + 65u);
    c.budget -= 1;
L_0016D6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6D0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0016D6D0u) [[unlikely]] return; }
L_0016D6D0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016D6DCu) [[unlikely]] return; }
L_0016D6DC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D6E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016D6E8u) [[unlikely]] return; }
L_0016D6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0016D700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D76C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21824u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21800u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D74Cu);  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B3480u; return; } if (c.pc != 0x0016D74Cu) [[unlikely]] return; }
L_0016D74C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0016D76C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D76Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0016D76Cu) [[unlikely]] return; }
L_0016D76C:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 28096u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D7A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30996u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0016D7D0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D7E0; } }
L_0016D7D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D7E0u);  if (depth < kMaxDepth) unit_002C(c, 227u, depth + 1u); else { c.pc = 0x001B3760u; return; } if (c.pc != 0x0016D7E0u) [[unlikely]] return; }
L_0016D7E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 28064u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D824u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0016D824u) [[unlikely]] return; }
L_0016D824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016D838; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D848; } }
L_0016D838:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D848u);  if (depth < kMaxDepth) unit_002C(c, 228u, depth + 1u); else { c.pc = 0x001B37A0u; return; } if (c.pc != 0x0016D848u) [[unlikely]] return; }
L_0016D848:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30836u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0016D888; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D88C; } }
L_0016D888:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016D88C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D8A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30996u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0016D8D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D8F8; } }
L_0016D8D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016D8E0u);  if (depth < kMaxDepth) unit_002C(c, 231u, depth + 1u); else { c.pc = 0x001B3810u; return; } if (c.pc != 0x0016D8E0u) [[unlikely]] return; }
L_0016D8E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016D8F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016D8F8; } }
L_0016D8F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016D8F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30996u)));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D930:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  [[clang::musttail]] return unit_002C(c, 170u, depth); }
L_0016D940:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016D700u | kUnwind; return; } goto L_0016D700; }
L_0016D950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 28208u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016D970:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 175u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016D9FC; } }
    set32(c.r[30], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = ld8((c.r[30].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.r[23].d[0] = c.r[3].d[0] & 255ull;
    c.r[18].d[0] = c.r[23].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DA08; } }
L_0016D9FC:
    set32(c.r[22], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[19], c.r[22].w[0] + 4u);
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
L_0016DA08:
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0016DA90; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DA7C; } }
L_0016DA20:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 6080u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DA48u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0016DA48u) [[unlikely]] return; }
L_0016DA48:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_0016DA78; } }
    set32(c.r[4], c.r[17].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 28128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DB00; } }
L_0016DA78:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0016DA7C:
    c.r[3].d[0] = c.r[17].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DA20u | kUnwind; return; } goto L_0016DA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DB00; } }
L_0016DA90:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DAF4; } }
L_0016DA9C:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 28128u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0016DAF0; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 6080u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DAE8u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0016DAE8u) [[unlikely]] return; }
L_0016DAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DB00; } }
L_0016DAF0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0016DAF4:
    c.r[3].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DA9Cu | kUnwind; return; } goto L_0016DA9C; } }
L_0016DB00:
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
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016DB40:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 208u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[7].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB88u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0016DB88u) [[unlikely]] return; }
L_0016DB88:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DB98u);  if (depth < kMaxDepth) unit_001B(c, 187u, depth + 1u); else { c.pc = 0x0016D970u; return; } if (c.pc != 0x0016DB98u) [[unlikely]] return; }
L_0016DB98:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 207u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DBD8; } }
    set32(c.r[2], c.r[29].w[0] + 177u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DBE0; } }
L_0016DBD8:
    set32(c.r[20], c.r[29].w[0] + 184u);
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_0016DBE0:
    c.r[30].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DBECu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0016DBECu) [[unlikely]] return; }
L_0016DBEC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] + 28410u);
    set32(c.r[7], ld32((c.r[29].w[0] + 256u)));
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC0Cu);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0016DC0Cu) [[unlikely]] return; }
L_0016DC0C:
    set32(c.r[4], 0u + 76u);
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC1Cu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0016DC1Cu) [[unlikely]] return; }
L_0016DC1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0016DC94; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[23].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DC60; } }
    set32(c.r[22], c.r[29].w[0] + 161u);
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DC68; } }
L_0016DC60:
    set32(c.r[19], c.r[29].w[0] + 168u);
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 2;
L_0016DC68:
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 28403u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DC90u);  if (depth < kMaxDepth) unit_0027(c, 207u, depth + 1u); else { c.pc = 0x0019F3E0u; return; } if (c.pc != 0x0016DC90u) [[unlikely]] return; }
L_0016DC90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016DC94:
    st32((c.r[29].w[0] + 200u), c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCA8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016DCA8u) [[unlikely]] return; }
L_0016DCA8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DCB8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016DCB8u) [[unlikely]] return; }
L_0016DCB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
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
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016DCF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 28403u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD18u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0016DD18u) [[unlikely]] return; }
L_0016DD18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0016DD30; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DD34; } }
L_0016DD30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016DD34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016DD50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0016DD88; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DDF4; } }
L_0016DD88:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 28416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DD9Cu);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0016DD9Cu) [[unlikely]] return; }
L_0016DD9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[2].w[0] + 20u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DDBCu);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x0016DDBCu) [[unlikely]] return; }
L_0016DDBC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DDCCu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016DDCCu) [[unlikely]] return; }
L_0016DDCC:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DDDCu);  if (depth < kMaxDepth) unit_001B(c, 187u, depth + 1u); else { c.pc = 0x0016D970u; return; } if (c.pc != 0x0016DDDCu) [[unlikely]] return; }
L_0016DDDC:
    set32(c.r[16], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DDF0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016DDF0u) [[unlikely]] return; }
L_0016DDF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0016DDF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016DE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016DE7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21680u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21668u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE5Cu);  if (depth < kMaxDepth) unit_002C(c, 128u, depth + 1u); else { c.pc = 0x001B2590u; return; } if (c.pc != 0x0016DE5Cu) [[unlikely]] return; }
L_0016DE5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0016DE7C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DE7Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0016DE7Cu) [[unlikely]] return; }
L_0016DE7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016DE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] + 28418u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DEB8u);  if (depth < kMaxDepth) unit_002C(c, 131u, depth + 1u); else { c.pc = 0x001B2660u; return; } if (c.pc != 0x0016DEB8u) [[unlikely]] return; }
L_0016DEB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21680u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21668u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016DEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30992u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0016DF20; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DF30; } }
L_0016DF20:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF30u);  if (depth < kMaxDepth) unit_002C(c, 133u, depth + 1u); else { c.pc = 0x001B26F0u; return; } if (c.pc != 0x0016DF30u) [[unlikely]] return; }
L_0016DF30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016DF50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 28176u);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF74u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0016DF74u) [[unlikely]] return; }
L_0016DF74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016DF88; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DF98; } }
L_0016DF88:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016DF98u);  if (depth < kMaxDepth) unit_002C(c, 134u, depth + 1u); else { c.pc = 0x001B2730u; return; } if (c.pc != 0x0016DF98u) [[unlikely]] return; }
L_0016DF98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016DFB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30840u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0016DFD8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016DFDC; } }
L_0016DFD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016DFDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016DFF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30992u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0016E020; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E048; } }
L_0016E020:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E030u);  if (depth < kMaxDepth) unit_002C(c, 137u, depth + 1u); else { c.pc = 0x001B27C0u; return; } if (c.pc != 0x0016E030u) [[unlikely]] return; }
L_0016E030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E044; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E048; } }
L_0016E044:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016E048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30992u)));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E080:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DF50u | kUnwind; return; } goto L_0016DF50; }
L_0016E090:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DEF0u | kUnwind; return; } goto L_0016DEF0; }
L_0016E0A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DFB0u | kUnwind; return; } goto L_0016DFB0; }
L_0016E0B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DFF0u | kUnwind; return; } goto L_0016DFF0; }
L_0016E0C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016E060u | kUnwind; return; } goto L_0016E060; }
L_0016E0D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016DE10u | kUnwind; return; } goto L_0016DE10; }
L_0016E0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E1A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21600u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E184; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 17744u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E184; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21552u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E184; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27728u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E184; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E184u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016E184u) [[unlikely]] return; }
L_0016E184:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0016E1A4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E1A4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0016E1A4u) [[unlikely]] return; }
L_0016E1A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E1C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E258; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[22], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E23C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[20], c.r[2].w[0] + 4u);
    set32(c.r[19], c.r[20].w[0] + 1u);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E24C; } }
L_0016E23C:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[18], c.r[2].w[0] + 4u);
    set32(c.r[17], c.r[18].w[0] + 8u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 4;
L_0016E24C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E260; } }
L_0016E258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 28584u);
    c.budget -= 2;
L_0016E260:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 28592u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E2B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E2C0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 256u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 288u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 304u), c.r[7].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 18;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0016E38C; } }
    set32(c.r[4], 0u + 300u);
    set32(c.r[5], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E318u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0016E318u) [[unlikely]] return; }
L_0016E318:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E388; } }
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E340u);  if (depth < kMaxDepth) unit_0028(c, 169u, depth + 1u); else { c.pc = 0x001A2AC0u; return; } if (c.pc != 0x0016E340u) [[unlikely]] return; }
L_0016E340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21520u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21496u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21464u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21452u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21428u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 284u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 18;
L_0016E388:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0016E38C:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 272u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E3A4u);  if (depth < kMaxDepth) unit_0024(c, 229u, depth + 1u); else { c.pc = 0x00193520u; return; } if (c.pc != 0x0016E3A4u) [[unlikely]] return; }
L_0016E3A4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E3B0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0016E3B0u) [[unlikely]] return; }
L_0016E3B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 192u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] + 28624u);
    set32(c.r[7], c.r[29].w[0] + 208u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E3D4u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0016E3D4u) [[unlikely]] return; }
L_0016E3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E4A8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 254u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 254u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E428; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    st8((c.r[29].w[0] + 253u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 253u));
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E430; } }
L_0016E428:
    set32(c.r[22], c.r[29].w[0] + 212u);
    set32(c.r[20], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_0016E430:
    st32((c.r[29].w[0] + 232u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E4A8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 252u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E47C; } }
    set32(c.r[30], c.r[29].w[0] + 209u);
    c.r[19].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E484; } }
L_0016E47C:
    set32(c.r[21], c.r[29].w[0] + 216u);
    set32(c.r[19], ld32((c.r[21].w[0])));
    c.budget -= 2;
L_0016E484:
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E498u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0016E498u) [[unlikely]] return; }
L_0016E498:
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[29].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[17].w[0] + 280u), c.f[0]);
    c.budget -= 4;
L_0016E4A8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E4B4u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0016E4B4u) [[unlikely]] return; }
L_0016E4B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 192u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] + 28633u);
    set32(c.r[7], c.r[29].w[0] + 192u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E4D8u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0016E4D8u) [[unlikely]] return; }
L_0016E4D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E554; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 28644u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E4F4u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0016E4F4u) [[unlikely]] return; }
L_0016E4F4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 28655u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E508u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0016E508u) [[unlikely]] return; }
L_0016E508:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E520u);  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x0016E520u) [[unlikely]] return; }
L_0016E520:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[29].w[0] + 255u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 255u));
    st8((c.r[17].w[0] + 288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E544u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016E544u) [[unlikely]] return; }
L_0016E544:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E554u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016E554u) [[unlikely]] return; }
L_0016E554:
    st32((c.r[29].w[0] + 244u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E568u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016E568u) [[unlikely]] return; }
L_0016E568:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E578u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016E578u) [[unlikely]] return; }
L_0016E578:
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
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
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E5B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E5D0u);  if (depth < kMaxDepth) unit_001B(c, 212u, depth + 1u); else { c.pc = 0x0016DE90u; return; } if (c.pc != 0x0016E5D0u) [[unlikely]] return; }
L_0016E5D0:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E5E4u);  if (depth < kMaxDepth) unit_001B(c, 209u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x0016E5E4u) [[unlikely]] return; }
L_0016E5E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E600:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 208u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E64Cu);  if (depth < kMaxDepth) unit_001B(c, 340u, depth + 1u); else { c.pc = 0x0016FD30u; return; } if (c.pc != 0x0016E64Cu) [[unlikely]] return; }
L_0016E64C:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + 52u);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 207u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016E6B8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + 52u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    st8((c.r[29].w[0] + 206u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 206u));
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E6D0; } }
L_0016E6B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[3].w[0] + 52u);
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[19], c.r[3].w[0] + 4u);
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 6;
L_0016E6D0:
    c.r[30].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[30].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[23].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = 0ull < c.r[23].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0016E7C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E704u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E704u) [[unlikely]] return; }
L_0016E704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E7C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E718u);  if (depth < kMaxDepth) unit_001B(c, 201u, depth + 1u); else { c.pc = 0x0016DCF0u; return; } if (c.pc != 0x0016E718u) [[unlikely]] return; }
L_0016E718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E7C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E73Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E73Cu) [[unlikely]] return; }
L_0016E73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E7C8; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E75Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016E75Cu) [[unlikely]] return; }
L_0016E75C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E794; } }
    set32(c.r[21], c.r[29].w[0] + 161u);
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E79C; } }
L_0016E794:
    set32(c.r[18], c.r[29].w[0] + 168u);
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_0016E79C:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], c.r[2].w[0] + 52u);
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E7B8u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0016E7B8u) [[unlikely]] return; }
L_0016E7B8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E7C8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016E7C8u) [[unlikely]] return; }
L_0016E7C8:
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
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016E810:
    set32(c.r[29], c.r[29].w[0] - 912u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 896u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 896u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016E860; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F98C; } }
L_0016E860:
    set32(c.r[5], ld32((c.r[29].w[0] + 896u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E874u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0016E874u) [[unlikely]] return; }
L_0016E874:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E888u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0016E888u) [[unlikely]] return; }
L_0016E888:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 284u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EF18; } }
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 592u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 596u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 600u), c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0016EC50; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 289u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EC50; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 288u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016E938; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.f[0] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 868u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 868u));
    st32((c.r[29].w[0] + 512u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 516u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 520u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 512u));
    st32((c.r[29].w[0] + 592u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 516u));
    st32((c.r[29].w[0] + 596u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 520u));
    st32((c.r[29].w[0] + 600u), c.f[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016E97C; } }
L_0016E938:
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.f[0] = ld32((c.r[2].w[0] + 280u));
    st32((c.r[29].w[0] + 864u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 496u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 864u));
    st32((c.r[29].w[0] + 500u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 504u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 496u));
    st32((c.r[29].w[0] + 592u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 500u));
    st32((c.r[29].w[0] + 596u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 504u));
    st32((c.r[29].w[0] + 600u), c.f[0]);
    c.budget -= 17;
L_0016E97C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 280u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 282u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 282u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 892u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016E9D0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E9C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016E9C8u) [[unlikely]] return; }
L_0016E9C8:
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 2;
L_0016E9D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 892u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016EA24; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016E9FC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016E9FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016E9FCu) [[unlikely]] return; }
L_0016E9FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 280u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], 0u + 12u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EA18u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0016EA18u) [[unlikely]] return; }
L_0016EA18:
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 3;
L_0016EA24:
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[29].w[0] + 860u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    set32(c.r[3], ld32((c.r[29].w[0] + 860u)));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 596u));
    set32(c.r[2], ld32((c.r[29].w[0] + 860u)));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    set32(c.r[4], ld32((c.r[29].w[0] + 860u)));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[29].w[0] + 852u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    st32((c.r[29].w[0] + 856u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 856u)));
    set32(c.r[5], c.r[4].w[0] + 16u);
    st32((c.r[29].w[0] + 692u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 692u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 852u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 688u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 688u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 282u)));
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016EAE0; } }
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 260u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAB4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0016EAB4u) [[unlikely]] return; }
L_0016EAB4:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016EAD0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EAD0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016EAD0u) [[unlikely]] return; }
L_0016EAD0:
    set32(c.r[3], c.r[19].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EB20; } }
L_0016EAE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[29].w[0] + 716u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 716u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 24u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB00u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0016EB00u) [[unlikely]] return; }
L_0016EB00:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 716u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB18u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0016EB18u) [[unlikely]] return; }
L_0016EB18:
    set32(c.r[2], ld32((c.r[29].w[0] + 716u)));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0016EB20:
    set32(c.r[2], ld32((c.r[29].w[0] + 856u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 852u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EB3Cu) [[unlikely]] return; }
L_0016EB3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[23].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 282u)));
    c.r[2].d[0] = c.r[23].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016EB7C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016EB7C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EB7Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016EB7Cu) [[unlikely]] return; }
L_0016EB7C:
    set32(c.r[3], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    st32((c.r[29].w[0] + 844u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 124u)));
    st32((c.r[29].w[0] + 848u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 848u)));
    set32(c.r[3], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 684u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 684u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 844u)));
    set32(c.r[5], c.r[4].w[0] << 5);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 680u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 680u)));
    st32((c.r[29].w[0] + 676u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 676u)));
    st32((c.r[29].w[0] + 672u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 672u)));
    st32((c.r[29].w[0] + 700u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EBDCu);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0016EBDCu) [[unlikely]] return; }
L_0016EBDC:
    set32(c.r[4], ld32((c.r[29].w[0] + 700u)));
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EBECu);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0016EBECu) [[unlikely]] return; }
L_0016EBEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EC24; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 700u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 26u)));
    c.r[6].d[0] = c.r[2].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[4], 0u + 16u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0016EC24; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 700u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC24u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0016EC24u) [[unlikely]] return; }
L_0016EC24:
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC34u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0016EC34u) [[unlikely]] return; }
L_0016EC34:
    set32(c.r[2], c.r[29].w[0] + 576u);
    st32((c.r[29].w[0] + 668u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EC50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EC50u) [[unlikely]] return; }
L_0016EC50:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0016EF0C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 290u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EF0C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 896u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 288u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016ECC4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 896u)));
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    st32((c.r[29].w[0] + 840u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 840u));
    st32((c.r[29].w[0] + 480u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 484u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 488u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    st32((c.r[29].w[0] + 592u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    st32((c.r[29].w[0] + 596u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    st32((c.r[29].w[0] + 600u), c.f[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016ED0C; } }
L_0016ECC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.f[0] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 836u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 464u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 836u));
    st32((c.r[29].w[0] + 468u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 472u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 592u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 468u));
    st32((c.r[29].w[0] + 596u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    st32((c.r[29].w[0] + 600u), c.f[0]);
    c.budget -= 18;
L_0016ED0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 248u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 250u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 250u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 888u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016ED60; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ED58u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016ED58u) [[unlikely]] return; }
L_0016ED58:
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 2;
L_0016ED60:
    set32(c.r[2], ld32((c.r[29].w[0] + 888u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016EDB0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016ED8C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016ED8Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016ED8Cu) [[unlikely]] return; }
L_0016ED8C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 248u)));
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EDA4u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0016EDA4u) [[unlikely]] return; }
L_0016EDA4:
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 3;
L_0016EDB0:
    set32(c.r[30], ld32((c.r[29].w[0] + 244u)));
    c.f[0] = ld32((c.r[29].w[0] + 592u));
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 596u));
    st32((c.r[30].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    st32((c.r[30].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 828u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 52u)));
    st32((c.r[29].w[0] + 832u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 832u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 664u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 664u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 828u)));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[22], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 660u), c.r[22].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 660u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016EE5C; } }
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 228u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EE30u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0016EE30u) [[unlikely]] return; }
L_0016EE30:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[16], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0016EE4C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EE4Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016EE4Cu) [[unlikely]] return; }
L_0016EE4C:
    set32(c.r[3], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016EEA0; } }
L_0016EE5C:
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[29].w[0] + 712u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 712u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.r[5].d[0] = c.r[6].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EE80u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0016EE80u) [[unlikely]] return; }
L_0016EE80:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 712u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EE98u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0016EE98u) [[unlikely]] return; }
L_0016EE98:
    set32(c.r[2], ld32((c.r[29].w[0] + 712u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0016EEA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 832u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 828u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EEB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EEB8u) [[unlikely]] return; }
L_0016EEB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    c.r[4].d[0] = c.r[6].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[5].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0016EEF8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[3], c.r[29].w[0] + 228u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016EEF8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EEF8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016EEF8u) [[unlikely]] return; }
L_0016EEF8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EF0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EF0Cu) [[unlikely]] return; }
L_0016EF0C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F98C; } }
L_0016EF18:
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 284u)));
    st32((c.r[29].w[0] + 884u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 884u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 192u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F984; } }
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 560u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 564u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 568u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 544u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 548u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 552u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30968u)));
    st32((c.r[29].w[0] + 656u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 284u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016EFA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016EFA4u) [[unlikely]] return; }
L_0016EFA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F08C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 284u)));
    st32((c.r[29].w[0] + 880u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 880u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 301u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016EFE4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st8((c.r[2].w[0] + 289u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    st8((c.r[2].w[0] + 290u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F0D4; } }
L_0016EFE4:
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 284u)));
    set32(c.r[5], c.r[29].w[0] + 560u);
    set32(c.r[6], c.r[29].w[0] + 544u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F004u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F004u) [[unlikely]] return; }
L_0016F004:
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 284u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 272u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F01Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F01Cu) [[unlikely]] return; }
L_0016F01C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F03C; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st8((c.r[2].w[0] + 289u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F048; } }
L_0016F03C:
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.budget -= 1;
L_0016F040:
    set32(c.r[2], c.r[2].w[0] + 0u);
    st8((c.r[2].w[0] + 289u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0016F048:
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 284u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 276u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F060u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F060u) [[unlikely]] return; }
L_0016F060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F07C; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    st8((c.r[2].w[0] + 290u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F0D4; } }
L_0016F07C:
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    st8((c.r[2].w[0] + 290u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F0D4; } }
L_0016F08C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], c.r[2].w[0] + 0u);
    st8((c.r[2].w[0] + 289u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    st8((c.r[2].w[0] + 290u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 284u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 560u);
    set32(c.r[2], c.r[29].w[0] + 544u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F0D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F0D0u) [[unlikely]] return; }
L_0016F0D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016F0D4:
    set32(c.r[5], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 120u)));
    st32((c.r[29].w[0] + 652u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 652u)));
    st32((c.r[29].w[0] + 648u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 648u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F100; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 648u)));
    set32(c.r[2], c.r[2].w[0] - 72u);
    st32((c.r[29].w[0] + 648u), c.r[2].w[0]);
    c.budget -= 3;
L_0016F100:
    set32(c.r[2], ld32((c.r[29].w[0] + 648u)));
    st32((c.r[29].w[0] + 644u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 644u)));
    set32(c.r[2], c.r[2].w[0] + 72u);
    st32((c.r[29].w[0] + 824u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 824u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 800u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 824u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    st32((c.r[29].w[0] + 804u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 804u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 800u)));
    set32(c.r[4], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 636u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 636u)));
    st32((c.r[29].w[0] + 632u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 632u)));
    st32((c.r[29].w[0] + 628u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 628u)));
    st32((c.r[29].w[0] + 624u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 624u)));
    st32((c.r[29].w[0] + 696u), c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 288u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F180u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0016F180u) [[unlikely]] return; }
L_0016F180:
    set32(c.r[5], ld32((c.r[29].w[0] + 696u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 288u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F198u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0016F198u) [[unlikely]] return; }
L_0016F198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F1CC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 696u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 26u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], 0u + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016F1CC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 696u)));
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F1CCu);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0016F1CCu) [[unlikely]] return; }
L_0016F1CC:
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F1DCu);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0016F1DCu) [[unlikely]] return; }
L_0016F1DC:
    set32(c.r[3], c.r[29].w[0] + 448u);
    st32((c.r[29].w[0] + 620u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 560u));
    c.f[0] = ld32((c.r[29].w[0] + 448u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 560u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 564u));
    c.f[0] = ld32((c.r[29].w[0] + 452u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 564u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 568u));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 568u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 896u)));
    c.f[1] = ld32((c.r[3].w[0] + 296u));
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 560u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.f[1] = ld32((c.r[2].w[0] + 292u));
    c.f[0] = ld32((c.r[29].w[0] + 564u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 564u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 528u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 532u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.budget -= 35;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0016F5E8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.r[19].d[0] = ld8((c.r[2].w[0] + 289u));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0016F5E8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 288u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016F334; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 792u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 896u)));
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 796u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 796u));
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 792u));
    st32((c.r[29].w[0] + 420u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 424u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 568u));
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 780u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 564u));
    c.f[0] = ld32((c.r[29].w[0] + 420u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 784u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 560u));
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 788u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 788u));
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 784u));
    st32((c.r[29].w[0] + 436u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 780u));
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[29].w[0] + 528u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    st32((c.r[29].w[0] + 532u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.budget -= 43;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F3D0; } }
L_0016F334:
    set32(c.r[5], ld32((c.r[29].w[0] + 896u)));
    c.f[0] = ld32((c.r[5].w[0] + 280u));
    st32((c.r[29].w[0] + 772u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[6].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 776u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 776u));
    st32((c.r[29].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 772u));
    st32((c.r[29].w[0] + 388u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 392u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 568u));
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 760u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 564u));
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 764u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 560u));
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 768u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 768u));
    st32((c.r[29].w[0] + 400u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 764u));
    st32((c.r[29].w[0] + 404u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 760u));
    st32((c.r[29].w[0] + 408u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    st32((c.r[29].w[0] + 528u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    st32((c.r[29].w[0] + 532u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.budget -= 39;
L_0016F3D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[4], 0u + 16u);
    st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 876u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016F424; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F41Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016F41Cu) [[unlikely]] return; }
L_0016F41C:
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[5].w[0]);
    c.budget -= 2;
L_0016F424:
    set32(c.r[2], ld32((c.r[29].w[0] + 876u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016F480; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0016F454; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F454u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016F454u) [[unlikely]] return; }
L_0016F454:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 216u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[5], 0u + 12u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F474u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0016F474u) [[unlikely]] return; }
L_0016F474:
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 3;
L_0016F480:
    set32(c.r[23], ld32((c.r[29].w[0] + 212u)));
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    st32((c.r[23].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 532u));
    st32((c.r[23].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    st32((c.r[23].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[29].w[0] + 816u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    st32((c.r[29].w[0] + 820u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 820u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[29].w[0] + 616u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 612u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0016F530; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 196u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F500u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0016F500u) [[unlikely]] return; }
L_0016F500:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016F520; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F51Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016F51Cu) [[unlikely]] return; }
L_0016F51C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016F520:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F57C; } }
L_0016F530:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[29].w[0] + 708u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 708u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F558u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0016F558u) [[unlikely]] return; }
L_0016F558:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 708u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F570u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0016F570u) [[unlikely]] return; }
L_0016F570:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 708u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
L_0016F57C:
    set32(c.r[4], ld32((c.r[29].w[0] + 820u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F594u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F594u) [[unlikely]] return; }
L_0016F594:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F5D4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016F5D4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F5D4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016F5D4u) [[unlikely]] return; }
L_0016F5D4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F5E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F5E8u) [[unlikely]] return; }
L_0016F5E8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0016F984; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 290u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F984; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 288u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016F6C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 548u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 752u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    c.f[1] = ld32((c.r[2].w[0] + 280u));
    c.f[0] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 756u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 756u));
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 752u));
    st32((c.r[29].w[0] + 356u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 360u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 568u));
    c.f[0] = ld32((c.r[29].w[0] + 360u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 740u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 564u));
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 744u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 560u));
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 748u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 748u));
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 744u));
    st32((c.r[29].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 740u));
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    st32((c.r[29].w[0] + 528u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    st32((c.r[29].w[0] + 532u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.budget -= 44;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F768; } }
L_0016F6C0:
    c.f[0] = ld32((c.r[29].w[0] + 548u));
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[4], ld32((c.r[29].w[0] + 896u)));
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 732u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 544u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 736u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 736u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 732u));
    st32((c.r[29].w[0] + 324u), c.f[0]);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 568u));
    c.f[0] = ld32((c.r[29].w[0] + 328u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 720u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 564u));
    c.f[0] = ld32((c.r[29].w[0] + 324u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 724u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 560u));
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 728u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 728u));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 724u));
    st32((c.r[29].w[0] + 340u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 720u));
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[29].w[0] + 528u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[29].w[0] + 532u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.budget -= 42;
L_0016F768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 16u);
    st32((c.r[29].w[0] + 872u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[3], c.r[29].w[0] + 164u);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0016F7C4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7B8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016F7B8u) [[unlikely]] return; }
L_0016F7B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 3;
L_0016F7C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 872u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016F814; } }
    set32(c.r[30], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { const bool t = c.r[30].d[0] == c.r[2].d[0];  if (t) { goto L_0016F7F0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F7F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016F7F0u) [[unlikely]] return; }
L_0016F7F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 184u)));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[4], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F808u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0016F808u) [[unlikely]] return; }
L_0016F808:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[3], 0u + 12u);
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 3;
L_0016F814:
    set32(c.r[22], ld32((c.r[29].w[0] + 180u)));
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    st32((c.r[22].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 532u));
    st32((c.r[22].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    st32((c.r[22].w[0] + 8u), c.f[0]);
    set32(c.r[18], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 808u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    st32((c.r[29].w[0] + 812u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[29].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 808u)));
    set32(c.r[6], c.r[5].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 604u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[3], c.r[29].w[0] + 164u);
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0016F8CC; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F898u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0016F898u) [[unlikely]] return; }
L_0016F898:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0016F8BC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8B8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016F8B8u) [[unlikely]] return; }
L_0016F8B8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016F8BC:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016F910; } }
L_0016F8CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[29].w[0] + 704u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 704u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F8F0u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0016F8F0u) [[unlikely]] return; }
L_0016F8F0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 704u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F908u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0016F908u) [[unlikely]] return; }
L_0016F908:
    set32(c.r[3], ld32((c.r[29].w[0] + 704u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_0016F910:
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 808u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F92Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F92Cu) [[unlikely]] return; }
L_0016F92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016F96C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0016F96C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F96Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0016F96Cu) [[unlikely]] return; }
L_0016F96C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016F980u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016F980u) [[unlikely]] return; }
L_0016F980:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0016F984:
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0016F98C:
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
    set32(c.r[29], c.r[29].w[0] + 912u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F9C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016F9E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016FA7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21520u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21496u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21464u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21452u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21428u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA5Cu);  if (depth < kMaxDepth) unit_0028(c, 138u, depth + 1u); else { c.pc = 0x001A2330u; return; } if (c.pc != 0x0016FA5Cu) [[unlikely]] return; }
L_0016FA5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0016FA7C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FA7Cu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0016FA7Cu) [[unlikely]] return; }
L_0016FA7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FA90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30988u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0016FAC0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FAD0; } }
L_0016FAC0:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FAD0u);  if (depth < kMaxDepth) unit_0028(c, 186u, depth + 1u); else { c.pc = 0x001A2F10u; return; } if (c.pc != 0x0016FAD0u) [[unlikely]] return; }
L_0016FAD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FAF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 28528u);
    c.budget -= 6;
L_0016FB08:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB14u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0016FB14u) [[unlikely]] return; }
L_0016FB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0016FB28; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FB38; } }
L_0016FB28:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FB38u);  if (depth < kMaxDepth) unit_0028(c, 187u, depth + 1u); else { c.pc = 0x001A2F50u; return; } if (c.pc != 0x0016FB38u) [[unlikely]] return; }
L_0016FB38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30864u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0016FB78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FB7C; } }
L_0016FB78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016FB7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FB90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 30988u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0016FBC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FBE8; } }
L_0016FBC0:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FBD0u);  if (depth < kMaxDepth) unit_0028(c, 190u, depth + 1u); else { c.pc = 0x001A2FC0u; return; } if (c.pc != 0x0016FBD0u) [[unlikely]] return; }
L_0016FBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016FBE4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FBE8; } }
L_0016FBE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0016FBE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30988u)));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016FCAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 21552u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016FC8C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27728u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0016FC8C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FC8Cu);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0016FC8Cu) [[unlikely]] return; }
L_0016FC8C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0016FCAC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FCACu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0016FCACu) [[unlikely]] return; }
L_0016FCAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FCC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 28560u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FCE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 28698u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FD14u) [[unlikely]] return; }
L_0016FD14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0016FD30:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.budget -= 3;
L_0016FD3C:
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 368u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 384u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 400u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FD80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FD80u) [[unlikely]] return; }
L_0016FD80:
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[29].w[0] + 296u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0016FF28; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FDB8u);  if (depth < kMaxDepth) unit_001C(c, 6u, depth + 1u); else { c.pc = 0x001700D0u; return; } if (c.pc != 0x0016FDB8u) [[unlikely]] return; }
L_0016FDB8:
    set32(c.r[3], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 292u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[29].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[29].w[0] + 336u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    st32((c.r[29].w[0] + 360u), c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0016FF10; } }
L_0016FDF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FE24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FE24u) [[unlikely]] return; }
L_0016FE24:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0016FF28; } }
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[29].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[29].w[0] + 348u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 348u);
    st32((c.r[29].w[0] + 256u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[29].w[0] + 252u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[3], c.r[29].w[0] + 348u);
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[3], c.r[29].w[0] + 348u);
    st32((c.r[29].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[29].w[0] + 328u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 324u);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 236u), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[29].w[0] + 232u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[29].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    st32((c.r[29].w[0] + 360u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 360u)));
    st32((c.r[29].w[0] + 228u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 49;
    { const bool t = c.r[3].d[0] != c.r[22].d[0];  if (t) { goto L_0016FF10; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 360u), c.r[3].w[0]);
    c.budget -= 4;
L_0016FF10:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FDF8u | kUnwind; return; } goto L_0016FDF8; } }
L_0016FF28:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] + 40u);
    st32((c.r[29].w[0] + 220u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[29].w[0] + 332u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    st32((c.r[29].w[0] + 356u), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_001C(c, 3u, depth); } }
L_0016FF64:
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0016FF90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0016FF90u) [[unlikely]] return; }
L_0016FF90:
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001C(c, 4u, depth); } }
    set32(c.r[3], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] + 40u);
    st32((c.r[29].w[0] + 200u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[29].w[0] + 340u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 340u);
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[30], c.r[29].w[0] + 340u);
    set32(c.r[3], c.r[29].w[0] + 340u);
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 21;
    [[clang::musttail]] return unit_001C(c, 1u, depth);
}

}
