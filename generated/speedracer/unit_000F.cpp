#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000F[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0,
    15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 35, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0,
    0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0,
    0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0,
    203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0,
    210, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0,
    0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315,
    316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 370,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0,
    0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0013C000;
    case 2u: goto L_0013C004;
    case 3u: goto L_0013C020;
    case 4u: goto L_0013C030;
    case 5u: goto L_0013C054;
    case 6u: goto L_0013C060;
    case 7u: goto L_0013C070;
    case 8u: goto L_0013C080;
    case 9u: goto L_0013C090;
    case 10u: goto L_0013C0EC;
    case 11u: goto L_0013C0F4;
    case 12u: goto L_0013C120;
    case 13u: goto L_0013C160;
    case 14u: goto L_0013C170;
    case 15u: goto L_0013C180;
    case 16u: goto L_0013C190;
    case 17u: goto L_0013C1B0;
    case 18u: goto L_0013C1E0;
    case 19u: goto L_0013C200;
    case 20u: goto L_0013C25C;
    case 21u: goto L_0013C278;
    case 22u: goto L_0013C29C;
    case 23u: goto L_0013C2F0;
    case 24u: goto L_0013C320;
    case 25u: goto L_0013C32C;
    case 26u: goto L_0013C350;
    case 27u: goto L_0013C360;
    case 28u: goto L_0013C370;
    case 29u: goto L_0013C388;
    case 30u: goto L_0013C3A0;
    case 31u: goto L_0013C3B0;
    case 32u: goto L_0013C3C0;
    case 33u: goto L_0013C3E0;
    case 34u: goto L_0013C3EC;
    case 35u: goto L_0013C3F0;
    case 36u: goto L_0013C410;
    case 37u: goto L_0013C420;
    case 38u: goto L_0013C444;
    case 39u: goto L_0013C460;
    case 40u: goto L_0013C49C;
    case 41u: goto L_0013C4C8;
    case 42u: goto L_0013C4E0;
    case 43u: goto L_0013C514;
    case 44u: goto L_0013C530;
    case 45u: goto L_0013C568;
    case 46u: goto L_0013C580;
    case 47u: goto L_0013C5B0;
    case 48u: goto L_0013C634;
    case 49u: goto L_0013C648;
    case 50u: goto L_0013C658;
    case 51u: goto L_0013C694;
    case 52u: goto L_0013C6B0;
    case 53u: goto L_0013C700;
    case 54u: goto L_0013C760;
    case 55u: goto L_0013C7A0;
    case 56u: goto L_0013C7CC;
    case 57u: goto L_0013C7D4;
    case 58u: goto L_0013C80C;
    case 59u: goto L_0013C890;
    case 60u: goto L_0013C8C0;
    case 61u: goto L_0013C934;
    case 62u: goto L_0013C950;
    case 63u: goto L_0013C9A8;
    case 64u: goto L_0013C9F0;
    case 65u: goto L_0013CA00;
    case 66u: goto L_0013CA10;
    case 67u: goto L_0013CA88;
    case 68u: goto L_0013CAA4;
    case 69u: goto L_0013CAFC;
    case 70u: goto L_0013CB2C;
    case 71u: goto L_0013CB90;
    case 72u: goto L_0013CC14;
    case 73u: goto L_0013CC30;
    case 74u: goto L_0013CC88;
    case 75u: goto L_0013CCC8;
    case 76u: goto L_0013CCEC;
    case 77u: goto L_0013CD00;
    case 78u: goto L_0013CD40;
    case 79u: goto L_0013CD58;
    case 80u: goto L_0013CD70;
    case 81u: goto L_0013CDF4;
    case 82u: goto L_0013CE10;
    case 83u: goto L_0013CE68;
    case 84u: goto L_0013CEA8;
    case 85u: goto L_0013CED4;
    case 86u: goto L_0013CF10;
    case 87u: goto L_0013CF20;
    case 88u: goto L_0013CF30;
    case 89u: goto L_0013CF4C;
    case 90u: goto L_0013CF80;
    case 91u: goto L_0013D004;
    case 92u: goto L_0013D020;
    case 93u: goto L_0013D078;
    case 94u: goto L_0013D0B0;
    case 95u: goto L_0013D0F0;
    case 96u: goto L_0013D17C;
    case 97u: goto L_0013D198;
    case 98u: goto L_0013D1F0;
    case 99u: goto L_0013D230;
    case 100u: goto L_0013D25C;
    case 101u: goto L_0013D274;
    case 102u: goto L_0013D2C0;
    case 103u: goto L_0013D2E0;
    case 104u: goto L_0013D2F0;
    case 105u: goto L_0013D354;
    case 106u: goto L_0013D36C;
    case 107u: goto L_0013D3BC;
    case 108u: goto L_0013D410;
    case 109u: goto L_0013D420;
    case 110u: goto L_0013D440;
    case 111u: goto L_0013D4D0;
    case 112u: goto L_0013D4E0;
    case 113u: goto L_0013D500;
    case 114u: goto L_0013D58C;
    case 115u: goto L_0013D5A8;
    case 116u: goto L_0013D600;
    case 117u: goto L_0013D648;
    case 118u: goto L_0013D668;
    case 119u: goto L_0013D6C0;
    case 120u: goto L_0013D700;
    case 121u: goto L_0013D730;
    case 122u: goto L_0013D77C;
    case 123u: goto L_0013D7A4;
    case 124u: goto L_0013D7AC;
    case 125u: goto L_0013D7E0;
    case 126u: goto L_0013D800;
    case 127u: goto L_0013D864;
    case 128u: goto L_0013D8F0;
    case 129u: goto L_0013D944;
    case 130u: goto L_0013D9B0;
    case 131u: goto L_0013D9F4;
    case 132u: goto L_0013DA10;
    case 133u: goto L_0013DA70;
    case 134u: goto L_0013DAA8;
    case 135u: goto L_0013DB00;
    case 136u: goto L_0013DB58;
    case 137u: goto L_0013DB70;
    case 138u: goto L_0013DB90;
    case 139u: goto L_0013DBD0;
    case 140u: goto L_0013DBE0;
    case 141u: goto L_0013DC18;
    case 142u: goto L_0013DC28;
    case 143u: goto L_0013DC40;
    case 144u: goto L_0013DC54;
    case 145u: goto L_0013DC68;
    case 146u: goto L_0013DC78;
    case 147u: goto L_0013DC84;
    case 148u: goto L_0013DC94;
    case 149u: goto L_0013DCA0;
    case 150u: goto L_0013DCB0;
    case 151u: goto L_0013DCC8;
    case 152u: goto L_0013DCEC;
    case 153u: goto L_0013DD00;
    case 154u: goto L_0013DD28;
    case 155u: goto L_0013DD40;
    case 156u: goto L_0013DD58;
    case 157u: goto L_0013DD64;
    case 158u: goto L_0013DD78;
    case 159u: goto L_0013DD84;
    case 160u: goto L_0013DD90;
    case 161u: goto L_0013DD9C;
    case 162u: goto L_0013DDC0;
    case 163u: goto L_0013DDDC;
    case 164u: goto L_0013DDE8;
    case 165u: goto L_0013DE10;
    case 166u: goto L_0013DE30;
    case 167u: goto L_0013DE3C;
    case 168u: goto L_0013DE48;
    case 169u: goto L_0013DE5C;
    case 170u: goto L_0013DE68;
    case 171u: goto L_0013DE80;
    case 172u: goto L_0013DEA0;
    case 173u: goto L_0013DEAC;
    case 174u: goto L_0013DEB8;
    case 175u: goto L_0013DECC;
    case 176u: goto L_0013DEE0;
    case 177u: goto L_0013DF20;
    case 178u: goto L_0013DF50;
    case 179u: goto L_0013DF78;
    case 180u: goto L_0013DFB0;
    case 181u: goto L_0013DFE4;
    case 182u: goto L_0013E000;
    case 183u: goto L_0013E038;
    case 184u: goto L_0013E064;
    case 185u: goto L_0013E094;
    case 186u: goto L_0013E0A0;
    case 187u: goto L_0013E0B8;
    case 188u: goto L_0013E0E0;
    case 189u: goto L_0013E110;
    case 190u: goto L_0013E13C;
    case 191u: goto L_0013E168;
    case 192u: goto L_0013E198;
    case 193u: goto L_0013E1A4;
    case 194u: goto L_0013E1BC;
    case 195u: goto L_0013E1E0;
    case 196u: goto L_0013E210;
    case 197u: goto L_0013E220;
    case 198u: goto L_0013E240;
    case 199u: goto L_0013E24C;
    case 200u: goto L_0013E260;
    case 201u: goto L_0013E26C;
    case 202u: goto L_0013E278;
    case 203u: goto L_0013E280;
    case 204u: goto L_0013E294;
    case 205u: goto L_0013E2BC;
    case 206u: goto L_0013E2C8;
    case 207u: goto L_0013E2D4;
    case 208u: goto L_0013E2E8;
    case 209u: goto L_0013E2F4;
    case 210u: goto L_0013E300;
    case 211u: goto L_0013E304;
    case 212u: goto L_0013E310;
    case 213u: goto L_0013E32C;
    case 214u: goto L_0013E340;
    case 215u: goto L_0013E34C;
    case 216u: goto L_0013E370;
    case 217u: goto L_0013E3A4;
    case 218u: goto L_0013E3B0;
    case 219u: goto L_0013E3BC;
    case 220u: goto L_0013E3D4;
    case 221u: goto L_0013E3F0;
    case 222u: goto L_0013E414;
    case 223u: goto L_0013E430;
    case 224u: goto L_0013E454;
    case 225u: goto L_0013E46C;
    case 226u: goto L_0013E490;
    case 227u: goto L_0013E4A0;
    case 228u: goto L_0013E4C4;
    case 229u: goto L_0013E4D0;
    case 230u: goto L_0013E4E0;
    case 231u: goto L_0013E4F0;
    case 232u: goto L_0013E550;
    case 233u: goto L_0013E570;
    case 234u: goto L_0013E5F8;
    case 235u: goto L_0013E60C;
    case 236u: goto L_0013E624;
    case 237u: goto L_0013E634;
    case 238u: goto L_0013E6A0;
    case 239u: goto L_0013E6C8;
    case 240u: goto L_0013E6E0;
    case 241u: goto L_0013E6EC;
    case 242u: goto L_0013E724;
    case 243u: goto L_0013E740;
    case 244u: goto L_0013E760;
    case 245u: goto L_0013E778;
    case 246u: goto L_0013E784;
    case 247u: goto L_0013E7C0;
    case 248u: goto L_0013E7DC;
    case 249u: goto L_0013E7F0;
    case 250u: goto L_0013E804;
    case 251u: goto L_0013E80C;
    case 252u: goto L_0013E834;
    case 253u: goto L_0013E850;
    case 254u: goto L_0013E884;
    case 255u: goto L_0013E898;
    case 256u: goto L_0013E8AC;
    case 257u: goto L_0013E8C0;
    case 258u: goto L_0013E8E0;
    case 259u: goto L_0013E914;
    case 260u: goto L_0013E928;
    case 261u: goto L_0013E93C;
    case 262u: goto L_0013E950;
    case 263u: goto L_0013E970;
    case 264u: goto L_0013E984;
    case 265u: goto L_0013E998;
    case 266u: goto L_0013E9AC;
    case 267u: goto L_0013E9B4;
    case 268u: goto L_0013E9F0;
    case 269u: goto L_0013EA2C;
    case 270u: goto L_0013EA44;
    case 271u: goto L_0013EA50;
    case 272u: goto L_0013EAB4;
    case 273u: goto L_0013EAD0;
    case 274u: goto L_0013EAF0;
    case 275u: goto L_0013EB08;
    case 276u: goto L_0013EB20;
    case 277u: goto L_0013EB48;
    case 278u: goto L_0013EB6C;
    case 279u: goto L_0013EB7C;
    case 280u: goto L_0013EB98;
    case 281u: goto L_0013EBC0;
    case 282u: goto L_0013EBE4;
    case 283u: goto L_0013EC10;
    case 284u: goto L_0013EC5C;
    case 285u: goto L_0013EC78;
    case 286u: goto L_0013EC90;
    case 287u: goto L_0013ECA0;
    case 288u: goto L_0013ED08;
    case 289u: goto L_0013EE00;
    case 290u: goto L_0013EE1C;
    case 291u: goto L_0013EE34;
    case 292u: goto L_0013EE4C;
    case 293u: goto L_0013EE64;
    case 294u: goto L_0013EE80;
    case 295u: goto L_0013EEB8;
    case 296u: goto L_0013EEC8;
    case 297u: goto L_0013EED8;
    case 298u: goto L_0013EEEC;
    case 299u: goto L_0013EF08;
    case 300u: goto L_0013EF18;
    case 301u: goto L_0013EF2C;
    case 302u: goto L_0013EF48;
    case 303u: goto L_0013EF58;
    case 304u: goto L_0013EF6C;
    case 305u: goto L_0013EFEC;
    case 306u: goto L_0013EFF8;
    case 307u: goto L_0013F004;
    case 308u: goto L_0013F030;
    case 309u: goto L_0013F050;
    case 310u: goto L_0013F05C;
    case 311u: goto L_0013F068;
    case 312u: goto L_0013F090;
    case 313u: goto L_0013F0D0;
    case 314u: goto L_0013F0F0;
    case 315u: goto L_0013F0FC;
    case 316u: goto L_0013F100;
    case 317u: goto L_0013F108;
    case 318u: goto L_0013F130;
    case 319u: goto L_0013F140;
    case 320u: goto L_0013F170;
    case 321u: goto L_0013F18C;
    case 322u: goto L_0013F198;
    case 323u: goto L_0013F1B0;
    case 324u: goto L_0013F1D8;
    case 325u: goto L_0013F1E4;
    case 326u: goto L_0013F1F0;
    case 327u: goto L_0013F1F8;
    case 328u: goto L_0013F24C;
    case 329u: goto L_0013F268;
    case 330u: goto L_0013F274;
    case 331u: goto L_0013F2A0;
    case 332u: goto L_0013F2C8;
    case 333u: goto L_0013F2D4;
    case 334u: goto L_0013F2E0;
    case 335u: goto L_0013F2E8;
    case 336u: goto L_0013F33C;
    case 337u: goto L_0013F358;
    case 338u: goto L_0013F364;
    case 339u: goto L_0013F390;
    case 340u: goto L_0013F3AC;
    case 341u: goto L_0013F3B8;
    case 342u: goto L_0013F3E0;
    case 343u: goto L_0013F420;
    case 344u: goto L_0013F444;
    case 345u: goto L_0013F450;
    case 346u: goto L_0013F498;
    case 347u: goto L_0013F4E0;
    case 348u: goto L_0013F588;
    case 349u: goto L_0013F5C8;
    case 350u: goto L_0013F5E0;
    case 351u: goto L_0013F604;
    case 352u: goto L_0013F610;
    case 353u: goto L_0013F620;
    case 354u: goto L_0013F664;
    case 355u: goto L_0013F680;
    case 356u: goto L_0013F6B8;
    case 357u: goto L_0013F6C0;
    case 358u: goto L_0013F6D0;
    case 359u: goto L_0013F6EC;
    case 360u: goto L_0013F6F8;
    case 361u: goto L_0013F71C;
    case 362u: goto L_0013F730;
    case 363u: goto L_0013F774;
    case 364u: goto L_0013F790;
    case 365u: goto L_0013F79C;
    case 366u: goto L_0013F7A8;
    case 367u: goto L_0013F7B4;
    case 368u: goto L_0013F7E0;
    case 369u: goto L_0013F7F4;
    case 370u: goto L_0013F7FC;
    case 371u: goto L_0013F810;
    case 372u: goto L_0013F87C;
    case 373u: goto L_0013F8A4;
    case 374u: goto L_0013F8CC;
    case 375u: goto L_0013F930;
    case 376u: goto L_0013F950;
    case 377u: goto L_0013F9C0;
    case 378u: goto L_0013F9E0;
    case 379u: goto L_0013FA58;
    case 380u: goto L_0013FA80;
    case 381u: goto L_0013FA98;
    case 382u: goto L_0013FAA4;
    case 383u: goto L_0013FAB0;
    case 384u: goto L_0013FAD0;
    case 385u: goto L_0013FB2C;
    case 386u: goto L_0013FB50;
    case 387u: goto L_0013FB78;
    case 388u: goto L_0013FBA0;
    case 389u: goto L_0013FBB8;
    case 390u: goto L_0013FBD0;
    case 391u: goto L_0013FBF0;
    case 392u: goto L_0013FC50;
    case 393u: goto L_0013FC74;
    case 394u: goto L_0013FC94;
    case 395u: goto L_0013FCC0;
    case 396u: goto L_0013FCD8;
    case 397u: goto L_0013FD00;
    case 398u: goto L_0013FD28;
    case 399u: goto L_0013FD34;
    case 400u: goto L_0013FD40;
    case 401u: goto L_0013FD50;
    case 402u: goto L_0013FD70;
    case 403u: goto L_0013FDDC;
    case 404u: goto L_0013FE10;
    case 405u: goto L_0013FE30;
    case 406u: goto L_0013FE80;
    case 407u: goto L_0013FEC8;
    case 408u: goto L_0013FEF0;
    case 409u: goto L_0013FF28;
    case 410u: goto L_0013FF30;
    case 411u: goto L_0013FF3C;
    case 412u: goto L_0013FFB8;
    case 413u: goto L_0013FFD8;
    default: bad_entry(c, 0x0013C000u); return;
    }
L_0013C000:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013C004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013C020:
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0013C030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31176u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0013C04C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013C054; } }
L_0013C04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C054u);  if (depth < kMaxDepth) unit_000E(c, 89u, depth + 1u); else { c.pc = 0x001390A0u; return; } if (c.pc != 0x0013C054u) [[unlikely]] return; }
L_0013C054:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013C060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31176u)));  c.pc = t; return; }
L_0013C070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4672u);  c.pc = t; return; }
L_0013C080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_0013C090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013C0BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0013C0C8; } }
L_0013C0BC:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0013C0C8:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0013C0F8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C0ECu); set32(c.r[5], c.r[5].w[0] - 4365u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0013C0ECu) [[unlikely]] return; }
L_0013C0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C0F4u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0013C0F4u) [[unlikely]] return; }
L_0013C0F4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0013C0F8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_0013C108; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0013C108:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013C120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[29].w[0] + 27u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_0013C144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0013C14C; } }
L_0013C144:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0013C14C:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 27u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C160u); set32(c.r[8], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0013C160u) [[unlikely]] return; }
L_0013C160:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013C170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 12u));  c.pc = t; return; }
L_0013C180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[12]);  c.pc = t; return; }
L_0013C190:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_0013C1B0:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[12]);  c.pc = t; return; }
L_0013C1E0:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_0013C200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0013C250; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0013C2BC; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;  goto L_0013C2B0; }
L_0013C250:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013C2BC; } }
L_0013C25C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    mmi::pminw(c.r[22], c.r[17], c.r[2]);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C278u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C278u) [[unlikely]] return; }
L_0013C278:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_0013C288; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013C2BC; } }
L_0013C288:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C29Cu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013C29Cu) [[unlikely]] return; }
L_0013C29C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  goto L_0013C2AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013C2BC; } }
L_0013C2AC:
    c.r[2].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0013C2B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] - c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C25Cu | kUnwind; return; } goto L_0013C25C; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0013C2BC:
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
L_0013C2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0013C320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C320u);  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x0013C320u) [[unlikely]] return; }
L_0013C320:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C32Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 4u, depth + 1u); else { c.pc = 0x0012C060u; return; } if (c.pc != 0x0013C32Cu) [[unlikely]] return; }
L_0013C32C:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013C350:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BFB0u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 494u, depth); }
L_0013C360:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BE20u | kUnwind; return; } [[clang::musttail]] return unit_000A(c, 483u, depth); }
L_0013C370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C388u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_000A(c, 482u, depth + 1u); else { c.pc = 0x0012BDF0u; return; } if (c.pc != 0x0013C388u) [[unlikely]] return; }
L_0013C388:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013C3A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0013C3B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0013C3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0013C3E0; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C3E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 485u, depth + 1u); else { c.pc = 0x0012BE70u; return; } if (c.pc != 0x0013C3E0u) [[unlikely]] return; }
L_0013C3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013C3EC:
    c.budget -= 1;
L_0013C3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0013C410; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C410u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x0013C410u) [[unlikely]] return; }
L_0013C410:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013C420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0013C44C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C444u);  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x0013C444u) [[unlikely]] return; }
L_0013C444:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0013C44C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013C460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013C4C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24912u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0013C49C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C49Cu);  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x0013C49Cu) [[unlikely]] return; }
L_0013C49C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0013C4B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24864u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0013C4B4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0013C4CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C4C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013C4C8u) [[unlikely]] return; }
L_0013C4C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013C4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013C4E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 24864u);
    set32(c.r[2], c.r[2].w[0] - 24912u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C514u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 4u, depth + 1u); else { c.pc = 0x0012C060u; return; } if (c.pc != 0x0013C514u) [[unlikely]] return; }
L_0013C514:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013C530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0013C56C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 24864u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0013C568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C568u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013C568u) [[unlikely]] return; }
L_0013C568:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0013C56C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013C580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24864u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24912u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_0013C5B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[6].w[0] + 12u);  if (t) { goto L_0013C5EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013C740; } }
L_0013C5EC:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_0013C678; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013C674; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[3].w[0])));  goto L_0013C640; }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C634u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0000(c, 144u, depth + 1u); else { c.pc = 0x00102250u; return; } if (c.pc != 0x0013C634u) [[unlikely]] return; }
L_0013C634:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0013C660; } }
L_0013C640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C648u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013C648u) [[unlikely]] return; }
L_0013C648:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C658u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013C658u) [[unlikely]] return; }
L_0013C658:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0013C660:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0013C728; } }
L_0013C674:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0013C678:
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C694u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013C694u) [[unlikely]] return; }
L_0013C694:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013C6B8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C6B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013C6B0u) [[unlikely]] return; }
L_0013C6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  if (t) { goto L_0013C6C0; } }
L_0013C6B8:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 2;
L_0013C6C0:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C700u); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013C700u) [[unlikely]] return; }
L_0013C700:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 10;
L_0013C728:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0013C740; }
    st32((c.r[3].w[0] + 4u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0013C740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013C760:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[4].w[0] + 12u);  if (t) { goto L_0013C7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7A0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0013C7A0u) [[unlikely]] return; }
L_0013C7A0:
    st32((c.r[20].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 8u), 0u);  if (t) { goto L_0013C7DC; } }
L_0013C7AC:
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0] + 4u), 0u);  goto L_0013C7D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7CCu); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0013C7CCu) [[unlikely]] return; }
L_0013C7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C7D4u); set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0013C7D4u) [[unlikely]] return; }
L_0013C7D4:
    st32((c.r[20].w[0] + 4u), 0u);
    c.budget -= 1;
L_0013C7D8:
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 1;
L_0013C7DC:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[20].w[0] + 4u), c.r[5].w[0]);  goto L_0013C84C; }
    set32(c.r[19], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[4], 0u + 20u);
    set32(c.r[18], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C80Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013C80Cu) [[unlikely]] return; }
L_0013C80C:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0013C864; } }
L_0013C84C:
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0013C864:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013C890:
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    mmi::pmaxw(c.r[3], c.r[3], c.r[4]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_0013C8C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_0013C9C0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0013C9C4; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[19], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C934u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013C934u) [[unlikely]] return; }
L_0013C934:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013C958; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C950u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013C950u) [[unlikely]] return; }
L_0013C950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_0013C960; } }
L_0013C958:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 2;
L_0013C960:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    mmi::pminw(c.r[16], c.r[3], c.r[19]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013C9A8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013C9A8u) [[unlikely]] return; }
L_0013C9A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
L_0013C9C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013C9C4:
    st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013C9F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0013CA00:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_0013CA10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_0013CB14; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0013CB18; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[19], c.r[2].w[0] - c.r[20].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CA88u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013CA88u) [[unlikely]] return; }
L_0013CA88:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013CAAC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CAA4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013CAA4u) [[unlikely]] return; }
L_0013CAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_0013CAB4; } }
L_0013CAAC:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_0013CAB4:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[21].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    mmi::pminw(c.r[16], c.r[3], c.r[19]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CAFCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013CAFCu) [[unlikely]] return; }
L_0013CAFC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
L_0013CB14:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0013CB18:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], c.r[4].w[0] + c.r[20].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CB2Cu); set32(c.r[6], c.r[2].w[0] - c.r[20].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003B8148u; return; } if (c.pc != 0x0013CB2Cu) [[unlikely]] return; }
L_0013CB2C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] - c.r[20].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0013CB64; }
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 2;
L_0013CB64:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013CB90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_0013CCA0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0013CCA4; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[22], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[2].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013CC14u) [[unlikely]] return; }
L_0013CC14:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013CC38; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC30u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013CC30u) [[unlikely]] return; }
L_0013CC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_0013CC40; } }
L_0013CC38:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_0013CC40:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[21].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    mmi::pminw(c.r[16], c.r[3], c.r[18]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CC88u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013CC88u) [[unlikely]] return; }
L_0013CC88:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
L_0013CCA0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0013CCA4:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0013CCDC; }
    set32(c.r[5], c.r[3].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CCC8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 47u, depth + 1u); else { c.pc = 0x0013C5B0u; return; } if (c.pc != 0x0013CCC8u) [[unlikely]] return; }
L_0013CCC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013CCD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013CD14; } }
L_0013CCD8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0013CCDC:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CCECu); set32(c.r[4], c.r[5].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003B8148u; return; } if (c.pc != 0x0013CCECu) [[unlikely]] return; }
L_0013CCEC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CD00u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013CD00u) [[unlikely]] return; }
L_0013CD00:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
L_0013CD14:
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
L_0013CD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CD58u); set32(c.r[5], c.r[29].w[0] + 31u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x0013CD58u) [[unlikely]] return; }
L_0013CD58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013CD70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_0013CE80; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0013CE84; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[22], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[2].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CDF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013CDF4u) [[unlikely]] return; }
L_0013CDF4:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013CE18; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013CE10u) [[unlikely]] return; }
L_0013CE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_0013CE20; } }
L_0013CE18:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_0013CE20:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[21].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    mmi::pminw(c.r[16], c.r[3], c.r[18]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CE68u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013CE68u) [[unlikely]] return; }
L_0013CE68:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
L_0013CE80:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0013CE84:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0013CEBC; }
    set32(c.r[5], c.r[3].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CEA8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 47u, depth + 1u); else { c.pc = 0x0013C5B0u; return; } if (c.pc != 0x0013CEA8u) [[unlikely]] return; }
L_0013CEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013CEB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013CEE8; } }
L_0013CEB8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0013CEBC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CED4u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013CED4u) [[unlikely]] return; }
L_0013CED4:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
L_0013CEE8:
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
L_0013CF10:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  c.pc = t; return; }
L_0013CF20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013C5B0u | kUnwind; return; } goto L_0013C5B0; }
L_0013CF30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013CF4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 47u, depth + 1u); else { c.pc = 0x0013C5B0u; return; } if (c.pc != 0x0013CF4Cu) [[unlikely]] return; }
L_0013CF4C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0013CF64; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_0013CF64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013CF80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_0013D090; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0013D094; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[22], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[18], c.r[2].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D004u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D004u) [[unlikely]] return; }
L_0013D004:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013D028; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D020u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D020u) [[unlikely]] return; }
L_0013D020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_0013D030; } }
L_0013D028:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_0013D030:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[21].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    mmi::pminw(c.r[16], c.r[3], c.r[18]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D078u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013D078u) [[unlikely]] return; }
L_0013D078:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
L_0013D090:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0013D094:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D0B0u); set32(c.r[6], c.r[2].w[0] - c.r[20].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013D0B0u) [[unlikely]] return; }
L_0013D0B0:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - c.r[19].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013D0F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_0013D208; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0013D20C; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[23], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[2].w[0] + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D17Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D17Cu) [[unlikely]] return; }
L_0013D17C:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013D1A0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D198u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D198u) [[unlikely]] return; }
L_0013D198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_0013D1A8; } }
L_0013D1A0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_0013D1A8:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[21].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    mmi::pminw(c.r[16], c.r[3], c.r[18]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D1F0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013D1F0u) [[unlikely]] return; }
L_0013D1F0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
L_0013D208:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0013D20C:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0013D244; }
    set32(c.r[5], c.r[3].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D230u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 47u, depth + 1u); else { c.pc = 0x0013C5B0u; return; } if (c.pc != 0x0013D230u) [[unlikely]] return; }
L_0013D230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013D240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013D288; } }
L_0013D240:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0013D244:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D25Cu); set32(c.r[6], c.r[2].w[0] - c.r[20].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003B8148u; return; } if (c.pc != 0x0013D25Cu) [[unlikely]] return; }
L_0013D25C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D274u); set32(c.r[4], c.r[2].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013D274u) [[unlikely]] return; }
L_0013D274:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
L_0013D288:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0013D2C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0013D2E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  c.pc = t; return; }
L_0013D2F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] + 12u);  if (t) { goto L_0013D3D4; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_0013D3D8; }
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D354u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D354u) [[unlikely]] return; }
L_0013D354:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D36Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D36Cu) [[unlikely]] return; }
L_0013D36C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], 0u + 16u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    mmi::pminw(c.r[16], c.r[3], c.r[4]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D3BCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013D3BCu) [[unlikely]] return; }
L_0013D3BC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
L_0013D3D4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0013D3D8:
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013D410:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_0013D420:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_0013D440:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_0013D484; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_0013D468; }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  goto L_0013D490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D48C; } }
L_0013D468:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] + c.r[2].d[0];  if (t) { goto L_0013D48C; } }
L_0013D484:
    c.r[2].d[0] = ld32((c.r[2].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] + c.r[2].d[0];
    c.budget -= 2;
L_0013D48C:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0013D490:
    c.r[2].d[0] = ld32((c.r[3].w[0] + 4u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0013D4C8; }
    c.budget -= 2;
    if (c.r[5].sd[0] >= 0) { set32(c.r[3], ld32((c.r[3].w[0])));  goto L_0013D4B4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013D4C8; } }
L_0013D4B4:
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
L_0013D4C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013D4D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0013D4E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0013D500:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + 12u);  if (t) { goto L_0013D618; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_0013D61C; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], 0u + 20u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[22], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D58Cu); set32(c.r[18], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D58Cu) [[unlikely]] return; }
L_0013D58C:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013D5B0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D5A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D5A8u) [[unlikely]] return; }
L_0013D5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  if (t) { goto L_0013D5B8; } }
L_0013D5B0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_0013D5B8:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[21].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    mmi::pminw(c.r[16], c.r[3], c.r[18]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D600u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013D600u) [[unlikely]] return; }
L_0013D600:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
L_0013D618:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_0013D61C:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_0013D65C; }
    set32(c.r[5], c.r[3].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D648u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 47u, depth + 1u); else { c.pc = 0x0013C5B0u; return; } if (c.pc != 0x0013D648u) [[unlikely]] return; }
L_0013D648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013D658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013D698; } }
L_0013D658:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0013D65C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D668u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013D668u) [[unlikely]] return; }
L_0013D668:
    set32(c.r[6], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    mmi::pmaxw(c.r[3], c.r[3], c.r[4]);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 12;
L_0013D698:
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
L_0013D6C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    mmi::pminw(c.r[17], c.r[6], c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D700u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013D700u) [[unlikely]] return; }
L_0013D700:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013D730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013D7E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24816u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 12u);  if (t) { goto L_0013D7B4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_0013D788; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D77Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0013D77Cu) [[unlikely]] return; }
L_0013D77C:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0013D7B4; } }
L_0013D788:
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0013D7B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D7A4u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0013D7A4u) [[unlikely]] return; }
L_0013D7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D7ACu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0013D7ACu) [[unlikely]] return; }
L_0013D7AC:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_0013D7B0:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_0013D7B4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0013D7CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24864u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0013D7CC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0013D7E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D7E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013D7E0u) [[unlikely]] return; }
L_0013D7E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013D7E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013D800:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 24864u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] - 24816u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013D8A4; } }
    set32(c.r[19], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[4], 0u + 20u);
    set32(c.r[18], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D864u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D864u) [[unlikely]] return; }
L_0013D864:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[2].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0013D8C0; } }
L_0013D8A4:
    st32((c.r[20].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_0013D8C0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013D8F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] - 24864u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 24816u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D944u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D944u) [[unlikely]] return; }
L_0013D944:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[3].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013D9B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 24864u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 24816u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013D9F4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013D9F4u) [[unlikely]] return; }
L_0013D9F4:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0013DA18; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DA10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013DA10u) [[unlikely]] return; }
L_0013DA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0013DA20; } }
L_0013DA18:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_0013DA20:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[3].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013DA70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 24864u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24816u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DAA8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013DAA8u) [[unlikely]] return; }
L_0013DAA8:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013DB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013DB70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24768u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0013DB58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0013DB58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0013DB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DB58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013DB58u) [[unlikely]] return; }
L_0013DB58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0013DB74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DB70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013DB70u) [[unlikely]] return; }
L_0013DB70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013DB74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013DB90:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0013DBB8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0013DBB0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0013DBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013DBBC; } }
L_0013DBB8:
    set32(c.r[2], c.r[2].w[0] - 4240u);
    c.budget -= 1;
L_0013DBBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013DBD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4064u);  c.pc = t; return; }
L_0013DBE0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] - 4000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC18u); set32(c.r[7], 0u + 10u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0013DC18u) [[unlikely]] return; }
L_0013DC18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC28u); set32(c.r[5], c.r[5].w[0] - 3998u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013DC28u) [[unlikely]] return; }
L_0013DC28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_0013DC4C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC40u); set32(c.r[5], c.r[5].w[0] - 3993u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013DC40u) [[unlikely]] return; }
L_0013DC40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0013DC5C; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0013DC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0013DC54u) [[unlikely]] return; }
L_0013DC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013DDA0; } }
L_0013DC5C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC68u); set32(c.r[5], c.r[5].w[0] - 3988u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013DC68u) [[unlikely]] return; }
L_0013DC68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC78u); set32(c.r[5], c.r[5].w[0] - 3998u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013DC78u) [[unlikely]] return; }
L_0013DC78:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC84u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0013DC84u) [[unlikely]] return; }
L_0013DC84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DC94u); set32(c.r[5], c.r[5].w[0] - 3993u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013DC94u) [[unlikely]] return; }
L_0013DC94:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DCA0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0013DCA0u) [[unlikely]] return; }
L_0013DCA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DCB0u); set32(c.r[5], c.r[5].w[0] - 3983u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0013DCB0u) [[unlikely]] return; }
L_0013DCB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_0013DCF0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DCC8u); set32(c.r[5], c.r[29].w[0] + 207u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0013DCC8u) [[unlikely]] return; }
L_0013DCC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = ld8((c.r[29].w[0] + 207u));  goto L_0013DCF0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013DCEC; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DCECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0013DCECu) [[unlikely]] return; }
L_0013DCEC:
    c.r[19].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 1;
L_0013DCF0:
    set32(c.r[4], 0u + 76u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD00u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0013DD00u) [[unlikely]] return; }
L_0013DD00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0013DD64; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[29].w[0] + 129u);  goto L_0013DD1C; }
    set32(c.r[18], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0013DD1C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD28u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x0013DD28u) [[unlikely]] return; }
L_0013DD28:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD40u); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x0013DD40u) [[unlikely]] return; }
L_0013DD40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 24736u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD58u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x0013DD58u) [[unlikely]] return; }
L_0013DD58:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD64u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 133u, depth + 1u); else { c.pc = 0x0013DA70u; return; } if (c.pc != 0x0013DD64u) [[unlikely]] return; }
L_0013DD64:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0013DD7C; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0013DD78u) [[unlikely]] return; }
L_0013DD78:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0013DD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013DD84u) [[unlikely]] return; }
L_0013DD84:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013DD90u) [[unlikely]] return; }
L_0013DD90:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DD9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0013DD9Cu) [[unlikely]] return; }
L_0013DD9C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0013DDA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0013DDC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DDDCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 36u, depth + 1u); else { c.pc = 0x00138A30u; return; } if (c.pc != 0x0013DDDCu) [[unlikely]] return; }
L_0013DDDC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DDE8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0013DDE8u) [[unlikely]] return; }
L_0013DDE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[29].w[0] + 113u);  goto L_0013DDFC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0013DDFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE10u); set32(c.r[5], c.r[5].w[0] - 3993u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0013DE10u) [[unlikely]] return; }
L_0013DE10:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0013DE50; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 3993u);
    set32(c.r[6], c.r[29].w[0] + 140u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE30u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 188u, depth + 1u); else { c.pc = 0x0013E0E0u; return; } if (c.pc != 0x0013DE30u) [[unlikely]] return; }
L_0013DE30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE3Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0013DE3Cu) [[unlikely]] return; }
L_0013DE3C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0013DE48u) [[unlikely]] return; }
L_0013DE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_0013DE60; } }
L_0013DE50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE5Cu); set32(c.r[6], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_000F(c, 182u, depth + 1u); else { c.pc = 0x0013E000u; return; } if (c.pc != 0x0013DE5Cu) [[unlikely]] return; }
L_0013DE5C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0013DE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013DE68u) [[unlikely]] return; }
L_0013DE68:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] - 3988u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DE80u); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0013DE80u) [[unlikely]] return; }
L_0013DE80:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0013DEC0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 3988u);
    set32(c.r[6], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DEA0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 178u, depth + 1u); else { c.pc = 0x0013DF50u; return; } if (c.pc != 0x0013DEA0u) [[unlikely]] return; }
L_0013DEA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DEACu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0013DEACu) [[unlikely]] return; }
L_0013DEAC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DEB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0013DEB8u) [[unlikely]] return; }
L_0013DEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0013DED0; } }
L_0013DEC0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DECCu); set32(c.r[6], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 176u, depth + 1u); else { c.pc = 0x0013DEE0u; return; } if (c.pc != 0x0013DECCu) [[unlikely]] return; }
L_0013DECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0013DED0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0013DEE0:
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
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0013DF2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013DF20u) [[unlikely]] return; }
L_0013DF20:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_0013DF2C:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013DF50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DF78u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0013DF78u) [[unlikely]] return; }
L_0013DF78:
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
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0013DFBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DFB0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013DFB0u) [[unlikely]] return; }
L_0013DFB0:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_0013DFBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013DFE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013DFE4u) [[unlikely]] return; }
L_0013DFE4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013E000:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E038u); st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013E038u) [[unlikely]] return; }
L_0013E038:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_0013E06C; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 4u)));  goto L_0013E06C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E064u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013E064u) [[unlikely]] return; }
L_0013E064:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0013E06C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_0013E0B0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));  goto L_0013E098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E094u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013E094u) [[unlikely]] return; }
L_0013E094:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0013E098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E0A0u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0013E0A0u) [[unlikely]] return; }
L_0013E0A0:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_0013E0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E0B8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0013E0B8u) [[unlikely]] return; }
L_0013E0B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013E0E0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E110u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0013E110u) [[unlikely]] return; }
L_0013E110:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E13Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013E13Cu) [[unlikely]] return; }
L_0013E13C:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_0013E170; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 4u)));  goto L_0013E170; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E168u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013E168u) [[unlikely]] return; }
L_0013E168:
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0013E170:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_0013E1B4; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));  goto L_0013E19C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E198u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013E198u) [[unlikely]] return; }
L_0013E198:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_0013E19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E1A4u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0013E1A4u) [[unlikely]] return; }
L_0013E1A4:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
L_0013E1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E1BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0013E1BCu) [[unlikely]] return; }
L_0013E1BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E1E0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E1E0u) [[unlikely]] return; }
L_0013E1E0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013E210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013E220:
    set32(c.r[29], c.r[29].w[0] - 1152u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E240u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0013E240u) [[unlikely]] return; }
L_0013E240:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E24Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x0013E24Cu) [[unlikely]] return; }
L_0013E24C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 1144u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E260u); set32(c.r[6], c.r[6].w[0] - 3971u);  if (depth < kMaxDepth) unit_000F(c, 42u, depth + 1u); else { c.pc = 0x0013C4E0u; return; } if (c.pc != 0x0013E260u) [[unlikely]] return; }
L_0013E260:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E26Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0013E26Cu) [[unlikely]] return; }
L_0013E26C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E278u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013E278u) [[unlikely]] return; }
L_0013E278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E280u); set32(c.r[4], c.r[29].w[0] + 1144u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013C3B0u; return; } if (c.pc != 0x0013E280u) [[unlikely]] return; }
L_0013E280:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 60u)));  goto L_0013E2DC; }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E294u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0013E294u) [[unlikely]] return; }
L_0013E294:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 49u);  goto L_0013E2A8; }
    set32(c.r[7], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0013E2A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2BCu); set32(c.r[6], c.r[6].w[0] - 3968u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0013E2BCu) [[unlikely]] return; }
L_0013E2BC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013E2C8u) [[unlikely]] return; }
L_0013E2C8:
    set32(c.r[4], c.r[29].w[0] + 1144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x0013E2D4u) [[unlikely]] return; }
L_0013E2D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013E350; } }
L_0013E2DC:
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2E8u); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E2E8u) [[unlikely]] return; }
L_0013E2E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E2F4u); set32(c.r[4], c.r[29].w[0] + 1144u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013C350u; return; } if (c.pc != 0x0013E2F4u) [[unlikely]] return; }
L_0013E2F4:
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E300u); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 87u, depth + 1u); else { c.pc = 0x0013CF20u; return; } if (c.pc != 0x0013E300u) [[unlikely]] return; }
L_0013E300:
    set32(c.r[4], c.r[29].w[0] + 1144u);
    c.budget -= 1;
L_0013E304:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E310u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_000F(c, 35u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0013E310u) [[unlikely]] return; }
L_0013E310:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 60u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E32Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013E32Cu) [[unlikely]] return; }
L_0013E32C:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 1144u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E304u | kUnwind; return; } goto L_0013E304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E340u); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x0013E340u) [[unlikely]] return; }
L_0013E340:
    set32(c.r[4], c.r[29].w[0] + 1144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E34Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x0013E34Cu) [[unlikely]] return; }
L_0013E34C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013E350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1152u);  c.pc = t; return; }
L_0013E370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013E3D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 60u);
    set32(c.r[2], c.r[2].w[0] - 24736u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E3A4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x0013E3A4u) [[unlikely]] return; }
L_0013E3A4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E3B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0013E3B0u) [[unlikely]] return; }
L_0013E3B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E3BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 69u, depth + 1u); else { c.pc = 0x00138E80u; return; } if (c.pc != 0x0013E3BCu) [[unlikely]] return; }
L_0013E3BC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0013E3D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E3D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0013E3D4u) [[unlikely]] return; }
L_0013E3D4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013E3D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013E3F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31168u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0013E40C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0013E41C; } }
L_0013E40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E414u);  if (depth < kMaxDepth) unit_000E(c, 80u, depth + 1u); else { c.pc = 0x00138FF0u; return; } if (c.pc != 0x0013E414u) [[unlikely]] return; }
L_0013E414:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0013E41C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013E430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E454u); set32(c.r[4], c.r[4].w[0] - 13104u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0013E454u) [[unlikely]] return; }
L_0013E454:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0013E464; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013E474; } }
L_0013E464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E46Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 82u, depth + 1u); else { c.pc = 0x00139030u; return; } if (c.pc != 0x0013E46Cu) [[unlikely]] return; }
L_0013E46C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0013E474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013E490:
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0013E4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31168u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0013E4BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0013E4C4; } }
L_0013E4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E4C4u);  if (depth < kMaxDepth) unit_000E(c, 89u, depth + 1u); else { c.pc = 0x001390A0u; return; } if (c.pc != 0x0013E4C4u) [[unlikely]] return; }
L_0013E4C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013E4D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 31168u)));  c.pc = t; return; }
L_0013E4E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4032u);  c.pc = t; return; }
L_0013E4F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 64u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[10].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 104u), c.r[11].d[0]);  if (t) { goto L_0013E52C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0013E538; } }
L_0013E52C:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_0013E538:
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E550u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_000F(c, 233u, depth + 1u); else { c.pc = 0x0013E570u; return; } if (c.pc != 0x0013E550u) [[unlikely]] return; }
L_0013E550:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0013E570:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013E5F0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_0013E5E0; }
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0013E5E8; } }
L_0013E5E0:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 2;
L_0013E5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013E66C; } }
L_0013E5F0:
    set32(c.r[16], 0u + 256u);
    set32(c.r[20], c.r[30].w[0] + 128u);
    c.budget -= 2;
L_0013E5F8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E60Cu); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 197u, depth + 1u); else { c.pc = 0x003BDA08u; return; } if (c.pc != 0x0013E60Cu) [[unlikely]] return; }
L_0013E60C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0;  if (t) { goto L_0013E62C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E624u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0013E624u) [[unlikely]] return; }
L_0013E624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013E66C; } }
L_0013E62C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E634u);  if (depth < kMaxDepth) unit_00AD(c, 230u, depth + 1u); else { c.pc = 0x003B69F0u; return; } if (c.pc != 0x0013E634u) [[unlikely]] return; }
L_0013E634:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 22u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 256u);  goto L_0013E64C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0013E66C; } }
L_0013E64C:
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[29].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E5F8u | kUnwind; return; } goto L_0013E5F8; } }
L_0013E66C:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_0013E6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0013E6E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E6C8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013E6C8u) [[unlikely]] return; }
L_0013E6C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { st32((c.r[17].w[0] + 12u), c.r[5].w[0]);  goto L_0013E6E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E6E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0013E6E0u) [[unlikely]] return; }
L_0013E6E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013E6E4:
    st32((c.r[17].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 1;
L_0013E6E8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013E6EC:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E6ECu | kUnwind; return; } goto L_0013E6EC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 1u);  goto L_0013E71C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0013E71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E724u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0013E724u) [[unlikely]] return; }
L_0013E724:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013E740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013E77C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E760u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013E760u) [[unlikely]] return; }
L_0013E760:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  goto L_0013E780; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E778u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0013E778u) [[unlikely]] return; }
L_0013E778:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013E77C:
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 1;
L_0013E780:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013E784:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E784u | kUnwind; return; } goto L_0013E784; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013E7C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E7DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0013E7DCu) [[unlikely]] return; }
L_0013E7DC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  goto L_0013E808; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E7F0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013E7F0u) [[unlikely]] return; }
L_0013E7F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013E804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E804u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0013E804u) [[unlikely]] return; }
L_0013E804:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0013E808:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013E80C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E80Cu | kUnwind; return; } goto L_0013E80C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E834u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0013E834u) [[unlikely]] return; }
L_0013E834:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013E850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013E878; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[5].w[0] + 8u)));  if (t) { goto L_0013E87C; } }
L_0013E878:
    set32(c.r[16], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0013E87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E884u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0013E884u) [[unlikely]] return; }
L_0013E884:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  goto L_0013E8B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E898u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013E898u) [[unlikely]] return; }
L_0013E898:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013E8AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E8ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0013E8ACu) [[unlikely]] return; }
L_0013E8AC:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0013E8B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E8C0u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 276u, depth + 1u); else { c.pc = 0x0013EB20u; return; } if (c.pc != 0x0013E8C0u) [[unlikely]] return; }
L_0013E8C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013E8E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013E908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[5].w[0] + 8u)));  if (t) { goto L_0013E90C; } }
L_0013E908:
    set32(c.r[16], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0013E90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E914u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0013E914u) [[unlikely]] return; }
L_0013E914:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  goto L_0013E940; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E928u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013E928u) [[unlikely]] return; }
L_0013E928:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013E93C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E93Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0013E93Cu) [[unlikely]] return; }
L_0013E93C:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 1;
L_0013E940:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E950u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 276u, depth + 1u); else { c.pc = 0x0013EB20u; return; } if (c.pc != 0x0013E950u) [[unlikely]] return; }
L_0013E950:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013E970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E984u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0013E984u) [[unlikely]] return; }
L_0013E984:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  goto L_0013E9B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E998u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013E998u) [[unlikely]] return; }
L_0013E998:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0013E9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013E9ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0013E9ACu) [[unlikely]] return; }
L_0013E9AC:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_0013E9B0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013E9B4:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E9B4u | kUnwind; return; } goto L_0013E9B4; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013E9F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 136u), c.r[11].d[0]);  if (t) { goto L_0013EA48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA2Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013EA2Cu) [[unlikely]] return; }
L_0013EA2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  goto L_0013EA4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EA44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0013EA44u) [[unlikely]] return; }
L_0013EA44:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013EA48:
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 1;
L_0013EA4C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013EA50:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EA50u | kUnwind; return; } goto L_0013EA50; } }
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0013EAB8; }
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 8u);  goto L_0013EA94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0013EA9C; } }
L_0013EA94:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 2;
L_0013EA9C:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EAB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 233u, depth + 1u); else { c.pc = 0x0013E570u; return; } if (c.pc != 0x0013EAB4u) [[unlikely]] return; }
L_0013EAB4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0013EAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0013EAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013EB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EAF0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0013EAF0u) [[unlikely]] return; }
L_0013EAF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0013EB10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0013EB08u) [[unlikely]] return; }
L_0013EB08:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013EB0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0013EB10:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013EB20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 10;
L_0013EB48:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EB48u | kUnwind; return; } goto L_0013EB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013EB6Cu) [[unlikely]] return; }
L_0013EB6C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB7Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 313u, depth + 1u); else { c.pc = 0x0012A9B0u; return; } if (c.pc != 0x0013EB7Cu) [[unlikely]] return; }
L_0013EB7C:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 76u)));
    set32(c.r[8], c.r[16].w[0] + c.r[18].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EB98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0013EB98u) [[unlikely]] return; }
L_0013EB98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013EBC0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013EBD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_0013EBDC; } }
L_0013EBD8:
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0013EBDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 37u);  if (t) { goto L_0013EBF8; } }
L_0013EBE4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0013EBF4; }
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0013EBF4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0013EBF8:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EBE4u | kUnwind; return; } goto L_0013EBE4; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013EC10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013EC50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[6].w[0] + 8u)));  if (t) { goto L_0013EC54; } }
L_0013EC50:
    set32(c.r[17], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0013EC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0013EDBC; } }
L_0013EC5C:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 43u);  goto L_0013ED9C; }
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC78u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 349u, depth + 1u); else { c.pc = 0x003B7C50u; return; } if (c.pc != 0x0013EC78u) [[unlikely]] return; }
L_0013EC78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(126ll);  goto L_0013ED8C; }
    c.r[20].d[0] = c.r[19].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EC90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 349u, depth + 1u); else { c.pc = 0x003B7C50u; return; } if (c.pc != 0x0013EC90u) [[unlikely]] return; }
L_0013EC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013ED88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ECA0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 347u, depth + 1u); else { c.pc = 0x003B7C20u; return; } if (c.pc != 0x0013ECA0u) [[unlikely]] return; }
L_0013ECA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[21].d[0] & 255ull;  goto L_0013ECB8; }
    set32(c.r[2], c.r[21].w[0] - 48u);
    c.r[21].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);  if (t) { goto L_0013ED00; } }
L_0013ECB8:
    c.r[2].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;  goto L_0013ECD4; }
    c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] - 32u);  goto L_0013ECEC; }
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 1;
L_0013ECD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013ECF4; } }
    c.r[1].d[0] = c.r[3].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013ECF4; } }
    set32(c.r[2], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_0013ECEC:
    c.r[21].d[0] = c.r[2].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.budget -= 2;
L_0013ECF4:
    set32(c.r[2], c.r[21].w[0] - 55u);
    c.r[21].d[0] = c.r[2].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.budget -= 3;
L_0013ED00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013ED08u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 347u, depth + 1u); else { c.pc = 0x003B7C20u; return; } if (c.pc != 0x0013ED08u) [[unlikely]] return; }
L_0013ED08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[20].d[0] & 255ull;  goto L_0013ED20; }
    set32(c.r[2], c.r[19].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0013ED68; } }
L_0013ED20:
    c.r[2].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;  goto L_0013ED3C; }
    c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] - 32u);  goto L_0013ED54; }
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 1;
L_0013ED3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013ED5C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013ED5C; } }
    set32(c.r[2], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_0013ED54:
    c.r[20].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 2;
L_0013ED5C:
    set32(c.r[2], c.r[20].w[0] - 55u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 3;
L_0013ED68:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[21].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0013ED8C; } }
L_0013ED88:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(126ll);
    c.budget -= 1;
L_0013ED8C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0013EDB0; } }
L_0013ED9C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[3].d[0] << 56;  goto L_0013EDAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0013EDB0; } }
L_0013EDAC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 1;
L_0013EDB0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_0013EDBC:
    set32(c.r[2], c.r[16].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_0013EDDC; }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EC5Cu | kUnwind; return; } goto L_0013EC5C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0013EDDC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0013EE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 3823u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EE1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x0013EE1Cu) [[unlikely]] return; }
L_0013EE1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0013EE70; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EE34u); set32(c.r[5], c.r[5].w[0] - 3818u);  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x0013EE34u) [[unlikely]] return; }
L_0013EE34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013EE6C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EE4Cu); set32(c.r[5], c.r[5].w[0] - 3814u);  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x0013EE4Cu) [[unlikely]] return; }
L_0013EE4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013EE6C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EE64u); set32(c.r[5], c.r[5].w[0] - 3811u);  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x0013EE64u) [[unlikely]] return; }
L_0013EE64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0013EE70; }
L_0013EE6C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013EE70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013EE80:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013EF80; } }
L_0013EEB8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EEC8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0013EEC8u) [[unlikely]] return; }
L_0013EEC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EED8u); set32(c.r[5], c.r[5].w[0] - 3805u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0013EED8u) [[unlikely]] return; }
L_0013EED8:
    c.r[21].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EEECu); c.r[21].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013EEECu) [[unlikely]] return; }
L_0013EEEC:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { st32((c.r[18].w[0]), c.r[17].w[0]);  goto L_0013EFAC; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF08u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0013EF08u) [[unlikely]] return; }
L_0013EF08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF18u); set32(c.r[5], c.r[5].w[0] - 3809u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0013EF18u) [[unlikely]] return; }
L_0013EF18:
    c.r[21].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF2Cu); c.r[21].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013EF2Cu) [[unlikely]] return; }
L_0013EF2C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0013EF74; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF48u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0013EF48u) [[unlikely]] return; }
L_0013EF48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF58u); set32(c.r[5], c.r[5].w[0] - 3807u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0013EF58u) [[unlikely]] return; }
L_0013EF58:
    c.r[21].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EF6Cu); c.r[21].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013EF6Cu) [[unlikely]] return; }
L_0013EF6C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0013EF80; }
L_0013EF74:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013EFAC; } }
L_0013EF80:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0]));  goto L_0013EF98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  if (t) { goto L_0013EFA0; } }
L_0013EF98:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0013EFA0:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013EEB8u | kUnwind; return; } goto L_0013EEB8; }
L_0013EFAC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0]));  goto L_0013EFC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  if (t) { goto L_0013EFCC; } }
L_0013EFC4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0013EFCC:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[17].w[0] - c.r[16].w[0]);  goto L_0013EFDC; }
    st32((c.r[18].w[0]), c.r[17].w[0]);
    set32(c.r[7], c.r[17].w[0] - c.r[16].w[0]);
    c.budget -= 2;
L_0013EFDC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EFECu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0013EFECu) [[unlikely]] return; }
L_0013EFEC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013EFF8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0013EFF8u) [[unlikely]] return; }
L_0013EFF8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F004u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013F004u) [[unlikely]] return; }
L_0013F004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0013F030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F050u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 222u, depth + 1u); else { c.pc = 0x003B68B8u; return; } if (c.pc != 0x0013F050u) [[unlikely]] return; }
L_0013F050:
    st64((c.r[16].w[0]), c.r[2].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F05Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013F05Cu) [[unlikely]] return; }
L_0013F05C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0013F0A4; } }
L_0013F068:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_0013F084; } }
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0013F0A4; }
L_0013F084:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F090u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_00AD(c, 347u, depth + 1u); else { c.pc = 0x003B7C20u; return; } if (c.pc != 0x0013F090u) [[unlikely]] return; }
L_0013F090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F0A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F0B4; } }
L_0013F0A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0013F0A4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F068u | kUnwind; return; } goto L_0013F068; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0013F0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013F0D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F0F0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 220u, depth + 1u); else { c.pc = 0x003B6890u; return; } if (c.pc != 0x0013F0F0u) [[unlikely]] return; }
L_0013F0F0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F0FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013F0FCu) [[unlikely]] return; }
L_0013F0FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013F100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0013F144; } }
L_0013F108:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_0013F124; } }
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0013F144; }
L_0013F124:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F130u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_00AD(c, 347u, depth + 1u); else { c.pc = 0x003B7C20u; return; } if (c.pc != 0x0013F130u) [[unlikely]] return; }
L_0013F130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F154; } }
L_0013F140:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0013F144:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F108u | kUnwind; return; } goto L_0013F108; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0013F154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013F170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F18Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 21u, depth + 1u); else { c.pc = 0x00130290u; return; } if (c.pc != 0x0013F18Cu) [[unlikely]] return; }
L_0013F18C:
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F198u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 343u, depth + 1u); else { c.pc = 0x0013F420u; return; } if (c.pc != 0x0013F198u) [[unlikely]] return; }
L_0013F198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013F1B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F1D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013F1D8u) [[unlikely]] return; }
L_0013F1D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F1E4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0013F1E4u) [[unlikely]] return; }
L_0013F1E4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F1F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 313u, depth + 1u); else { c.pc = 0x0012A9B0u; return; } if (c.pc != 0x0013F1F0u) [[unlikely]] return; }
L_0013F1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0013F250; } }
L_0013F1F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;  goto L_0013F21C; }
    c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] + 32u);  goto L_0013F234; }
    c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 1;
L_0013F21C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F23C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 223ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013F23C; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    c.budget -= 1;
L_0013F234:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 2;
L_0013F23C:
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F24Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 12u, depth + 1u); else { c.pc = 0x0013C120u; return; } if (c.pc != 0x0013F24Cu) [[unlikely]] return; }
L_0013F24C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0013F250:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F1F8u | kUnwind; return; } goto L_0013F1F8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F268u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0013F268u) [[unlikely]] return; }
L_0013F268:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F274u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013F274u) [[unlikely]] return; }
L_0013F274:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013F2A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F2C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013F2C8u) [[unlikely]] return; }
L_0013F2C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F2D4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0013F2D4u) [[unlikely]] return; }
L_0013F2D4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F2E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 313u, depth + 1u); else { c.pc = 0x0012A9B0u; return; } if (c.pc != 0x0013F2E0u) [[unlikely]] return; }
L_0013F2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0013F340; } }
L_0013F2E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;  goto L_0013F30C; }
    c.r[1].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] - 32u);  goto L_0013F324; }
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 1;
L_0013F30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F32C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013F32C; } }
    set32(c.r[2], c.r[3].w[0] - 32u);
    c.budget -= 1;
L_0013F324:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 2;
L_0013F32C:
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F33Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 12u, depth + 1u); else { c.pc = 0x0013C120u; return; } if (c.pc != 0x0013F33Cu) [[unlikely]] return; }
L_0013F33C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0013F340:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F2E8u | kUnwind; return; } goto L_0013F2E8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F358u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0013F358u) [[unlikely]] return; }
L_0013F358:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F364u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013F364u) [[unlikely]] return; }
L_0013F364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0013F390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F3ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013F3ACu) [[unlikely]] return; }
L_0013F3AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0013F3F4; } }
L_0013F3B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_0013F3D4; } }
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0013F3F4; }
L_0013F3D4:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F3E0u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_00AD(c, 347u, depth + 1u); else { c.pc = 0x003B7C20u; return; } if (c.pc != 0x0013F3E0u) [[unlikely]] return; }
L_0013F3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F404; } }
L_0013F3F0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0013F3F4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F3B8u | kUnwind; return; } goto L_0013F3B8; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0013F404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013F420:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F444u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013F444u) [[unlikely]] return; }
L_0013F444:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0013F4AC; } }
L_0013F450:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_0013F46C; } }
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[2], 0u + 45u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0013F4AC; }
L_0013F46C:
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[2], 0u + 46u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013F490; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0013F4A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F4BC; } }
L_0013F490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F498u);  if (depth < kMaxDepth) unit_00AD(c, 347u, depth + 1u); else { c.pc = 0x003B7C20u; return; } if (c.pc != 0x0013F498u) [[unlikely]] return; }
L_0013F498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F4A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F4BC; } }
L_0013F4A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0013F4AC:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] + c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F450u | kUnwind; return; } goto L_0013F450; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013F4BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013F4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[8].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 9;
    if (c.r[8].d[0] == 0ull) { set32(c.r[7], ld32((c.r[5].w[0] + 4u)));  goto L_0013F510; }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[7].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0013F510:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_0013F538; }
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0013F538:
    c.r[1].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013F54C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013F5D0; } }
L_0013F54C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0013F594; } }
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[6], ld32((c.r[5].w[0] + 4u)));  goto L_0013F568; }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0013F568:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 8u)));  goto L_0013F574; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0013F574:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  goto L_0013F580; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0013F580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F588u);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x0013F588u) [[unlikely]] return; }
L_0013F588:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0013F5D0; } }
L_0013F594:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[6], ld32((c.r[5].w[0] + 4u)));  goto L_0013F5A8; }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[6].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0013F5A8:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 8u)));  goto L_0013F5B4; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0013F5B4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  goto L_0013F5C0; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0013F5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F5C8u);  if (depth < kMaxDepth) unit_00AE(c, 259u, depth + 1u); else { c.pc = 0x003BA438u; return; } if (c.pc != 0x0013F5C8u) [[unlikely]] return; }
L_0013F5C8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0013F5D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0013F5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 3796u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F604u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0013F604u) [[unlikely]] return; }
L_0013F604:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F610u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0013F610u) [[unlikely]] return; }
L_0013F610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013F620:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
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
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F664u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 465u, depth + 1u); else { c.pc = 0x0011B6C0u; return; } if (c.pc != 0x0013F664u) [[unlikely]] return; }
L_0013F664:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_0013F688; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F680u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0013F680u) [[unlikely]] return; }
L_0013F680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0013F7BC; } }
L_0013F688:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0013F69C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[19].w[0] + 4u)));  if (t) { goto L_0013F6A8; } }
L_0013F69C:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[22].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0013F6A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6B8u); set32(c.r[5], c.r[5].w[0] - 3824u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0013F6B8u) [[unlikely]] return; }
L_0013F6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0013F738; } }
L_0013F6C0:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6D0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0013F6D0u) [[unlikely]] return; }
L_0013F6D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_0013F6E4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0013F6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6ECu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0013F6ECu) [[unlikely]] return; }
L_0013F6EC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F6F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013F6F8u) [[unlikely]] return; }
L_0013F6F8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[22].w[0]);  if (t) { goto L_0013F710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_0013F714; } }
L_0013F710:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0013F714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F71Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0013F71Cu) [[unlikely]] return; }
L_0013F71C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F730u); c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 465u, depth + 1u); else { c.pc = 0x0011B6C0u; return; } if (c.pc != 0x0013F730u) [[unlikely]] return; }
L_0013F730:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0013F738:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[17].w[0] - c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F6C0u | kUnwind; return; } goto L_0013F6C0; }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[20].w[0]));  goto L_0013F758; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_0013F760; } }
L_0013F758:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0013F760:
    set32(c.r[7], c.r[2].w[0] - c.r[16].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F774u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0013F774u) [[unlikely]] return; }
L_0013F774:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_0013F788; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0013F788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F790u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x0013F790u) [[unlikely]] return; }
L_0013F790:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F79Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013F79Cu) [[unlikely]] return; }
L_0013F79C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F7A8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0013F7A8u) [[unlikely]] return; }
L_0013F7A8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F7B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013F7B4u) [[unlikely]] return; }
L_0013F7B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 2;
L_0013F7BC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0013F7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F7F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 371u, depth + 1u); else { c.pc = 0x0013F810u; return; } if (c.pc != 0x0013F7F4u) [[unlikely]] return; }
L_0013F7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F7FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 376u, depth + 1u); else { c.pc = 0x0013F950u; return; } if (c.pc != 0x0013F7FCu) [[unlikely]] return; }
L_0013F7FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0013F810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013F84C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0013F850; } }
L_0013F84C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0013F850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013F860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013F934; } }
L_0013F860:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0013F874; }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0013F874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_0013F87C; } }
L_0013F87C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0013F8B0; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_0013F898; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0013F898:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F8A4u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AD(c, 348u, depth + 1u); else { c.pc = 0x003B7C38u; return; } if (c.pc != 0x0013F8A4u) [[unlikely]] return; }
L_0013F8A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F87Cu | kUnwind; return; } goto L_0013F87C; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0013F8B0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_0013F8C0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0013F8C0:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F8CCu); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AD(c, 348u, depth + 1u); else { c.pc = 0x003B7C38u; return; } if (c.pc != 0x0013F8CCu) [[unlikely]] return; }
L_0013F8CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 60u)));  goto L_0013F918; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_0013F908; }
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0013F910; } }
L_0013F908:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_0013F910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0013F934; } }
L_0013F918:
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F930u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0013F930u) [[unlikely]] return; }
L_0013F930:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0013F934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013F950:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013F990; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0013F994; } }
L_0013F990:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0013F994:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0013F9A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0013FA5C; } }
L_0013F9A4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 4u)));  goto L_0013F9B8; }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0013F9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0])));  if (t) { goto L_0013F9C4; } }
L_0013F9C0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0013F9C4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_0013F9D4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_0013F9D4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013F9E0u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AD(c, 348u, depth + 1u); else { c.pc = 0x003B7C38u; return; } if (c.pc != 0x0013F9E0u) [[unlikely]] return; }
L_0013F9E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013F9F4; } }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013F9C0u | kUnwind; return; } goto L_0013F9C0; }
L_0013F9F4:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[16].d[0]) { c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 76u)));  goto L_0013FA40; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_0013FA30; }
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0013FA38; } }
L_0013FA30:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 2;
L_0013FA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0013FA5C; } }
L_0013FA40:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA58u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x0013FA58u) [[unlikely]] return; }
L_0013FA58:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0013FA5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013FA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FA98u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 391u, depth + 1u); else { c.pc = 0x0013FBF0u; return; } if (c.pc != 0x0013FA98u) [[unlikely]] return; }
L_0013FA98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FAA4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 384u, depth + 1u); else { c.pc = 0x0013FAD0u; return; } if (c.pc != 0x0013FAA4u) [[unlikely]] return; }
L_0013FAA4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FAB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0013FAB0u) [[unlikely]] return; }
L_0013FAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013FAD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013FB14; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0013FB18; } }
L_0013FB14:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0013FB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013FB34; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0013FB2Cu) [[unlikely]] return; }
L_0013FB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0013FBD4; } }
L_0013FB34:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_0013FB48; }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0013FB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_0013FB50; } }
L_0013FB50:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0013FB84; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_0013FB6C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0013FB6C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FB78u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AD(c, 348u, depth + 1u); else { c.pc = 0x003B7C38u; return; } if (c.pc != 0x0013FB78u) [[unlikely]] return; }
L_0013FB78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FB50u | kUnwind; return; } goto L_0013FB50; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0013FB84:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_0013FB94; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0013FB94:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FBA0u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AD(c, 348u, depth + 1u); else { c.pc = 0x003B7C38u; return; } if (c.pc != 0x0013FBA0u) [[unlikely]] return; }
L_0013FBA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[16].w[0] + 1u);  goto L_0013FBC0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FBB8u); set32(c.r[5], c.r[5].w[0] - 3824u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0013FBB8u) [[unlikely]] return; }
L_0013FBB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FBD0; } }
L_0013FBC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FBD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0013FBD0u) [[unlikely]] return; }
L_0013FBD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0013FBD4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0013FBF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0013FC38; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0013FC3C; } }
L_0013FC38:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0013FC3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0013FC58; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC50u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0013FC50u) [[unlikely]] return; }
L_0013FC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0013FCDC; } }
L_0013FC58:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 4u)));  goto L_0013FC6C; }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0013FC6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0])));  if (t) { goto L_0013FC78; } }
L_0013FC74:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0013FC78:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_0013FC88; }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_0013FC88:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FC94u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AD(c, 348u, depth + 1u); else { c.pc = 0x003B7C38u; return; } if (c.pc != 0x0013FC94u) [[unlikely]] return; }
L_0013FC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013FCA8; } }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FC74u | kUnwind; return; } goto L_0013FC74; }
L_0013FCA8:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[16].d[0]) { set32(c.r[7], c.r[16].w[0] - c.r[17].w[0]);  goto L_0013FCC8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FCC0u); set32(c.r[5], c.r[5].w[0] - 3824u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0013FCC0u) [[unlikely]] return; }
L_0013FCC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013FCD8; } }
L_0013FCC8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FCD8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0013FCD8u) [[unlikely]] return; }
L_0013FCD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0013FCDC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0013FD00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013FD2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FD28u);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0013FD28u) [[unlikely]] return; }
L_0013FD28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0013FD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FD34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0013FD34u) [[unlikely]] return; }
L_0013FD34:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FD40u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0013FD40u) [[unlikely]] return; }
L_0013FD40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FD50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0013FD50u) [[unlikely]] return; }
L_0013FD50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0013FD70:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 120u), c.r[7].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[10].d[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 152u), c.r[11].d[0]);  if (t) { goto L_0013FDB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0013FDC0; } }
L_0013FDB4:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_0013FDC0:
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FDDCu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AF(c, 197u, depth + 1u); else { c.pc = 0x003BDA08u; return; } if (c.pc != 0x0013FDDCu) [[unlikely]] return; }
L_0013FDDC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].sd[0] < 0) { set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);  goto L_0013FDF8; }
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0013FE14; }
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_0013FDF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FE10u); set32(c.r[6], c.r[6].w[0] - 3793u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0013FE10u) [[unlikely]] return; }
L_0013FE10:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0013FE14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0013FE30:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;  goto L_0013FE50; }
    c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] + 32u);  goto L_0013FE68; }
    c.r[2].d[0] = c.r[3].sd[0] < 192ll ? 1ull : 0ull;
    c.budget -= 1;
L_0013FE50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_0013FE78; }
    c.r[1].d[0] = c.r[3].sd[0] < 223ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013FE74; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    c.budget -= 1;
L_0013FE68:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0013FE78; } }
L_0013FE74:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0013FE78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013FE80:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 8u)));  goto L_0013FEA4; }
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[7], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_0013FEA8; } }
L_0013FEA4:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_0013FEA8:
    c.r[1].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0013FEE8; }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    set32(c.r[4], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_0013FED8; } }
L_0013FEC8:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0013FED8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] - c.r[7].w[0]);  if (t) { goto L_0013FEE8; } }
L_0013FED8:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013FEC8u | kUnwind; return; } goto L_0013FEC8; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0013FEE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013FEF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF28u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0013FF28u) [[unlikely]] return; }
L_0013FF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FF30u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 328u, depth + 1u); else { c.pc = 0x0011F4E0u; return; } if (c.pc != 0x0013FF30u) [[unlikely]] return; }
L_0013FF30:
    c.r[16].d[0] = c.r[16].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (t) { [[clang::musttail]] return unit_0010(c, 8u, depth); } }
L_0013FF3C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] << 56;  goto L_0013FF74; }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    set32(c.r[2], 0u + 34u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[18].d[0] = c.r[5].d[0] << 56;  goto L_0013FF68; }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0013FF70; } }
    c.r[18].d[0] = c.r[5].d[0] << 56;
    c.budget -= 1;
L_0013FF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (t) { [[clang::musttail]] return unit_0010(c, 7u, depth); } }
L_0013FF70:
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.budget -= 1;
L_0013FF74:
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0013FFA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] - 1u)));
    set32(c.r[2], 0u + 92u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0013FFA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 7u, depth); } }
L_0013FFA0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_0010(c, 5u, depth); }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0010(c, 4u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFB8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 368u, depth + 1u); else { c.pc = 0x0013F7E0u; return; } if (c.pc != 0x0013FFB8u) [[unlikely]] return; }
L_0013FFB8:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013FFD8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 215u, depth + 1u); else { c.pc = 0x0011E0A0u; return; } if (c.pc != 0x0013FFD8u) [[unlikely]] return; }
L_0013FFD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 104u)));  [[clang::musttail]] return unit_0010(c, 2u, depth); }
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 96u));
    set32(c.r[3], c.r[2].w[0] << 1);
    st8((c.r[29].w[0] + 97u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 6;
    [[clang::musttail]] return unit_0010(c, 1u, depth);
}

}
