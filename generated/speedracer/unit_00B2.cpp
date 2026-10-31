#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B2[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0,
    192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0,
    0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327,
    0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0,
    0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C8000;
    case 2u: goto L_003C8008;
    case 3u: goto L_003C8024;
    case 4u: goto L_003C802C;
    case 5u: goto L_003C803C;
    case 6u: goto L_003C8060;
    case 7u: goto L_003C80A4;
    case 8u: goto L_003C80E0;
    case 9u: goto L_003C811C;
    case 10u: goto L_003C8190;
    case 11u: goto L_003C81D0;
    case 12u: goto L_003C81E0;
    case 13u: goto L_003C81F4;
    case 14u: goto L_003C820C;
    case 15u: goto L_003C8218;
    case 16u: goto L_003C822C;
    case 17u: goto L_003C8238;
    case 18u: goto L_003C8254;
    case 19u: goto L_003C8274;
    case 20u: goto L_003C827C;
    case 21u: goto L_003C829C;
    case 22u: goto L_003C82BC;
    case 23u: goto L_003C82C8;
    case 24u: goto L_003C82DC;
    case 25u: goto L_003C82E8;
    case 26u: goto L_003C82FC;
    case 27u: goto L_003C8310;
    case 28u: goto L_003C831C;
    case 29u: goto L_003C8340;
    case 30u: goto L_003C8350;
    case 31u: goto L_003C83CC;
    case 32u: goto L_003C83DC;
    case 33u: goto L_003C83F4;
    case 34u: goto L_003C8414;
    case 35u: goto L_003C846C;
    case 36u: goto L_003C8484;
    case 37u: goto L_003C84A8;
    case 38u: goto L_003C8510;
    case 39u: goto L_003C8520;
    case 40u: goto L_003C8530;
    case 41u: goto L_003C8564;
    case 42u: goto L_003C8584;
    case 43u: goto L_003C85C4;
    case 44u: goto L_003C85E4;
    case 45u: goto L_003C8660;
    case 46u: goto L_003C86A0;
    case 47u: goto L_003C86D0;
    case 48u: goto L_003C86E8;
    case 49u: goto L_003C8710;
    case 50u: goto L_003C8750;
    case 51u: goto L_003C8768;
    case 52u: goto L_003C8780;
    case 53u: goto L_003C87C8;
    case 54u: goto L_003C87E8;
    case 55u: goto L_003C8800;
    case 56u: goto L_003C8820;
    case 57u: goto L_003C8854;
    case 58u: goto L_003C88A8;
    case 59u: goto L_003C88BC;
    case 60u: goto L_003C88D0;
    case 61u: goto L_003C88F8;
    case 62u: goto L_003C890C;
    case 63u: goto L_003C8920;
    case 64u: goto L_003C8974;
    case 65u: goto L_003C8984;
    case 66u: goto L_003C8994;
    case 67u: goto L_003C89C0;
    case 68u: goto L_003C8A00;
    case 69u: goto L_003C8A18;
    case 70u: goto L_003C8A30;
    case 71u: goto L_003C8A54;
    case 72u: goto L_003C8A70;
    case 73u: goto L_003C8A94;
    case 74u: goto L_003C8AAC;
    case 75u: goto L_003C8AD0;
    case 76u: goto L_003C8AE0;
    case 77u: goto L_003C8B04;
    case 78u: goto L_003C8B10;
    case 79u: goto L_003C8B20;
    case 80u: goto L_003C8B44;
    case 81u: goto L_003C8B50;
    case 82u: goto L_003C8B74;
    case 83u: goto L_003C8B80;
    case 84u: goto L_003C8BA4;
    case 85u: goto L_003C8BB0;
    case 86u: goto L_003C8BD4;
    case 87u: goto L_003C8BF0;
    case 88u: goto L_003C8C08;
    case 89u: goto L_003C8C20;
    case 90u: goto L_003C8C30;
    case 91u: goto L_003C8C40;
    case 92u: goto L_003C8C68;
    case 93u: goto L_003C8C74;
    case 94u: goto L_003C8C98;
    case 95u: goto L_003C8CAC;
    case 96u: goto L_003C8CC0;
    case 97u: goto L_003C8CCC;
    case 98u: goto L_003C8CF0;
    case 99u: goto L_003C8D04;
    case 100u: goto L_003C8D18;
    case 101u: goto L_003C8D24;
    case 102u: goto L_003C8D48;
    case 103u: goto L_003C8D5C;
    case 104u: goto L_003C8D70;
    case 105u: goto L_003C8D7C;
    case 106u: goto L_003C8DA0;
    case 107u: goto L_003C8DB4;
    case 108u: goto L_003C8DC8;
    case 109u: goto L_003C8DD4;
    case 110u: goto L_003C8DF8;
    case 111u: goto L_003C8E0C;
    case 112u: goto L_003C8E20;
    case 113u: goto L_003C8E2C;
    case 114u: goto L_003C8E50;
    case 115u: goto L_003C8E64;
    case 116u: goto L_003C8E78;
    case 117u: goto L_003C8E84;
    case 118u: goto L_003C8EA8;
    case 119u: goto L_003C8EBC;
    case 120u: goto L_003C8ED0;
    case 121u: goto L_003C8EDC;
    case 122u: goto L_003C8F00;
    case 123u: goto L_003C8F14;
    case 124u: goto L_003C8F28;
    case 125u: goto L_003C8F34;
    case 126u: goto L_003C8F58;
    case 127u: goto L_003C8F6C;
    case 128u: goto L_003C8F80;
    case 129u: goto L_003C8F8C;
    case 130u: goto L_003C8FB0;
    case 131u: goto L_003C8FC4;
    case 132u: goto L_003C8FD8;
    case 133u: goto L_003C8FE4;
    case 134u: goto L_003C9008;
    case 135u: goto L_003C901C;
    case 136u: goto L_003C9030;
    case 137u: goto L_003C903C;
    case 138u: goto L_003C9060;
    case 139u: goto L_003C9074;
    case 140u: goto L_003C9088;
    case 141u: goto L_003C9094;
    case 142u: goto L_003C90B8;
    case 143u: goto L_003C90CC;
    case 144u: goto L_003C90E0;
    case 145u: goto L_003C90EC;
    case 146u: goto L_003C9110;
    case 147u: goto L_003C9124;
    case 148u: goto L_003C9138;
    case 149u: goto L_003C9144;
    case 150u: goto L_003C9168;
    case 151u: goto L_003C917C;
    case 152u: goto L_003C9190;
    case 153u: goto L_003C919C;
    case 154u: goto L_003C91C0;
    case 155u: goto L_003C91D4;
    case 156u: goto L_003C91E8;
    case 157u: goto L_003C91F4;
    case 158u: goto L_003C9218;
    case 159u: goto L_003C922C;
    case 160u: goto L_003C9240;
    case 161u: goto L_003C924C;
    case 162u: goto L_003C9270;
    case 163u: goto L_003C9284;
    case 164u: goto L_003C9298;
    case 165u: goto L_003C92A4;
    case 166u: goto L_003C92C8;
    case 167u: goto L_003C92DC;
    case 168u: goto L_003C92F0;
    case 169u: goto L_003C92FC;
    case 170u: goto L_003C9320;
    case 171u: goto L_003C9334;
    case 172u: goto L_003C9348;
    case 173u: goto L_003C9354;
    case 174u: goto L_003C9378;
    case 175u: goto L_003C938C;
    case 176u: goto L_003C93A0;
    case 177u: goto L_003C93AC;
    case 178u: goto L_003C93D0;
    case 179u: goto L_003C93E4;
    case 180u: goto L_003C93F8;
    case 181u: goto L_003C9404;
    case 182u: goto L_003C9428;
    case 183u: goto L_003C943C;
    case 184u: goto L_003C9450;
    case 185u: goto L_003C945C;
    case 186u: goto L_003C9480;
    case 187u: goto L_003C9494;
    case 188u: goto L_003C94A8;
    case 189u: goto L_003C94B4;
    case 190u: goto L_003C94D8;
    case 191u: goto L_003C94EC;
    case 192u: goto L_003C9500;
    case 193u: goto L_003C950C;
    case 194u: goto L_003C9530;
    case 195u: goto L_003C9544;
    case 196u: goto L_003C9558;
    case 197u: goto L_003C9574;
    case 198u: goto L_003C9584;
    case 199u: goto L_003C9590;
    case 200u: goto L_003C95F0;
    case 201u: goto L_003C960C;
    case 202u: goto L_003C961C;
    case 203u: goto L_003C9628;
    case 204u: goto L_003C9684;
    case 205u: goto L_003C968C;
    case 206u: goto L_003C96A0;
    case 207u: goto L_003C9704;
    case 208u: goto L_003C9728;
    case 209u: goto L_003C9750;
    case 210u: goto L_003C9758;
    case 211u: goto L_003C977C;
    case 212u: goto L_003C97A0;
    case 213u: goto L_003C97BC;
    case 214u: goto L_003C97E4;
    case 215u: goto L_003C97EC;
    case 216u: goto L_003C9810;
    case 217u: goto L_003C9834;
    case 218u: goto L_003C9854;
    case 219u: goto L_003C9870;
    case 220u: goto L_003C98A8;
    case 221u: goto L_003C98BC;
    case 222u: goto L_003C98D8;
    case 223u: goto L_003C98EC;
    case 224u: goto L_003C9920;
    case 225u: goto L_003C996C;
    case 226u: goto L_003C99A0;
    case 227u: goto L_003C99EC;
    case 228u: goto L_003C9A18;
    case 229u: goto L_003C9A48;
    case 230u: goto L_003C9A60;
    case 231u: goto L_003C9A8C;
    case 232u: goto L_003C9ADC;
    case 233u: goto L_003C9B04;
    case 234u: goto L_003C9BB0;
    case 235u: goto L_003C9BC4;
    case 236u: goto L_003C9BEC;
    case 237u: goto L_003C9C00;
    case 238u: goto L_003C9C28;
    case 239u: goto L_003C9C3C;
    case 240u: goto L_003C9C64;
    case 241u: goto L_003C9CB0;
    case 242u: goto L_003C9CE8;
    case 243u: goto L_003C9D08;
    case 244u: goto L_003C9D14;
    case 245u: goto L_003C9D30;
    case 246u: goto L_003C9DB4;
    case 247u: goto L_003C9E64;
    case 248u: goto L_003C9EAC;
    case 249u: goto L_003C9EEC;
    case 250u: goto L_003C9F20;
    case 251u: goto L_003C9F28;
    case 252u: goto L_003C9F34;
    case 253u: goto L_003CA1F0;
    case 254u: goto L_003CA298;
    case 255u: goto L_003CA334;
    case 256u: goto L_003CA3C0;
    case 257u: goto L_003CA644;
    case 258u: goto L_003CA704;
    case 259u: goto L_003CA7F4;
    case 260u: goto L_003CA86C;
    case 261u: goto L_003CA878;
    case 262u: goto L_003CA964;
    case 263u: goto L_003CA9AC;
    case 264u: goto L_003CA9D0;
    case 265u: goto L_003CAAA0;
    case 266u: goto L_003CAAFC;
    case 267u: goto L_003CAB28;
    case 268u: goto L_003CAB4C;
    case 269u: goto L_003CAB90;
    case 270u: goto L_003CABCC;
    case 271u: goto L_003CAC18;
    case 272u: goto L_003CAC5C;
    case 273u: goto L_003CAC80;
    case 274u: goto L_003CACC4;
    case 275u: goto L_003CAD10;
    case 276u: goto L_003CAD7C;
    case 277u: goto L_003CAE00;
    case 278u: goto L_003CAE48;
    case 279u: goto L_003CAE98;
    case 280u: goto L_003CAF0C;
    case 281u: goto L_003CB064;
    case 282u: goto L_003CB094;
    case 283u: goto L_003CB188;
    case 284u: goto L_003CB21C;
    case 285u: goto L_003CB264;
    case 286u: goto L_003CB28C;
    case 287u: goto L_003CB2AC;
    case 288u: goto L_003CB2D4;
    case 289u: goto L_003CB2FC;
    case 290u: goto L_003CB324;
    case 291u: goto L_003CB390;
    case 292u: goto L_003CB404;
    case 293u: goto L_003CB458;
    case 294u: goto L_003CB4BC;
    case 295u: goto L_003CB4FC;
    case 296u: goto L_003CB550;
    case 297u: goto L_003CB5B4;
    case 298u: goto L_003CB614;
    case 299u: goto L_003CB664;
    case 300u: goto L_003CB66C;
    case 301u: goto L_003CB6AC;
    case 302u: goto L_003CB6F0;
    case 303u: goto L_003CB740;
    case 304u: goto L_003CB750;
    case 305u: goto L_003CB7A8;
    case 306u: goto L_003CB7B4;
    case 307u: goto L_003CB7C8;
    case 308u: goto L_003CB7D4;
    case 309u: goto L_003CB7E0;
    case 310u: goto L_003CB7F8;
    case 311u: goto L_003CB83C;
    case 312u: goto L_003CB880;
    case 313u: goto L_003CB8CC;
    case 314u: goto L_003CB8EC;
    case 315u: goto L_003CB904;
    case 316u: goto L_003CB920;
    case 317u: goto L_003CB93C;
    case 318u: goto L_003CB950;
    case 319u: goto L_003CB970;
    case 320u: goto L_003CB97C;
    case 321u: goto L_003CB9C0;
    case 322u: goto L_003CB9E0;
    case 323u: goto L_003CB9F0;
    case 324u: goto L_003CBA14;
    case 325u: goto L_003CBA54;
    case 326u: goto L_003CBA68;
    case 327u: goto L_003CBA7C;
    case 328u: goto L_003CBA8C;
    case 329u: goto L_003CBAA0;
    case 330u: goto L_003CBAB8;
    case 331u: goto L_003CBAD0;
    case 332u: goto L_003CBAE4;
    case 333u: goto L_003CBB2C;
    case 334u: goto L_003CBBDC;
    case 335u: goto L_003CBC40;
    case 336u: goto L_003CBC78;
    case 337u: goto L_003CBC90;
    case 338u: goto L_003CBCB4;
    case 339u: goto L_003CBCD0;
    case 340u: goto L_003CBCF4;
    case 341u: goto L_003CBD0C;
    case 342u: goto L_003CBD30;
    case 343u: goto L_003CBD40;
    case 344u: goto L_003CBD64;
    case 345u: goto L_003CBD70;
    case 346u: goto L_003CBD80;
    case 347u: goto L_003CBDBC;
    case 348u: goto L_003CBDC4;
    case 349u: goto L_003CBDF0;
    case 350u: goto L_003CBE50;
    case 351u: goto L_003CBE58;
    case 352u: goto L_003CBEA4;
    case 353u: goto L_003CBEF4;
    case 354u: goto L_003CBF50;
    case 355u: goto L_003CBFCC;
    default: bad_entry(c, 0x003C8000u); return;
    }
L_003C8000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8008u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 101u, depth + 1u); else { c.pc = 0x0012CD00u; return; } if (c.pc != 0x003C8008u) [[unlikely]] return; }
L_003C8008:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8024u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8024u) [[unlikely]] return; }
L_003C8024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003C8040; } }
L_003C802C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C803Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C803Cu) [[unlikely]] return; }
L_003C803C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C8040:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C8060:
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
    { const bool t = c.r[5].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C8094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C816C; } }
L_003C8094:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_003C80C4; } }
L_003C80A4:
    set32(c.r[4], c.r[17].w[0] << 4);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[17], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_003C80C4; } }
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.r[17].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.budget -= 2;
L_003C80C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C80A4u | kUnwind; return; } goto L_003C80A4; }
    mmi::divu(c, 0, c.r[17].w[0], c.r[5].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 16u)));  if (t) { goto L_003C8150; } }
L_003C80E0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_003C8138; }
    c.r[4].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 1u);  goto L_003C8114; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C8114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C811Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003C811Cu) [[unlikely]] return; }
L_003C811C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C8134; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_003C816C; } }
L_003C8134:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_003C8138:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_003C814C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003C814C; } }
L_003C814C:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_003C8150:
    set32(c.r[16], c.r[18].w[0] << 3);
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C80E0u | kUnwind; return; } goto L_003C80E0; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003C816C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C8190:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[8], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81D0u); set32(c.r[6], c.r[6].w[0] - 24206u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x003C81D0u) [[unlikely]] return; }
L_003C81D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81E0u); set32(c.r[5], c.r[5].w[0] - 24189u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003C81E0u) [[unlikely]] return; }
L_003C81E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_003C8314; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C81F4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x003C81F4u) [[unlikely]] return; }
L_003C81F4:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003C82CC; } }
L_003C820C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8218u); set32(c.r[5], c.r[5].w[0] - 24192u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C8218u) [[unlikely]] return; }
L_003C8218:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C822Cu); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 37u, depth + 1u); else { c.pc = 0x001403C0u; return; } if (c.pc != 0x003C822Cu) [[unlikely]] return; }
L_003C822C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8238u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C8238u) [[unlikely]] return; }
L_003C8238:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[29].w[0] + 129u);  goto L_003C824C; }
    set32(c.r[20], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_003C824C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8254u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003C8254u) [[unlikely]] return; }
L_003C8254:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8274u); set32(c.r[7], c.r[7].w[0] - 24190u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8274u) [[unlikely]] return; }
L_003C8274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C827Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 83u, depth + 1u); else { c.pc = 0x003C8B80u; return; } if (c.pc != 0x003C827Cu) [[unlikely]] return; }
L_003C827C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (t) { goto L_003C82BC; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C829Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C829Cu) [[unlikely]] return; }
L_003C829C:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], c.r[19].w[0] + 32u);
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 220u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82BCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003C82BCu) [[unlikely]] return; }
L_003C82BC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C82C8u) [[unlikely]] return; }
L_003C82C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003C82CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82DCu); set32(c.r[5], c.r[5].w[0] - 24192u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C82DCu) [[unlikely]] return; }
L_003C82DC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82E8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 51u, depth + 1u); else { c.pc = 0x001405E0u; return; } if (c.pc != 0x003C82E8u) [[unlikely]] return; }
L_003C82E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[20].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_003C82FC; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C82FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C82FCu) [[unlikely]] return; }
L_003C82FC:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C820Cu | kUnwind; return; } goto L_003C820C; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C8310u) [[unlikely]] return; }
L_003C8310:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_003C8314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C831Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003C831Cu) [[unlikely]] return; }
L_003C831C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003C8340:
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[6].w[0]);  c.pc = t; return; }
L_003C8350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003C84F0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 28u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003C84F4; }
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003C83BC; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C83B8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C84F0; } }
L_003C83B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003C83BC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C83CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 292u, depth + 1u); else { c.pc = 0x0042E560u; return; } if (c.pc != 0x003C83CCu) [[unlikely]] return; }
L_003C83CC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 84u));  goto L_003C8454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 44u)));  if (t) { goto L_003C8420; } }
L_003C83DC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C83F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C83F4u) [[unlikely]] return; }
L_003C83F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  goto L_003C8418; }
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 72u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8414u); c.f[12] = fp::add(c.f[20], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8414u) [[unlikely]] return; }
L_003C8414:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_003C8418:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003C8420:
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C83DCu | kUnwind; return; } goto L_003C83DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), 0u);  if (t) { goto L_003C845C; } }
L_003C8454:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.budget -= 2;
L_003C845C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 88u));  goto L_003C84E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 60u)));  if (t) { goto L_003C84B4; } }
L_003C846C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8484u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8484u) [[unlikely]] return; }
L_003C8484:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_003C84AC; }
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C84A8u); c.f[12] = fp::add(c.f[20], c.f[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C84A8u) [[unlikely]] return; }
L_003C84A8:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003C84AC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003C84B4:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C846Cu | kUnwind; return; } goto L_003C846C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 88u), 0u);  if (t) { goto L_003C84F0; } }
L_003C84E8:
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.budget -= 2;
L_003C84F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003C84F4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C8510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));  c.pc = t; return; }
L_003C8520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 36u));  c.pc = t; return; }
L_003C8530:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C86E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21680u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_003C8590; } }
L_003C8564:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_003C8588; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8584u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8584u) [[unlikely]] return; }
L_003C8584:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_003C8588:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_003C8590:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C8564u | kUnwind; return; } goto L_003C8564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 60u)));  if (t) { goto L_003C85F0; } }
L_003C85C4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_003C85E8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C85E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C85E4u) [[unlikely]] return; }
L_003C85E4:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_003C85E8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_003C85F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C85C4u | kUnwind; return; } goto L_003C85C4; }
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_003C8660; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 32u);  goto L_003C8664; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8660; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C8660; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C8660; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C8660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8660u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C8660u) [[unlikely]] return; }
L_003C8660:
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_003C8664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C86A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C86A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C86A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C86A0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C86A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C86A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C86A0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C86A0u) [[unlikely]] return; }
L_003C86A0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003C86D4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C86D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25984u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C86D0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003C86D0u) [[unlikely]] return; }
L_003C86D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003C86D4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C86EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C86E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C86E8u) [[unlikely]] return; }
L_003C86E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C86EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C8710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C8768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 26944u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C8750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8750u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003C8750u) [[unlikely]] return; }
L_003C8750:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C876C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8768u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C8768u) [[unlikely]] return; }
L_003C8768:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C876C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C8780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C8800; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 27040u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C87C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C87C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C87C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C87C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 85u, depth + 1u); else { c.pc = 0x003C8BB0u; return; } if (c.pc != 0x003C87C8u) [[unlikely]] return; }
L_003C87C8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003C87EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25984u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C87E8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003C87E8u) [[unlikely]] return; }
L_003C87E8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003C87EC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C8804; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8800u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C8800u) [[unlikely]] return; }
L_003C8800:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C8804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C8820:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8854u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x003C8854u) [[unlikely]] return; }
L_003C8854:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 25984u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27120u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 21680u);
    st32((c.r[21].w[0] + 8u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[21].w[0] + 12u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[21].w[0] + 16u), 0u);
    set32(c.r[17], c.r[21].w[0] + 32u);
    st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[21].w[0]), c.r[5].w[0]);
    c.budget -= 19;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; st32((c.r[21].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_003C88D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C88A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003C88A8u) [[unlikely]] return; }
L_003C88A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003C88C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C88BCu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003C88BCu) [[unlikely]] return; }
L_003C88BC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003C88C0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_003C88D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C88D0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003C88D0u) [[unlikely]] return; }
L_003C88D0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003C88D4:
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[16], c.r[21].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_003C8920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C88F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003C88F8u) [[unlikely]] return; }
L_003C88F8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003C8910; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C890Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003C890Cu) [[unlikely]] return; }
L_003C890C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003C8910:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_003C8924; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8920u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003C8920u) [[unlikely]] return; }
L_003C8920:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003C8924:
    set32(c.r[8], 0u + 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[21].w[0] + 84u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[21].w[0] + 88u), 0u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[21].w[0] + 8u), c.r[19].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[21].w[0] + 28u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[21].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[21].w[0] + 68u), c.r[7].w[0]);
    st32((c.r[21].w[0] + 72u), c.r[7].w[0]);
    st32((c.r[21].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8974u); st32((c.r[21].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 10u, depth + 1u); else { c.pc = 0x003C8190u; return; } if (c.pc != 0x003C8974u) [[unlikely]] return; }
L_003C8974:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8984u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 475u, depth + 1u); else { c.pc = 0x003C7DB0u; return; } if (c.pc != 0x003C8984u) [[unlikely]] return; }
L_003C8984:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8994u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8994u) [[unlikely]] return; }
L_003C8994:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C89C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C8A18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C8A00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8A00u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003C8A00u) [[unlikely]] return; }
L_003C8A00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C8A1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8A18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C8A18u) [[unlikely]] return; }
L_003C8A18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C8A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C8A30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003C8A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003C8A5C; } }
L_003C8A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8A54u);  if (depth < kMaxDepth) unit_00CB(c, 293u, depth + 1u); else { c.pc = 0x0042E5B0u; return; } if (c.pc != 0x003C8A54u) [[unlikely]] return; }
L_003C8A54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003C8A5C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C8A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8A94u); set32(c.r[4], c.r[4].w[0] - 24256u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003C8A94u) [[unlikely]] return; }
L_003C8A94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003C8AA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003C8AB4; } }
L_003C8AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8AACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 295u, depth + 1u); else { c.pc = 0x0042E5F0u; return; } if (c.pc != 0x003C8AACu) [[unlikely]] return; }
L_003C8AAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003C8AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C8AD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30120u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003C8AE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003C8AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C8B04; } }
L_003C8AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B04u);  if (depth < kMaxDepth) unit_00CB(c, 299u, depth + 1u); else { c.pc = 0x0042E660u; return; } if (c.pc != 0x003C8B04u) [[unlikely]] return; }
L_003C8B04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C8B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30476u)));  c.pc = t; return; }
L_003C8B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C8B34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C8B44; } }
L_003C8B34:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B44u); set32(c.r[5], ld32((c.r[28].w[0] - 30364u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8B44u) [[unlikely]] return; }
L_003C8B44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C8B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C8B64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C8B74; } }
L_003C8B64:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8B74u); set32(c.r[5], ld32((c.r[28].w[0] - 30160u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8B74u) [[unlikely]] return; }
L_003C8B74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C8B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C8B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C8BA4; } }
L_003C8B94:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8BA4u); set32(c.r[5], ld32((c.r[28].w[0] - 30156u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C8BA4u) [[unlikely]] return; }
L_003C8BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C8BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C8C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8BD4u);  if (depth < kMaxDepth) unit_00B2(c, 89u, depth + 1u); else { c.pc = 0x003C8C20u; return; } if (c.pc != 0x003C8BD4u) [[unlikely]] return; }
L_003C8BD4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003C8BF4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C8BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8BF0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C8BF0u) [[unlikely]] return; }
L_003C8BF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003C8BF4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C8C0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8C08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C8C08u) [[unlikely]] return; }
L_003C8C08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C8C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C8C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_003C8C30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24032u);  c.pc = t; return; }
L_003C8C40:
    set32(c.r[29], c.r[29].w[0] - 1008u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 24000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8C68u); set32(c.r[4], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8C68u) [[unlikely]] return; }
L_003C8C68:
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8C74u); set32(c.r[5], c.r[29].w[0] + 1004u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8C74u) [[unlikely]] return; }
L_003C8C74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 1004u));  goto L_003C8C9C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 874u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8C98; } }
    c.f[12] = ld32((c.r[29].w[0] + 1004u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8C98u); set32(c.r[4], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C8C98u) [[unlikely]] return; }
L_003C8C98:
    c.f[0] = ld32((c.r[29].w[0] + 1004u));
    c.budget -= 1;
L_003C8C9C:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CACu); st32((c.r[17].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C8CACu) [[unlikely]] return; }
L_003C8CAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CC0u); set32(c.r[6], c.r[6].w[0] - 23980u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8CC0u) [[unlikely]] return; }
L_003C8CC0:
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CCCu); set32(c.r[5], c.r[29].w[0] + 1000u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8CCCu) [[unlikely]] return; }
L_003C8CCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 1000u));  goto L_003C8CF4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 842u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8CF0; } }
    c.f[12] = ld32((c.r[29].w[0] + 1000u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8CF0u); set32(c.r[4], c.r[29].w[0] + 816u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C8CF0u) [[unlikely]] return; }
L_003C8CF0:
    c.f[0] = ld32((c.r[29].w[0] + 1000u));
    c.budget -= 1;
L_003C8CF4:
    set32(c.r[4], c.r[29].w[0] + 816u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D04u); st32((c.r[17].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C8D04u) [[unlikely]] return; }
L_003C8D04:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D18u); set32(c.r[6], c.r[6].w[0] - 23954u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8D18u) [[unlikely]] return; }
L_003C8D18:
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D24u); set32(c.r[5], c.r[29].w[0] + 996u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8D24u) [[unlikely]] return; }
L_003C8D24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 996u));  goto L_003C8D4C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 810u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8D48; } }
    c.f[12] = ld32((c.r[29].w[0] + 996u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D48u); set32(c.r[4], c.r[29].w[0] + 784u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C8D48u) [[unlikely]] return; }
L_003C8D48:
    c.f[0] = ld32((c.r[29].w[0] + 996u));
    c.budget -= 1;
L_003C8D4C:
    set32(c.r[4], c.r[29].w[0] + 784u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D5Cu); st32((c.r[17].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C8D5Cu) [[unlikely]] return; }
L_003C8D5C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D70u); set32(c.r[6], c.r[6].w[0] - 23942u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8D70u) [[unlikely]] return; }
L_003C8D70:
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8D7Cu); set32(c.r[5], c.r[29].w[0] + 992u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8D7Cu) [[unlikely]] return; }
L_003C8D7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 992u));  goto L_003C8DA4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 778u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8DA0; } }
    c.f[12] = ld32((c.r[29].w[0] + 992u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8DA0u); set32(c.r[4], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C8DA0u) [[unlikely]] return; }
L_003C8DA0:
    c.f[0] = ld32((c.r[29].w[0] + 992u));
    c.budget -= 1;
L_003C8DA4:
    set32(c.r[4], c.r[29].w[0] + 752u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8DB4u); st32((c.r[17].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C8DB4u) [[unlikely]] return; }
L_003C8DB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8DC8u); set32(c.r[6], c.r[6].w[0] - 23928u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8DC8u) [[unlikely]] return; }
L_003C8DC8:
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8DD4u); set32(c.r[5], c.r[29].w[0] + 988u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8DD4u) [[unlikely]] return; }
L_003C8DD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 988u));  goto L_003C8DFC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 746u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8DF8; } }
    c.f[12] = ld32((c.r[29].w[0] + 988u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8DF8u); set32(c.r[4], c.r[29].w[0] + 720u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C8DF8u) [[unlikely]] return; }
L_003C8DF8:
    c.f[0] = ld32((c.r[29].w[0] + 988u));
    c.budget -= 1;
L_003C8DFC:
    set32(c.r[4], c.r[29].w[0] + 720u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E0Cu); st32((c.r[17].w[0] + 144u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C8E0Cu) [[unlikely]] return; }
L_003C8E0C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E20u); set32(c.r[6], c.r[6].w[0] - 23913u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8E20u) [[unlikely]] return; }
L_003C8E20:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E2Cu); set32(c.r[5], c.r[29].w[0] + 984u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8E2Cu) [[unlikely]] return; }
L_003C8E2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 984u));  goto L_003C8E54; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 714u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8E50; } }
    c.f[12] = ld32((c.r[29].w[0] + 984u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E50u); set32(c.r[4], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C8E50u) [[unlikely]] return; }
L_003C8E50:
    c.f[0] = ld32((c.r[29].w[0] + 984u));
    c.budget -= 1;
L_003C8E54:
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E64u); st32((c.r[17].w[0] + 148u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C8E64u) [[unlikely]] return; }
L_003C8E64:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E78u); set32(c.r[6], c.r[6].w[0] - 23902u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8E78u) [[unlikely]] return; }
L_003C8E78:
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8E84u); set32(c.r[5], c.r[29].w[0] + 980u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8E84u) [[unlikely]] return; }
L_003C8E84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 980u));  goto L_003C8EAC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 682u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8EA8; } }
    c.f[12] = ld32((c.r[29].w[0] + 980u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8EA8u); set32(c.r[4], c.r[29].w[0] + 656u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C8EA8u) [[unlikely]] return; }
L_003C8EA8:
    c.f[0] = ld32((c.r[29].w[0] + 980u));
    c.budget -= 1;
L_003C8EAC:
    set32(c.r[4], c.r[29].w[0] + 656u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8EBCu); st32((c.r[17].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C8EBCu) [[unlikely]] return; }
L_003C8EBC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8ED0u); set32(c.r[6], c.r[6].w[0] - 23889u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8ED0u) [[unlikely]] return; }
L_003C8ED0:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8EDCu); set32(c.r[5], c.r[29].w[0] + 976u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8EDCu) [[unlikely]] return; }
L_003C8EDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 976u));  goto L_003C8F04; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 650u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8F00; } }
    c.f[12] = ld32((c.r[29].w[0] + 976u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F00u); set32(c.r[4], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C8F00u) [[unlikely]] return; }
L_003C8F00:
    c.f[0] = ld32((c.r[29].w[0] + 976u));
    c.budget -= 1;
L_003C8F04:
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F14u); st32((c.r[17].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C8F14u) [[unlikely]] return; }
L_003C8F14:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F28u); set32(c.r[6], c.r[6].w[0] - 23875u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8F28u) [[unlikely]] return; }
L_003C8F28:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F34u); set32(c.r[5], c.r[29].w[0] + 972u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8F34u) [[unlikely]] return; }
L_003C8F34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 972u));  goto L_003C8F5C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 618u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8F58; } }
    c.f[12] = ld32((c.r[29].w[0] + 972u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F58u); set32(c.r[4], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C8F58u) [[unlikely]] return; }
L_003C8F58:
    c.f[0] = ld32((c.r[29].w[0] + 972u));
    c.budget -= 1;
L_003C8F5C:
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F6Cu); st32((c.r[17].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C8F6Cu) [[unlikely]] return; }
L_003C8F6C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F80u); set32(c.r[6], c.r[6].w[0] - 23849u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8F80u) [[unlikely]] return; }
L_003C8F80:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8F8Cu); set32(c.r[5], c.r[29].w[0] + 968u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8F8Cu) [[unlikely]] return; }
L_003C8F8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 968u));  goto L_003C8FB4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 586u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C8FB0; } }
    c.f[12] = ld32((c.r[29].w[0] + 968u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FB0u); set32(c.r[4], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C8FB0u) [[unlikely]] return; }
L_003C8FB0:
    c.f[0] = ld32((c.r[29].w[0] + 968u));
    c.budget -= 1;
L_003C8FB4:
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FC4u); st32((c.r[17].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C8FC4u) [[unlikely]] return; }
L_003C8FC4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FD8u); set32(c.r[6], c.r[6].w[0] - 23832u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C8FD8u) [[unlikely]] return; }
L_003C8FD8:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C8FE4u); set32(c.r[5], c.r[29].w[0] + 964u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C8FE4u) [[unlikely]] return; }
L_003C8FE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 964u));  goto L_003C900C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 554u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9008; } }
    c.f[12] = ld32((c.r[29].w[0] + 964u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9008u); set32(c.r[4], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9008u) [[unlikely]] return; }
L_003C9008:
    c.f[0] = ld32((c.r[29].w[0] + 964u));
    c.budget -= 1;
L_003C900C:
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C901Cu); st32((c.r[17].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C901Cu) [[unlikely]] return; }
L_003C901C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9030u); set32(c.r[6], c.r[6].w[0] - 23803u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C9030u) [[unlikely]] return; }
L_003C9030:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C903Cu); set32(c.r[5], c.r[29].w[0] + 960u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C903Cu) [[unlikely]] return; }
L_003C903C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 960u));  goto L_003C9064; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 522u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9060; } }
    c.f[12] = ld32((c.r[29].w[0] + 960u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9060u); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9060u) [[unlikely]] return; }
L_003C9060:
    c.f[0] = ld32((c.r[29].w[0] + 960u));
    c.budget -= 1;
L_003C9064:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9074u); st32((c.r[17].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C9074u) [[unlikely]] return; }
L_003C9074:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9088u); set32(c.r[6], c.r[6].w[0] - 23768u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C9088u) [[unlikely]] return; }
L_003C9088:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9094u); set32(c.r[5], c.r[29].w[0] + 956u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C9094u) [[unlikely]] return; }
L_003C9094:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 956u));  goto L_003C90BC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 490u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C90B8; } }
    c.f[12] = ld32((c.r[29].w[0] + 956u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C90B8u); set32(c.r[4], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C90B8u) [[unlikely]] return; }
L_003C90B8:
    c.f[0] = ld32((c.r[29].w[0] + 956u));
    c.budget -= 1;
L_003C90BC:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C90CCu); st32((c.r[17].w[0] + 176u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C90CCu) [[unlikely]] return; }
L_003C90CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C90E0u); set32(c.r[6], c.r[6].w[0] - 23733u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C90E0u) [[unlikely]] return; }
L_003C90E0:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C90ECu); set32(c.r[5], c.r[29].w[0] + 952u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C90ECu) [[unlikely]] return; }
L_003C90EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 952u));  goto L_003C9114; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 458u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9110; } }
    c.f[12] = ld32((c.r[29].w[0] + 952u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9110u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9110u) [[unlikely]] return; }
L_003C9110:
    c.f[0] = ld32((c.r[29].w[0] + 952u));
    c.budget -= 1;
L_003C9114:
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9124u); st32((c.r[17].w[0] + 180u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C9124u) [[unlikely]] return; }
L_003C9124:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9138u); set32(c.r[6], c.r[6].w[0] - 23704u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C9138u) [[unlikely]] return; }
L_003C9138:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9144u); set32(c.r[5], c.r[29].w[0] + 948u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C9144u) [[unlikely]] return; }
L_003C9144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 948u));  goto L_003C916C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 426u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9168; } }
    c.f[12] = ld32((c.r[29].w[0] + 948u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9168u); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9168u) [[unlikely]] return; }
L_003C9168:
    c.f[0] = ld32((c.r[29].w[0] + 948u));
    c.budget -= 1;
L_003C916C:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C917Cu); st32((c.r[17].w[0] + 184u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C917Cu) [[unlikely]] return; }
L_003C917C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9190u); set32(c.r[6], c.r[6].w[0] - 23669u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C9190u) [[unlikely]] return; }
L_003C9190:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C919Cu); set32(c.r[5], c.r[29].w[0] + 944u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C919Cu) [[unlikely]] return; }
L_003C919C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 944u));  goto L_003C91C4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 394u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C91C0; } }
    c.f[12] = ld32((c.r[29].w[0] + 944u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C91C0u); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C91C0u) [[unlikely]] return; }
L_003C91C0:
    c.f[0] = ld32((c.r[29].w[0] + 944u));
    c.budget -= 1;
L_003C91C4:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C91D4u); st32((c.r[17].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C91D4u) [[unlikely]] return; }
L_003C91D4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C91E8u); set32(c.r[6], c.r[6].w[0] - 23634u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C91E8u) [[unlikely]] return; }
L_003C91E8:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C91F4u); set32(c.r[5], c.r[29].w[0] + 940u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C91F4u) [[unlikely]] return; }
L_003C91F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 940u));  goto L_003C921C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9218; } }
    c.f[12] = ld32((c.r[29].w[0] + 940u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9218u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9218u) [[unlikely]] return; }
L_003C9218:
    c.f[0] = ld32((c.r[29].w[0] + 940u));
    c.budget -= 1;
L_003C921C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C922Cu); st32((c.r[17].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C922Cu) [[unlikely]] return; }
L_003C922C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9240u); set32(c.r[6], c.r[6].w[0] - 23614u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C9240u) [[unlikely]] return; }
L_003C9240:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C924Cu); set32(c.r[5], c.r[29].w[0] + 936u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C924Cu) [[unlikely]] return; }
L_003C924C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 936u));  goto L_003C9274; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9270; } }
    c.f[12] = ld32((c.r[29].w[0] + 936u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9270u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9270u) [[unlikely]] return; }
L_003C9270:
    c.f[0] = ld32((c.r[29].w[0] + 936u));
    c.budget -= 1;
L_003C9274:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9284u); st32((c.r[17].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C9284u) [[unlikely]] return; }
L_003C9284:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9298u); set32(c.r[6], c.r[6].w[0] - 23596u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C9298u) [[unlikely]] return; }
L_003C9298:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C92A4u); set32(c.r[5], c.r[29].w[0] + 932u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C92A4u) [[unlikely]] return; }
L_003C92A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 932u));  goto L_003C92CC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C92C8; } }
    c.f[12] = ld32((c.r[29].w[0] + 932u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C92C8u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C92C8u) [[unlikely]] return; }
L_003C92C8:
    c.f[0] = ld32((c.r[29].w[0] + 932u));
    c.budget -= 1;
L_003C92CC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C92DCu); st32((c.r[17].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C92DCu) [[unlikely]] return; }
L_003C92DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C92F0u); set32(c.r[6], c.r[6].w[0] - 23579u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C92F0u) [[unlikely]] return; }
L_003C92F0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C92FCu); set32(c.r[5], c.r[29].w[0] + 928u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C92FCu) [[unlikely]] return; }
L_003C92FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 928u));  goto L_003C9324; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9320; } }
    c.f[12] = ld32((c.r[29].w[0] + 928u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9320u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9320u) [[unlikely]] return; }
L_003C9320:
    c.f[0] = ld32((c.r[29].w[0] + 928u));
    c.budget -= 1;
L_003C9324:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9334u); st32((c.r[17].w[0] + 192u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C9334u) [[unlikely]] return; }
L_003C9334:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9348u); set32(c.r[6], c.r[6].w[0] - 23553u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C9348u) [[unlikely]] return; }
L_003C9348:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9354u); set32(c.r[5], c.r[29].w[0] + 924u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C9354u) [[unlikely]] return; }
L_003C9354:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 924u));  goto L_003C937C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9378; } }
    c.f[12] = ld32((c.r[29].w[0] + 924u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9378u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9378u) [[unlikely]] return; }
L_003C9378:
    c.f[0] = ld32((c.r[29].w[0] + 924u));
    c.budget -= 1;
L_003C937C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C938Cu); st32((c.r[17].w[0] + 196u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C938Cu) [[unlikely]] return; }
L_003C938C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93A0u); set32(c.r[6], c.r[6].w[0] - 23524u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C93A0u) [[unlikely]] return; }
L_003C93A0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93ACu); set32(c.r[5], c.r[29].w[0] + 920u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C93ACu) [[unlikely]] return; }
L_003C93AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 920u));  goto L_003C93D4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C93D0; } }
    c.f[12] = ld32((c.r[29].w[0] + 920u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93D0u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C93D0u) [[unlikely]] return; }
L_003C93D0:
    c.f[0] = ld32((c.r[29].w[0] + 920u));
    c.budget -= 1;
L_003C93D4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93E4u); st32((c.r[17].w[0] + 200u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C93E4u) [[unlikely]] return; }
L_003C93E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C93F8u); set32(c.r[6], c.r[6].w[0] - 23499u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C93F8u) [[unlikely]] return; }
L_003C93F8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9404u); set32(c.r[5], c.r[29].w[0] + 916u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C9404u) [[unlikely]] return; }
L_003C9404:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 916u));  goto L_003C942C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9428; } }
    c.f[12] = ld32((c.r[29].w[0] + 916u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9428u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9428u) [[unlikely]] return; }
L_003C9428:
    c.f[0] = ld32((c.r[29].w[0] + 916u));
    c.budget -= 1;
L_003C942C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C943Cu); st32((c.r[17].w[0] + 204u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C943Cu) [[unlikely]] return; }
L_003C943C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9450u); set32(c.r[6], c.r[6].w[0] - 23478u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C9450u) [[unlikely]] return; }
L_003C9450:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C945Cu); set32(c.r[5], c.r[29].w[0] + 912u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C945Cu) [[unlikely]] return; }
L_003C945C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 912u));  goto L_003C9484; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9480; } }
    c.f[12] = ld32((c.r[29].w[0] + 912u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9480u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9480u) [[unlikely]] return; }
L_003C9480:
    c.f[0] = ld32((c.r[29].w[0] + 912u));
    c.budget -= 1;
L_003C9484:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9494u); st32((c.r[17].w[0] + 208u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C9494u) [[unlikely]] return; }
L_003C9494:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94A8u); set32(c.r[6], c.r[6].w[0] - 23456u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C94A8u) [[unlikely]] return; }
L_003C94A8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94B4u); set32(c.r[5], c.r[29].w[0] + 908u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C94B4u) [[unlikely]] return; }
L_003C94B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 908u));  goto L_003C94DC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C94D8; } }
    c.f[12] = ld32((c.r[29].w[0] + 908u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94D8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C94D8u) [[unlikely]] return; }
L_003C94D8:
    c.f[0] = ld32((c.r[29].w[0] + 908u));
    c.budget -= 1;
L_003C94DC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C94ECu); st32((c.r[17].w[0] + 212u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C94ECu) [[unlikely]] return; }
L_003C94EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9500u); set32(c.r[6], c.r[6].w[0] - 23423u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x003C9500u) [[unlikely]] return; }
L_003C9500:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C950Cu); set32(c.r[5], c.r[29].w[0] + 904u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x003C950Cu) [[unlikely]] return; }
L_003C950C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 904u));  goto L_003C9534; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 74u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003C9530; } }
    c.f[12] = ld32((c.r[29].w[0] + 904u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9530u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003C9530u) [[unlikely]] return; }
L_003C9530:
    c.f[0] = ld32((c.r[29].w[0] + 904u));
    c.budget -= 1;
L_003C9534:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9544u); st32((c.r[17].w[0] + 216u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003C9544u) [[unlikely]] return; }
L_003C9544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] - 23404u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9558u); st32((c.r[29].w[0] + 900u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x003C9558u) [[unlikely]] return; }
L_003C9558:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 896u);  goto L_003C956C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C9590; } }
L_003C956C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9574u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x003C9574u) [[unlikely]] return; }
L_003C9574:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 892u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9584u); set32(c.r[6], c.r[29].w[0] + 900u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x003C9584u) [[unlikely]] return; }
L_003C9584:
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9590u); set32(c.r[5], c.r[29].w[0] + 892u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x003C9590u) [[unlikely]] return; }
L_003C9590:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003C95E0; }
    c.f[1] = ld32((c.r[28].w[0] - 32564u));
    st32((c.r[17].w[0] + 124u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[28].w[0] - 31380u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[17].w[0] + 128u), c.f[1]);
    st32((c.r[17].w[0] + 200u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 204u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 196u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 172u), c.f[0]);
    st32((c.r[17].w[0] + 188u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 204u), c.r[5].w[0]);  if (t) { goto L_003C963C; } }
L_003C95E0:
    set32(c.r[16], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] - 23384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C95F0u); st32((c.r[29].w[0] + 888u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x003C95F0u) [[unlikely]] return; }
L_003C95F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 884u);  goto L_003C9604; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C9628; } }
L_003C9604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C960Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x003C960Cu) [[unlikely]] return; }
L_003C960C:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C961Cu); set32(c.r[6], c.r[29].w[0] + 888u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x003C961Cu) [[unlikely]] return; }
L_003C961C:
    set32(c.r[4], c.r[29].w[0] + 884u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9628u); set32(c.r[5], c.r[29].w[0] + 880u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x003C9628u) [[unlikely]] return; }
L_003C9628:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 96u), 0u);  goto L_003C9640; }
    st32((c.r[17].w[0] + 200u), 0u);
    st32((c.r[17].w[0] + 204u), 0u);
    c.budget -= 2;
L_003C963C:
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 1;
L_003C9640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.f[12] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 96u), c.f[0]);  if (t) { goto L_003C9684; } }
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9684u); st32((c.r[17].w[0] + 88u), c.f[1]);  if (depth < kMaxDepth) unit_00B2(c, 291u, depth + 1u); else { c.pc = 0x003CB390u; return; } if (c.pc != 0x003C9684u) [[unlikely]] return; }
L_003C9684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C968Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 206u, depth + 1u); else { c.pc = 0x003C96A0u; return; } if (c.pc != 0x003C968Cu) [[unlikely]] return; }
L_003C968C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1008u);  c.pc = t; return; }
L_003C96A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[7], c.r[29].w[0] + 124u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[19].w[0] + 60u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[8], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 48u)));
    set32(c.r[18], ld32((c.r[8].w[0] + 320u)));
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9704u); set32(c.r[4], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x003C9704u) [[unlikely]] return; }
L_003C9704:
    set32(c.r[2], c.r[19].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[5], c.r[19].w[0] + 68u);
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[6], c.r[29].w[0] + 116u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9728u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x003C9728u) [[unlikely]] return; }
L_003C9728:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_003C9744; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C9744:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9750u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00B3(c, 67u, depth + 1u); else { c.pc = 0x003CC9C0u; return; } if (c.pc != 0x003C9750u) [[unlikely]] return; }
L_003C9750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003C97A4; } }
L_003C9758:
    set32(c.r[3], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_003C9774; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C9774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C977Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 205u, depth + 1u); else { c.pc = 0x004D1D60u; return; } if (c.pc != 0x003C977Cu) [[unlikely]] return; }
L_003C977C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_003C97A0; } }
    set32(c.r[2], c.r[19].w[0] + 60u);
    set32(c.r[4], c.r[29].w[0] + 108u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[6], c.r[29].w[0] + 104u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97A0u); set32(c.r[7], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0004(c, 36u, depth + 1u); else { c.pc = 0x00110510u; return; } if (c.pc != 0x003C97A0u) [[unlikely]] return; }
L_003C97A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003C97A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9758u | kUnwind; return; } goto L_003C9758; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97BCu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0007(c, 328u, depth + 1u); else { c.pc = 0x0011F4E0u; return; } if (c.pc != 0x003C97BCu) [[unlikely]] return; }
L_003C97BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_003C97D8; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C97D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C97E4u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00B3(c, 59u, depth + 1u); else { c.pc = 0x003CC8A0u; return; } if (c.pc != 0x003C97E4u) [[unlikely]] return; }
L_003C97E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003C9838; } }
L_003C97EC:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_003C9808; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C9808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9810u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 205u, depth + 1u); else { c.pc = 0x004D1D60u; return; } if (c.pc != 0x003C9810u) [[unlikely]] return; }
L_003C9810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_003C9834; } }
    set32(c.r[2], c.r[19].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[5], c.r[19].w[0] + 68u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9834u); set32(c.r[7], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0004(c, 36u, depth + 1u); else { c.pc = 0x00110510u; return; } if (c.pc != 0x003C9834u) [[unlikely]] return; }
L_003C9834:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003C9838:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C97ECu | kUnwind; return; } goto L_003C97EC; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9854u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x003C9854u) [[unlikely]] return; }
L_003C9854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C9870:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98A8u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003C98A8u) [[unlikely]] return; }
L_003C98A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_003C98CC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 205u, depth + 1u); else { c.pc = 0x004D1D60u; return; } if (c.pc != 0x003C98BCu) [[unlikely]] return; }
L_003C98BC:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_003C98F4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003C98CC:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98D8u); set32(c.r[4], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003C98D8u) [[unlikely]] return; }
L_003C98D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C9A4C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C98ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 205u, depth + 1u); else { c.pc = 0x004D1D60u; return; } if (c.pc != 0x003C98ECu) [[unlikely]] return; }
L_003C98EC:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_003C98F4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_003C9978; }
    set32(c.r[3], c.r[17].w[0] + 60u);
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (t) { goto L_003C9928; } }
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.budget -= 1;
L_003C9920:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 2;
L_003C9928:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[4].d[0] << 32;  goto L_003C9948; }
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { c.r[3].d[0] = c.r[4].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C9920u | kUnwind; return; } goto L_003C9920; }
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 1;
L_003C9948:
    set32(c.r[3], c.r[17].w[0] + 60u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_003C99F0; }
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C996Cu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0004(c, 34u, depth + 1u); else { c.pc = 0x00110490u; return; } if (c.pc != 0x003C996Cu) [[unlikely]] return; }
L_003C996C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C99EC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003C9978:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C99EC; } }
    set32(c.r[3], c.r[17].w[0] + 80u);
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (t) { goto L_003C99A8; } }
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.budget -= 1;
L_003C99A0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 2;
L_003C99A8:
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[4].d[0] = c.r[4].d[0] << 32;  goto L_003C99C8; }
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[6].d[0]) { c.r[3].d[0] = c.r[4].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C99A0u | kUnwind; return; } goto L_003C99A0; }
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 1;
L_003C99C8:
    set32(c.r[3], c.r[17].w[0] + 80u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003C99EC; } }
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[5], c.r[17].w[0] + 68u);
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C99ECu); set32(c.r[6], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_0004(c, 34u, depth + 1u); else { c.pc = 0x00110490u; return; } if (c.pc != 0x003C99ECu) [[unlikely]] return; }
L_003C99EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003C99F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_003C9A24; }
    set32(c.r[2], c.r[17].w[0] + 60u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 76u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A18u); set32(c.r[7], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0004(c, 36u, depth + 1u); else { c.pc = 0x00110510u; return; } if (c.pc != 0x003C9A18u) [[unlikely]] return; }
L_003C9A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9A48; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003C9A24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C9A48; } }
    set32(c.r[2], c.r[17].w[0] + 80u);
    set32(c.r[5], c.r[17].w[0] + 68u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[6], c.r[29].w[0] + 68u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A48u); set32(c.r[7], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0004(c, 36u, depth + 1u); else { c.pc = 0x00110510u; return; } if (c.pc != 0x003C9A48u) [[unlikely]] return; }
L_003C9A48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C9A4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C9A60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9A8Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003C9A8Cu) [[unlikely]] return; }
L_003C9A8C:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_003C9C30; }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_003C9BF4; }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_003C9BB8; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_003C9B0C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_003C9AD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_003C9C68; } }
L_003C9AD0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9ADCu); set32(c.r[18], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003C9ADCu) [[unlikely]] return; }
L_003C9ADC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[18].w[0] + 1u);  goto L_003C9AF0; }
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_003C9AF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9B04u); set32(c.r[5], c.r[5].w[0] - 23369u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x003C9B04u) [[unlikely]] return; }
L_003C9B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9C64; } }
L_003C9B0C:
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_003C9B24; }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003C9B24:
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.f[0]);
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003C9B94; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003C9B8C; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003C9B84; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003C9B7C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003C9B74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003C9B9C; } }
L_003C9B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 23357u);  if (t) { goto L_003C9BA0; } }
L_003C9B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 23351u);  if (t) { goto L_003C9BA0; } }
L_003C9B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 23346u);  if (t) { goto L_003C9BA0; } }
L_003C9B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 23341u);  if (t) { goto L_003C9BA0; } }
L_003C9B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 23335u);  if (t) { goto L_003C9BA0; } }
L_003C9B9C:
    set32(c.r[7], c.r[7].w[0] - 23331u);
    c.budget -= 1;
L_003C9BA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BB0u); set32(c.r[5], c.r[5].w[0] - 23330u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x003C9BB0u) [[unlikely]] return; }
L_003C9BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9C64; } }
L_003C9BB8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BC4u); set32(c.r[18], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003C9BC4u) [[unlikely]] return; }
L_003C9BC4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[18].w[0] + 1u);  goto L_003C9BD8; }
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_003C9BD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9BECu); set32(c.r[5], c.r[5].w[0] - 23314u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x003C9BECu) [[unlikely]] return; }
L_003C9BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9C64; } }
L_003C9BF4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C00u); set32(c.r[18], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003C9C00u) [[unlikely]] return; }
L_003C9C00:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[18].w[0] + 1u);  goto L_003C9C14; }
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_003C9C14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C28u); set32(c.r[5], c.r[5].w[0] - 23297u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x003C9C28u) [[unlikely]] return; }
L_003C9C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C9C64; } }
L_003C9C30:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C3Cu); set32(c.r[18], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003C9C3Cu) [[unlikely]] return; }
L_003C9C3C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[18].w[0] + 1u);  goto L_003C9C50; }
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_003C9C50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9C64u); set32(c.r[5], c.r[5].w[0] - 23282u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x003C9C64u) [[unlikely]] return; }
L_003C9C64:
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_003C9C68:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003C9CB8; }
    c.f[0] = fp::cvt_w_s(c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[29].w[0] + 96u), c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CB0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003C9CB0u) [[unlikely]] return; }
L_003C9CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_003C9CEC; } }
L_003C9CB8:
    st32((c.r[29].w[0] + 80u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.f[20]);
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9CE8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003C9CE8u) [[unlikely]] return; }
L_003C9CE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_003C9CEC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 113u);  goto L_003C9CFC; }
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_003C9CFC:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D08u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003C9D08u) [[unlikely]] return; }
L_003C9D08:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9D14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C9D14u) [[unlikely]] return; }
L_003C9D14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C9D30:
    set32(c.r[29], c.r[29].w[0] - 576u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.f[29] = c.f[12];
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9DB4u); set32(c.r[4], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_00B2(c, 89u, depth + 1u); else { c.pc = 0x003C8C20u; return; } if (c.pc != 0x003C9DB4u) [[unlikely]] return; }
L_003C9DB4:
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], ld32((c.r[6].w[0] + 424u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  goto L_003CB328; }
    set32(c.r[3], ld32((c.r[6].w[0] + 132u)));
    c.f[0] = ld32((c.r[28].w[0] - 30152u));
    c.f[1] = ld32((c.r[3].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB324; } }
    c.f[0] = ld32((c.r[16].w[0] + 1444u));
    set32(c.r[4], ld32((c.r[20].w[0] + 44u)));
    c.f[28] = 0u;
    set32(c.r[3], 0u + 3u);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1448u));
    c.f[27] = c.f[28];
    c.f[26] = c.f[28];
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[25] = c.f[28];  if (t) { goto L_003CA178; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 216u));  goto L_003CA0C4; }
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003C9EB8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[6].w[0] + 124u)));  goto L_003C9E38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 216u));  if (t) { goto L_003CA200; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 124u)));
    c.budget -= 1;
L_003C9E38:
    c.f[5] = ld32((c.r[16].w[0] + 432u));
    c.f[4] = ld32((c.r[16].w[0] + 436u));
    c.f[3] = ld32((c.r[16].w[0] + 440u));
    c.f[2] = ld32((c.r[2].w[0] + 400u));
    c.f[1] = ld32((c.r[2].w[0] + 404u));
    c.f[0] = ld32((c.r[2].w[0] + 408u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9E64u); c.f[20] = c.f[0] & fp::kAbs;  if (depth < kMaxDepth) unit_00F6(c, 6u, depth + 1u); else { c.pc = 0x004D8220u; return; } if (c.pc != 0x003C9E64u) [[unlikely]] return; }
L_003C9E64:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB324; } }
    st32((c.r[20].w[0] + 44u), 0u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[29].w[0] + 444u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 436u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 440u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9EACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003C9EACu) [[unlikely]] return; }
L_003C9EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB324; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003C9EB8:
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 420u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 416u), 0u);
    st32((c.r[29].w[0] + 424u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 416u);
    st8((c.r[29].w[0] + 428u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9EECu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003C9EECu) [[unlikely]] return; }
L_003C9EEC:
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 408u), 0u);
    set32(c.r[4], c.r[20].w[0] + 8u);
    st32((c.r[29].w[0] + 400u), c.r[6].w[0]);
    set32(c.r[7], c.r[29].w[0] + 400u);
    st32((c.r[29].w[0] + 404u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 412u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F20u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003C9F20u) [[unlikely]] return; }
L_003C9F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F28u); set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003C9F28u) [[unlikely]] return; }
L_003C9F28:
    set32(c.r[4], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C9F34u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003C9F34u) [[unlikely]] return; }
L_003C9F34:
    c.f[4] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[3] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 2u, c.f[0], c.f[2]);
    c.f[5] = fp::mul(c.f[1], c.f[2]);
    c.f[4] = fp::mul(c.f[4], c.f[2]);
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[28].w[0] - 31376u));
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003C9FA0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C9FA0:
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.f[2] = ld32((c.r[3].w[0] + 400u));
    c.f[1] = ld32((c.r[3].w[0] + 404u));
    c.f[0] = ld32((c.r[3].w[0] + 408u));
    c.facc = fp::mul(c.f[2], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[5]));
    c.f[0] = ld32((c.r[28].w[0] - 31936u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003C9FD8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C9FD8:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1188u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_003CA008; }
    c.f[1] = ld32((c.r[16].w[0] + 1116u));
    c.f[0] = ld32((c.r[28].w[0] - 31788u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CA004; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA004:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_003CA008:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CB324; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.f[2] = ld32((c.r[17].w[0] + 108u));  goto L_003CA038; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CA034; } }
    st32((c.r[20].w[0] + 100u), 0u);
    set32(c.r[19], 0u + 1u);
    st32((c.r[20].w[0] + 108u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 44u), 0u);  if (t) { goto L_003CA1FC; } }
L_003CA034:
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 1;
L_003CA038:
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[20].w[0] + 100u));  goto L_003CA078; }
    st32((c.r[20].w[0] + 100u), c.f[1]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[20].w[0] + 108u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003CB324; } }
    c.f[0] = ld32((c.r[20].w[0] + 100u));
    c.budget -= 1;
L_003CA078:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[20].w[0] + 100u));  goto L_003CA090; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[20].w[0] + 100u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 100u));
    c.budget -= 3;
L_003CA090:
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[29]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 100u), c.f[1]);  if (t) { goto L_003CB324; } }
    st32((c.r[20].w[0] + 100u), c.f[0]);
    set32(c.r[3], 0u + 3u);
    st32((c.r[20].w[0] + 108u), 0u);
    st32((c.r[20].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB324; } }
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 1;
L_003CA0C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[20].w[0] + 104u), 0u);  goto L_003CA1FC; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1166u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA0F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1052u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003CA0F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA16C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 124u)));
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    c.f[5] = ld32((c.r[3].w[0] + 400u));
    c.f[4] = ld32((c.r[3].w[0] + 404u));
    c.f[3] = ld32((c.r[3].w[0] + 408u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[0] = ld32((c.r[3].w[0] - 24088u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA16C; } }
    c.f[1] = ld32((c.r[20].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[29]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[20].w[0] + 104u), c.f[1]);  if (t) { goto L_003CA178; } }
    set32(c.r[3], 0u + 3u);
    st32((c.r[20].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 104u), 0u);  if (t) { goto L_003CA178; } }
L_003CA16C:
    st32((c.r[20].w[0] + 104u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CA1FC; } }
L_003CA178:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1188u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA1A0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1116u));
    c.f[0] = ld32((c.r[28].w[0] - 31788u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CA1A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA1A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CB324; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.f[2] = ld32((c.r[17].w[0] + 108u));
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    c.f[5] = ld32((c.r[3].w[0] + 400u));
    c.f[4] = ld32((c.r[3].w[0] + 404u));
    c.f[3] = ld32((c.r[3].w[0] + 408u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[20].w[0] + 44u), 0u);  goto L_003CA1F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA1F0u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CA1F0u) [[unlikely]] return; }
L_003CA1F0:
    st32((c.r[20].w[0] + 44u), 0u);
    c.budget -= 1;
L_003CA1F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB324; } }
L_003CA1FC:
    c.f[1] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 1;
L_003CA200:
    c.f[0] = ld32((c.r[20].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CA214; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA214:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    c.f[23] = ld32((c.r[28].w[0] - 31492u));
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 564u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 564u));
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 348u), 0u);
    c.f[24] = c.f[0];
    st32((c.r[29].w[0] + 560u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[29].w[0] + 524u), c.f[1]);
    set32(c.r[23], ld32((c.r[29].w[0] + 524u)));
    st32((c.r[29].w[0] + 252u), c.f[23]);
    st32((c.r[29].w[0] + 520u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 520u)));
    st32((c.r[29].w[0] + 248u), c.f[23]);
    st32((c.r[29].w[0] + 244u), c.f[23]);
    c.f[22] = c.f[23];
    st32((c.r[29].w[0] + 240u), c.f[23]);
    st32((c.r[29].w[0] + 268u), c.r[3].w[0]);
    c.f[21] = c.f[23];
    c.f[20] = c.f[23];
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 236u), c.f[23]);  if (t) { goto L_003CA488; } }
    c.r[4].d[0] = c.r[23].d[0] << 32;
    c.budget -= 1;
L_003CA298:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[3].d[0]) { c.r[3].d[0] = c.r[23].d[0] << 32;  goto L_003CA480; }
    set32(c.r[4], ld32((c.r[18].w[0] + 424u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003CA47C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[3] = ld32((c.r[2].w[0] + 76u));
    c.f[2] = ld32((c.r[2].w[0] + 80u));
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[31] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    c.f[30] = c.f[31] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[30]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA300; } }
    c.f[23] = c.f[31];
    st32((c.r[29].w[0] + 252u), c.f[30]);
    c.budget -= 2;
L_003CA300:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[31]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_003CA32C; }
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    fpu_compare(c, fp::key(c.f[31]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA328; } }
    st32((c.r[29].w[0] + 248u), c.f[31]);
    c.budget -= 1;
L_003CA328:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003CA32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA334u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 296u, depth + 1u); else { c.pc = 0x003CB550u; return; } if (c.pc != 0x003CA334u) [[unlikely]] return; }
L_003CA334:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[20].w[0] + 113u));  goto L_003CA380; }
    fpu_compare(c, fp::key(c.f[30]) < fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA350; } }
    c.f[22] = c.f[30];
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003CA350:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[31]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = ld8((c.r[18].w[0] + 1200u));  goto L_003CA42C; }
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[31]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 244u), c.f[31]);  if (t) { goto L_003CA428; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 113u));
    c.budget -= 1;
L_003CA380:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 64u)));  goto L_003CA394; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003CA3F0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_003CA394:
    set32(c.r[3], c.r[20].w[0] + 60u);
    st32((c.r[29].w[0] + 512u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 512u));
    st32((c.r[29].w[0] + 516u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 516u));
    st32((c.r[29].w[0] + 480u), c.f[0]);
    st32((c.r[29].w[0] + 484u), c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 484u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 480u)));  if (t) { goto L_003CA3DC; } }
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_003CA3C0:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_003CA3DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CA3F0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003CA3DC:
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[5].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA3C0u | kUnwind; return; } goto L_003CA3C0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA3F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 236u));  goto L_003CA414; }
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    fpu_compare(c, fp::key(c.f[30]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.f[30]);  if (t) { goto L_003CA428; } }
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.budget -= 1;
L_003CA414:
    fpu_compare(c, fp::key(c.f[30]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA428; } }
    st32((c.r[29].w[0] + 236u), c.f[30]);
    st32((c.r[29].w[0] + 348u), c.r[18].w[0]);
    c.budget -= 2;
L_003CA428:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1200u));
    c.budget -= 1;
L_003CA42C:
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA47C; } }
    c.r[3].d[0] = 0ull < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 228u));  goto L_003CA464; }
    c.f[1] = ld32((c.r[20].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003CA460; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA460:
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    c.budget -= 1;
L_003CA464:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[30].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_003CA47C; } }
    c.f[21] = ld32((c.r[29].w[0] + 232u));
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 3;
L_003CA47C:
    c.r[3].d[0] = c.r[23].d[0] << 32;
    c.budget -= 1;
L_003CA480:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[23], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003CA488:
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    c.r[4].d[0] = c.r[23].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[23].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA298u | kUnwind; return; } goto L_003CA298; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1169u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[31] = ld32((c.r[16].w[0] + 1672u));  if (t) { goto L_003CA4C4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1185u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003CA4C4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_003CA4D8; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1188u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
L_003CA4D8:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CA4EC; } }
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003CA4EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CA510; } }
    c.r[3].d[0] = 0ull < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA510; } }
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[31]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003CA510; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA510:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CA534; } }
    c.f[1] = ld32((c.r[17].w[0] + 204u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CA534; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA534:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_003CA574; }
    c.f[1] = ld32((c.r[17].w[0] + 204u));
    c.f[0] = ld32((c.r[28].w[0] - 31492u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003CA564; } }
    c.f[0] = ld32((c.r[20].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA564; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003CA564:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CA570; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA570:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003CA574:
    st8((c.r[20].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[20].w[0] + 108u), c.r[22].w[0]);  if (t) { goto L_003CA5AC; } }
    c.r[3].d[0] = ld8((c.r[22].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 108u)));  goto L_003CA5B0; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CA5AC; } }
    st32((c.r[20].w[0] + 108u), 0u);
    c.budget -= 1;
L_003CA5AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 1;
L_003CA5B0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 108u)));  goto L_003CA5D8; }
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CA5D4; } }
    st32((c.r[20].w[0] + 108u), 0u);
    c.budget -= 1;
L_003CA5D4:
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 1;
L_003CA5D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003CA5F0; } }
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[20].w[0] + 108u)));  goto L_003CA798; }
L_003CA5F0:
    c.f[2] = ld32((c.r[20].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[29].w[0] + 236u));  goto L_003CA68C; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 113u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 64u)));  goto L_003CA618; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003CA674; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_003CA618:
    set32(c.r[3], c.r[20].w[0] + 60u);
    st32((c.r[29].w[0] + 504u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 504u));
    st32((c.r[29].w[0] + 508u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 508u));
    st32((c.r[29].w[0] + 472u), c.f[0]);
    st32((c.r[29].w[0] + 476u), c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 476u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 472u)));  if (t) { goto L_003CA660; } }
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_003CA644:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[21].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_003CA660; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CA674; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003CA660:
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[5].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA644u | kUnwind; return; } goto L_003CA644; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA674:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CA688; } }
    st32((c.r[20].w[0] + 108u), c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CA794; } }
L_003CA688:
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.budget -= 1;
L_003CA68C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA6A8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 348u)));
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 108u), c.r[3].w[0]);  if (t) { goto L_003CA794; } }
L_003CA6A8:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CA748; } }
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[31]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA748; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 113u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 64u)));  goto L_003CA6D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003CA734; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_003CA6D8:
    set32(c.r[3], c.r[20].w[0] + 60u);
    st32((c.r[29].w[0] + 496u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 496u));
    st32((c.r[29].w[0] + 500u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 500u));
    st32((c.r[29].w[0] + 464u), c.f[0]);
    st32((c.r[29].w[0] + 468u), c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 468u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 464u)));  if (t) { goto L_003CA720; } }
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_003CA704:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[21].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_003CA720; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CA734; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003CA720:
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[5].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA704u | kUnwind; return; } goto L_003CA704; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA734:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CA748; } }
    st32((c.r[20].w[0] + 108u), c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CA794; } }
L_003CA748:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA794; } }
    c.f[0] = c.f[31] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CA794; } }
    c.f[0] = ld32((c.r[28].w[0] - 31492u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CA794; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[31]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA794; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 348u)));
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[20].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 3;
L_003CA794:
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 1;
L_003CA798:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 108u)));  goto L_003CA834; }
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CA830; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 113u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 64u)));  goto L_003CA7C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003CA824; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_003CA7C8:
    set32(c.r[3], c.r[20].w[0] + 60u);
    st32((c.r[29].w[0] + 488u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 488u));
    st32((c.r[29].w[0] + 492u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 492u));
    st32((c.r[29].w[0] + 456u), c.f[0]);
    st32((c.r[29].w[0] + 460u), c.f[1]);
    set32(c.r[3], ld32((c.r[29].w[0] + 460u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 456u)));  if (t) { goto L_003CA810; } }
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_003CA7F4:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[21].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_003CA810; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CA824; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003CA810:
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[5].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CA7F4u | kUnwind; return; } goto L_003CA7F4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA824:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CA830; } }
    st32((c.r[20].w[0] + 108u), 0u);
    c.budget -= 1;
L_003CA830:
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 1;
L_003CA834:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 108u)));  goto L_003CA85C; }
    set32(c.r[3], ld32((c.r[3].w[0] + 68u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CA858; } }
    st32((c.r[20].w[0] + 108u), 0u);
    c.budget -= 1;
L_003CA858:
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 1;
L_003CA85C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[20].w[0] + 112u));  goto L_003CB01C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA86Cu); set32(c.r[4], ld32((c.r[20].w[0] + 28u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003CA86Cu) [[unlikely]] return; }
L_003CA86C:
    set32(c.r[4], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA878u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003CA878u) [[unlikely]] return; }
L_003CA878:
    c.f[3] = ld32((c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    c.f[5] = fp::sub(c.f[3], c.f[2]);
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 400u));
    c.f[1] = ld32((c.r[4].w[0] + 404u));
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 408u));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_rsqrt(c, 2u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[5], c.f[2]);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    fpu_div(c, 4u, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 36;
    if (!(c.fcr31 & kFpuCondition)) { c.f[30] = c.f[4];  goto L_003CA914; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[30] = c.f[4] ^ fp::kSign;  if (t) { goto L_003CA914; } }
    c.f[30] = c.f[4];
    c.budget -= 1;
L_003CA914:
    c.f[3] = ld32((c.r[4].w[0] + 384u));
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = ld32((c.r[4].w[0] + 388u));
    c.f[1] = ld32((c.r[4].w[0] + 392u));
    c.facc = fp::mul(c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 11;
    { const bool t = c.r[23].d[0] != 0ull; st32((c.r[29].w[0] + 224u), c.f[0]);  if (t) { goto L_003CAF84; } }
    c.f[2] = ld32((c.r[20].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_003CAEC4; }
    set32(c.r[5], ld32((c.r[20].w[0] + 108u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[29];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA964u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 291u, depth + 1u); else { c.pc = 0x003CB390u; return; } if (c.pc != 0x003CA964u) [[unlikely]] return; }
L_003CA964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB018; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    c.f[3] = ld32((c.r[2].w[0] + 400u));
    c.f[2] = ld32((c.r[2].w[0] + 404u));
    c.f[1] = ld32((c.r[2].w[0] + 408u));
    c.facc = fp::mul(c.f[0], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[2]));
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    c.f[22] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27000u)));
    c.budget -= 14;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26996u)));  goto L_003CA9C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9ACu); c.f[12] = ld32((c.r[28].w[0] - 31372u));  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003CA9ACu) [[unlikely]] return; }
L_003CA9AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 24080u), c.f[0]);
    st8((c.r[28].w[0] - 27000u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26996u)));
    c.budget -= 5;
L_003CA9C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CA9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CA9D0u); c.f[12] = ld32((c.r[28].w[0] - 31384u));  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003CA9D0u) [[unlikely]] return; }
L_003CA9D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 24072u), c.f[0]);
    st8((c.r[28].w[0] - 26996u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_003CA9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[0] = ld32((c.r[2].w[0] - 24080u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003CA9F8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CA9F8:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[30].d[0] = c.r[3].d[0] & 255ull;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CAA10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CAA10:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[2].d[0] = 0ull < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_003CAA2C; } }
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003CAA2C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 224u));  goto L_003CAA78; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[1] = ld32((c.r[2].w[0] - 24072u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[0] = ld32((c.r[2].w[0] - 24072u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003CAA68; } }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CAA68; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003CAA68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAA74; } }
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003CAA74:
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.budget -= 1;
L_003CAA78:
    c.r[2].d[0] = c.r[23].d[0] & 255ull;
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003CAA94; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CAA94:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAAA0u); st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAAA0u) [[unlikely]] return; }
L_003CAAA0:
    set32(c.r[3], 0u + 3u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 5;
    if (c.r[30].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_003CABD0; }
    c.f[0] = 0u;
    set32(c.r[3], 0u + 1u);
    fpu_compare(c, fp::key(c.f[30]) <= fp::key(c.f[0]));
    c.f[1] = ld32((c.r[28].w[0] - 32432u));
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_003CAAD4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CAAD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAAEC; } }
    fpu_compare(c, fp::key(c.f[30]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CAAEC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CAAEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CABCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAAFCu); set32(c.r[16], 0u - 1u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAAFCu) [[unlikely]] return; }
L_003CAAFC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003CAB10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAB10; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003CAB10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAB20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_003CABCC; } }
L_003CAB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB28u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAB28u) [[unlikely]] return; }
L_003CAB28:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_003CAB3C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAB3C; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_003CAB3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAB88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB4Cu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAB4Cu) [[unlikely]] return; }
L_003CAB4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003CAB60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAB60; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003CAB60:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_003CAB7C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAB80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_003CAB7C:
    c.f[25] = c.r[3].w[0];
    c.budget -= 1;
L_003CAB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CABCC; } }
L_003CAB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAB90u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAB90u) [[unlikely]] return; }
L_003CAB90:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003CABA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CABA4; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003CABA4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_003CABC0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[26] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003CABC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_003CABC0:
    c.f[26] = c.r[3].w[0];
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_003CABC8:
    st32((c.r[20].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 1;
L_003CABCC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003CABD0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { ld128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);  goto L_003CAE88; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_003CAD00; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  goto L_003CABF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB018; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_003CABF8:
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003CAC54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC18u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAC18u) [[unlikely]] return; }
L_003CAC18:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003CAC2C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAC2C; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003CAC2C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_003CAC48; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[27] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAC4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_003CAC48:
    c.f[27] = c.r[3].w[0];
    c.budget -= 1;
L_003CAC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB018; } }
L_003CAC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC5Cu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAC5Cu) [[unlikely]] return; }
L_003CAC5C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_003CAC70; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAC70; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_003CAC70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CACBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAC80u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAC80u) [[unlikely]] return; }
L_003CAC80:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003CAC94; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAC94; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003CAC94:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_003CACB0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CACB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_003CACB0:
    c.f[25] = c.r[3].w[0];
    c.budget -= 1;
L_003CACB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB018; } }
L_003CACBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CACC4u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CACC4u) [[unlikely]] return; }
L_003CACC4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003CACD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CACD8; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003CACD8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_003CACF4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[26] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CACF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_003CACF4:
    c.f[26] = c.r[3].w[0];
    c.budget -= 1;
L_003CACF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB018; } }
L_003CAD00:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_003CAD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAD10u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAD10u) [[unlikely]] return; }
L_003CAD10:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003CAD24; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAD24; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003CAD24:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], 0u + 2u);  goto L_003CAD38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_003CAD38; } }
    set32(c.r[19], 0u + 2u);
    c.budget -= 1;
L_003CAD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB018; } }
L_003CAD40:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { ld128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);  goto L_003CAD6C; }
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], 0u + 3u);  goto L_003CAD60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 4u);  if (t) { goto L_003CAD60; } }
    set32(c.r[19], 0u + 3u);
    c.budget -= 1;
L_003CAD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB018; } }
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);
    c.budget -= 1;
L_003CAD6C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CB018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAD7Cu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAD7Cu) [[unlikely]] return; }
L_003CAD7C:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32344u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CAE40; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CAE40; } }
    c.f[1] = ld32((c.r[28].w[0] - 32068u));
    set32(c.r[2], ld32((c.r[3].w[0] + 128u)));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[2] = ld32((c.r[17].w[0] + 196u));
    c.f[3] = ld32((c.r[2].w[0] + 196u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CAE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE00u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAE00u) [[unlikely]] return; }
L_003CAE00:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003CAE14; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAE14; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003CAE14:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_003CAE30; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[26] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_003CAE38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_003CAE30:
    c.f[26] = c.r[3].w[0];
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_003CAE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003CB018; } }
L_003CAE40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE48u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAE48u) [[unlikely]] return; }
L_003CAE48:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_003CAE5C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003CAE5C; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_003CAE5C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_003CAE78; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CAE7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_003CAE78:
    c.f[25] = c.r[3].w[0];
    c.budget -= 1;
L_003CAE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB018; } }
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);
    c.budget -= 1;
L_003CAE88:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.f[28] = ld32((c.r[29].w[0] + 224u));  goto L_003CB018; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAE98u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CAE98u) [[unlikely]] return; }
L_003CAE98:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = c.r[2].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CABCCu | kUnwind; return; } goto L_003CABCC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CABCCu | kUnwind; return; } goto L_003CABCC; } }
    set32(c.r[16], c.r[16].w[0] - 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CABCCu | kUnwind; return; } goto L_003CABCC; } }
    c.f[28] = ld32((c.r[29].w[0] + 224u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB018; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_003CAEC4:
    set32(c.r[5], ld32((c.r[20].w[0] + 108u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[3], ld32((c.r[5].w[0] + 128u)));
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[2] = ld32((c.r[3].w[0] + 76u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB018; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[31]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CB018; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CAF0Cu); c.f[12] = c.f[29];  if (depth < kMaxDepth) unit_00B2(c, 291u, depth + 1u); else { c.pc = 0x003CB390u; return; } if (c.pc != 0x003CAF0Cu) [[unlikely]] return; }
L_003CAF0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB018; } }
    c.f[1] = ld32((c.r[17].w[0] + 208u));
    c.f[0] = ld32((c.r[20].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB018; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 420u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 84u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003CB018; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[20].w[0] + 44u), c.r[3].w[0]);
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[20].w[0] + 108u)));
    c.f[1] = ld32((c.r[17].w[0] + 192u));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.f[2] = ld32((c.r[3].w[0] + 192u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[19], 0u + 3u);  goto L_003CAF7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 4u);  if (t) { goto L_003CAF7C; } }
    set32(c.r[19], 0u + 3u);
    c.budget -= 1;
L_003CAF7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB018; } }
L_003CAF84:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[20].w[0] + 116u));  goto L_003CAFDC; }
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB018; } }
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[24] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[22], c.f[0]);
    c.f[3] = fp::min(c.f[0], c.f[24]);
    c.f[1] = ld32((c.r[28].w[0] - 30468u));
    c.f[0] = ld32((c.r[20].w[0] + 140u));
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 256u), c.f[0]);  if (t) { goto L_003CB018; } }
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    c.budget -= 1;
L_003CAFDC:
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB018; } }
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[24] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[22], c.f[0]);
    c.f[3] = fp::min(c.f[0], c.f[24]);
    c.f[0] = ld32((c.r[20].w[0] + 144u));
    c.f[1] = ld32((c.r[28].w[0] - 30464u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.facc = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.budget -= 12;
L_003CB018:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 112u));
    c.budget -= 1;
L_003CB01C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[20].w[0] + 132u));  goto L_003CB070; }
    c.f[0] = ld32((c.r[20].w[0] + 96u));
    c.f[1] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[29]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 96u), c.f[0]);  if (t) { goto L_003CB074; } }
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 96u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB064u); st32((c.r[20].w[0] + 88u), c.f[1]);  if (depth < kMaxDepth) unit_00B2(c, 291u, depth + 1u); else { c.pc = 0x003CB390u; return; } if (c.pc != 0x003CB064u) [[unlikely]] return; }
L_003CB064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB074; } }
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.budget -= 1;
L_003CB070:
    st32((c.r[20].w[0] + 96u), c.f[0]);
    c.budget -= 1;
L_003CB074:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003CB21C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB094u); set32(c.r[16], ld32((c.r[3].w[0] + 152u)));  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x003CB094u) [[unlikely]] return; }
L_003CB094:
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 212u));
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CB21C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[5] = ld32((c.r[20].w[0] + 188u));  goto L_003CB0DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[5] = ld32((c.r[20].w[0] + 184u));  if (t) { goto L_003CB0DC; } }
    c.f[5] = ld32((c.r[20].w[0] + 188u));
    c.budget -= 1;
L_003CB0DC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[22].d[0];  if (t) { goto L_003CB0EC; } }
    c.f[0] = ld32((c.r[20].w[0] + 208u));
    c.f[5] = fp::mul(c.f[5], c.f[0]);
    c.budget -= 2;
L_003CB0EC:
    c.f[2] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[2]));
    c.f[4] = c.r[2].w[0];
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = ld32((c.r[20].w[0] + 180u));  goto L_003CB144; }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.f[0] = ld32((c.r[20].w[0] + 220u));
    set32(c.r[2], ld32((c.r[2].w[0] + 128u)));
    c.f[1] = ld32((c.r[2].w[0] + 216u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[20].w[0] + 216u));  goto L_003CB12C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[2];  if (t) { goto L_003CB140; } }
    c.f[0] = ld32((c.r[20].w[0] + 216u));
    c.budget -= 1;
L_003CB12C:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CB140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = c.r[2].w[0];
    c.budget -= 2;
L_003CB140:
    c.f[3] = ld32((c.r[20].w[0] + 180u));
    c.budget -= 1;
L_003CB144:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[3]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[20].w[0] + 168u));  goto L_003CB194; }
    c.f[0] = fp::mul(c.f[5], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 384u), 0u);
    set32(c.r[4], c.r[20].w[0] + 8u);
    st8((c.r[29].w[0] + 396u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 384u);
    st32((c.r[29].w[0] + 392u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB188u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003CB188u) [[unlikely]] return; }
L_003CB188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CB21C; } }
    c.f[1] = ld32((c.r[20].w[0] + 168u));
    c.budget -= 1;
L_003CB194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::sub(c.f[20], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::min(c.f[2], c.f[0]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 12;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], c.r[20].w[0] + 176u);  goto L_003CB1D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[20].w[0] + 172u);  if (t) { goto L_003CB1D0; } }
    set32(c.r[2], c.r[20].w[0] + 176u);
    c.budget -= 1;
L_003CB1D0:
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.f[0] = 0u;
    set32(c.r[6], 0u + 1u);
    c.facc = fp::add(c.f[0], c.f[5]);
    set32(c.r[7], c.r[29].w[0] + 368u);
    c.f[0] = fp::sub(c.f[1], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 368u), 0u);
    st8((c.r[29].w[0] + 380u), static_cast<std::uint8_t>(0u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 376u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB21Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003CB21Cu) [[unlikely]] return; }
L_003CB21C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[24]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB264; } }
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[29].w[0] + 352u), 0u);
    st32((c.r[29].w[0] + 356u), c.f[24]);
    st8((c.r[29].w[0] + 364u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[20].w[0] + 8u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 360u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 352u);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB264u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003CB264u) [[unlikely]] return; }
L_003CB264:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[28]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB28C; } }
    c.f[12] = c.f[28];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB28Cu); c.f[13] = c.f[29];  if (depth < kMaxDepth) unit_00B2(c, 230u, depth + 1u); else { c.pc = 0x003C9A60u; return; } if (c.pc != 0x003CB28Cu) [[unlikely]] return; }
L_003CB28C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003CB2AC; } }
    c.f[0] = c.r[19].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2ACu); c.f[13] = c.f[29];  if (depth < kMaxDepth) unit_00B2(c, 230u, depth + 1u); else { c.pc = 0x003C9A60u; return; } if (c.pc != 0x003CB2ACu) [[unlikely]] return; }
L_003CB2AC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[27]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB2D4; } }
    c.f[12] = c.f[27];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2D4u); c.f[13] = c.f[29];  if (depth < kMaxDepth) unit_00B2(c, 230u, depth + 1u); else { c.pc = 0x003C9A60u; return; } if (c.pc != 0x003CB2D4u) [[unlikely]] return; }
L_003CB2D4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[26]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB2FC; } }
    c.f[12] = c.f[26];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB2FCu); c.f[13] = c.f[29];  if (depth < kMaxDepth) unit_00B2(c, 230u, depth + 1u); else { c.pc = 0x003C9A60u; return; } if (c.pc != 0x003CB2FCu) [[unlikely]] return; }
L_003CB2FC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[25]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CB324; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.f[12] = c.f[25];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB324u); c.f[13] = c.f[29];  if (depth < kMaxDepth) unit_00B2(c, 230u, depth + 1u); else { c.pc = 0x003C9A60u; return; } if (c.pc != 0x003CB324u) [[unlikely]] return; }
L_003CB324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_003CB328:
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_003CB390:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull; st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003CB3D8; } }
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[2] = ld32((c.r[17].w[0] + 196u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[12], c.f[2]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.f[0]);  if (t) { goto L_003CB3E4; } }
L_003CB3D8:
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.budget -= 3;
L_003CB3E4:
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_003CB530; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB404u); c.f[20] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CB404u) [[unlikely]] return; }
L_003CB404:
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 124u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 92u), c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 88u), c.f[0]);  if (t) { goto L_003CB52C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.f[21] = ld32((c.r[17].w[0] + 204u));  goto L_003CB450; }
    c.f[21] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 1;
L_003CB450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB458u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CB458u) [[unlikely]] return; }
L_003CB458:
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 113u));
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_003CB490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB4E8; } }
L_003CB490:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[17].w[0] + 60u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_003CB4D4; } }
L_003CB4BC:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_003CB4D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CB4E8; } }
L_003CB4D4:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[2].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB4BCu | kUnwind; return; } goto L_003CB4BC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CB4E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003CB500; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB4FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 296u, depth + 1u); else { c.pc = 0x003CB550u; return; } if (c.pc != 0x003CB4FCu) [[unlikely]] return; }
L_003CB4FC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003CB500:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB518; } }
    c.f[0] = ld32((c.r[17].w[0] + 192u));
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 2;
L_003CB518:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[21]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_003CB530; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB530; } }
L_003CB52C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003CB530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CB550:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 113u));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CB588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB714; } }
L_003CB588:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[17].w[0] + 80u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 152u)));  if (t) { goto L_003CB5CC; } }
L_003CB5B4:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_003CB5CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CB714; } }
L_003CB5CC:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[2].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB5B4u | kUnwind; return; } goto L_003CB5B4; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 64u)));  goto L_003CB5EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB640; } }
L_003CB5EC:
    set32(c.r[2], c.r[17].w[0] + 60u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[29].w[0] + 148u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_003CB62C; } }
L_003CB614:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_003CB62C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CB640; } }
L_003CB62C:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[2].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB614u | kUnwind; return; } goto L_003CB614; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CB640:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003CB714; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[21], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[18], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003CB704; } }
L_003CB664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB66Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x003CB66Cu) [[unlikely]] return; }
L_003CB66C:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 113u));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 64u)));  goto L_003CB684; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CB6D8; } }
L_003CB684:
    set32(c.r[2], c.r[17].w[0] + 60u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.f[1]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_003CB6C4; } }
L_003CB6AC:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 4u)));  goto L_003CB6C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003CB6D8; } }
L_003CB6C4:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[2].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB6ACu | kUnwind; return; } goto L_003CB6AC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CB6D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_003CB704; }
    set32(c.r[6], ld32((c.r[5].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB6F0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 75u, depth + 1u); else { c.pc = 0x003CCAE0u; return; } if (c.pc != 0x003CB6F0u) [[unlikely]] return; }
L_003CB6F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CB714; } }
L_003CB700:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_003CB704:
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB664u | kUnwind; return; } goto L_003CB664; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CB714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003CB740:
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[6].w[0]);  c.pc = t; return; }
L_003CB750:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CB904; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 21760u);
    set32(c.r[2], c.r[2].w[0] + 21840u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_003CB794; } }
    set32(c.r[3], c.r[3].w[0] + 40u);
    c.budget -= 1;
L_003CB794:
    set32(c.r[18], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[4], c.r[29].w[0] + 76u);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB7A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 322u, depth + 1u); else { c.pc = 0x003CB9E0u; return; } if (c.pc != 0x003CB7A8u) [[unlikely]] return; }
L_003CB7A8:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB7B4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 321u, depth + 1u); else { c.pc = 0x003CB9C0u; return; } if (c.pc != 0x003CB7B4u) [[unlikely]] return; }
L_003CB7B4:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB7C8u); set32(c.r[7], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_00B2(c, 319u, depth + 1u); else { c.pc = 0x003CB970u; return; } if (c.pc != 0x003CB7C8u) [[unlikely]] return; }
L_003CB7C8:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB7D4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 321u, depth + 1u); else { c.pc = 0x003CB9C0u; return; } if (c.pc != 0x003CB7D4u) [[unlikely]] return; }
L_003CB7D4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB7E0u); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_00B2(c, 318u, depth + 1u); else { c.pc = 0x003CB950u; return; } if (c.pc != 0x003CB7E0u) [[unlikely]] return; }
L_003CB7E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 68u);  goto L_003CB7FC; }
    set32(c.r[6], ld32((c.r[29].w[0] + 80u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB7F8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00B2(c, 316u, depth + 1u); else { c.pc = 0x003CB920u; return; } if (c.pc != 0x003CB7F8u) [[unlikely]] return; }
L_003CB7F8:
    set32(c.r[5], c.r[17].w[0] + 68u);
    c.budget -= 1;
L_003CB7FC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 48u);  goto L_003CB840; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003CB83C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003CB83C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003CB83C; } }
    set32(c.r[2], c.r[17].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 108u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 104u);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[7], c.r[29].w[0] + 100u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB83Cu); st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x003CB83Cu) [[unlikely]] return; }
L_003CB83C:
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_003CB840:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 40u);  goto L_003CB884; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003CB880; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003CB880; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003CB880; } }
    set32(c.r[2], c.r[17].w[0] + 60u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 92u);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[7], c.r[29].w[0] + 88u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB880u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x003CB880u) [[unlikely]] return; }
L_003CB880:
    set32(c.r[2], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_003CB884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003CB898; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21872u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
L_003CB898:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003CB8F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 27040u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003CB8CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CB8CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003CB8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB8CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 85u, depth + 1u); else { c.pc = 0x003C8BB0u; return; } if (c.pc != 0x003CB8CCu) [[unlikely]] return; }
L_003CB8CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003CB8EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25984u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB8ECu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003CB8ECu) [[unlikely]] return; }
L_003CB8EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003CB8F0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003CB908; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB904u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003CB904u) [[unlikely]] return; }
L_003CB904:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003CB908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CB920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CB93Cu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x003CB93Cu) [[unlikely]] return; }
L_003CB93C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CB950:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_003CB970:
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);  if (t) { goto L_003CB984; } }
L_003CB97C:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003CB984:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[8].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  goto L_003CB9A8; }
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[5].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB97Cu | kUnwind; return; } goto L_003CB97C; }
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.budget -= 1;
L_003CB9A8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003CB9C0:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003CB9E0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003CB9F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA14u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00CB(c, 266u, depth + 1u); else { c.pc = 0x0042E1C0u; return; } if (c.pc != 0x003CBA14u) [[unlikely]] return; }
L_003CBA14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21872u);
    set32(c.r[3], c.r[3].w[0] + 21760u);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[16], c.r[18].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 21840u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[18].w[0] + 44u), 0u);  if (t) { goto L_003CBA7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003CBA54u) [[unlikely]] return; }
L_003CBA54:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003CBA6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA68u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003CBA68u) [[unlikely]] return; }
L_003CBA68:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003CBA6C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  goto L_003CBA80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA7Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003CBA7Cu) [[unlikely]] return; }
L_003CBA7C:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 1;
L_003CBA80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBA8Cu); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0004(c, 39u, depth + 1u); else { c.pc = 0x001105D0u; return; } if (c.pc != 0x003CBA8Cu) [[unlikely]] return; }
L_003CBA8C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 68u);  if (t) { goto L_003CBAD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBAA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003CBAA0u) [[unlikely]] return; }
L_003CBAA0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_003CBAC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBAB8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003CBAB8u) [[unlikely]] return; }
L_003CBAB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003CBAC0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003CBAD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBAD0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003CBAD0u) [[unlikely]] return; }
L_003CBAD0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003CBAD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CBAD8:
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBAE4u); st32((c.r[29].w[0] + 84u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0004(c, 39u, depth + 1u); else { c.pc = 0x001105D0u; return; } if (c.pc != 0x003CBAE4u) [[unlikely]] return; }
L_003CBAE4:
    st32((c.r[18].w[0] + 100u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 104u), 0u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 108u), 0u);
    st8((c.r[18].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003CBB08; } }
    set32(c.r[3], c.r[18].w[0] + 40u);
    c.budget -= 1;
L_003CBB08:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 92u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBB2Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003CBB2Cu) [[unlikely]] return; }
L_003CBB2C:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[18].w[0] + 116u), c.r[9].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32076u));
    st32((c.r[18].w[0] + 136u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st32((c.r[18].w[0] + 140u), c.f[1]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 144u), c.f[1]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[18].w[0] + 148u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32020u));
    st32((c.r[18].w[0] + 152u), c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[18].w[0] + 156u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[18].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 164u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[18].w[0] + 168u), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    st32((c.r[18].w[0] + 172u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 176u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 180u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 184u), c.f[0]);
    st32((c.r[18].w[0] + 188u), c.f[0]);
    st32((c.r[18].w[0] + 124u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[18].w[0] + 132u), c.r[9].w[0]);
    st32((c.r[18].w[0] + 92u), c.r[9].w[0]);
    st32((c.r[18].w[0] + 192u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 196u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 200u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 204u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 208u), c.r[9].w[0]);
    st32((c.r[18].w[0] + 212u), c.r[8].w[0]);
    st32((c.r[18].w[0] + 216u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 220u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBBDCu); c.f[20] = ld32((c.r[18].w[0] + 128u));  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003CBBDCu) [[unlikely]] return; }
L_003CBBDC:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 124u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    st32((c.r[18].w[0] + 96u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26056u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003CBC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003CBC7C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 21872u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003CBC78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBC78u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003CBC78u) [[unlikely]] return; }
L_003CBC78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003CBC7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CBC90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30472u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003CBCAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003CBCBC; } }
L_003CBCAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBCB4u);  if (depth < kMaxDepth) unit_00CB(c, 272u, depth + 1u); else { c.pc = 0x0042E290u; return; } if (c.pc != 0x003CBCB4u) [[unlikely]] return; }
L_003CBCB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003CBCBC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CBCD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBCF4u); set32(c.r[4], c.r[4].w[0] - 24064u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003CBCF4u) [[unlikely]] return; }
L_003CBCF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003CBD04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CBD14; } }
L_003CBD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD0Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 274u, depth + 1u); else { c.pc = 0x0042E2D0u; return; } if (c.pc != 0x003CBD0Cu) [[unlikely]] return; }
L_003CBD0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003CBD14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CBD30:
    set32(c.r[2], ld32((c.r[28].w[0] - 30156u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003CBD40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30472u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003CBD5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003CBD64; } }
L_003CBD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBD64u);  if (depth < kMaxDepth) unit_00CB(c, 278u, depth + 1u); else { c.pc = 0x0042E340u; return; } if (c.pc != 0x003CBD64u) [[unlikely]] return; }
L_003CBD64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CBD70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30472u)));  c.pc = t; return; }
L_003CBD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CBDC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDBCu); set32(c.r[5], c.r[5].w[0] - 23267u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003CBDBCu) [[unlikely]] return; }
L_003CBDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBDC4u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003CBDC4u) [[unlikely]] return; }
L_003CBDC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CBDF0:
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 10u, depth); } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_003CBE5C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBE50u); set32(c.r[5], c.r[5].w[0] - 23237u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003CBE50u) [[unlikely]] return; }
L_003CBE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CBE58u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003CBE58u) [[unlikely]] return; }
L_003CBE58:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_003CBE5C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  [[clang::musttail]] return unit_00B3(c, 4u, depth); }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_003CBE90; } }
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_003CBE90:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 4);  goto L_003CBF44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003CBEE0; } }
L_003CBEA4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_003CBED0; }
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 9;
L_003CBED0:
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003CBEE0:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CBEA4u | kUnwind; return; } goto L_003CBEA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003CBF30; } }
L_003CBEF4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_003CBF20; }
    c.f[3] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 9;
L_003CBF20:
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003CBF30:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CBEF4u | kUnwind; return; } goto L_003CBEF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CBFFC; } }
L_003CBF44:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_003CBF8C; } }
L_003CBF50:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_003CBF7C; }
    c.f[3] = ld32((c.r[8].w[0]));
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    st32((c.r[7].w[0]), c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 9;
L_003CBF7C:
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003CBF8C:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CBF50u | kUnwind; return; } goto L_003CBF50; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_003CBFF0; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003CBFC0; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_003CBFC0:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CBFF0; } }
L_003CBFCC:
    set32(c.r[6], c.r[6].w[0] - 16u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    st8((c.r[6].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_003CBFF0:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CBFCCu | kUnwind; return; } goto L_003CBFCC; }
L_003CBFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 3u, depth); } }
    [[clang::musttail]] return unit_00B3(c, 2u, depth);
}

}
