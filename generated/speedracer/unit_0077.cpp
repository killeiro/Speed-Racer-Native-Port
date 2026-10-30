#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0077[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0,
    7, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0,
    0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0,
    0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 340, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 367,
    0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0,
    0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0,
    0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    404, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0,
    0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0,
    0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0,
    0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    430, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0,
    437, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444,
    0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0,
    0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0,
    0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0,
    0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0,
    0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0,
    0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0,
    0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0,
    496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 500,
    0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0,
};

void unit_0077(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002DC000;
    case 2u: goto L_002DC014;
    case 3u: goto L_002DC020;
    case 4u: goto L_002DC054;
    case 5u: goto L_002DC05C;
    case 6u: goto L_002DC060;
    case 7u: goto L_002DC080;
    case 8u: goto L_002DC084;
    case 9u: goto L_002DC08C;
    case 10u: goto L_002DC0B4;
    case 11u: goto L_002DC0BC;
    case 12u: goto L_002DC0D8;
    case 13u: goto L_002DC0E0;
    case 14u: goto L_002DC18C;
    case 15u: goto L_002DC198;
    case 16u: goto L_002DC1AC;
    case 17u: goto L_002DC1B4;
    case 18u: goto L_002DC260;
    case 19u: goto L_002DC26C;
    case 20u: goto L_002DC2E4;
    case 21u: goto L_002DC2F0;
    case 22u: goto L_002DC324;
    case 23u: goto L_002DC34C;
    case 24u: goto L_002DC390;
    case 25u: goto L_002DC404;
    case 26u: goto L_002DC41C;
    case 27u: goto L_002DC448;
    case 28u: goto L_002DC458;
    case 29u: goto L_002DC474;
    case 30u: goto L_002DC4CC;
    case 31u: goto L_002DC4F8;
    case 32u: goto L_002DC504;
    case 33u: goto L_002DC538;
    case 34u: goto L_002DC568;
    case 35u: goto L_002DC5B4;
    case 36u: goto L_002DC5F4;
    case 37u: goto L_002DC608;
    case 38u: goto L_002DC634;
    case 39u: goto L_002DC67C;
    case 40u: goto L_002DC6A0;
    case 41u: goto L_002DC718;
    case 42u: goto L_002DC72C;
    case 43u: goto L_002DC75C;
    case 44u: goto L_002DC7B4;
    case 45u: goto L_002DC7C4;
    case 46u: goto L_002DC7E8;
    case 47u: goto L_002DC860;
    case 48u: goto L_002DC874;
    case 49u: goto L_002DC8A0;
    case 50u: goto L_002DC8FC;
    case 51u: goto L_002DC924;
    case 52u: goto L_002DC948;
    case 53u: goto L_002DC968;
    case 54u: goto L_002DC9E0;
    case 55u: goto L_002DC9EC;
    case 56u: goto L_002DC9F8;
    case 57u: goto L_002DCA0C;
    case 58u: goto L_002DCA18;
    case 59u: goto L_002DCA2C;
    case 60u: goto L_002DCA68;
    case 61u: goto L_002DCAE4;
    case 62u: goto L_002DCAEC;
    case 63u: goto L_002DCB08;
    case 64u: goto L_002DCB1C;
    case 65u: goto L_002DCB5C;
    case 66u: goto L_002DCB70;
    case 67u: goto L_002DCB78;
    case 68u: goto L_002DCB94;
    case 69u: goto L_002DCBA8;
    case 70u: goto L_002DCBF8;
    case 71u: goto L_002DCC28;
    case 72u: goto L_002DCC38;
    case 73u: goto L_002DCC7C;
    case 74u: goto L_002DCCC4;
    case 75u: goto L_002DCCD0;
    case 76u: goto L_002DCCDC;
    case 77u: goto L_002DCCF0;
    case 78u: goto L_002DCCFC;
    case 79u: goto L_002DCD30;
    case 80u: goto L_002DCD6C;
    case 81u: goto L_002DCD74;
    case 82u: goto L_002DCD90;
    case 83u: goto L_002DCDA4;
    case 84u: goto L_002DCDE8;
    case 85u: goto L_002DCDF0;
    case 86u: goto L_002DCE0C;
    case 87u: goto L_002DCE20;
    case 88u: goto L_002DCE58;
    case 89u: goto L_002DCE74;
    case 90u: goto L_002DCEA0;
    case 91u: goto L_002DCEB0;
    case 92u: goto L_002DCEEC;
    case 93u: goto L_002DCEF4;
    case 94u: goto L_002DCF10;
    case 95u: goto L_002DCF24;
    case 96u: goto L_002DCF5C;
    case 97u: goto L_002DCF78;
    case 98u: goto L_002DCFA0;
    case 99u: goto L_002DCFC4;
    case 100u: goto L_002DCFCC;
    case 101u: goto L_002DCFE8;
    case 102u: goto L_002DCFFC;
    case 103u: goto L_002DD050;
    case 104u: goto L_002DD098;
    case 105u: goto L_002DD0BC;
    case 106u: goto L_002DD0F0;
    case 107u: goto L_002DD150;
    case 108u: goto L_002DD178;
    case 109u: goto L_002DD198;
    case 110u: goto L_002DD220;
    case 111u: goto L_002DD230;
    case 112u: goto L_002DD280;
    case 113u: goto L_002DD2A0;
    case 114u: goto L_002DD2B4;
    case 115u: goto L_002DD2CC;
    case 116u: goto L_002DD334;
    case 117u: goto L_002DD340;
    case 118u: goto L_002DD37C;
    case 119u: goto L_002DD3EC;
    case 120u: goto L_002DD408;
    case 121u: goto L_002DD444;
    case 122u: goto L_002DD4C0;
    case 123u: goto L_002DD4E0;
    case 124u: goto L_002DD50C;
    case 125u: goto L_002DD528;
    case 126u: goto L_002DD534;
    case 127u: goto L_002DD550;
    case 128u: goto L_002DD570;
    case 129u: goto L_002DD584;
    case 130u: goto L_002DD5B0;
    case 131u: goto L_002DD640;
    case 132u: goto L_002DD660;
    case 133u: goto L_002DD688;
    case 134u: goto L_002DD6BC;
    case 135u: goto L_002DD6D8;
    case 136u: goto L_002DD6F4;
    case 137u: goto L_002DD724;
    case 138u: goto L_002DD76C;
    case 139u: goto L_002DD7A0;
    case 140u: goto L_002DD7CC;
    case 141u: goto L_002DD7D8;
    case 142u: goto L_002DD7E4;
    case 143u: goto L_002DD7F0;
    case 144u: goto L_002DD7FC;
    case 145u: goto L_002DD80C;
    case 146u: goto L_002DD824;
    case 147u: goto L_002DD840;
    case 148u: goto L_002DD864;
    case 149u: goto L_002DD880;
    case 150u: goto L_002DD8A4;
    case 151u: goto L_002DD8B4;
    case 152u: goto L_002DD8EC;
    case 153u: goto L_002DD908;
    case 154u: goto L_002DD920;
    case 155u: goto L_002DD93C;
    case 156u: goto L_002DD960;
    case 157u: goto L_002DD98C;
    case 158u: goto L_002DD998;
    case 159u: goto L_002DD9A4;
    case 160u: goto L_002DD9B0;
    case 161u: goto L_002DD9BC;
    case 162u: goto L_002DD9CC;
    case 163u: goto L_002DD9E0;
    case 164u: goto L_002DD9EC;
    case 165u: goto L_002DDA08;
    case 166u: goto L_002DDA1C;
    case 167u: goto L_002DDA34;
    case 168u: goto L_002DDA4C;
    case 169u: goto L_002DDA60;
    case 170u: goto L_002DDA84;
    case 171u: goto L_002DDA98;
    case 172u: goto L_002DDAA8;
    case 173u: goto L_002DDAD4;
    case 174u: goto L_002DDAEC;
    case 175u: goto L_002DDB00;
    case 176u: goto L_002DDB0C;
    case 177u: goto L_002DDB24;
    case 178u: goto L_002DDB38;
    case 179u: goto L_002DDB60;
    case 180u: goto L_002DDBA0;
    case 181u: goto L_002DDBB0;
    case 182u: goto L_002DDBD8;
    case 183u: goto L_002DDC00;
    case 184u: goto L_002DDC0C;
    case 185u: goto L_002DDC60;
    case 186u: goto L_002DDC74;
    case 187u: goto L_002DDCD0;
    case 188u: goto L_002DDD44;
    case 189u: goto L_002DDD50;
    case 190u: goto L_002DDDA0;
    case 191u: goto L_002DDDBC;
    case 192u: goto L_002DDDC8;
    case 193u: goto L_002DDDF0;
    case 194u: goto L_002DDE08;
    case 195u: goto L_002DDE54;
    case 196u: goto L_002DDE7C;
    case 197u: goto L_002DDE8C;
    case 198u: goto L_002DDEA0;
    case 199u: goto L_002DDEAC;
    case 200u: goto L_002DDEF0;
    case 201u: goto L_002DDF00;
    case 202u: goto L_002DDF14;
    case 203u: goto L_002DDF40;
    case 204u: goto L_002DDF88;
    case 205u: goto L_002DDFB0;
    case 206u: goto L_002DDFBC;
    case 207u: goto L_002DE044;
    case 208u: goto L_002DE050;
    case 209u: goto L_002DE05C;
    case 210u: goto L_002DE080;
    case 211u: goto L_002DE094;
    case 212u: goto L_002DE0B8;
    case 213u: goto L_002DE0D0;
    case 214u: goto L_002DE120;
    case 215u: goto L_002DE168;
    case 216u: goto L_002DE178;
    case 217u: goto L_002DE180;
    case 218u: goto L_002DE1E0;
    case 219u: goto L_002DE214;
    case 220u: goto L_002DE220;
    case 221u: goto L_002DE22C;
    case 222u: goto L_002DE238;
    case 223u: goto L_002DE244;
    case 224u: goto L_002DE250;
    case 225u: goto L_002DE26C;
    case 226u: goto L_002DE290;
    case 227u: goto L_002DE2D0;
    case 228u: goto L_002DE2F0;
    case 229u: goto L_002DE358;
    case 230u: goto L_002DE368;
    case 231u: goto L_002DE440;
    case 232u: goto L_002DE480;
    case 233u: goto L_002DE4A8;
    case 234u: goto L_002DE570;
    case 235u: goto L_002DE5B0;
    case 236u: goto L_002DE5D0;
    case 237u: goto L_002DE5EC;
    case 238u: goto L_002DE600;
    case 239u: goto L_002DE618;
    case 240u: goto L_002DE648;
    case 241u: goto L_002DE660;
    case 242u: goto L_002DE680;
    case 243u: goto L_002DE70C;
    case 244u: goto L_002DE720;
    case 245u: goto L_002DE730;
    case 246u: goto L_002DE74C;
    case 247u: goto L_002DE780;
    case 248u: goto L_002DE79C;
    case 249u: goto L_002DE7A8;
    case 250u: goto L_002DE7C0;
    case 251u: goto L_002DE7D0;
    case 252u: goto L_002DE7E4;
    case 253u: goto L_002DE804;
    case 254u: goto L_002DE820;
    case 255u: goto L_002DE83C;
    case 256u: goto L_002DE848;
    case 257u: goto L_002DE87C;
    case 258u: goto L_002DE890;
    case 259u: goto L_002DE8A8;
    case 260u: goto L_002DE8BC;
    case 261u: goto L_002DE8E0;
    case 262u: goto L_002DE8F0;
    case 263u: goto L_002DE918;
    case 264u: goto L_002DE92C;
    case 265u: goto L_002DE94C;
    case 266u: goto L_002DE970;
    case 267u: goto L_002DE9A0;
    case 268u: goto L_002DE9B8;
    case 269u: goto L_002DEA10;
    case 270u: goto L_002DEA40;
    case 271u: goto L_002DEA5C;
    case 272u: goto L_002DEA80;
    case 273u: goto L_002DEA90;
    case 274u: goto L_002DEAE0;
    case 275u: goto L_002DEB00;
    case 276u: goto L_002DEB34;
    case 277u: goto L_002DEB60;
    case 278u: goto L_002DEB70;
    case 279u: goto L_002DEB84;
    case 280u: goto L_002DEB90;
    case 281u: goto L_002DEBA4;
    case 282u: goto L_002DEBC0;
    case 283u: goto L_002DEBDC;
    case 284u: goto L_002DEC40;
    case 285u: goto L_002DEC50;
    case 286u: goto L_002DEC60;
    case 287u: goto L_002DEC84;
    case 288u: goto L_002DEC94;
    case 289u: goto L_002DECA0;
    case 290u: goto L_002DECB0;
    case 291u: goto L_002DECF4;
    case 292u: goto L_002DED08;
    case 293u: goto L_002DED18;
    case 294u: goto L_002DED2C;
    case 295u: goto L_002DED3C;
    case 296u: goto L_002DED50;
    case 297u: goto L_002DED60;
    case 298u: goto L_002DED74;
    case 299u: goto L_002DED84;
    case 300u: goto L_002DED98;
    case 301u: goto L_002DEDA8;
    case 302u: goto L_002DEDBC;
    case 303u: goto L_002DEDCC;
    case 304u: goto L_002DEDD4;
    case 305u: goto L_002DEDE4;
    case 306u: goto L_002DEDEC;
    case 307u: goto L_002DEE18;
    case 308u: goto L_002DEE28;
    case 309u: goto L_002DEE44;
    case 310u: goto L_002DEE58;
    case 311u: goto L_002DEE68;
    case 312u: goto L_002DEEA4;
    case 313u: goto L_002DEEB8;
    case 314u: goto L_002DEEC8;
    case 315u: goto L_002DEEE4;
    case 316u: goto L_002DEEF8;
    case 317u: goto L_002DEF08;
    case 318u: goto L_002DEF24;
    case 319u: goto L_002DEF38;
    case 320u: goto L_002DEF48;
    case 321u: goto L_002DEF64;
    case 322u: goto L_002DEF78;
    case 323u: goto L_002DEF88;
    case 324u: goto L_002DEFA4;
    case 325u: goto L_002DEFB8;
    case 326u: goto L_002DEFC8;
    case 327u: goto L_002DEFE4;
    case 328u: goto L_002DEFF8;
    case 329u: goto L_002DF008;
    case 330u: goto L_002DF024;
    case 331u: goto L_002DF034;
    case 332u: goto L_002DF060;
    case 333u: goto L_002DF098;
    case 334u: goto L_002DF0A0;
    case 335u: goto L_002DF0B0;
    case 336u: goto L_002DF0C0;
    case 337u: goto L_002DF0D0;
    case 338u: goto L_002DF0D8;
    case 339u: goto L_002DF0E8;
    case 340u: goto L_002DF104;
    case 341u: goto L_002DF108;
    case 342u: goto L_002DF110;
    case 343u: goto L_002DF154;
    case 344u: goto L_002DF15C;
    case 345u: goto L_002DF16C;
    case 346u: goto L_002DF188;
    case 347u: goto L_002DF194;
    case 348u: goto L_002DF1A0;
    case 349u: goto L_002DF1B4;
    case 350u: goto L_002DF1C4;
    case 351u: goto L_002DF1D4;
    case 352u: goto L_002DF1F0;
    case 353u: goto L_002DF200;
    case 354u: goto L_002DF220;
    case 355u: goto L_002DF234;
    case 356u: goto L_002DF244;
    case 357u: goto L_002DF250;
    case 358u: goto L_002DF2A4;
    case 359u: goto L_002DF2D4;
    case 360u: goto L_002DF2F4;
    case 361u: goto L_002DF304;
    case 362u: goto L_002DF320;
    case 363u: goto L_002DF334;
    case 364u: goto L_002DF344;
    case 365u: goto L_002DF358;
    case 366u: goto L_002DF368;
    case 367u: goto L_002DF37C;
    case 368u: goto L_002DF38C;
    case 369u: goto L_002DF3A0;
    case 370u: goto L_002DF3B0;
    case 371u: goto L_002DF3C4;
    case 372u: goto L_002DF3D4;
    case 373u: goto L_002DF3E8;
    case 374u: goto L_002DF3F8;
    case 375u: goto L_002DF40C;
    case 376u: goto L_002DF41C;
    case 377u: goto L_002DF438;
    case 378u: goto L_002DF448;
    case 379u: goto L_002DF464;
    case 380u: goto L_002DF478;
    case 381u: goto L_002DF488;
    case 382u: goto L_002DF4A4;
    case 383u: goto L_002DF4B4;
    case 384u: goto L_002DF4D0;
    case 385u: goto L_002DF4E4;
    case 386u: goto L_002DF4F4;
    case 387u: goto L_002DF510;
    case 388u: goto L_002DF520;
    case 389u: goto L_002DF53C;
    case 390u: goto L_002DF550;
    case 391u: goto L_002DF560;
    case 392u: goto L_002DF57C;
    case 393u: goto L_002DF58C;
    case 394u: goto L_002DF5A8;
    case 395u: goto L_002DF5BC;
    case 396u: goto L_002DF5CC;
    case 397u: goto L_002DF5E8;
    case 398u: goto L_002DF5F8;
    case 399u: goto L_002DF614;
    case 400u: goto L_002DF628;
    case 401u: goto L_002DF638;
    case 402u: goto L_002DF654;
    case 403u: goto L_002DF664;
    case 404u: goto L_002DF680;
    case 405u: goto L_002DF694;
    case 406u: goto L_002DF6A4;
    case 407u: goto L_002DF6AC;
    case 408u: goto L_002DF6BC;
    case 409u: goto L_002DF738;
    case 410u: goto L_002DF774;
    case 411u: goto L_002DF784;
    case 412u: goto L_002DF7A0;
    case 413u: goto L_002DF7B4;
    case 414u: goto L_002DF7C4;
    case 415u: goto L_002DF7E0;
    case 416u: goto L_002DF7F4;
    case 417u: goto L_002DF804;
    case 418u: goto L_002DF820;
    case 419u: goto L_002DF834;
    case 420u: goto L_002DF844;
    case 421u: goto L_002DF860;
    case 422u: goto L_002DF874;
    case 423u: goto L_002DF884;
    case 424u: goto L_002DF8A0;
    case 425u: goto L_002DF8B4;
    case 426u: goto L_002DF8C4;
    case 427u: goto L_002DF8E0;
    case 428u: goto L_002DF910;
    case 429u: goto L_002DF970;
    case 430u: goto L_002DF980;
    case 431u: goto L_002DF994;
    case 432u: goto L_002DF9A4;
    case 433u: goto L_002DF9B8;
    case 434u: goto L_002DF9C8;
    case 435u: goto L_002DF9DC;
    case 436u: goto L_002DF9EC;
    case 437u: goto L_002DFA00;
    case 438u: goto L_002DFA10;
    case 439u: goto L_002DFA24;
    case 440u: goto L_002DFA34;
    case 441u: goto L_002DFA50;
    case 442u: goto L_002DFA5C;
    case 443u: goto L_002DFA6C;
    case 444u: goto L_002DFA7C;
    case 445u: goto L_002DFA88;
    case 446u: goto L_002DFAA4;
    case 447u: goto L_002DFAB4;
    case 448u: goto L_002DFABC;
    case 449u: goto L_002DFACC;
    case 450u: goto L_002DFADC;
    case 451u: goto L_002DFAE4;
    case 452u: goto L_002DFAEC;
    case 453u: goto L_002DFB0C;
    case 454u: goto L_002DFB30;
    case 455u: goto L_002DFB40;
    case 456u: goto L_002DFB5C;
    case 457u: goto L_002DFB74;
    case 458u: goto L_002DFB84;
    case 459u: goto L_002DFB90;
    case 460u: goto L_002DFB9C;
    case 461u: goto L_002DFBBC;
    case 462u: goto L_002DFBF4;
    case 463u: goto L_002DFC08;
    case 464u: goto L_002DFC18;
    case 465u: goto L_002DFC34;
    case 466u: goto L_002DFC48;
    case 467u: goto L_002DFC58;
    case 468u: goto L_002DFC74;
    case 469u: goto L_002DFC88;
    case 470u: goto L_002DFC98;
    case 471u: goto L_002DFCB4;
    case 472u: goto L_002DFCC8;
    case 473u: goto L_002DFCD8;
    case 474u: goto L_002DFCF4;
    case 475u: goto L_002DFD08;
    case 476u: goto L_002DFD18;
    case 477u: goto L_002DFD34;
    case 478u: goto L_002DFD48;
    case 479u: goto L_002DFD58;
    case 480u: goto L_002DFD74;
    case 481u: goto L_002DFDB0;
    case 482u: goto L_002DFDC0;
    case 483u: goto L_002DFE08;
    case 484u: goto L_002DFE18;
    case 485u: goto L_002DFE34;
    case 486u: goto L_002DFE48;
    case 487u: goto L_002DFE58;
    case 488u: goto L_002DFE78;
    case 489u: goto L_002DFE84;
    case 490u: goto L_002DFE90;
    case 491u: goto L_002DFE9C;
    case 492u: goto L_002DFEA8;
    case 493u: goto L_002DFEB4;
    case 494u: goto L_002DFEC0;
    case 495u: goto L_002DFEDC;
    case 496u: goto L_002DFF00;
    case 497u: goto L_002DFF34;
    case 498u: goto L_002DFF44;
    case 499u: goto L_002DFF60;
    case 500u: goto L_002DFF7C;
    case 501u: goto L_002DFFA0;
    case 502u: goto L_002DFFD4;
    case 503u: goto L_002DFFE4;
    default: bad_entry(c, 0x002DC000u); return;
    }
L_002DC000:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_002DC048; }
    set32(c.r[4], c.r[16].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC014u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DC014u) [[unlikely]] return; }
L_002DC014:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DC038; } }
L_002DC020:
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002DC038:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC020u | kUnwind; return; } goto L_002DC020; }
L_002DC048:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC054u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DC054u) [[unlikely]] return; }
L_002DC054:
    st32((c.r[19].w[0]), c.r[22].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002DC05C:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_002DC060:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 8;
L_002DC080:
    c.r[2].d[0] = c.r[17].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002DC084:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[23].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBF84u | kUnwind; return; } [[clang::musttail]] return unit_0076(c, 515u, depth); }
L_002DC08C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBF54u | kUnwind; return; } [[clang::musttail]] return unit_0076(c, 514u, depth); }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC0B4u); set32(c.r[7], c.r[7].w[0] - 7472u);  if (depth < kMaxDepth) unit_00AE(c, 24u, depth + 1u); else { c.pc = 0x003B83F8u; return; } if (c.pc != 0x002DC0B4u) [[unlikely]] return; }
L_002DC0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002DC290; } }
L_002DC0BC:
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DC150; } }
L_002DC0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[4].w[0] << 1);  if (t) { goto L_002DC0E0; } }
L_002DC0E0:
    c.r[1].d[0] = c.r[5].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC114; } }
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[8], c.r[5].w[0] << 1);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[7].d[0] = ld16((c.r[7].w[0]));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC0E0u | kUnwind; return; } goto L_002DC0E0; }
L_002DC114:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[10].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002DC160; }
    set32(c.r[6], ld32((c.r[19].w[0])));
    set32(c.r[8], c.r[5].w[0] << 1);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[7].d[0] = ld16((c.r[7].w[0]));
    c.budget -= 9;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002DC14C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC160; } }
L_002DC14C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002DC150:
    c.r[6].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[10], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC0D8u | kUnwind; return; } goto L_002DC0D8; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002DC160:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_002DC1A0; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_002DC2A4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_002DC190; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002DC18C; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC18Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DC18Cu) [[unlikely]] return; }
L_002DC18C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002DC190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC198u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DC198u) [[unlikely]] return; }
L_002DC198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC2A0; } }
L_002DC1A0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DC224; } }
L_002DC1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[4].w[0] << 1);  if (t) { goto L_002DC1B4; } }
L_002DC1B4:
    c.r[1].d[0] = c.r[5].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DC1E8; } }
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[8], c.r[5].w[0] << 1);
    set32(c.r[7], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[7].d[0] = ld16((c.r[7].w[0]));
    c.r[6].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC1B4u | kUnwind; return; } goto L_002DC1B4; }
L_002DC1E8:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[10].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002DC234; }
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[8], c.r[5].w[0] << 1);
    set32(c.r[7], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[7].d[0] = ld16((c.r[7].w[0]));
    c.budget -= 9;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002DC220; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC234; } }
L_002DC220:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002DC224:
    c.r[6].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[10], ld32((c.r[19].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC1ACu | kUnwind; return; } goto L_002DC1AC; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002DC234:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002DC290; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  goto L_002DC270; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002DC264; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DC260; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC260u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DC260u) [[unlikely]] return; }
L_002DC260:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DC264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC26Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DC26Cu) [[unlikely]] return; }
L_002DC26C:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_002DC270:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 8;
L_002DC290:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC0BCu | kUnwind; return; } goto L_002DC0BC; }
L_002DC2A0:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_002DC2A4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_002DC348; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_002DC330; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002DC2C8; }
    set32(c.r[16], c.r[4].w[0] << 1);
    c.budget -= 1;
L_002DC2C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_002DC32C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002DC318; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC2E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DC2E4u) [[unlikely]] return; }
L_002DC2E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DC308; } }
L_002DC2F0:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_002DC308:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC2F0u | kUnwind; return; } goto L_002DC2F0; }
L_002DC318:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC324u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DC324u) [[unlikely]] return; }
L_002DC324:
    st32((c.r[21].w[0]), c.r[17].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_002DC32C:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_002DC330:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[19].w[0]);
    c.budget -= 6;
L_002DC348:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002DC34C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 196u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DBEC8u | kUnwind; return; } [[clang::musttail]] return unit_0076(c, 511u, depth); }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_002DC390:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 15488u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 12u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 284u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 283u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(148ll);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 80u));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 37u);
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC404u); st32((c.r[29].w[0] + 300u), 0u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DC404u) [[unlikely]] return; }
L_002DC404:
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC41Cu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002DC41Cu) [[unlikely]] return; }
L_002DC41C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15456u);
    set32(c.r[5], c.r[29].w[0] + 332u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 328u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[29].w[0] + 312u), 0u);
    st32((c.r[29].w[0] + 316u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC448u); st32((c.r[29].w[0] + 320u), 0u);  if (depth < kMaxDepth) unit_0069(c, 415u, depth + 1u); else { c.pc = 0x002A75B0u; return; } if (c.pc != 0x002DC448u) [[unlikely]] return; }
L_002DC448:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_002DCBD8; } }
L_002DC458:
    c.r[5].d[0] = c.r[30].d[0] & 65535ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 304u);
    set32(c.r[7], c.r[29].w[0] + 306u);
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC474u); set32(c.r[8], c.r[29].w[0] + 308u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DC474u) [[unlikely]] return; }
L_002DC474:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 306u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 304u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002DC498; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 308u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002DC498; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DC498:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002DC4B0; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 308u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002DC4B0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DC4B0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[30], c.r[30].w[0] + 1u);  goto L_002DCBD8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC4CCu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 103u, depth + 1u); else { c.pc = 0x002DD050u; return; } if (c.pc != 0x002DC4CCu) [[unlikely]] return; }
L_002DC4CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_002DCBC0; }
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 4;
L_002DC4F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002DC51C; } }
L_002DC504:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_002DC51C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[28].w[0] - 32640u));  if (t) { goto L_002DC530; } }
L_002DC51C:
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC504u | kUnwind; return; } goto L_002DC504; }
    c.r[2].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 2;
L_002DC530:
    st32((c.r[29].w[0] + 236u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_002DC538:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);  goto L_002DC550; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC590; } }
L_002DC550:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002DC55C; } }
    breakpoint(c, 0x002DC558u);
    c.budget -= 1;
L_002DC55C:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 1u);  if (t) { goto L_002DC580; } }
L_002DC568:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002DC580; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC590; } }
L_002DC580:
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC568u | kUnwind; return; } goto L_002DC568; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DC590:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002DC5A4; } }
    c.f[1] = c.f[0];
    st32((c.r[29].w[0] + 236u), c.r[3].w[0]);
    c.budget -= 2;
L_002DC5A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC538u | kUnwind; return; } goto L_002DC538; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 256u), 0u);  if (t) { goto L_002DCAB0; } }
L_002DC5B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[17].d[0] = ld16((c.r[4].w[0] + 304u));  if (t) { goto L_002DC63C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002DC5D8; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002DC5D8:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[17].w[0] << 1);  goto L_002DC640; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002DC628; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC5F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DC5F4u) [[unlikely]] return; }
L_002DC5F4:
    set32(c.r[5], ld32((c.r[29].w[0] + 312u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002DC61C; } }
L_002DC608:
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 5;
L_002DC61C:
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC608u | kUnwind; return; } goto L_002DC608; }
L_002DC628:
    set32(c.r[4], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC634u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DC634u) [[unlikely]] return; }
L_002DC634:
    st32((c.r[29].w[0] + 312u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[16].w[0]);
    c.budget -= 2;
L_002DC63C:
    set32(c.r[3], c.r[17].w[0] << 1);
    c.budget -= 1;
L_002DC640:
    set32(c.r[5], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[23], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002DC788; } }
L_002DC67C:
    set32(c.r[5], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_002DC6C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC6D8; } }
L_002DC6A0:
    set32(c.r[4], c.r[7].w[0] << 3);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002DC6C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC6D8; } }
L_002DC6C8:
    c.r[2].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[23].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC6A0u | kUnwind; return; } goto L_002DC6A0; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002DC6D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] - 1u);  goto L_002DC788; }
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 320u)));  goto L_002DC76C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002DC6FC; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002DC6FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002DC768; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 232u), 0u);  goto L_002DC750; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DC718u) [[unlikely]] return; }
L_002DC718:
    set32(c.r[5], ld32((c.r[29].w[0] + 312u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (t) { goto L_002DC744; } }
L_002DC72C:
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_002DC744:
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC72Cu | kUnwind; return; } goto L_002DC72C; }
L_002DC750:
    set32(c.r[4], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC75Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DC75Cu) [[unlikely]] return; }
L_002DC75C:
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[29].w[0] + 316u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    c.budget -= 3;
L_002DC768:
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002DC76C:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 320u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 7;
L_002DC788:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 208u)));  goto L_002DC8CC; }
    set32(c.r[3], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[2], c.r[21].w[0] << 1);
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = ld16((c.r[2].w[0] - 2u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC7B4u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 393u, depth + 1u); else { c.pc = 0x002A7080u; return; } if (c.pc != 0x002DC7B4u) [[unlikely]] return; }
L_002DC7B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[22].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC67Cu | kUnwind; return; } goto L_002DC67C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DC8C8; } }
L_002DC7C4:
    set32(c.r[5], ld32((c.r[23].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[2].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_002DC810; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC820; } }
L_002DC7E8:
    set32(c.r[4], c.r[7].w[0] << 3);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002DC810; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DC820; } }
L_002DC810:
    c.r[2].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[23].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC7E8u | kUnwind; return; } goto L_002DC7E8; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002DC820:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002DC8C8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 320u)));  goto L_002DC8AC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002DC844; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002DC844:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002DC8A8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_002DC894; }
    set32(c.r[4], c.r[16].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC860u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DC860u) [[unlikely]] return; }
L_002DC860:
    set32(c.r[5], ld32((c.r[29].w[0] + 312u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002DC888; } }
L_002DC874:
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 5;
L_002DC888:
    c.r[2].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC874u | kUnwind; return; } goto L_002DC874; }
L_002DC894:
    set32(c.r[4], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC8A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DC8A0u) [[unlikely]] return; }
L_002DC8A0:
    st32((c.r[29].w[0] + 312u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[16].w[0]);
    c.budget -= 2;
L_002DC8A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002DC8AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 320u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 7;
L_002DC8C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 1;
L_002DC8CC:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 312u)));  goto L_002DC908; }
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].d[0] = ld16((c.r[2].w[0] + 2u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC8FCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 393u, depth + 1u); else { c.pc = 0x002A7080u; return; } if (c.pc != 0x002DC8FCu) [[unlikely]] return; }
L_002DC8FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[21].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC7C4u | kUnwind; return; } goto L_002DC7C4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 1;
L_002DC908:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[8], ld32((c.r[29].w[0] + 320u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = 0u;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002DCA94; } }
L_002DC924:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[10], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DC9B0; } }
L_002DC948:
    set32(c.r[9], c.r[5].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[7].w[0])));
    set32(c.r[7], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 6;
    if (c.r[7].d[0] != c.r[9].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002DC9B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_002DC994; } }
L_002DC968:
    set32(c.r[10], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[5].w[0] << 3);
    set32(c.r[9], c.r[10].w[0] << 3);
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[10], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0])));
    st32((c.r[9].w[0]), c.r[7].w[0]);
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    st32((c.r[9].w[0] + 4u), c.f[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 11;
L_002DC994:
    set32(c.r[9], c.r[7].w[0] - 1u);
    c.r[7].d[0] = c.r[5].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[11], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC968u | kUnwind; return; } goto L_002DC968; }
    st32((c.r[3].w[0] + 8u), c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DC9C0; } }
L_002DC9B0:
    c.r[7].d[0] = c.r[5].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC948u | kUnwind; return; } goto L_002DC948; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DC9C0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_002DCA94; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[9], ld32((c.r[3].w[0] + 8u)));  goto L_002DCA20; }
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DC9E0u) [[unlikely]] return; }
L_002DC9E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DC9ECu) [[unlikely]] return; }
L_002DC9EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DC9F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DC9F8u) [[unlikely]] return; }
L_002DC9F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[2], c.r[2].w[0] + 15456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA0Cu); st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 98u, depth + 1u); else { c.pc = 0x002DCFA0u; return; } if (c.pc != 0x002DCA0Cu) [[unlikely]] return; }
L_002DCA0C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCA18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 91u, depth + 1u); else { c.pc = 0x002DCEB0u; return; } if (c.pc != 0x002DCA18u) [[unlikely]] return; }
L_002DCA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DCD00; } }
L_002DCA20:
    c.f[3] = c.f[2];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002DCA40; } }
L_002DCA2C:
    set32(c.r[7], c.r[10].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 5;
L_002DCA40:
    c.r[5].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCA2Cu | kUnwind; return; } goto L_002DCA2C; }
    fpu_div(c, 3u, c.f[1], c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002DCA80; } }
L_002DCA68:
    set32(c.r[7], c.r[9].w[0] << 3);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_002DCA80:
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[5].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCA68u | kUnwind; return; } goto L_002DCA68; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_002DCA94:
    c.r[3].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC924u | kUnwind; return; } goto L_002DC924; }
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[29].w[0] + 320u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 4;
L_002DCAB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC5B4u | kUnwind; return; } goto L_002DC5B4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DCB64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DCB34; } }
L_002DCAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] << 2);  if (t) { goto L_002DCB1C; } }
L_002DCAEC:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCB08u) [[unlikely]] return; }
L_002DCB08:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB1Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCB1Cu) [[unlikely]] return; }
L_002DCB1C:
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCAECu | kUnwind; return; } goto L_002DCAEC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DCB34:
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCAE4u | kUnwind; return; } goto L_002DCAE4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB5Cu); st32((c.r[29].w[0] + 300u), 0u);  if (depth < kMaxDepth) unit_0077(c, 103u, depth + 1u); else { c.pc = 0x002DD050u; return; } if (c.pc != 0x002DCB5Cu) [[unlikely]] return; }
L_002DCB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 296u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC4F8u | kUnwind; return; } goto L_002DC4F8; } }
L_002DCB64:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DCBC0; } }
L_002DCB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] << 2);  if (t) { goto L_002DCBA8; } }
L_002DCB78:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCB94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCB94u) [[unlikely]] return; }
L_002DCB94:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCBA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCBA8u) [[unlikely]] return; }
L_002DCBA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCB78u | kUnwind; return; } goto L_002DCB78; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DCBC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCB70u | kUnwind; return; } goto L_002DCB70; } }
    st32((c.r[29].w[0] + 300u), 0u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 2;
L_002DCBD8:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[30].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DC458u | kUnwind; return; } goto L_002DC458; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 283u));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DCCA8; } }
L_002DCBF8:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002DCCA8; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCC28u); set32(c.r[7], c.r[7].w[0] - 6800u);  if (depth < kMaxDepth) unit_00AE(c, 24u, depth + 1u); else { c.pc = 0x003B83F8u; return; } if (c.pc != 0x002DCC28u) [[unlikely]] return; }
L_002DCC28:
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.f[1] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DCC4C; } }
L_002DCC38:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
L_002DCC4C:
    c.r[2].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCC38u | kUnwind; return; } goto L_002DCC38; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DCC94; } }
L_002DCC7C:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_002DCC94:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCC7Cu | kUnwind; return; } goto L_002DCC7C; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002DCCA8:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCBF8u | kUnwind; return; } goto L_002DCBF8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCCC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DCCC4u) [[unlikely]] return; }
L_002DCCC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCCD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DCCD0u) [[unlikely]] return; }
L_002DCCD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCCDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DCCDCu) [[unlikely]] return; }
L_002DCCDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[2], c.r[2].w[0] + 15456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCCF0u); st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 98u, depth + 1u); else { c.pc = 0x002DCFA0u; return; } if (c.pc != 0x002DCCF0u) [[unlikely]] return; }
L_002DCCF0:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCCFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 91u, depth + 1u); else { c.pc = 0x002DCEB0u; return; } if (c.pc != 0x002DCCFCu) [[unlikely]] return; }
L_002DCCFC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DCD00:
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
L_002DCD30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DCE74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15456u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002DCDBC; } }
L_002DCD6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_002DCDA4; } }
L_002DCD74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCD90u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCD90u) [[unlikely]] return; }
L_002DCD90:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCDA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCDA4u) [[unlikely]] return; }
L_002DCDA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCD74u | kUnwind; return; } goto L_002DCD74; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002DCDBC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCD6Cu | kUnwind; return; } goto L_002DCD6C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_002DCE58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15488u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002DCE38; } }
L_002DCDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_002DCE20; } }
L_002DCDF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE0Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCE0Cu) [[unlikely]] return; }
L_002DCE0C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCE20u) [[unlikely]] return; }
L_002DCE20:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCDF0u | kUnwind; return; } goto L_002DCDF0; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002DCE38:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCDE8u | kUnwind; return; } goto L_002DCDE8; } }
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DCE58u) [[unlikely]] return; }
L_002DCE58:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002DCE78; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCE74u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DCE74u) [[unlikely]] return; }
L_002DCE74:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DCE78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DCEA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DCEB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002DCF78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15488u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_002DCF3C; } }
L_002DCEEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] << 2);  if (t) { goto L_002DCF24; } }
L_002DCEF4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCF10u) [[unlikely]] return; }
L_002DCF10:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF24u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCF24u) [[unlikely]] return; }
L_002DCF24:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCEF4u | kUnwind; return; } goto L_002DCEF4; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002DCF3C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCEECu | kUnwind; return; } goto L_002DCEEC; } }
    st32((c.r[20].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DCF5Cu) [[unlikely]] return; }
L_002DCF5C:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_002DCF7C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCF78u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DCF78u) [[unlikely]] return; }
L_002DCF78:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_002DCF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DCFA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DD014; } }
L_002DCFC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { goto L_002DCFFC; } }
L_002DCFCC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFE8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCFE8u) [[unlikely]] return; }
L_002DCFE8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DCFFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DCFFCu) [[unlikely]] return; }
L_002DCFFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCFCCu | kUnwind; return; } goto L_002DCFCC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DD014:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DCFC4u | kUnwind; return; } goto L_002DCFC4; } }
    st32((c.r[18].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002DD050:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], c.r[17].w[0] << 1);
    c.budget -= 18;
L_002DD098:
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[20], c.r[23].w[0] + c.r[3].w[0]);
    set32(c.r[30], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DD1C4; } }
L_002DD0BC:
    set32(c.r[6], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[21], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[21].w[0], c.r[3].w[0]);  if (t) { goto L_002DD0DC; } }
    breakpoint(c, 0x002DD0D8u);
    c.budget -= 1;
L_002DD0DC:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0])));  if (t) { goto L_002DD104; } }
L_002DD0F0:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[6].w[0])));  goto L_002DD104; }
    c.f[21] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002DD110; } }
L_002DD104:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD0F0u | kUnwind; return; } goto L_002DD0F0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DD110:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002DD12C; }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002DD1C4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002DD12C:
    c.f[20] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[21].w[0], c.r[3].w[0]);  if (t) { goto L_002DD13C; } }
    breakpoint(c, 0x002DD138u);
    c.budget -= 1;
L_002DD13C:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[19], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002DD160; } }
L_002DD150:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002DD160; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[20]);  if (t) { goto L_002DD1C0; } }
L_002DD160:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD150u | kUnwind; return; } goto L_002DD150; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD178u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD178u) [[unlikely]] return; }
L_002DD178:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD198u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DD198u) [[unlikely]] return; }
L_002DD198:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0]), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 10;
L_002DD1C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DD1C4:
    c.r[3].d[0] = c.r[16].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD0BCu | kUnwind; return; } goto L_002DD0BC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD098u | kUnwind; return; } goto L_002DD098; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002DD220:
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[12]);  c.pc = t; return; }
L_002DD230:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[21].w[0] << 1);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD280u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002DD280u) [[unlikely]] return; }
L_002DD280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11072u);
    set32(c.r[6], c.r[6].w[0] - 18656u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD2A0u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002DD2A0u) [[unlikely]] return; }
L_002DD2A0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[23].w[0] + 84u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_002DD3C8; } }
L_002DD2B4:
    set32(c.r[2], ld32((c.r[23].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002DD3B4; } }
L_002DD2CC:
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    c.f[20] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + 4u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[17].w[0] + 8u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[3].d[0]) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  goto L_002DD38C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_002DD318; }
    set32(c.r[16], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002DD318:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002DD388; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002DD370; }
    set32(c.r[4], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD334u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DD334u) [[unlikely]] return; }
L_002DD334:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DD360; } }
L_002DD340:
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 8;
L_002DD360:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD340u | kUnwind; return; } goto L_002DD340; }
L_002DD370:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD37Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DD37Cu) [[unlikely]] return; }
L_002DD37C:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    st32((c.r[17].w[0]), c.r[18].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 3;
L_002DD388:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002DD38C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    c.budget -= 10;
L_002DD3B4:
    c.r[2].d[0] = ld16((c.r[30].w[0] + 84u));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 80u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD2CCu | kUnwind; return; } goto L_002DD2CC; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002DD3C8:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD2B4u | kUnwind; return; } goto L_002DD2B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = 0u;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DD470; } }
L_002DD3EC:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[3] = c.f[2];  if (t) { goto L_002DD41C; } }
L_002DD408:
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 5;
L_002DD41C:
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD408u | kUnwind; return; } goto L_002DD408; }
    fpu_div(c, 3u, c.f[1], c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DD45C; } }
L_002DD444:
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_002DD45C:
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD444u | kUnwind; return; } goto L_002DD444; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002DD470:
    c.r[2].d[0] = c.r[5].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD3ECu | kUnwind; return; } goto L_002DD3EC; }
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002DD4C0:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_002DD4E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DD550; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD50Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0072(c, 373u, depth + 1u); else { c.pc = 0x002CB250u; return; } if (c.pc != 0x002DD50Cu) [[unlikely]] return; }
L_002DD50C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 7712u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD528u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002DD528u) [[unlikely]] return; }
L_002DD528:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD534u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002DD534u) [[unlikely]] return; }
L_002DD534:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002DD554; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD550u); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DD550u) [[unlikely]] return; }
L_002DD550:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DD554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DD570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD584u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002DD584u) [[unlikely]] return; }
L_002DD584:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 15376u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DD5B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 28u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DD5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD5E0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 30u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 30u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = ld16((c.r[18].w[0] + 32u));  goto L_002DD5F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD5F8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 32u));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[3].d[0] = ld16((c.r[18].w[0] + 34u));  goto L_002DD60C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD60C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 34u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].d[0] = ld16((c.r[18].w[0] + 36u));  goto L_002DD620; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD620:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], c.r[4].w[0] << 1);  goto L_002DD634; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD634:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD640u); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x002DD640u) [[unlikely]] return; }
L_002DD640:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 28u));  goto L_002DD650; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD650:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD660u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x002DD660u) [[unlikely]] return; }
L_002DD660:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 36u));  goto L_002DD670; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD670:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD688u); set32(c.r[6], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x002DD688u) [[unlikely]] return; }
L_002DD688:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 34u));  goto L_002DD698; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD698:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_002DD6CC; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 30u));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6BCu); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x002DD6BCu) [[unlikely]] return; }
L_002DD6BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  goto L_002DD738; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD6CC:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD6D8u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x002DD6D8u) [[unlikely]] return; }
L_002DD6D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = ld16((c.r[18].w[0] + 34u));  goto L_002DD6E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD6E8:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DD708; } }
L_002DD6F4:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002DD708:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD6F4u | kUnwind; return; } goto L_002DD6F4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD724u); set32(c.r[6], c.r[6].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x002DD724u) [[unlikely]] return; }
L_002DD724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DD734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD734:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_002DD738:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002DD75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD75C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002DD780; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD76Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x002DD76Cu) [[unlikely]] return; }
L_002DD76C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DD77C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DD780; } }
L_002DD77C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002DD780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DD7A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 28u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7CCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002DD7CCu) [[unlikely]] return; }
L_002DD7CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7D8u); set32(c.r[5], c.r[19].w[0] + 30u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002DD7D8u) [[unlikely]] return; }
L_002DD7D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7E4u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002DD7E4u) [[unlikely]] return; }
L_002DD7E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7F0u); set32(c.r[5], c.r[19].w[0] + 34u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002DD7F0u) [[unlikely]] return; }
L_002DD7F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD7FCu); set32(c.r[5], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x002DD7FCu) [[unlikely]] return; }
L_002DD7FC:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 32u));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD80Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 195u, depth + 1u); else { c.pc = 0x002CDE10u; return; } if (c.pc != 0x002DD80Cu) [[unlikely]] return; }
L_002DD80C:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 95u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD824u); st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002DD824u) [[unlikely]] return; }
L_002DD824:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = ld16((c.r[19].w[0] + 36u));  goto L_002DD844; }
    c.r[6].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD840u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 195u, depth + 1u); else { c.pc = 0x002CDE10u; return; } if (c.pc != 0x002DD840u) [[unlikely]] return; }
L_002DD840:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 36u));
    c.budget -= 1;
L_002DD844:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[5], c.r[29].w[0] + 94u);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD864u); st8((c.r[29].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002DD864u) [[unlikely]] return; }
L_002DD864:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 94u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = ld16((c.r[19].w[0] + 34u));  goto L_002DD884; }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD880u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 36u, depth + 1u); else { c.pc = 0x00200420u; return; } if (c.pc != 0x002DD880u) [[unlikely]] return; }
L_002DD880:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 34u));
    c.budget -= 1;
L_002DD884:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 24u)));  goto L_002DD89C; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 30u));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002DD8D4; } }
L_002DD89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 195u, depth + 1u); else { c.pc = 0x002CDE10u; return; } if (c.pc != 0x002DD8A4u) [[unlikely]] return; }
L_002DD8A4:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 34u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DD8C8; } }
L_002DD8B4:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002DD8C8:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DD8B4u | kUnwind; return; } goto L_002DD8B4; }
L_002DD8D4:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 93u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD8ECu); st8((c.r[29].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002DD8ECu) [[unlikely]] return; }
L_002DD8EC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 93u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_002DD90C; }
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD908u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 195u, depth + 1u); else { c.pc = 0x002CDE10u; return; } if (c.pc != 0x002DD908u) [[unlikely]] return; }
L_002DD908:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_002DD90C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD920u); st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x002DD920u) [[unlikely]] return; }
L_002DD920:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002DD940; }
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD93Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 361u, depth + 1u); else { c.pc = 0x002AAF00u; return; } if (c.pc != 0x002DD93Cu) [[unlikely]] return; }
L_002DD93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002DD940:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DD960:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 28u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD98Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002DD98Cu) [[unlikely]] return; }
L_002DD98C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD998u); set32(c.r[5], c.r[19].w[0] + 30u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002DD998u) [[unlikely]] return; }
L_002DD998:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9A4u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002DD9A4u) [[unlikely]] return; }
L_002DD9A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9B0u); set32(c.r[5], c.r[19].w[0] + 34u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002DD9B0u) [[unlikely]] return; }
L_002DD9B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9BCu); set32(c.r[5], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002DD9BCu) [[unlikely]] return; }
L_002DD9BC:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 32u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9CCu); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DD9CCu) [[unlikely]] return; }
L_002DD9CC:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[19].w[0] + 32u));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 197u, depth + 1u); else { c.pc = 0x002CDE30u; return; } if (c.pc != 0x002DD9E0u) [[unlikely]] return; }
L_002DD9E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DD9ECu); set32(c.r[5], c.r[29].w[0] + 95u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002DD9ECu) [[unlikely]] return; }
L_002DD9EC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 36u));  goto L_002DDA20; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA08u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDA08u) [[unlikely]] return; }
L_002DDA08:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[19].w[0] + 28u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 197u, depth + 1u); else { c.pc = 0x002CDE30u; return; } if (c.pc != 0x002DDA1Cu) [[unlikely]] return; }
L_002DDA1C:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 36u));
    c.budget -= 1;
L_002DDA20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[5], c.r[29].w[0] + 94u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA34u); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[17].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002DDA34u) [[unlikely]] return; }
L_002DDA34:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 94u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 34u));  goto L_002DDA64; }
    set32(c.r[4], c.r[17].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDA4Cu) [[unlikely]] return; }
L_002DDA4C:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA60u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 38u, depth + 1u); else { c.pc = 0x00200430u; return; } if (c.pc != 0x002DDA60u) [[unlikely]] return; }
L_002DDA60:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 34u));
    c.budget -= 1;
L_002DDA64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[2].w[0] << 1);  goto L_002DDA7C; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 30u));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002DDAC8; } }
L_002DDA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDA84u) [[unlikely]] return; }
L_002DDA84:
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[19].w[0] + 34u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDA98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 197u, depth + 1u); else { c.pc = 0x002CDE30u; return; } if (c.pc != 0x002DDA98u) [[unlikely]] return; }
L_002DDA98:
    c.r[4].d[0] = ld16((c.r[19].w[0] + 34u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DDABC; } }
L_002DDAA8:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002DDABC:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDAA8u | kUnwind; return; } goto L_002DDAA8; }
L_002DDAC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAD4u); set32(c.r[5], c.r[29].w[0] + 93u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002DDAD4u) [[unlikely]] return; }
L_002DDAD4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 93u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002DDB04; }
    set32(c.r[4], c.r[16].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDAECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDAECu) [[unlikely]] return; }
L_002DDAEC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 197u, depth + 1u); else { c.pc = 0x002CDE30u; return; } if (c.pc != 0x002DDB00u) [[unlikely]] return; }
L_002DDB00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002DDB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB0Cu); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002DDB0Cu) [[unlikely]] return; }
L_002DDB0C:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002DDB3C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDB24u) [[unlikely]] return; }
L_002DDB24:
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDB38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 362u, depth + 1u); else { c.pc = 0x002AAF10u; return; } if (c.pc != 0x002DDB38u) [[unlikely]] return; }
L_002DDB38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002DDB3C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DDB60:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld16((c.r[6].w[0] + 12u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDBA0u); set32(c.r[4], c.r[16].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDBA0u) [[unlikely]] return; }
L_002DDBA0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull | 65535ull;  if (t) { goto L_002DDBC0; } }
L_002DDBB0:
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002DDBC0:
    c.r[2].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDBB0u | kUnwind; return; } goto L_002DDBB0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002DDC44; } }
L_002DDBD8:
    set32(c.r[3], c.r[17].w[0] << 1);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 136u);
    set32(c.r[7], c.r[29].w[0] + 138u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC00u); set32(c.r[8], c.r[29].w[0] + 140u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDC00u) [[unlikely]] return; }
L_002DDC00:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[5].w[0] << 1);
    c.budget -= 3;
L_002DDC0C:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 136u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 7;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002DDC34; }
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_002DDC34:
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDC0Cu | kUnwind; return; } goto L_002DDC0C; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DDC44:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 30u));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[22].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDBD8u | kUnwind; return; } goto L_002DDBD8; }
    set32(c.r[4], c.r[18].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDC60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDC60u) [[unlikely]] return; }
L_002DDC60:
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[21].w[0] + 28u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull | 65535ull;  if (t) { goto L_002DDC98; } }
L_002DDC74:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_002DDC98; }
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_002DDC98:
    c.r[2].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDC74u | kUnwind; return; } goto L_002DDC74; }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002DDCD0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[29].w[0] + 167u), static_cast<std::uint8_t>(c.r[10].w[0]));
    mmi::pmaxw(c.r[2], c.r[3], c.r[2]);
    st16((c.r[4].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDD44u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDD44u) [[unlikely]] return; }
L_002DDD44:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DDD80; } }
L_002DDD50:
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_002DDD6C; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 4;
L_002DDD6C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
L_002DDD80:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 32u));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDD50u | kUnwind; return; } goto L_002DDD50; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDA0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 179u, depth + 1u); else { c.pc = 0x002DDB60u; return; } if (c.pc != 0x002DDDA0u) [[unlikely]] return; }
L_002DDDA0:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDBCu); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDDBCu) [[unlikely]] return; }
L_002DDDBC:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002DDE38; } }
L_002DDDC8:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 168u);
    set32(c.r[7], c.r[29].w[0] + 170u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDDF0u); set32(c.r[8], c.r[29].w[0] + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DDDF0u) [[unlikely]] return; }
L_002DDDF0:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_002DDE08:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 168u));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDE08u | kUnwind; return; } goto L_002DDE08; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DDE38:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 30u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDDC8u | kUnwind; return; } goto L_002DDDC8; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DDE54u) [[unlikely]] return; }
L_002DDE54:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[20].w[0] + 32u));  goto L_002DE064; }
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[20].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 36u));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 28u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE7Cu); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDE7Cu) [[unlikely]] return; }
L_002DDE7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDE8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDE8Cu) [[unlikely]] return; }
L_002DDE8C:
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEA0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDEA0u) [[unlikely]] return; }
L_002DDEA0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DDEC8; } }
L_002DDEAC:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
L_002DDEC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDEACu | kUnwind; return; } goto L_002DDEAC; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 36u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDEF0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDEF0u) [[unlikely]] return; }
L_002DDEF0:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 36u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DDF00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DDF00u) [[unlikely]] return; }
L_002DDF00:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002DE028; } }
L_002DDF14:
    set32(c.r[8], c.r[5].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[23].w[0] + c.r[7].w[0]);  if (t) { goto L_002DDF70; } }
L_002DDF40:
    set32(c.r[8], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[4].w[0]), c.f[1]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 12;
L_002DDF70:
    set32(c.r[7], ld32((c.r[9].w[0] + 8u)));
    c.r[7].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[9].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDF40u | kUnwind; return; } goto L_002DDF40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld16((c.r[20].w[0] + 36u));  if (t) { goto L_002DDF9C; } }
L_002DDF88:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[7].d[0] = ld16((c.r[20].w[0] + 36u));
    c.budget -= 5;
L_002DDF9C:
    c.r[7].d[0] = c.r[2].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { st32((c.r[4].w[0]), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDF88u | kUnwind; return; } goto L_002DDF88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DE014; } }
L_002DDFB0:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002DDFDC; } }
L_002DDFBC:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_002DDFDC; }
    c.f[2] = c.f[1];
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
L_002DDFDC:
    c.r[2].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDFBCu | kUnwind; return; } goto L_002DDFBC; }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[1] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0]), c.f[1]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 11;
L_002DE014:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 36u));
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[16].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDFB0u | kUnwind; return; } goto L_002DDFB0; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002DE028:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DDF14u | kUnwind; return; } goto L_002DDF14; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE044u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DE044u) [[unlikely]] return; }
L_002DE044:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE050u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DE050u) [[unlikely]] return; }
L_002DE050:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE05Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DE05Cu) [[unlikely]] return; }
L_002DE05C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_002DE1B4; } }
L_002DE064:
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[20].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 36u));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 28u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE080u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DE080u) [[unlikely]] return; }
L_002DE080:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = 0u;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002DE140; } }
L_002DE094:
    set32(c.r[7], c.r[3].w[0] << 1);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[23].w[0] + c.r[6].w[0]);  if (t) { goto L_002DE108; } }
L_002DE0B8:
    set32(c.r[7], c.r[4].w[0] << 1);
    set32(c.r[8], ld32((c.r[10].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.r[9].d[0] = ld16((c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_002DE0EC; } }
L_002DE0D0:
    set32(c.r[7], c.r[11].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.budget -= 5;
    if (c.r[9].d[0] != c.r[6].d[0]) { set32(c.r[11], c.r[11].w[0] + 1u);  goto L_002DE0EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[7].w[0] + 4u));  if (t) { goto L_002DE0FC; } }
L_002DE0EC:
    c.r[6].d[0] = c.r[11].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[10].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE0D0u | kUnwind; return; } goto L_002DE0D0; }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_002DE0FC:
    st32((c.r[5].w[0]), c.f[1]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
L_002DE108:
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.r[6].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE0B8u | kUnwind; return; } goto L_002DE0B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld16((c.r[20].w[0] + 32u));  if (t) { goto L_002DE130; } }
L_002DE120:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[6].d[0] = ld16((c.r[20].w[0] + 32u));
    c.budget -= 4;
L_002DE130:
    c.r[6].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE120u | kUnwind; return; } goto L_002DE120; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_002DE140:
    c.r[4].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[4].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[6], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE094u | kUnwind; return; } goto L_002DE094; }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 167u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002DE1B0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE168u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DE168u) [[unlikely]] return; }
L_002DE168:
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002DE1A0; } }
L_002DE178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DE18C; } }
L_002DE180:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_002DE18C:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 32u));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE180u | kUnwind; return; } goto L_002DE180; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_002DE1A0:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE178u | kUnwind; return; } goto L_002DE178; } }
L_002DE1B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002DE1B4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002DE1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DE26C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE214u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DE214u) [[unlikely]] return; }
L_002DE214:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE220u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DE220u) [[unlikely]] return; }
L_002DE220:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE22Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DE22Cu) [[unlikely]] return; }
L_002DE22C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DE238u) [[unlikely]] return; }
L_002DE238:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DE244u) [[unlikely]] return; }
L_002DE244:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE250u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DE250u) [[unlikely]] return; }
L_002DE250:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002DE270; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE26Cu); set32(c.r[5], 0u + 44u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DE26Cu) [[unlikely]] return; }
L_002DE26C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DE270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DE290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15520u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st16((c.r[4].w[0] + 34u), static_cast<std::uint16_t>(0u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_002DE2D0:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  goto L_002DE2E8; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002DE2E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DE2F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
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
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[17].d[0] = ld16((c.r[2].w[0]));
    c.r[22].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[23], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE358u); set32(c.r[4], c.r[23].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DE358u) [[unlikely]] return; }
L_002DE358:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { goto L_002DE410; } }
L_002DE368:
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DE3A8; } }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_002DE3A0; }
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[6], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 4;
L_002DE3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_002DE400; } }
L_002DE3A8:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_002DE3DC; }
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_002DE3D4; }
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[6], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 4;
L_002DE3D4:
    c.r[17].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_002DE3DC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_002DE3FC; }
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[6], c.r[18].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 4;
L_002DE3FC:
    c.r[22].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 1;
L_002DE400:
    set32(c.r[5], c.r[19].w[0] << 1);
    set32(c.r[5], c.r[30].w[0] + c.r[5].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002DE410:
    c.r[3].d[0] = c.r[22].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002DE42C; } }
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DE42C; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002DE42C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = c.r[22].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE368u | kUnwind; return; } goto L_002DE368; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE440u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DE440u) [[unlikely]] return; }
L_002DE440:
    st32((c.r[21].w[0]), c.r[30].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[23].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[19].w[0]);
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002DE480:
    set32(c.r[9], ld32((c.r[4].w[0])));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull | 65535ull;
    c.r[12].d[0] = ld16((c.r[9].w[0]));
    c.r[11].d[0] = ld16((c.r[8].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002DE540; } }
L_002DE4A8:
    c.r[8].d[0] = c.r[11].d[0] & 65535ull;
    c.r[1].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002DE4E4; } }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[8].d[0] = c.r[10].d[0] + 0ull;  goto L_002DE4DC; }
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[9], c.r[3].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].d[0] = ld16((c.r[8].w[0]));
    c.budget -= 4;
L_002DE4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[8].d[0] & 65535ull;  if (t) { goto L_002DE53C; } }
L_002DE4E4:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[9].d[0]) { set32(c.r[8], ld32((c.r[4].w[0] + 8u)));  goto L_002DE518; }
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[8].d[0] = c.r[10].d[0] + 0ull;  goto L_002DE510; }
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[9], c.r[3].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].d[0] = ld16((c.r[8].w[0]));
    c.budget -= 4;
L_002DE510:
    c.r[11].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 2;
L_002DE518:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[8].d[0] = c.r[10].d[0] + 0ull;  goto L_002DE538; }
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[9], c.r[6].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].d[0] = ld16((c.r[8].w[0]));
    c.budget -= 4;
L_002DE538:
    c.r[12].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 1;
L_002DE53C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002DE540:
    c.r[8].d[0] = c.r[12].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[10].d[0]; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002DE55C; } }
    c.r[8].d[0] = c.r[11].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[10].d[0];  if (t) { goto L_002DE55C; } }
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002DE55C:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.r[9].d[0] = c.r[12].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE4A8u | kUnwind; return; } goto L_002DE4A8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DE570:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002DE58C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002DE5A0; } }
L_002DE58C:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002DE59C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DE59C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002DE5A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002DE5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5D0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002DE5D0u) [[unlikely]] return; }
L_002DE5D0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE5ECu); st32((c.r[28].w[0] - 27476u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002DE5ECu) [[unlikely]] return; }
L_002DE5EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DE600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE618u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002DE618u) [[unlikely]] return; }
L_002DE618:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));  goto L_002DE6EC; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30596u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE648u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002DE648u) [[unlikely]] return; }
L_002DE648:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE660u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002DE660u) [[unlikely]] return; }
L_002DE660:
    set32(c.r[4], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 12u), 0u);
    c.budget -= 8;
L_002DE680:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE680u | kUnwind; return; } goto L_002DE680; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 27480u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));  goto L_002DE6D4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);  if (t) { goto L_002DE6DC; } }
L_002DE6D4:
    st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_002DE6DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 4;
L_002DE6EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE70Cu); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002DE70Cu) [[unlikely]] return; }
L_002DE70C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DE720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 28928u);  c.pc = t; return; }
L_002DE730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE74Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 470u, depth + 1u); else { c.pc = 0x002B7730u; return; } if (c.pc != 0x002DE74Cu) [[unlikely]] return; }
L_002DE74C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 256u)));  goto L_002DE75C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DE768; } }
L_002DE75C:
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002DE768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DE780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE79Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 476u, depth + 1u); else { c.pc = 0x002B78D0u; return; } if (c.pc != 0x002DE79Cu) [[unlikely]] return; }
L_002DE79C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE7A8u); set32(c.r[5], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_0077(c, 272u, depth + 1u); else { c.pc = 0x002DEA80u; return; } if (c.pc != 0x002DE7A8u) [[unlikely]] return; }
L_002DE7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DE7C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B79B0u | kUnwind; return; } [[clang::musttail]] return unit_006D(c, 484u, depth); }
L_002DE7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE7E4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 490u, depth + 1u); else { c.pc = 0x002B7A70u; return; } if (c.pc != 0x002DE7E4u) [[unlikely]] return; }
L_002DE7E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14000000u);
    c.r[1].d[0] = c.r[1].d[0] | 4ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002DE808; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE804u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002DE804u) [[unlikely]] return; }
L_002DE804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002DE808:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DE820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE83Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 525u, depth + 1u); else { c.pc = 0x002B7E70u; return; } if (c.pc != 0x002DE83Cu) [[unlikely]] return; }
L_002DE83C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE848u); set32(c.r[5], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_0077(c, 273u, depth + 1u); else { c.pc = 0x002DEA90u; return; } if (c.pc != 0x002DE848u) [[unlikely]] return; }
L_002DE848:
    set32(c.r[3], ld32((c.r[17].w[0] + 256u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_002DE860; }
    st32((c.r[17].w[0] + 256u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 2;
L_002DE860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14000000u);
    c.r[1].d[0] = c.r[1].d[0] | 4ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002DE880; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE87Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002DE87Cu) [[unlikely]] return; }
L_002DE87C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002DE880:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DE890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 272u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE8A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002DE8A8u) [[unlikely]] return; }
L_002DE8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DE8CC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE8BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x002DE8BCu) [[unlikely]] return; }
L_002DE8BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15536u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 256u), 0u);
    c.budget -= 4;
L_002DE8CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DE8E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002B82F0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 18u, depth); }
L_002DE8F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 272u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE918u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002DE918u) [[unlikely]] return; }
L_002DE918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002DE93C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE92Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x002DE92Cu) [[unlikely]] return; }
L_002DE92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15536u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 256u), 0u);
    c.budget -= 4;
L_002DE93C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE94Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 24u, depth + 1u); else { c.pc = 0x002B83D0u; return; } if (c.pc != 0x002DE94Cu) [[unlikely]] return; }
L_002DE94C:
    set32(c.r[3], ld32((c.r[18].w[0] + 256u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 256u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DE970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 256u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DE9A0u); c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_006E(c, 72u, depth + 1u); else { c.pc = 0x002B8AD0u; return; } if (c.pc != 0x002DE9A0u) [[unlikely]] return; }
L_002DE9A0:
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_002DE9E8; } }
L_002DE9B8:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002DE9D8; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002DE9E4; } }
L_002DE9D8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65471ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002DE9E4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002DE9E8:
    c.r[3].d[0] = c.r[16].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DE9B8u | kUnwind; return; } goto L_002DE9B8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DEA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DEA5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 15536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA40u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 393u, depth + 1u); else { c.pc = 0x002BAEB0u; return; } if (c.pc != 0x002DEA40u) [[unlikely]] return; }
L_002DEA40:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002DEA60; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEA5Cu); set32(c.r[5], 0u + 272u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DEA5Cu) [[unlikely]] return; }
L_002DEA5C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DEA60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DEA80:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_002DEAA0; }
L_002DEA90:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_002DEB00; }
L_002DEAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEAE0u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEAE0u) [[unlikely]] return; }
L_002DEAE0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DEB00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB34u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEB34u) [[unlikely]] return; }
L_002DEB34:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DEB60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 28888u);  c.pc = t; return; }
L_002DEB70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB84u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 80u, depth + 1u); else { c.pc = 0x002E08C0u; return; } if (c.pc != 0x002DEB84u) [[unlikely]] return; }
L_002DEB84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEB90u); set32(c.r[4], ld32((c.r[2].w[0] - 28888u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002DEB90u) [[unlikely]] return; }
L_002DEB90:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEBA4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002DEBA4u) [[unlikely]] return; }
L_002DEBA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DEBC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEBDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 84u, depth + 1u); else { c.pc = 0x002E0910u; return; } if (c.pc != 0x002DEBDCu) [[unlikely]] return; }
L_002DEBDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  goto L_002DEBEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002DEC2C; } }
L_002DEBEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002DEC2C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DEC28; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002DEC28; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002DEC2C; }
L_002DEC28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DEC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002DEC40:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0078(c, 88u, depth); }
L_002DEC50:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0078(c, 100u, depth); }
L_002DEC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30628u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002DECA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC84u); set32(c.r[4], c.r[4].w[0] + 16576u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002DEC84u) [[unlikely]] return; }
L_002DEC84:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEC94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEC94u) [[unlikely]] return; }
L_002DEC94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DECA0u); set32(c.r[4], c.r[4].w[0] + 16576u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002DECA0u) [[unlikely]] return; }
L_002DECA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002DECB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A030000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 6ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DF02C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DECF4u);  if (depth < kMaxDepth) unit_0084(c, 405u, depth + 1u); else { c.pc = 0x00313A50u; return; } if (c.pc != 0x002DECF4u) [[unlikely]] return; }
L_002DECF4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 112u), 0u);  if (t) { goto L_002DED18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DED08u) [[unlikely]] return; }
L_002DED08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DED18u) [[unlikely]] return; }
L_002DED18:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 116u), 0u);  if (t) { goto L_002DED3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DED2Cu) [[unlikely]] return; }
L_002DED2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED3Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DED3Cu) [[unlikely]] return; }
L_002DED3C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 120u), 0u);  if (t) { goto L_002DED60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DED50u) [[unlikely]] return; }
L_002DED50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED60u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DED60u) [[unlikely]] return; }
L_002DED60:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 124u), 0u);  if (t) { goto L_002DED84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DED74u) [[unlikely]] return; }
L_002DED74:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED84u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DED84u) [[unlikely]] return; }
L_002DED84:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 128u), 0u);  if (t) { goto L_002DEDA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DED98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DED98u) [[unlikely]] return; }
L_002DED98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEDA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DEDA8u) [[unlikely]] return; }
L_002DEDA8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 132u), 0u);  if (t) { goto L_002DEDCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEDBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DEDBCu) [[unlikely]] return; }
L_002DEDBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEDCCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DEDCCu) [[unlikely]] return; }
L_002DEDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEDD4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x002DEDD4u) [[unlikely]] return; }
L_002DEDD4:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 64u)));  goto L_002DEE7C; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DEDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEDECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002DEDECu) [[unlikely]] return; }
L_002DEDEC:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[3].w[0] + 112u);
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 7;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002DEE6C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[17].w[0]);  goto L_002DEE48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DEE18u) [[unlikely]] return; }
L_002DEE18:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE28u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DEE28u) [[unlikely]] return; }
L_002DEE28:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DEE44; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEE44u) [[unlikely]] return; }
L_002DEE44:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002DEE48:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DEE68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DEE58u) [[unlikely]] return; }
L_002DEE58:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEE68u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DEE68u) [[unlikely]] return; }
L_002DEE68:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002DEE6C:
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DEDE4u | kUnwind; return; } goto L_002DEDE4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 1;
L_002DEE7C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 132u)));  goto L_002DEEA8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEA4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 357u, depth + 1u); else { c.pc = 0x002DF250u; return; } if (c.pc != 0x002DEEA4u) [[unlikely]] return; }
L_002DEEA4:
    set32(c.r[16], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_002DEEA8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 128u)));  goto L_002DEEE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DEEB8u) [[unlikely]] return; }
L_002DEEB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEC8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DEEC8u) [[unlikely]] return; }
L_002DEEC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DEEE4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEEE4u) [[unlikely]] return; }
L_002DEEE4:
    set32(c.r[16], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_002DEEE8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 124u)));  goto L_002DEF28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEEF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DEEF8u) [[unlikely]] return; }
L_002DEEF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF08u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DEF08u) [[unlikely]] return; }
L_002DEF08:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DEF24; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEF24u) [[unlikely]] return; }
L_002DEF24:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_002DEF28:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 120u)));  goto L_002DEF68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DEF38u) [[unlikely]] return; }
L_002DEF38:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF48u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DEF48u) [[unlikely]] return; }
L_002DEF48:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DEF64; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEF64u) [[unlikely]] return; }
L_002DEF64:
    set32(c.r[16], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_002DEF68:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 116u)));  goto L_002DEFA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DEF78u) [[unlikely]] return; }
L_002DEF78:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEF88u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DEF88u) [[unlikely]] return; }
L_002DEF88:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DEFA4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEFA4u) [[unlikely]] return; }
L_002DEFA4:
    set32(c.r[16], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_002DEFA8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 112u)));  goto L_002DEFE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DEFB8u) [[unlikely]] return; }
L_002DEFB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFC8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DEFC8u) [[unlikely]] return; }
L_002DEFC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DEFE4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DEFE4u) [[unlikely]] return; }
L_002DEFE4:
    set32(c.r[16], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_002DEFE8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002DF038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DEFF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DEFF8u) [[unlikely]] return; }
L_002DEFF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF008u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF008u) [[unlikely]] return; }
L_002DF008:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF034; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF024u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF024u) [[unlikely]] return; }
L_002DF024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF034; } }
L_002DF02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF034u);  if (depth < kMaxDepth) unit_0078(c, 109u, depth + 1u); else { c.pc = 0x002E0C80u; return; } if (c.pc != 0x002DF034u) [[unlikely]] return; }
L_002DF034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002DF038:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002DF060:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A030000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 6ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DF1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF098u);  if (depth < kMaxDepth) unit_0084(c, 406u, depth + 1u); else { c.pc = 0x00313A60u; return; } if (c.pc != 0x002DF098u) [[unlikely]] return; }
L_002DF098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF0A0u) [[unlikely]] return; }
L_002DF0A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0B0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF0B0u) [[unlikely]] return; }
L_002DF0B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 95u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0C0u); st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002DF0C0u) [[unlikely]] return; }
L_002DF0C0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0D0u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002DF0D0u) [[unlikely]] return; }
L_002DF0D0:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_002DF0D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF0E8u); set32(c.r[5], c.r[2].w[0] + 64u);  if (depth < kMaxDepth) unit_0082(c, 35u, depth + 1u); else { c.pc = 0x00308430u; return; } if (c.pc != 0x002DF0E8u) [[unlikely]] return; }
L_002DF0E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF0D8u | kUnwind; return; } goto L_002DF0D8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF104u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0083(c, 100u, depth + 1u); else { c.pc = 0x0030CA00u; return; } if (c.pc != 0x002DF104u) [[unlikely]] return; }
L_002DF104:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF110u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002DF110u) [[unlikely]] return; }
L_002DF110:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF108u | kUnwind; return; } goto L_002DF108; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002DF158; }
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[11], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF154u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 428u, depth + 1u); else { c.pc = 0x002DF910u; return; } if (c.pc != 0x002DF154u) [[unlikely]] return; }
L_002DF154:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF158:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002DF15C:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF16Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DF16Cu) [[unlikely]] return; }
L_002DF16C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF15Cu | kUnwind; return; } goto L_002DF15C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF188u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_0078(c, 72u, depth + 1u); else { c.pc = 0x002E0780u; return; } if (c.pc != 0x002DF188u) [[unlikely]] return; }
L_002DF188:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF194u); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0078(c, 71u, depth + 1u); else { c.pc = 0x002E0770u; return; } if (c.pc != 0x002DF194u) [[unlikely]] return; }
L_002DF194:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1A0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0078(c, 70u, depth + 1u); else { c.pc = 0x002E0760u; return; } if (c.pc != 0x002DF1A0u) [[unlikely]] return; }
L_002DF1A0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 68u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 94u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1B4u); st8((c.r[29].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002DF1B4u) [[unlikely]] return; }
L_002DF1B4:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 94u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1C4u); st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF1C4u) [[unlikely]] return; }
L_002DF1C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1D4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF1D4u) [[unlikely]] return; }
L_002DF1D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002DF204; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF1F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF1F0u) [[unlikely]] return; }
L_002DF1F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002DF200; } }
L_002DF1F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF200u);  if (depth < kMaxDepth) unit_0078(c, 134u, depth + 1u); else { c.pc = 0x002E0EC0u; return; } if (c.pc != 0x002DF200u) [[unlikely]] return; }
L_002DF200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002DF204:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002DF220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 76u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF234u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002DF234u) [[unlikely]] return; }
L_002DF234:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002DF248; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF244u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0078(c, 12u, depth + 1u); else { c.pc = 0x002E00E0u; return; } if (c.pc != 0x002DF244u) [[unlikely]] return; }
L_002DF244:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002DF248:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002DF250:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], 0u + 116u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF2A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002DF2A4u) [[unlikely]] return; }
L_002DF2A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[30].w[0] + 64u)));  goto L_002DF2DC; }
    set32(c.r[3], ld32((c.r[21].w[0] + 88u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[7], c.r[21].w[0] + 8u);
    set32(c.r[8], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF2D4u); set32(c.r[9], 0u + 6u);  if (depth < kMaxDepth) unit_0071(c, 242u, depth + 1u); else { c.pc = 0x002C6150u; return; } if (c.pc != 0x002DF2D4u) [[unlikely]] return; }
L_002DF2D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[30].w[0] + 64u)));
    c.budget -= 2;
L_002DF2DC:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002DF348; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[30].w[0] + 64u), c.r[17].w[0]);  goto L_002DF324; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF2F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF2F4u) [[unlikely]] return; }
L_002DF2F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF304u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF304u) [[unlikely]] return; }
L_002DF304:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF320; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF320u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF320u) [[unlikely]] return; }
L_002DF320:
    st32((c.r[30].w[0] + 64u), c.r[17].w[0]);
    c.budget -= 1;
L_002DF324:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002DF344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF334u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF334u) [[unlikely]] return; }
L_002DF334:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF344u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF344u) [[unlikely]] return; }
L_002DF344:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF348:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 160u), 0u);  if (t) { goto L_002DF368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF358u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF358u) [[unlikely]] return; }
L_002DF358:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF368u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF368u) [[unlikely]] return; }
L_002DF368:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 164u), 0u);  if (t) { goto L_002DF38C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF37Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF37Cu) [[unlikely]] return; }
L_002DF37C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF38Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF38Cu) [[unlikely]] return; }
L_002DF38C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 168u), 0u);  if (t) { goto L_002DF3B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF3A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF3A0u) [[unlikely]] return; }
L_002DF3A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF3B0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF3B0u) [[unlikely]] return; }
L_002DF3B0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 172u), 0u);  if (t) { goto L_002DF3D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF3C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF3C4u) [[unlikely]] return; }
L_002DF3C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF3D4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF3D4u) [[unlikely]] return; }
L_002DF3D4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_002DF3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF3E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF3E8u) [[unlikely]] return; }
L_002DF3E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF3F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF3F8u) [[unlikely]] return; }
L_002DF3F8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 180u), 0u);  if (t) { goto L_002DF41C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF40Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF40Cu) [[unlikely]] return; }
L_002DF40C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF41Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF41Cu) [[unlikely]] return; }
L_002DF41C:
    set32(c.r[16], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[21].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 164u)));  goto L_002DF48C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 160u), c.r[21].w[0]);  goto L_002DF468; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF438u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF438u) [[unlikely]] return; }
L_002DF438:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF448u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF448u) [[unlikely]] return; }
L_002DF448:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF464; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF464u) [[unlikely]] return; }
L_002DF464:
    st32((c.r[29].w[0] + 160u), c.r[21].w[0]);
    c.budget -= 1;
L_002DF468:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002DF488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF478u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF478u) [[unlikely]] return; }
L_002DF478:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF488u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF488u) [[unlikely]] return; }
L_002DF488:
    set32(c.r[16], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 1;
L_002DF48C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[20].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 168u)));  goto L_002DF4F8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 164u), c.r[20].w[0]);  goto L_002DF4D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF4A4u) [[unlikely]] return; }
L_002DF4A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4B4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF4B4u) [[unlikely]] return; }
L_002DF4B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF4D0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF4D0u) [[unlikely]] return; }
L_002DF4D0:
    st32((c.r[29].w[0] + 164u), c.r[20].w[0]);
    c.budget -= 1;
L_002DF4D4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002DF4F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF4E4u) [[unlikely]] return; }
L_002DF4E4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF4F4u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF4F4u) [[unlikely]] return; }
L_002DF4F4:
    set32(c.r[16], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_002DF4F8:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[19].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 172u)));  goto L_002DF564; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 168u), c.r[19].w[0]);  goto L_002DF540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF510u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF510u) [[unlikely]] return; }
L_002DF510:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF520u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF520u) [[unlikely]] return; }
L_002DF520:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF53C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF53Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF53Cu) [[unlikely]] return; }
L_002DF53C:
    st32((c.r[29].w[0] + 168u), c.r[19].w[0]);
    c.budget -= 1;
L_002DF540:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002DF560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF550u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF550u) [[unlikely]] return; }
L_002DF550:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF560u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF560u) [[unlikely]] return; }
L_002DF560:
    set32(c.r[16], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_002DF564:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[18].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 176u)));  goto L_002DF5D0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 172u), c.r[18].w[0]);  goto L_002DF5AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF57Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF57Cu) [[unlikely]] return; }
L_002DF57C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF58Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF58Cu) [[unlikely]] return; }
L_002DF58C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF5A8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF5A8u) [[unlikely]] return; }
L_002DF5A8:
    st32((c.r[29].w[0] + 172u), c.r[18].w[0]);
    c.budget -= 1;
L_002DF5AC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002DF5CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF5BCu) [[unlikely]] return; }
L_002DF5BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5CCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF5CCu) [[unlikely]] return; }
L_002DF5CC:
    set32(c.r[16], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_002DF5D0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[22].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 180u)));  goto L_002DF63C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 176u), c.r[22].w[0]);  goto L_002DF618; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF5E8u) [[unlikely]] return; }
L_002DF5E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF5F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF5F8u) [[unlikely]] return; }
L_002DF5F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF614; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF614u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF614u) [[unlikely]] return; }
L_002DF614:
    st32((c.r[29].w[0] + 176u), c.r[22].w[0]);
    c.budget -= 1;
L_002DF618:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002DF638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF628u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF628u) [[unlikely]] return; }
L_002DF628:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF638u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF638u) [[unlikely]] return; }
L_002DF638:
    set32(c.r[16], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 1;
L_002DF63C:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[23].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002DF6A8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 180u), c.r[23].w[0]);  goto L_002DF684; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF654u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF654u) [[unlikely]] return; }
L_002DF654:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF664u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF664u) [[unlikely]] return; }
L_002DF664:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF680; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF680u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF680u) [[unlikely]] return; }
L_002DF680:
    st32((c.r[29].w[0] + 180u), c.r[23].w[0]);
    c.budget -= 1;
L_002DF684:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002DF6A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF694u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF694u) [[unlikely]] return; }
L_002DF694:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF6A4u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF6A4u) [[unlikely]] return; }
L_002DF6A4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DF6A8:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.budget -= 1;
L_002DF6AC:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + 160u);  if (t) { goto L_002DF73C; } }
L_002DF6BC:
    set32(c.r[8], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[6].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 84u)));
    set32(c.r[11], ld32((c.r[12].w[0] + 96u)));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[12].w[0] + 100u)));
    set32(c.r[6], c.r[11].w[0] + c.r[8].w[0]);
    set32(c.r[10], ld32((c.r[12].w[0] + 84u)));
    set32(c.r[9], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[12].w[0] + 96u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[11].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[6].w[0])));
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[18].w[0], c.r[11].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[10].w[0] + c.r[11].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);  if (t) { goto L_002DF738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF738u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002DF738u) [[unlikely]] return; }
L_002DF738:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002DF73C:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 100u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[12], ld32((c.r[30].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF6BCu | kUnwind; return; } goto L_002DF6BC; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DF6ACu | kUnwind; return; } goto L_002DF6AC; }
    set32(c.r[16], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 176u)));  goto L_002DF7A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF774u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF774u) [[unlikely]] return; }
L_002DF774:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF784u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF784u) [[unlikely]] return; }
L_002DF784:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF7A0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF7A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF7A0u) [[unlikely]] return; }
L_002DF7A0:
    set32(c.r[16], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_002DF7A4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 172u)));  goto L_002DF7E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF7B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF7B4u) [[unlikely]] return; }
L_002DF7B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF7C4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF7C4u) [[unlikely]] return; }
L_002DF7C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF7E0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF7E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF7E0u) [[unlikely]] return; }
L_002DF7E0:
    set32(c.r[16], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_002DF7E4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 168u)));  goto L_002DF824; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF7F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF7F4u) [[unlikely]] return; }
L_002DF7F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF804u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF804u) [[unlikely]] return; }
L_002DF804:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF820; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF820u) [[unlikely]] return; }
L_002DF820:
    set32(c.r[16], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_002DF824:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 164u)));  goto L_002DF864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF834u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF834u) [[unlikely]] return; }
L_002DF834:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF844u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF844u) [[unlikely]] return; }
L_002DF844:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF860; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF860u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF860u) [[unlikely]] return; }
L_002DF860:
    set32(c.r[16], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 1;
L_002DF864:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 160u)));  goto L_002DF8A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF874u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF874u) [[unlikely]] return; }
L_002DF874:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF884u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF884u) [[unlikely]] return; }
L_002DF884:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF8A0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF8A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF8A0u) [[unlikely]] return; }
L_002DF8A0:
    set32(c.r[16], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_002DF8A4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002DF8E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF8B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF8B4u) [[unlikely]] return; }
L_002DF8B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF8C4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF8C4u) [[unlikely]] return; }
L_002DF8C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DF8E0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF8E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DF8E0u) [[unlikely]] return; }
L_002DF8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002DF8E4:
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
L_002DF910:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 432u), 0u);  if (t) { goto L_002DF980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF970u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF970u) [[unlikely]] return; }
L_002DF970:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF980u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF980u) [[unlikely]] return; }
L_002DF980:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 436u), 0u);  if (t) { goto L_002DF9A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF994u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF994u) [[unlikely]] return; }
L_002DF994:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF9A4u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF9A4u) [[unlikely]] return; }
L_002DF9A4:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 440u), 0u);  if (t) { goto L_002DF9C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF9B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF9B8u) [[unlikely]] return; }
L_002DF9B8:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF9C8u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF9C8u) [[unlikely]] return; }
L_002DF9C8:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 444u), 0u);  if (t) { goto L_002DF9EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF9DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DF9DCu) [[unlikely]] return; }
L_002DF9DC:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DF9ECu); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DF9ECu) [[unlikely]] return; }
L_002DF9EC:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 448u), 0u);  if (t) { goto L_002DFA10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFA00u) [[unlikely]] return; }
L_002DFA00:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA10u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFA10u) [[unlikely]] return; }
L_002DFA10:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 452u), 0u);  if (t) { goto L_002DFA34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFA24u) [[unlikely]] return; }
L_002DFA24:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA34u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFA34u) [[unlikely]] return; }
L_002DFA34:
    st32((c.r[29].w[0] + 464u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 468u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 472u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 476u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 480u), c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA50u); st32((c.r[29].w[0] + 484u), c.r[23].w[0]);  if (depth < kMaxDepth) unit_006A(c, 165u, depth + 1u); else { c.pc = 0x002A9920u; return; } if (c.pc != 0x002DFA50u) [[unlikely]] return; }
L_002DFA50:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[20].w[0] << 2);
    c.budget -= 3;
L_002DFA5C:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 464u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002DFA6Cu) [[unlikely]] return; }
L_002DFA6C:
    set32(c.r[18], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002DFA7Cu) [[unlikely]] return; }
L_002DFA7C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFA88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002DFA88u) [[unlikely]] return; }
L_002DFA88:
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_002DFA98; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002DFA98:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFAA4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x002DFAA4u) [[unlikely]] return; }
L_002DFAA4:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFAB4u); st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 318u, depth + 1u); else { c.pc = 0x0021EDC0u; return; } if (c.pc != 0x002DFAB4u) [[unlikely]] return; }
L_002DFAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFABCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 106u, depth + 1u); else { c.pc = 0x002A8F30u; return; } if (c.pc != 0x002DFABCu) [[unlikely]] return; }
L_002DFABC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFACCu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 177u, depth + 1u); else { c.pc = 0x0021DA50u; return; } if (c.pc != 0x002DFACCu) [[unlikely]] return; }
L_002DFACC:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFADCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFADCu) [[unlikely]] return; }
L_002DFADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[21].w[0])));  if (t) { goto L_002DFBA8; } }
L_002DFAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFAECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0046(c, 334u, depth + 1u); else { c.pc = 0x0021B8E0u; return; } if (c.pc != 0x002DFAECu) [[unlikely]] return; }
L_002DFAEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002DFBA4; } }
    set32(c.r[25], ld32((c.r[23].w[0])));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB0Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFB0Cu) [[unlikely]] return; }
L_002DFB0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 432u)));
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_002DFB88; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);  goto L_002DFB60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFB30u) [[unlikely]] return; }
L_002DFB30:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB40u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFB40u) [[unlikely]] return; }
L_002DFB40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DFB5C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFB5Cu) [[unlikely]] return; }
L_002DFB5C:
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_002DFB60:
    set32(c.r[2], c.r[2].w[0] + 432u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { goto L_002DFB84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFB74u) [[unlikely]] return; }
L_002DFB74:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB84u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFB84u) [[unlikely]] return; }
L_002DFB84:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_002DFB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DFB90u) [[unlikely]] return; }
L_002DFB90:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFB9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002DFB9Cu) [[unlikely]] return; }
L_002DFB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_002DFBC8; } }
L_002DFBA4:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_002DFBA8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBBCu); set32(c.r[6], 0u + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFBBCu) [[unlikely]] return; }
L_002DFBBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFAE4u | kUnwind; return; } goto L_002DFAE4; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002DFBC8:
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002DFA5Cu | kUnwind; return; } goto L_002DFA5C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 440u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFBF4u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0077(c, 357u, depth + 1u); else { c.pc = 0x002DF250u; return; } if (c.pc != 0x002DFBF4u) [[unlikely]] return; }
L_002DFBF4:
    set32(c.r[16], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 448u)));  goto L_002DFC38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFC08u) [[unlikely]] return; }
L_002DFC08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFC18u) [[unlikely]] return; }
L_002DFC18:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFC34; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFC34u) [[unlikely]] return; }
L_002DFC34:
    set32(c.r[16], ld32((c.r[29].w[0] + 448u)));
    c.budget -= 1;
L_002DFC38:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 444u)));  goto L_002DFC78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFC48u) [[unlikely]] return; }
L_002DFC48:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC58u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFC58u) [[unlikely]] return; }
L_002DFC58:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFC74; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFC74u) [[unlikely]] return; }
L_002DFC74:
    set32(c.r[16], ld32((c.r[29].w[0] + 444u)));
    c.budget -= 1;
L_002DFC78:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 440u)));  goto L_002DFCB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFC88u) [[unlikely]] return; }
L_002DFC88:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFC98u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFC98u) [[unlikely]] return; }
L_002DFC98:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFCB4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFCB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFCB4u) [[unlikely]] return; }
L_002DFCB4:
    set32(c.r[16], ld32((c.r[29].w[0] + 440u)));
    c.budget -= 1;
L_002DFCB8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 436u)));  goto L_002DFCF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFCC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFCC8u) [[unlikely]] return; }
L_002DFCC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFCD8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFCD8u) [[unlikely]] return; }
L_002DFCD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFCF4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFCF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFCF4u) [[unlikely]] return; }
L_002DFCF4:
    set32(c.r[16], ld32((c.r[29].w[0] + 436u)));
    c.budget -= 1;
L_002DFCF8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 432u)));  goto L_002DFD38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFD08u) [[unlikely]] return; }
L_002DFD08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFD18u) [[unlikely]] return; }
L_002DFD18:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFD34; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFD34u) [[unlikely]] return; }
L_002DFD34:
    set32(c.r[16], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 1;
L_002DFD38:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002DFD78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFD48u) [[unlikely]] return; }
L_002DFD48:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD58u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFD58u) [[unlikely]] return; }
L_002DFD58:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002DFD74; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFD74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFD74u) [[unlikely]] return; }
L_002DFD74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002DFD78:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_002DFDB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002DFDC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DFEDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 15712u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002DFE58; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_002DFE38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFE08u) [[unlikely]] return; }
L_002DFE08:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE18u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFE18u) [[unlikely]] return; }
L_002DFE18:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DFE34; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFE34u) [[unlikely]] return; }
L_002DFE34:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002DFE38:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_002DFE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFE48u) [[unlikely]] return; }
L_002DFE48:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE58u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFE58u) [[unlikely]] return; }
L_002DFE58:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002DFEC4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 15824u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE78u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0078(c, 5u, depth + 1u); else { c.pc = 0x002E0040u; return; } if (c.pc != 0x002DFE78u) [[unlikely]] return; }
L_002DFE78:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 501u, depth + 1u); else { c.pc = 0x002DFFA0u; return; } if (c.pc != 0x002DFE84u) [[unlikely]] return; }
L_002DFE84:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002D(c, 60u, depth + 1u); else { c.pc = 0x001B4980u; return; } if (c.pc != 0x002DFE90u) [[unlikely]] return; }
L_002DFE90:
    set32(c.r[4], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFE9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0077(c, 496u, depth + 1u); else { c.pc = 0x002DFF00u; return; } if (c.pc != 0x002DFE9Cu) [[unlikely]] return; }
L_002DFE9C:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFEA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002DFEA8u) [[unlikely]] return; }
L_002DFEA8:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFEB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x002DFEB4u) [[unlikely]] return; }
L_002DFEB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFEC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0067(c, 41u, depth + 1u); else { c.pc = 0x0029C620u; return; } if (c.pc != 0x002DFEC0u) [[unlikely]] return; }
L_002DFEC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002DFEC4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002DFEE0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFEDCu); set32(c.r[5], 0u + 76u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DFEDCu) [[unlikely]] return; }
L_002DFEDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002DFEE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DFF00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002DFF7C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002DFF64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFF34u) [[unlikely]] return; }
L_002DFF34:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF44u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFF44u) [[unlikely]] return; }
L_002DFF44:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002DFF60; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002DFF60u) [[unlikely]] return; }
L_002DFF60:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002DFF64:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002DFF80; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFF7Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002DFF7Cu) [[unlikely]] return; }
L_002DFF7C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002DFF80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002DFFA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0078(c, 4u, depth); } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[16].w[0]);  [[clang::musttail]] return unit_0078(c, 2u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002DFFD4u) [[unlikely]] return; }
L_002DFFD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002DFFE4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002DFFE4u) [[unlikely]] return; }
L_002DFFE4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0078(c, 1u, depth); } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0000u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E0000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0078(c, 1u, depth);
}

}
