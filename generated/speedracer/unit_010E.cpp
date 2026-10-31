#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_010E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0,
    0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0,
    226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0,
    0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0,
    0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0, 315,
    0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_010E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00538000;
    case 2u: goto L_00538020;
    case 3u: goto L_0053802C;
    case 4u: goto L_00538050;
    case 5u: goto L_00538054;
    case 6u: goto L_00538090;
    case 7u: goto L_0053809C;
    case 8u: goto L_005380E0;
    case 9u: goto L_00538100;
    case 10u: goto L_0053811C;
    case 11u: goto L_00538130;
    case 12u: goto L_00538140;
    case 13u: goto L_00538160;
    case 14u: goto L_00538170;
    case 15u: goto L_00538190;
    case 16u: goto L_005381A8;
    case 17u: goto L_005381C0;
    case 18u: goto L_005381D0;
    case 19u: goto L_005381E8;
    case 20u: goto L_00538204;
    case 21u: goto L_00538220;
    case 22u: goto L_00538240;
    case 23u: goto L_0053825C;
    case 24u: goto L_00538270;
    case 25u: goto L_005382A0;
    case 26u: goto L_005382C4;
    case 27u: goto L_005382E0;
    case 28u: goto L_00538310;
    case 29u: goto L_00538334;
    case 30u: goto L_00538350;
    case 31u: goto L_00538368;
    case 32u: goto L_00538380;
    case 33u: goto L_00538390;
    case 34u: goto L_005383B0;
    case 35u: goto L_005383CC;
    case 36u: goto L_005383E0;
    case 37u: goto L_00538400;
    case 38u: goto L_0053841C;
    case 39u: goto L_00538430;
    case 40u: goto L_00538450;
    case 41u: goto L_0053846C;
    case 42u: goto L_00538480;
    case 43u: goto L_005384B0;
    case 44u: goto L_005384D4;
    case 45u: goto L_005384F0;
    case 46u: goto L_00538520;
    case 47u: goto L_00538544;
    case 48u: goto L_00538560;
    case 49u: goto L_00538588;
    case 50u: goto L_005385A8;
    case 51u: goto L_005385C0;
    case 52u: goto L_005385F8;
    case 53u: goto L_00538620;
    case 54u: goto L_00538640;
    case 55u: goto L_00538678;
    case 56u: goto L_005386A0;
    case 57u: goto L_005386C0;
    case 58u: goto L_005386D8;
    case 59u: goto L_005386F0;
    case 60u: goto L_00538700;
    case 61u: goto L_00538718;
    case 62u: goto L_00538730;
    case 63u: goto L_00538740;
    case 64u: goto L_00538768;
    case 65u: goto L_00538788;
    case 66u: goto L_005387A0;
    case 67u: goto L_005387B0;
    case 68u: goto L_005387C8;
    case 69u: goto L_005387E0;
    case 70u: goto L_00538808;
    case 71u: goto L_00538828;
    case 72u: goto L_00538840;
    case 73u: goto L_00538878;
    case 74u: goto L_005388A0;
    case 75u: goto L_005388C0;
    case 76u: goto L_005388E0;
    case 77u: goto L_005388FC;
    case 78u: goto L_00538910;
    case 79u: goto L_00538928;
    case 80u: goto L_00538960;
    case 81u: goto L_00538978;
    case 82u: goto L_00538990;
    case 83u: goto L_005389A0;
    case 84u: goto L_005389B8;
    case 85u: goto L_005389D0;
    case 86u: goto L_005389E0;
    case 87u: goto L_00538A00;
    case 88u: goto L_00538A1C;
    case 89u: goto L_00538A30;
    case 90u: goto L_00538A70;
    case 91u: goto L_00538B04;
    case 92u: goto L_00538B10;
    case 93u: goto L_00538B1C;
    case 94u: goto L_00538B28;
    case 95u: goto L_00538B34;
    case 96u: goto L_00538B40;
    case 97u: goto L_00538B48;
    case 98u: goto L_00538B50;
    case 99u: goto L_00538B58;
    case 100u: goto L_00538B60;
    case 101u: goto L_00538B68;
    case 102u: goto L_00538BA0;
    case 103u: goto L_00538BB0;
    case 104u: goto L_00538BC8;
    case 105u: goto L_00538BE0;
    case 106u: goto L_00538C00;
    case 107u: goto L_00538C50;
    case 108u: goto L_00538C64;
    case 109u: goto L_00538CC4;
    case 110u: goto L_00538CD8;
    case 111u: goto L_00538D18;
    case 112u: goto L_00538D2C;
    case 113u: goto L_00538D70;
    case 114u: goto L_00538DC0;
    case 115u: goto L_00538DF8;
    case 116u: goto L_00538E08;
    case 117u: goto L_00538E48;
    case 118u: goto L_00538E70;
    case 119u: goto L_00538E78;
    case 120u: goto L_00538E84;
    case 121u: goto L_00538ECC;
    case 122u: goto L_00538ED4;
    case 123u: goto L_00538EE0;
    case 124u: goto L_00538EF8;
    case 125u: goto L_00538F48;
    case 126u: goto L_00538F5C;
    case 127u: goto L_00538F64;
    case 128u: goto L_00538F70;
    case 129u: goto L_00538FA8;
    case 130u: goto L_00538FB0;
    case 131u: goto L_00538FBC;
    case 132u: goto L_00538FD8;
    case 133u: goto L_00538FF0;
    case 134u: goto L_0053900C;
    case 135u: goto L_00539040;
    case 136u: goto L_00539058;
    case 137u: goto L_00539080;
    case 138u: goto L_005390B0;
    case 139u: goto L_005390F0;
    case 140u: goto L_00539100;
    case 141u: goto L_00539140;
    case 142u: goto L_00539160;
    case 143u: goto L_00539170;
    case 144u: goto L_005391A0;
    case 145u: goto L_00539200;
    case 146u: goto L_00539268;
    case 147u: goto L_00539288;
    case 148u: goto L_005392B0;
    case 149u: goto L_005392E4;
    case 150u: goto L_005392F8;
    case 151u: goto L_00539344;
    case 152u: goto L_005393A0;
    case 153u: goto L_00539400;
    case 154u: goto L_0053947C;
    case 155u: goto L_005394FC;
    case 156u: goto L_0053954C;
    case 157u: goto L_00539580;
    case 158u: goto L_005395C0;
    case 159u: goto L_005395D4;
    case 160u: goto L_0053962C;
    case 161u: goto L_00539690;
    case 162u: goto L_005396E0;
    case 163u: goto L_005396F0;
    case 164u: goto L_0053970C;
    case 165u: goto L_00539738;
    case 166u: goto L_00539748;
    case 167u: goto L_00539780;
    case 168u: goto L_005397D0;
    case 169u: goto L_00539858;
    case 170u: goto L_00539884;
    case 171u: goto L_005398C0;
    case 172u: goto L_005398D0;
    case 173u: goto L_005398E0;
    case 174u: goto L_00539910;
    case 175u: goto L_00539920;
    case 176u: goto L_00539A18;
    case 177u: goto L_00539A44;
    case 178u: goto L_00539A54;
    case 179u: goto L_00539A80;
    case 180u: goto L_00539AC4;
    case 181u: goto L_00539B0C;
    case 182u: goto L_00539B60;
    case 183u: goto L_00539B74;
    case 184u: goto L_00539B8C;
    case 185u: goto L_00539BA8;
    case 186u: goto L_00539BD0;
    case 187u: goto L_00539BEC;
    case 188u: goto L_00539C14;
    case 189u: goto L_00539C2C;
    case 190u: goto L_00539C6C;
    case 191u: goto L_00539C80;
    case 192u: goto L_00539CA4;
    case 193u: goto L_00539CD4;
    case 194u: goto L_00539D00;
    case 195u: goto L_00539D40;
    case 196u: goto L_00539E30;
    case 197u: goto L_00539E50;
    case 198u: goto L_00539F98;
    case 199u: goto L_00539FB0;
    case 200u: goto L_0053A290;
    case 201u: goto L_0053A2C0;
    case 202u: goto L_0053A2EC;
    case 203u: goto L_0053A300;
    case 204u: goto L_0053A30C;
    case 205u: goto L_0053A33C;
    case 206u: goto L_0053A358;
    case 207u: goto L_0053A370;
    case 208u: goto L_0053A388;
    case 209u: goto L_0053A3D4;
    case 210u: goto L_0053A404;
    case 211u: goto L_0053A428;
    case 212u: goto L_0053A440;
    case 213u: goto L_0053A470;
    case 214u: goto L_0053A4AC;
    case 215u: goto L_0053A4C8;
    case 216u: goto L_0053A4F0;
    case 217u: goto L_0053A508;
    case 218u: goto L_0053A520;
    case 219u: goto L_0053A550;
    case 220u: goto L_0053A570;
    case 221u: goto L_0053A5A4;
    case 222u: goto L_0053A5B0;
    case 223u: goto L_0053A5C0;
    case 224u: goto L_0053A5E0;
    case 225u: goto L_0053A5F4;
    case 226u: goto L_0053A600;
    case 227u: goto L_0053A60C;
    case 228u: goto L_0053A618;
    case 229u: goto L_0053A644;
    case 230u: goto L_0053A664;
    case 231u: goto L_0053A670;
    case 232u: goto L_0053A694;
    case 233u: goto L_0053A6A4;
    case 234u: goto L_0053A6AC;
    case 235u: goto L_0053A704;
    case 236u: goto L_0053A754;
    case 237u: goto L_0053A76C;
    case 238u: goto L_0053A778;
    case 239u: goto L_0053A7A8;
    case 240u: goto L_0053A7BC;
    case 241u: goto L_0053A7DC;
    case 242u: goto L_0053A7FC;
    case 243u: goto L_0053A82C;
    case 244u: goto L_0053A870;
    case 245u: goto L_0053A898;
    case 246u: goto L_0053A8B0;
    case 247u: goto L_0053A8C0;
    case 248u: goto L_0053A910;
    case 249u: goto L_0053A958;
    case 250u: goto L_0053A970;
    case 251u: goto L_0053A97C;
    case 252u: goto L_0053A9F4;
    case 253u: goto L_0053AA18;
    case 254u: goto L_0053AA70;
    case 255u: goto L_0053AA94;
    case 256u: goto L_0053AAAC;
    case 257u: goto L_0053AAC4;
    case 258u: goto L_0053AADC;
    case 259u: goto L_0053AB10;
    case 260u: goto L_0053AB20;
    case 261u: goto L_0053AB38;
    case 262u: goto L_0053AB4C;
    case 263u: goto L_0053AB64;
    case 264u: goto L_0053ABA8;
    case 265u: goto L_0053ABBC;
    case 266u: goto L_0053ABD4;
    case 267u: goto L_0053ABF0;
    case 268u: goto L_0053AC28;
    case 269u: goto L_0053AC58;
    case 270u: goto L_0053AC70;
    case 271u: goto L_0053AC90;
    case 272u: goto L_0053ACA8;
    case 273u: goto L_0053ACC8;
    case 274u: goto L_0053ACE0;
    case 275u: goto L_0053AD10;
    case 276u: goto L_0053AD28;
    case 277u: goto L_0053AD38;
    case 278u: goto L_0053AD50;
    case 279u: goto L_0053AD60;
    case 280u: goto L_0053AD78;
    case 281u: goto L_0053ADB0;
    case 282u: goto L_0053ADC8;
    case 283u: goto L_0053ADEC;
    case 284u: goto L_0053AE04;
    case 285u: goto L_0053AF94;
    case 286u: goto L_0053AFAC;
    case 287u: goto L_0053AFD8;
    case 288u: goto L_0053AFF8;
    case 289u: goto L_0053B040;
    case 290u: goto L_0053B0A4;
    case 291u: goto L_0053B0B4;
    case 292u: goto L_0053B0D0;
    case 293u: goto L_0053B0E8;
    case 294u: goto L_0053B0F0;
    case 295u: goto L_0053B0F8;
    case 296u: goto L_0053B10C;
    case 297u: goto L_0053B114;
    case 298u: goto L_0053B128;
    case 299u: goto L_0053B130;
    case 300u: goto L_0053B144;
    case 301u: goto L_0053B194;
    case 302u: goto L_0053B1C0;
    case 303u: goto L_0053B1E4;
    case 304u: goto L_0053B210;
    case 305u: goto L_0053B234;
    case 306u: goto L_0053B25C;
    case 307u: goto L_0053B2B0;
    case 308u: goto L_0053B30C;
    case 309u: goto L_0053B31C;
    case 310u: goto L_0053B338;
    case 311u: goto L_0053B350;
    case 312u: goto L_0053B358;
    case 313u: goto L_0053B360;
    case 314u: goto L_0053B374;
    case 315u: goto L_0053B37C;
    case 316u: goto L_0053B390;
    case 317u: goto L_0053B398;
    case 318u: goto L_0053B3AC;
    case 319u: goto L_0053B3F8;
    case 320u: goto L_0053B408;
    case 321u: goto L_0053B418;
    case 322u: goto L_0053B450;
    case 323u: goto L_0053B498;
    case 324u: goto L_0053B4A0;
    case 325u: goto L_0053B4AC;
    case 326u: goto L_0053B4CC;
    case 327u: goto L_0053B4E8;
    case 328u: goto L_0053B4F0;
    case 329u: goto L_0053B514;
    case 330u: goto L_0053B530;
    case 331u: goto L_0053B54C;
    case 332u: goto L_0053B56C;
    case 333u: goto L_0053B574;
    case 334u: goto L_0053B598;
    case 335u: goto L_0053B5B4;
    case 336u: goto L_0053B5D0;
    case 337u: goto L_0053B5EC;
    case 338u: goto L_0053B60C;
    case 339u: goto L_0053B614;
    case 340u: goto L_0053B638;
    case 341u: goto L_0053B654;
    case 342u: goto L_0053B670;
    case 343u: goto L_0053B68C;
    case 344u: goto L_0053B6AC;
    case 345u: goto L_0053B6B4;
    case 346u: goto L_0053B6D8;
    case 347u: goto L_0053B6F4;
    case 348u: goto L_0053B710;
    case 349u: goto L_0053B72C;
    case 350u: goto L_0053B74C;
    case 351u: goto L_0053B768;
    case 352u: goto L_0053B784;
    case 353u: goto L_0053B78C;
    case 354u: goto L_0053B7B0;
    case 355u: goto L_0053B7CC;
    case 356u: goto L_0053B7E8;
    case 357u: goto L_0053B804;
    case 358u: goto L_0053B824;
    case 359u: goto L_0053B830;
    case 360u: goto L_0053B840;
    case 361u: goto L_0053B89C;
    case 362u: goto L_0053B8C0;
    case 363u: goto L_0053BDF4;
    case 364u: goto L_0053BE38;
    case 365u: goto L_0053BE50;
    case 366u: goto L_0053BE90;
    case 367u: goto L_0053BEE8;
    case 368u: goto L_0053BF10;
    case 369u: goto L_0053BF38;
    case 370u: goto L_0053BFB0;
    default: bad_entry(c, 0x00538000u); return;
    }
L_00538000:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00537FF4u | kUnwind; return; } [[clang::musttail]] return unit_010D(c, 314u, depth); } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00538020:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00538048; } }
L_0053802C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053802Cu | kUnwind; return; } goto L_0053802C; } }
L_00538048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);  c.pc = t; return; }
L_00538050:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00538054:
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00538088; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00538054u | kUnwind; return; } goto L_00538054; } }
    c.budget -= 1;
L_00538088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00538090:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_005380B8; } }
L_0053809C:
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053809Cu | kUnwind; return; } goto L_0053809C; } }
L_005380B8:
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_005380CC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_005380CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_005380E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538100u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538100u) [[unlikely]] return; }
L_00538100:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_00538110; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00538120; } }
L_00538110:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053811Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 137u, depth + 1u); else { c.pc = 0x00539080u; return; } if (c.pc != 0x0053811Cu) [[unlikely]] return; }
L_0053811C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00538120:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00538130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538140u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538140u) [[unlikely]] return; }
L_00538140:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 78u);  goto L_00538148; }
L_00538148:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00538160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538170u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538170u) [[unlikely]] return; }
L_00538170:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 78u);  goto L_00538178; }
L_00538178:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00538190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005381A8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x005381A8u) [[unlikely]] return; }
L_005381A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_005381B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_005381C4; } }
L_005381B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005381C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 138u, depth + 1u); else { c.pc = 0x005390B0u; return; } if (c.pc != 0x005381C0u) [[unlikely]] return; }
L_005381C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_005381C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005381D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005381E8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x005381E8u) [[unlikely]] return; }
L_005381E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_005381F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00538208; } }
L_005381F8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538204u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 140u, depth + 1u); else { c.pc = 0x00539100u; return; } if (c.pc != 0x00538204u) [[unlikely]] return; }
L_00538204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00538208:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00538220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538240u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538240u) [[unlikely]] return; }
L_00538240:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_00538250; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00538260; } }
L_00538250:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053825Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 144u, depth + 1u); else { c.pc = 0x005391A0u; return; } if (c.pc != 0x0053825Cu) [[unlikely]] return; }
L_0053825C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00538260:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00538270:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005382A0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x005382A0u) [[unlikely]] return; }
L_005382A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  goto L_005382B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_005382C8; } }
L_005382B0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005382C4u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 145u, depth + 1u); else { c.pc = 0x00539200u; return; } if (c.pc != 0x005382C4u) [[unlikely]] return; }
L_005382C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_005382C8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_005382E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538310u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538310u) [[unlikely]] return; }
L_00538310:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  goto L_00538320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00538338; } }
L_00538320:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538334u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 152u, depth + 1u); else { c.pc = 0x005393A0u; return; } if (c.pc != 0x00538334u) [[unlikely]] return; }
L_00538334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00538338:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00538350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538368u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538368u) [[unlikely]] return; }
L_00538368:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_00538378; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00538384; } }
L_00538378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538380u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 142u, depth + 1u); else { c.pc = 0x00539160u; return; } if (c.pc != 0x00538380u) [[unlikely]] return; }
L_00538380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00538384:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00538390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005383B0u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x005383B0u) [[unlikely]] return; }
L_005383B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_005383C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_005383D0; } }
L_005383C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005383CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 167u, depth + 1u); else { c.pc = 0x00539780u; return; } if (c.pc != 0x005383CCu) [[unlikely]] return; }
L_005383CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_005383D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_005383E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538400u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538400u) [[unlikely]] return; }
L_00538400:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_00538410; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00538420; } }
L_00538410:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053841Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 171u, depth + 1u); else { c.pc = 0x005398C0u; return; } if (c.pc != 0x0053841Cu) [[unlikely]] return; }
L_0053841C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00538420:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00538430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538450u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538450u) [[unlikely]] return; }
L_00538450:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_00538460; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00538470; } }
L_00538460:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053846Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 172u, depth + 1u); else { c.pc = 0x005398D0u; return; } if (c.pc != 0x0053846Cu) [[unlikely]] return; }
L_0053846C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00538470:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00538480:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005384B0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x005384B0u) [[unlikely]] return; }
L_005384B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  goto L_005384C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_005384D8; } }
L_005384C0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005384D4u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 174u, depth + 1u); else { c.pc = 0x00539910u; return; } if (c.pc != 0x005384D4u) [[unlikely]] return; }
L_005384D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_005384D8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_005384F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538520u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538520u) [[unlikely]] return; }
L_00538520:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  goto L_00538530; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00538548; } }
L_00538530:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538544u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 175u, depth + 1u); else { c.pc = 0x00539920u; return; } if (c.pc != 0x00538544u) [[unlikely]] return; }
L_00538544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00538548:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00538560:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538588u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538588u) [[unlikely]] return; }
L_00538588:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_00538598; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_005385AC; } }
L_00538598:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005385A8u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 366u, depth + 1u); else { c.pc = 0x0053BE90u; return; } if (c.pc != 0x005385A8u) [[unlikely]] return; }
L_005385A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_005385AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005385C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005385F8u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x005385F8u) [[unlikely]] return; }
L_005385F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_00538608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00538624; } }
L_00538608:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538620u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 195u, depth + 1u); else { c.pc = 0x00539D40u; return; } if (c.pc != 0x00538620u) [[unlikely]] return; }
L_00538620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00538624:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00538640:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538678u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538678u) [[unlikely]] return; }
L_00538678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_00538688; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_005386A4; } }
L_00538688:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005386A0u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 199u, depth + 1u); else { c.pc = 0x00539FB0u; return; } if (c.pc != 0x005386A0u) [[unlikely]] return; }
L_005386A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_005386A4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_005386C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005386D8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x005386D8u) [[unlikely]] return; }
L_005386D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_005386E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_005386F4; } }
L_005386E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005386F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 196u, depth + 1u); else { c.pc = 0x00539E30u; return; } if (c.pc != 0x005386F0u) [[unlikely]] return; }
L_005386F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_005386F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00538700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538718u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538718u) [[unlikely]] return; }
L_00538718:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_00538728; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00538734; } }
L_00538728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538730u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 200u, depth + 1u); else { c.pc = 0x0053A290u; return; } if (c.pc != 0x00538730u) [[unlikely]] return; }
L_00538730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00538734:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00538740:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538768u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538768u) [[unlikely]] return; }
L_00538768:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_00538778; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0053878C; } }
L_00538778:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538788u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 194u, depth + 1u); else { c.pc = 0x00539D00u; return; } if (c.pc != 0x00538788u) [[unlikely]] return; }
L_00538788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0053878C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005387A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005387B0u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x005387B0u) [[unlikely]] return; }
L_005387B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  goto L_005387C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_005387CC; } }
L_005387C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005387C8u);  if (depth < kMaxDepth) unit_010E(c, 201u, depth + 1u); else { c.pc = 0x0053A2C0u; return; } if (c.pc != 0x005387C8u) [[unlikely]] return; }
L_005387C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_005387CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005387E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538808u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538808u) [[unlikely]] return; }
L_00538808:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_00538818; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0053882C; } }
L_00538818:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538828u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 248u, depth + 1u); else { c.pc = 0x0053A910u; return; } if (c.pc != 0x00538828u) [[unlikely]] return; }
L_00538828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0053882C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00538840:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538878u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538878u) [[unlikely]] return; }
L_00538878:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_00538888; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_005388A4; } }
L_00538888:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005388A0u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 289u, depth + 1u); else { c.pc = 0x0053B040u; return; } if (c.pc != 0x005388A0u) [[unlikely]] return; }
L_005388A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_005388A4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_005388C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005388E0u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x005388E0u) [[unlikely]] return; }
L_005388E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_005388F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00538900; } }
L_005388F0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005388FCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 307u, depth + 1u); else { c.pc = 0x0053B2B0u; return; } if (c.pc != 0x005388FCu) [[unlikely]] return; }
L_005388FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00538900:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00538910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538928u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538928u) [[unlikely]] return; }
L_00538928:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_00538938; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00538954; } }
L_00538938:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 2368u)));  goto L_00538948; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00538950; } }
L_00538948:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00538950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00538954:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00538960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538978u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538978u) [[unlikely]] return; }
L_00538978:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_00538988; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00538994; } }
L_00538988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538990u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 360u, depth + 1u); else { c.pc = 0x0053B840u; return; } if (c.pc != 0x00538990u) [[unlikely]] return; }
L_00538990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00538994:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005389A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005389B8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x005389B8u) [[unlikely]] return; }
L_005389B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_005389C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_005389D4; } }
L_005389C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005389D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 362u, depth + 1u); else { c.pc = 0x0053B8C0u; return; } if (c.pc != 0x005389D0u) [[unlikely]] return; }
L_005389D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_005389D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005389E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538A00u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538A00u) [[unlikely]] return; }
L_00538A00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_00538A10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00538A20; } }
L_00538A10:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538A1Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 365u, depth + 1u); else { c.pc = 0x0053BE50u; return; } if (c.pc != 0x00538A1Cu) [[unlikely]] return; }
L_00538A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00538A20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00538A30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538A70u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538A70u) [[unlikely]] return; }
L_00538A70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 124u)));  goto L_00538A80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00538B74; } }
L_00538A80:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00538A90; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1244u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00538A90:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00538AA0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1240u)));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00538AA0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00538AB0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1256u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00538AB0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00538AC0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1252u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00538AC0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00538AD0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2316u)));
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00538AD0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00538B70; }
    set32(c.r[2], ld32((c.r[3].w[0] + 1240u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00538B6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 21056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_010E[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00538B04:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00538B6C; } }
L_00538B10:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00538B6C; } }
L_00538B1C:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00538B6C; } }
L_00538B28:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00538B6C; } }
L_00538B34:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00538B6C; } }
L_00538B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_00538B6C; } }
L_00538B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_00538B6C; } }
L_00538B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_00538B6C; } }
L_00538B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_00538B6C; } }
L_00538B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_00538B6C; } }
L_00538B68:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00538B6C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00538B70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00538B74:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00538BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538BB0u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0110(c, 108u, depth + 1u); else { c.pc = 0x00541E10u; return; } if (c.pc != 0x00538BB0u) [[unlikely]] return; }
L_00538BB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  goto L_00538BC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00538BCC; } }
L_00538BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538BC8u);  if (depth < kMaxDepth) unit_010F(c, 21u, depth + 1u); else { c.pc = 0x0053C1D0u; return; } if (c.pc != 0x00538BC8u) [[unlikely]] return; }
L_00538BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00538BCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00538BE0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 29352u)));  goto L_00538BF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00538BF8; } }
L_00538BF0:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00538BF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00538C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[28].w[0] - 21924u));  goto L_00538C24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00538D58; } }
L_00538C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00538C98; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 428u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 11320u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538C50u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x00538C50u) [[unlikely]] return; }
L_00538C50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[17].w[0]);  goto L_00538D44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538C64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 225u, depth + 1u); else { c.pc = 0x0052B950u; return; } if (c.pc != 0x00538C64u) [[unlikely]] return; }
L_00538C64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 20352u);
    st32((c.r[17].w[0] + 400u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 420u), 0u);
    st32((c.r[17].w[0] + 424u), 0u);
    st32((c.r[17].w[0] + 404u), 0u);
    st32((c.r[17].w[0] + 408u), 0u);
    st32((c.r[17].w[0] + 412u), 0u);
    st32((c.r[17].w[0] + 416u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00538D44; } }
L_00538C98:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_00538CF8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 412u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 11324u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538CC4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x00538CC4u) [[unlikely]] return; }
L_00538CC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[17].w[0]);  goto L_00538D44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538CD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 225u, depth + 1u); else { c.pc = 0x0052B950u; return; } if (c.pc != 0x00538CD8u) [[unlikely]] return; }
L_00538CD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 20448u);
    st32((c.r[17].w[0] + 400u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00538D44; } }
L_00538CF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 408u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 11328u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538D18u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x00538D18u) [[unlikely]] return; }
L_00538D18:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[17].w[0]);  goto L_00538D44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538D2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 225u, depth + 1u); else { c.pc = 0x0052B950u; return; } if (c.pc != 0x00538D2Cu) [[unlikely]] return; }
L_00538D2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] - 20496u);
    st32((c.r[17].w[0] + 400u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 6;
L_00538D44:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 42u);  goto L_00538D58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00538D58; } }
L_00538D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00538D70:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_00538DB4; }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00538D90; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1736u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[5].w[0] << 3);  goto L_00538D9C; }
L_00538D90:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00538DB4; } }
L_00538D9C:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1288u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_00538DB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00538DC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0] + 300u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00538DF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00538DF8u) [[unlikely]] return; }
L_00538DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00538FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538E08u); set32(c.r[4], ld32((c.r[17].w[0] + 2964u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00538E08u) [[unlikely]] return; }
L_00538E08:
    set32(c.r[19], ld32((c.r[17].w[0] + 2628u)));
    set32(c.r[3], c.r[17].w[0] + 2628u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00538E30; }
    set32(c.r[2], ld32((c.r[17].w[0] + 2632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00538E2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00538E30; } }
L_00538E2C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00538E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00538FD0; } }
    set32(c.r[2], c.r[17].w[0] + 2628u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00538FD0; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00538E48:
    set32(c.r[5], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00538E60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00538FC0; } }
L_00538E60:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[16].d[0];  if (t) { goto L_00538E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538E70u); set32(c.r[4], ld32((c.r[17].w[0] + 2964u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00538E70u) [[unlikely]] return; }
L_00538E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538E78u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0108(c, 50u, depth + 1u); else { c.pc = 0x00520E10u; return; } if (c.pc != 0x00538E78u) [[unlikely]] return; }
L_00538E78:
    set32(c.r[4], ld32((c.r[17].w[0] + 2964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538E84u); c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00538E84u) [[unlikely]] return; }
L_00538E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00538FC0; } }
    c.budget -= 1;
L_00538E90:
    set32(c.r[3], ld32((c.r[5].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00538F30; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00538EE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538ECCu); set32(c.r[4], ld32((c.r[17].w[0] + 2964u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00538ECCu) [[unlikely]] return; }
L_00538ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538ED4u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0108(c, 50u, depth + 1u); else { c.pc = 0x00520E10u; return; } if (c.pc != 0x00538ED4u) [[unlikely]] return; }
L_00538ED4:
    set32(c.r[4], ld32((c.r[17].w[0] + 2964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538EE0u); c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00538EE0u) [[unlikely]] return; }
L_00538EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00538FC0; } }
L_00538EE8:
    set32(c.r[3], ld32((c.r[5].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00538FC0; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00538EF8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00538F18; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_00538FC0; } }
    c.budget -= 1;
L_00538F18:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00538EF8u | kUnwind; return; } goto L_00538EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00538FC0; } }
L_00538F30:
    set32(c.r[4], ld32((c.r[5].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00538F90; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00538FC0; } }
L_00538F48:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00538F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538F5Cu); set32(c.r[4], ld32((c.r[17].w[0] + 2964u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00538F5Cu) [[unlikely]] return; }
L_00538F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538F64u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0108(c, 50u, depth + 1u); else { c.pc = 0x00520E10u; return; } if (c.pc != 0x00538F64u) [[unlikely]] return; }
L_00538F64:
    set32(c.r[4], ld32((c.r[17].w[0] + 2964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538F70u); c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00538F70u) [[unlikely]] return; }
L_00538F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00538FC0; } }
L_00538F78:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00538F48u | kUnwind; return; } goto L_00538F48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00538FC0; } }
L_00538F90:
    set32(c.r[3], ld32((c.r[5].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00538FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538FA8u); set32(c.r[4], ld32((c.r[17].w[0] + 2964u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00538FA8u) [[unlikely]] return; }
L_00538FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538FB0u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_0108(c, 50u, depth + 1u); else { c.pc = 0x00520E10u; return; } if (c.pc != 0x00538FB0u) [[unlikely]] return; }
L_00538FB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 2964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538FBCu); c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00538FBCu) [[unlikely]] return; }
L_00538FBC:
    c.budget -= 1;
L_00538FC0:
    set32(c.r[2], c.r[17].w[0] + 2628u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[18], ld32((c.r[19].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00538E48u | kUnwind; return; } goto L_00538E48; }
    c.budget -= 1;
L_00538FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00538FD8u); set32(c.r[4], ld32((c.r[17].w[0] + 2964u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00538FD8u) [[unlikely]] return; }
L_00538FD8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_00539050; } }
    set32(c.r[19], ld32((c.r[17].w[0] + 336u)));
    set32(c.r[2], c.r[17].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00539050; } }
L_00538FF0:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], ld32((c.r[19].w[0])));  if (t) { goto L_00539040; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053900Cu); st32((c.r[29].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0107(c, 212u, depth + 1u); else { c.pc = 0x0051E6B0u; return; } if (c.pc != 0x0053900Cu) [[unlikely]] return; }
L_0053900C:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00539040; } }
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539040u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_0108(c, 34u, depth + 1u); else { c.pc = 0x00520860u; return; } if (c.pc != 0x00539040u) [[unlikely]] return; }
L_00539040:
    set32(c.r[2], c.r[17].w[0] + 336u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[19].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00538FF0u | kUnwind; return; } goto L_00538FF0; } }
    c.budget -= 1;
L_00539050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 201u, depth + 1u); else { c.pc = 0x0053A2C0u; return; } if (c.pc != 0x00539058u) [[unlikely]] return; }
L_00539058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00539080:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00539090; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1284u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00539090:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005390A4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 1280u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_005390A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_005390B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_005390C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_005390F0; } }
L_005390C4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u + 69u);  goto L_005390F0; }
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 3024u);  goto L_005390E8; }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005390F0; } }
L_005390E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005390F0u);  if (depth < kMaxDepth) unit_0110(c, 159u, depth + 1u); else { c.pc = 0x00542650u; return; } if (c.pc != 0x005390F0u) [[unlikely]] return; }
L_005390F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00539100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00539114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00539150; } }
L_00539114:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u + 69u);  goto L_00539150; }
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 3024u);  goto L_00539138; }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539150; } }
L_00539138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539140u);  if (depth < kMaxDepth) unit_0110(c, 160u, depth + 1u); else { c.pc = 0x00542790u; return; } if (c.pc != 0x00539140u) [[unlikely]] return; }
L_00539140:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00539150; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539150; } }
L_00539150:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00539160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 78u);  c.pc = t; return; }
L_00539170:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 2192u)));  goto L_00539180; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00539198; } }
L_00539180:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[5].w[0]), c.r[2].w[0]);  goto L_00539194; }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 77u);  if (t) { goto L_00539198; } }
L_00539194:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00539198:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_005391A0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_005391B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_005391F0; } }
L_005391B0:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_005391F0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 328u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 2160u)));  goto L_005391D4; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005391F0; } }
L_005391D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[5].w[0] << 16);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[7].w[0] << 28);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 7;
L_005391F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00539200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0] + 124u), 0u);  if (t) { goto L_00539240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00539378; } }
L_00539240:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00539278; }
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00539268; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539268u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0108(c, 178u, depth + 1u); else { c.pc = 0x00523610u; return; } if (c.pc != 0x00539268u) [[unlikely]] return; }
L_00539268:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00539274; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00539274:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00539278:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539288u); set32(c.r[7], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0110(c, 6u, depth + 1u); else { c.pc = 0x00540110u; return; } if (c.pc != 0x00539288u) [[unlikely]] return; }
L_00539288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  goto L_0053929C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0053937C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_0053929C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005392B0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0108(c, 79u, depth + 1u); else { c.pc = 0x005218E0u; return; } if (c.pc != 0x005392B0u) [[unlikely]] return; }
L_005392B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  goto L_005392F0; }
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005392E4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0108(c, 34u, depth + 1u); else { c.pc = 0x00520860u; return; } if (c.pc != 0x005392E4u) [[unlikely]] return; }
L_005392E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00539378; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_005392F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005392F8u);  if (depth < kMaxDepth) unit_0108(c, 164u, depth + 1u); else { c.pc = 0x005230A0u; return; } if (c.pc != 0x005392F8u) [[unlikely]] return; }
L_005392F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[19].d[0] << 56;  goto L_0053930C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539378; } }
    c.r[3].d[0] = c.r[19].d[0] << 56;
    c.budget -= 1;
L_0053930C:
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  goto L_0053933C; }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00539338; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_00539360; } }
L_00539338:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_0053933C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539344u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0108(c, 167u, depth + 1u); else { c.pc = 0x005232C0u; return; } if (c.pc != 0x00539344u) [[unlikely]] return; }
L_00539344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00539360; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00539378; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539378; } }
L_00539360:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00539378; }
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00539378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0053937C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_005393A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 140u), 0u);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00539400; } }
    c.r[3].d[0] = c.r[20].d[0] << 56;
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00539400; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539400u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0108(c, 178u, depth + 1u); else { c.pc = 0x00523610u; return; } if (c.pc != 0x00539400u) [[unlikely]] return; }
L_00539400:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 264u)));  goto L_00539424; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_00539660; }
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u + 37u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539660; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 264u)));
    c.budget -= 1;
L_00539424:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_00539448; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 54u);  goto L_00539660; }
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], 0u + 54u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539660; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_00539448:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 268u)));  goto L_00539460; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 25u);  if (t) { goto L_00539660; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 268u)));
    c.budget -= 1;
L_00539460:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00539538; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00539538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053947Cu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0110(c, 227u, depth + 1u); else { c.pc = 0x00543CF0u; return; } if (c.pc != 0x0053947Cu) [[unlikely]] return; }
L_0053947C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 268u)));  goto L_00539490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539660; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 268u)));
    c.budget -= 1;
L_00539490:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00539538; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], ld32((c.r[21].w[0] + 1220u)));  goto L_005394EC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = c.r[2].d[0] & 255ull;  goto L_00539538; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 41u);  goto L_00539660; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539538; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539660; } }
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539538; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 1220u)));
    c.budget -= 1;
L_005394EC:
    set32(c.r[4], c.r[21].w[0] + 1216u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_00539538; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 1;
L_005394FC:
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 4u)));  goto L_00539530; }
    set32(c.r[2], ld32((c.r[2].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053952C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0053952C; } }
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 28u)));  if (t) { goto L_00539538; } }
L_0053952C:
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 1;
L_00539530:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[6].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005394FCu | kUnwind; return; } goto L_005394FC; }
L_00539538:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053954Cu); set32(c.r[7], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0110(c, 12u, depth + 1u); else { c.pc = 0x00540360u; return; } if (c.pc != 0x0053954Cu) [[unlikely]] return; }
L_0053954C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 140u)));  goto L_0053956C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00539660; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539660; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_0053956C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539580u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0108(c, 89u, depth + 1u); else { c.pc = 0x00521B20u; return; } if (c.pc != 0x00539580u) [[unlikely]] return; }
L_00539580:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 140u)));  goto L_005395CC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st64((c.r[29].w[0]), 0ull);  goto L_0053959C; }
    st32((c.r[17].w[0]), 0u);
    st64((c.r[29].w[0]), 0ull);
    c.budget -= 2;
L_0053959C:
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005395C0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0108(c, 34u, depth + 1u); else { c.pc = 0x00520860u; return; } if (c.pc != 0x005395C0u) [[unlikely]] return; }
L_005395C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00539660; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_005395CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005395D4u);  if (depth < kMaxDepth) unit_0108(c, 164u, depth + 1u); else { c.pc = 0x005230A0u; return; } if (c.pc != 0x005395D4u) [[unlikely]] return; }
L_005395D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = c.r[20].d[0] << 56;  goto L_005395F4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00539660; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539660; } }
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.budget -= 1;
L_005395F4:
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 140u)));  goto L_00539624; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00539620; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 112u), c.r[2].w[0]);  if (t) { goto L_00539648; } }
L_00539620:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_00539624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053962Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0108(c, 167u, depth + 1u); else { c.pc = 0x005232C0u; return; } if (c.pc != 0x0053962Cu) [[unlikely]] return; }
L_0053962C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00539648; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00539660; } }
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539660; } }
L_00539648:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00539660; }
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 112u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00539660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00539690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_005396C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00539760; } }
L_005396C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 56u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 8916u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005396E0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x005396E0u) [[unlikely]] return; }
L_005396E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005396F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005396F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0110(c, 232u, depth + 1u); else { c.pc = 0x00543DD0u; return; } if (c.pc != 0x005396F0u) [[unlikely]] return; }
L_005396F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_005396F4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 21900u)));  goto L_00539704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00539760; } }
L_00539704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053970Cu);  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x0053970Cu) [[unlikely]] return; }
L_0053970C:
    set32(c.r[3], ld32((c.r[19].w[0] + 2304u)));
    set32(c.r[2], c.r[19].w[0] + 2304u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[19].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539738u); set32(c.r[4], ld32((c.r[28].w[0] - 21900u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00539738u) [[unlikely]] return; }
L_00539738:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 32u), 0u);  goto L_00539758; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539748u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 278u, depth + 1u); else { c.pc = 0x005379F0u; return; } if (c.pc != 0x00539748u) [[unlikely]] return; }
L_00539748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00539758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00539760; } }
L_00539758:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00539760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00539780:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_005397B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053989C; } }
L_005397B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 92u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 8816u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005397D0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x005397D0u) [[unlikely]] return; }
L_005397D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053981C; } }
    st32((c.r[16].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] + 36u);
    st32((c.r[16].w[0] + 4u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 16;
L_0053981C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 2196u)));  goto L_0053982C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053989C; } }
L_0053982C:
    set32(c.r[2], c.r[19].w[0] + 2196u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 12u), c.r[19].w[0]);  if (t) { goto L_00539868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539858u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 278u, depth + 1u); else { c.pc = 0x005379F0u; return; } if (c.pc != 0x00539858u) [[unlikely]] return; }
L_00539858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0053986C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053989C; } }
L_00539868:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_0053986C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[16].w[0]);  goto L_00539898; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539884u); set32(c.r[4], c.r[4].w[0] - 20984u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00539884u) [[unlikely]] return; }
L_00539884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00539894; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1232u)));
    st32((c.r[2].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 2;
L_00539894:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_00539898:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053989C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005398C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 49u);  c.pc = t; return; }
L_005398D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 49u);  c.pc = t; return; }
L_005398E0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { st32((c.r[6].w[0]), 0u);  goto L_005398F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00539900; } }
L_005398F0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_00539900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 49u);  if (t) { goto L_00539900; } }
L_00539900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00539910:
    c.budget -= 2;
    { c.r[6].d[0] = c.r[6].d[0] | 128ull;  goto L_00539920; }
L_00539920:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00539964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 77u);  if (t) { goto L_00539CD8; } }
L_00539964:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00539974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00539CD8; } }
L_00539974:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_00539994; }
    c.r[2].d[0] = c.r[18].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00539990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00539CD8; } }
L_00539990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00539994:
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[18].d[0] & 64ull;  goto L_005399B4; }
    c.r[2].d[0] = c.r[18].d[0] & 96ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005399B0; } }
    c.r[18].d[0] = c.r[18].d[0] | 32ull;
    c.budget -= 1;
L_005399B0:
    c.r[16].d[0] = c.r[18].d[0] & 64ull;
    c.budget -= 1;
L_005399B4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] & 32ull;  goto L_005399D4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 1232u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005399D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 61u);  if (t) { goto L_00539CD8; } }
L_005399D0:
    c.r[2].d[0] = c.r[18].d[0] & 32ull;
    c.budget -= 1;
L_005399D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_00539A04; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00539A00; } }
    c.r[2].d[0] = c.r[18].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00539A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 49u);  if (t) { goto L_00539CD8; } }
L_00539A00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00539A04:
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_00539C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539A18u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_010B(c, 88u, depth + 1u); else { c.pc = 0x0052D530u; return; } if (c.pc != 0x00539A18u) [[unlikely]] return; }
L_00539A18:
    c.r[2].d[0] = c.r[18].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 120u), 0u);  goto L_00539A64; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 340u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 8250u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539A44u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x00539A44u) [[unlikely]] return; }
L_00539A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00539A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539A54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010C(c, 143u, depth + 1u); else { c.pc = 0x005322A0u; return; } if (c.pc != 0x00539A54u) [[unlikely]] return; }
L_00539A54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_00539AE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00539CD8; } }
L_00539A64:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 116u), 0u);  if (t) { goto L_00539A80; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539A80u); set32(c.r[7], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_010E(c, 366u, depth + 1u); else { c.pc = 0x0053BE90u; return; } if (c.pc != 0x00539A80u) [[unlikely]] return; }
L_00539A80:
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 49u);  goto L_00539AD4; }
    set32(c.r[3], ld32((c.r[20].w[0] + 1232u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00539AD0; } }
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 1232u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00539AB0; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_00539AB0:
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00539AC4u); set32(c.r[7], c.r[29].w[0] + 120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00539AC4u) [[unlikely]] return; }
L_00539AC4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 2188u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00539AD4; } }
L_00539AD0:
    set32(c.r[2], 0u + 49u);
    c.budget -= 1;
L_00539AD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 120u)));  goto L_00539AE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00539CDC; } }
L_00539AE4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00539AE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[5], 0u + 392u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 8299u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539B0Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x00539B0Cu) [[unlikely]] return; }
L_00539B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_00539B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00539CD8; } }
L_00539B1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.r[3].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00539B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 272u), c.r[19].w[0]);  if (t) { goto L_00539B74; } }
L_00539B38:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 20u), c.r[18].w[0]);  goto L_00539B78; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[3].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_00539B68; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539B60u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_010E(c, 4u, depth + 1u); else { c.pc = 0x00538050u; return; } if (c.pc != 0x00539B60u) [[unlikely]] return; }
L_00539B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539B74; } }
L_00539B68:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539B74u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_010D(c, 311u, depth + 1u); else { c.pc = 0x00537FB0u; return; } if (c.pc != 0x00539B74u) [[unlikely]] return; }
L_00539B74:
    st32((c.r[16].w[0] + 20u), c.r[18].w[0]);
    c.budget -= 1;
L_00539B78:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 240u), c.r[20].w[0]);
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539B8Cu); st32((c.r[16].w[0] + 264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_010B(c, 85u, depth + 1u); else { c.pc = 0x0052D490u; return; } if (c.pc != 0x00539B8Cu) [[unlikely]] return; }
L_00539B8C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[16].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_00539BD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539BA8u); set32(c.r[4], c.r[2].w[0] + 276u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00539BA8u) [[unlikely]] return; }
L_00539BA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 384u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0] + 96u)));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00539BE4; }
    set32(c.r[25], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00539BD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00539BD0u) [[unlikely]] return; }
L_00539BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539BE0; } }
L_00539BD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    st8((c.r[2].w[0] + 384u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00539BE0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00539BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539BECu);  if (depth < kMaxDepth) unit_0105(c, 121u, depth + 1u); else { c.pc = 0x00515750u; return; } if (c.pc != 0x00539BECu) [[unlikely]] return; }
L_00539BEC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 260u)));  goto L_00539C20; }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00539C14u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00539C14u) [[unlikely]] return; }
L_00539C14:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00539CD8; } }
L_00539C20:
    set32(c.r[2], ld32((c.r[2].w[0] + 256u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539C2Cu); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00539C2Cu) [[unlikely]] return; }
L_00539C2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    st32((c.r[2].w[0] + 268u), c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 256u)));
    set32(c.r[3], c.r[6].w[0] + 260u);
    set32(c.r[2], ld32((c.r[5].w[0] + 312u)));
    set32(c.r[4], c.r[5].w[0] + 308u);
    st32((c.r[6].w[0] + 264u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 260u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 264u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 256u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539C6Cu); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x00539C6Cu) [[unlikely]] return; }
L_00539C6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 256u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539C80u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0110(c, 112u, depth + 1u); else { c.pc = 0x00541ED0u; return; } if (c.pc != 0x00539C80u) [[unlikely]] return; }
L_00539C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00539CD8; } }
L_00539C88:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539CA4u); c.r[9].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_010F(c, 51u, depth + 1u); else { c.pc = 0x0053C720u; return; } if (c.pc != 0x00539CA4u) [[unlikely]] return; }
L_00539CA4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00539CD4; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00539CD4; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00539CD4; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00539CD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00539CD4u) [[unlikely]] return; }
L_00539CD4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00539CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00539CDC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00539D00:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00539D10; } }
    c.f[0] = ld32((c.r[4].w[0] + 1748u));
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 2;
L_00539D10:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00539D20; } }
    c.f[0] = ld32((c.r[4].w[0] + 1740u));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 2;
L_00539D20:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00539D34; }
    c.f[0] = ld32((c.r[4].w[0] + 1744u));
    st32((c.r[7].w[0]), c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00539D34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00539D40:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_00539E24; }
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00539D60; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00539E24; } }
L_00539D60:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00539D90; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1288u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1292u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1296u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 10;
L_00539D90:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00539DC0; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1312u));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1316u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1320u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.budget -= 10;
L_00539DC0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00539DF0; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1360u));
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1364u));
    st32((c.r[8].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1368u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.budget -= 10;
L_00539DF0:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00539E24; }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1336u));
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1340u));
    st32((c.r[9].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1344u));
    st32((c.r[9].w[0] + 8u), c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_00539E24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00539E30:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 1736u)));  goto L_00539E40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00539E48; } }
L_00539E40:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00539E48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00539E50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00539E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00539F98; } }
L_00539E68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    set32(c.r[2], c.r[5].w[0] << 3);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[13]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 2372u), c.r[5].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[12]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st32((c.r[3].w[0] + 2376u), c.f[12]);
    st32((c.r[3].w[0] + 2380u), 0u);
    st32((c.r[3].w[0] + 2384u), c.f[13]);
    st8((c.r[3].w[0] + 2396u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.f[0]);
    c.budget -= 19;
    if (c.r[8].d[0] != 0ull) { set32(c.r[7], c.r[3].w[0] << 10);  goto L_00539EC8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00539EC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00539F8C; } }
L_00539EC4:
    set32(c.r[7], c.r[3].w[0] << 10);
    c.budget -= 1;
L_00539EC8:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00539ED4; } }
    set32(c.r[3], 0u - c.r[7].w[0]);
    c.budget -= 1;
L_00539ED4:
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[8].w[0] << 10);
    c.budget -= 4;
    if (c.r[3].sd[0] < 0) { set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);  goto L_00539F0C; }
    set32(c.r[6], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));
    set32(c.r[5], 0u + 804u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);  if (t) { goto L_00539F30; } }
L_00539F0C:
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));
    set32(c.r[5], 0u + 804u);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 2412u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 10));
    set32(c.r[6], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 9;
L_00539F30:
    c.budget -= 2;
    if (c.r[7].sd[0] >= 0) { set32(c.r[5], c.r[6].w[0] << 4);  goto L_00539F40; }
    set32(c.r[6], 0u - c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] << 4);
    c.budget -= 2;
L_00539F40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x028C0000u);
    set32(c.r[6], c.r[5].w[0] - c.r[6].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 6521ull;
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] >> 31);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    if (c.r[5].sd[0] >= 0) { c.r[3].d[0] = c.r[5].sd[0] < 360ll ? 1ull : 0ull;  goto L_00539F7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 360u);  if (t) { goto L_00539F8C; } }
L_00539F7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00539F8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 360u);  if (t) { goto L_00539F8C; } }
L_00539F8C:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00539F98u); st32((c.r[2].w[0] + 2388u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_010F(c, 46u, depth + 1u); else { c.pc = 0x0053C5C0u; return; } if (c.pc != 0x00539F98u) [[unlikely]] return; }
L_00539F98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00539FB0:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_0053A288; }
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00539FD0; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A288; } }
L_00539FD0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0053A064; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[11], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[11].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1372u));
    c.f[0] = ld32((c.r[8].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[10], c.r[2].w[0] + 1372u);  if (t) { goto L_0053A024; } }
    c.f[1] = ld32((c.r[2].w[0] + 1376u));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 1u);  goto L_0053A028; }
    c.f[1] = ld32((c.r[2].w[0] + 1380u));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[11].w[0] + c.r[4].w[0]);  goto L_0053A034; }
L_0053A024:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0053A028:
    set32(c.r[2], c.r[11].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 1397u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[11].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_0053A034:
    c.f[0] = ld32((c.r[2].w[0] + 1360u));
    st32((c.r[10].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1364u));
    st32((c.r[2].w[0] + 1376u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1368u));
    st32((c.r[2].w[0] + 1380u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[2].w[0] + 1360u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[2].w[0] + 1364u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[2].w[0] + 1368u), c.f[0]);
    c.budget -= 12;
L_0053A064:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0053A0F8; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[10], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[10].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1348u));
    c.f[0] = ld32((c.r[9].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[8], c.r[2].w[0] + 1348u);  if (t) { goto L_0053A0B8; } }
    c.f[1] = ld32((c.r[2].w[0] + 1352u));
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 1u);  goto L_0053A0BC; }
    c.f[1] = ld32((c.r[2].w[0] + 1356u));
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[10].w[0] + c.r[4].w[0]);  goto L_0053A0C8; }
L_0053A0B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0053A0BC:
    set32(c.r[2], c.r[10].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 1397u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[10].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_0053A0C8:
    c.f[0] = ld32((c.r[2].w[0] + 1336u));
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1340u));
    st32((c.r[2].w[0] + 1352u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1344u));
    st32((c.r[2].w[0] + 1356u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    st32((c.r[2].w[0] + 1336u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[2].w[0] + 1340u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[2].w[0] + 1344u), c.f[0]);
    c.budget -= 12;
L_0053A0F8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0053A18C; } }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[9], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[9].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1300u));
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[8], c.r[2].w[0] + 1300u);  if (t) { goto L_0053A14C; } }
    c.f[1] = ld32((c.r[2].w[0] + 1304u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 1u);  goto L_0053A150; }
    c.f[1] = ld32((c.r[2].w[0] + 1308u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[6].w[0]));  goto L_0053A15C; }
L_0053A14C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0053A150:
    set32(c.r[2], c.r[9].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 1396u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.budget -= 3;
L_0053A15C:
    set32(c.r[2], c.r[9].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 1288u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[2].w[0] + 1292u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[2].w[0] + 1296u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1288u));
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1292u));
    st32((c.r[2].w[0] + 1304u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1296u));
    st32((c.r[2].w[0] + 1308u), c.f[0]);
    c.budget -= 12;
L_0053A18C:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] << 3);  goto L_0053A224; }
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[8], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[8].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 1324u));
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[6], c.r[2].w[0] + 1324u);  if (t) { goto L_0053A1E0; } }
    c.f[1] = ld32((c.r[2].w[0] + 1328u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 1u);  goto L_0053A1E4; }
    c.f[1] = ld32((c.r[2].w[0] + 1332u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[8].w[0] + c.r[4].w[0]);  goto L_0053A1F0; }
L_0053A1E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0053A1E4:
    set32(c.r[2], c.r[8].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 1396u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 3;
L_0053A1F0:
    c.f[0] = ld32((c.r[2].w[0] + 1312u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1316u));
    st32((c.r[2].w[0] + 1328u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 1320u));
    st32((c.r[2].w[0] + 1332u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[2].w[0] + 1312u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[2].w[0] + 1316u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[2].w[0] + 1320u), c.f[0]);
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 13;
L_0053A224:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.f[5] = ld32((c.r[3].w[0] + 1340u));
    c.f[6] = ld32((c.r[3].w[0] + 1344u));
    c.f[2] = ld32((c.r[3].w[0] + 1360u));
    c.f[3] = ld32((c.r[3].w[0] + 1364u));
    c.f[1] = ld32((c.r[3].w[0] + 1368u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.f[4] = ld32((c.r[3].w[0] + 1336u));  if (t) { goto L_0053A25C; } }
    c.f[6] = c.f[6] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.budget -= 2;
L_0053A25C:
    c.facc = fp::mul(c.f[5], c.f[1]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[6], c.f[3]));
    c.r[2].d[0] = 0ull + 0ull;
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[1]));
    st32((c.r[3].w[0] + 1384u), c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[2]));
    st32((c.r[3].w[0] + 1388u), c.f[1]);
    st32((c.r[3].w[0] + 1392u), c.f[0]);
    c.budget -= 11;
L_0053A288:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0053A290:
    c.budget -= 2;
    if (c.r[5].sd[0] <= 0) { set32(c.r[2], 0u + 37u);  goto L_0053A2B4; }
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { st32((c.r[4].w[0] + 1736u), c.r[5].w[0]);  goto L_0053A2B0; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A2B4; } }
L_0053A2B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053A2B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0053A2C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0053A2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 77u);  if (t) { goto L_0053A554; } }
L_0053A2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A2ECu); set32(c.r[4], c.r[17].w[0] + 2100u);  if (depth < kMaxDepth) unit_0110(c, 154u, depth + 1u); else { c.pc = 0x005425C0u; return; } if (c.pc != 0x0053A2ECu) [[unlikely]] return; }
L_0053A2EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 2156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 56u);  goto L_0053A304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A300u); set32(c.r[4], c.r[17].w[0] + 2156u);  if (depth < kMaxDepth) unit_0104(c, 263u, depth + 1u); else { c.pc = 0x00512E20u; return; } if (c.pc != 0x0053A300u) [[unlikely]] return; }
L_0053A300:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 1;
L_0053A304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A30Cu);  if (depth < kMaxDepth) unit_0104(c, 263u, depth + 1u); else { c.pc = 0x00512E20u; return; } if (c.pc != 0x0053A30Cu) [[unlikely]] return; }
L_0053A30C:
    set32(c.r[4], ld32((c.r[17].w[0] + 2156u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[3].d[0] + 0ull;  goto L_0053A324; }
    set32(c.r[16], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_0053A324:
    st32((c.r[17].w[0] + 2156u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1264u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0053A350; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A33Cu);  if (depth < kMaxDepth) unit_010B(c, 140u, depth + 1u); else { c.pc = 0x0052E070u; return; } if (c.pc != 0x0053A33Cu) [[unlikely]] return; }
L_0053A33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053A34C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0053A558; } }
L_0053A34C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0053A350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A358u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0110(c, 35u, depth + 1u); else { c.pc = 0x00540D30u; return; } if (c.pc != 0x0053A358u) [[unlikely]] return; }
L_0053A358:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0053A368; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A554; } }
L_0053A368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A370u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0110(c, 26u, depth + 1u); else { c.pc = 0x00540A60u; return; } if (c.pc != 0x0053A370u) [[unlikely]] return; }
L_0053A370:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0053A380; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A554; } }
L_0053A380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A388u); set32(c.r[4], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0104(c, 263u, depth + 1u); else { c.pc = 0x00512E20u; return; } if (c.pc != 0x0053A388u) [[unlikely]] return; }
L_0053A388:
    set32(c.r[6], ld32((c.r[28].w[0] - 29352u)));
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[5], 0u + 1000u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 1244u)));
    mmi::multu(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::mult(c, 1, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[4].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[6]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A3D4u); c.r[4].d[0] = c.r[2].d[0] + c.r[4].d[0];  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x0053A3D4u) [[unlikely]] return; }
L_0053A3D4:
    c.r[3].d[0] = ld64((c.r[17].w[0] + 1280u));
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    st64((c.r[17].w[0] + 1280u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1232u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0053A444; }
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053A440; } }
    set32(c.r[4], c.r[17].w[0] + 2100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A404u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0110(c, 149u, depth + 1u); else { c.pc = 0x00542390u; return; } if (c.pc != 0x0053A404u) [[unlikely]] return; }
L_0053A404:
    set32(c.r[2], ld32((c.r[17].w[0] + 1232u)));
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1232u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0053A41C; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0053A41C:
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A428u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053A428u) [[unlikely]] return; }
L_0053A428:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 2100u);  goto L_0053A438; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A554; } }
L_0053A438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A440u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0110(c, 149u, depth + 1u); else { c.pc = 0x00542390u; return; } if (c.pc != 0x0053A440u) [[unlikely]] return; }
L_0053A440:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_0053A444:
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 1736u)));  goto L_0053A4BC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 2184u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1000ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 2184u)));  goto L_0053A4B0; }
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A470u); st32((c.r[17].w[0] + 2184u), 0u);  if (depth < kMaxDepth) unit_0104(c, 212u, depth + 1u); else { c.pc = 0x00512770u; return; } if (c.pc != 0x0053A470u) [[unlikely]] return; }
L_0053A470:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));  goto L_0053A480; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A554; } }
L_0053A480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053A4AC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1232u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A4ACu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053A4ACu) [[unlikely]] return; }
L_0053A4AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 2184u)));
    c.budget -= 1;
L_0053A4B0:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 2184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1736u)));
    c.budget -= 3;
L_0053A4BC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0053A4E8; } }
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0053A4C8:
    st8((c.r[3].w[0] + 1396u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[3].w[0] + 1397u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 1736u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 112u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053A4C8u | kUnwind; return; } goto L_0053A4C8; } }
    c.budget -= 1;
L_0053A4E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A4F0u);  if (depth < kMaxDepth) unit_0105(c, 149u, depth + 1u); else { c.pc = 0x00515C00u; return; } if (c.pc != 0x0053A4F0u) [[unlikely]] return; }
L_0053A4F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 2100u);  goto L_0053A500; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A554; } }
L_0053A500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A508u); set32(c.r[5], 0u + 95u);  if (depth < kMaxDepth) unit_0110(c, 152u, depth + 1u); else { c.pc = 0x00542450u; return; } if (c.pc != 0x0053A508u) [[unlikely]] return; }
L_0053A508:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0053A524; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A520u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0110(c, 93u, depth + 1u); else { c.pc = 0x00541CC0u; return; } if (c.pc != 0x0053A520u) [[unlikely]] return; }
L_0053A520:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0053A524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053A554; }
    set32(c.r[3], ld32((c.r[17].w[0] + 1232u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053A550; } }
    set32(c.r[4], c.r[3].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A550u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0110(c, 112u, depth + 1u); else { c.pc = 0x00541ED0u; return; } if (c.pc != 0x0053A550u) [[unlikely]] return; }
L_0053A550:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053A554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0053A558:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0053A570:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0053A680; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0053A5D8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0053A5A4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A5B0u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_010E(c, 21u, depth + 1u); else { c.pc = 0x00538220u; return; } if (c.pc != 0x0053A5B0u) [[unlikely]] return; }
L_0053A5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053A5C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A5C0u); set32(c.r[4], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_0105(c, 270u, depth + 1u); else { c.pc = 0x00516930u; return; } if (c.pc != 0x0053A5C0u) [[unlikely]] return; }
L_0053A5C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 328u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0053A5A4u | kUnwind; return; } goto L_0053A5A4; }
    c.budget -= 1;
L_0053A5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A5E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 201u, depth + 1u); else { c.pc = 0x0053A2C0u; return; } if (c.pc != 0x0053A5E0u) [[unlikely]] return; }
L_0053A5E0:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2952u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 29352u)));  goto L_0053A620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A5F4u); set32(c.r[4], c.r[19].w[0] + 2660u);  if (depth < kMaxDepth) unit_0110(c, 114u, depth + 1u); else { c.pc = 0x00541F00u; return; } if (c.pc != 0x0053A5F4u) [[unlikely]] return; }
L_0053A5F4:
    st8((c.r[19].w[0] + 2952u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A600u); set32(c.r[4], ld32((c.r[19].w[0] + 2956u)));  if (depth < kMaxDepth) unit_0104(c, 231u, depth + 1u); else { c.pc = 0x005129F0u; return; } if (c.pc != 0x0053A600u) [[unlikely]] return; }
L_0053A600:
    st32((c.r[19].w[0] + 2956u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A60Cu); set32(c.r[4], ld32((c.r[19].w[0] + 2960u)));  if (depth < kMaxDepth) unit_0104(c, 231u, depth + 1u); else { c.pc = 0x005129F0u; return; } if (c.pc != 0x0053A60Cu) [[unlikely]] return; }
L_0053A60C:
    st32((c.r[19].w[0] + 2960u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A618u); set32(c.r[4], ld32((c.r[19].w[0] + 2964u)));  if (depth < kMaxDepth) unit_0104(c, 231u, depth + 1u); else { c.pc = 0x005129F0u; return; } if (c.pc != 0x0053A618u) [[unlikely]] return; }
L_0053A618:
    st32((c.r[19].w[0] + 2964u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 2;
L_0053A620:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));  goto L_0053A684; }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053A680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A644u);  if (depth < kMaxDepth) unit_0105(c, 173u, depth + 1u); else { c.pc = 0x00515F50u; return; } if (c.pc != 0x0053A644u) [[unlikely]] return; }
L_0053A644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 21900u)));  goto L_0053A654; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0053A8F0; } }
L_0053A654:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0053A668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A664u);  if (depth < kMaxDepth) unit_0104(c, 231u, depth + 1u); else { c.pc = 0x005129F0u; return; } if (c.pc != 0x0053A664u) [[unlikely]] return; }
L_0053A664:
    st32((c.r[28].w[0] - 21900u), 0u);
    c.budget -= 1;
L_0053A668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A670u);  if (depth < kMaxDepth) unit_010A(c, 217u, depth + 1u); else { c.pc = 0x0052B7F0u; return; } if (c.pc != 0x0053A670u) [[unlikely]] return; }
L_0053A670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053A680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A8EC; } }
L_0053A680:
    set32(c.r[4], ld32((c.r[19].w[0] + 2192u)));
    c.budget -= 1;
L_0053A684:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 2196u)));  goto L_0053A6C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A694u);  if (depth < kMaxDepth) unit_0107(c, 79u, depth + 1u); else { c.pc = 0x0051CA60u; return; } if (c.pc != 0x0053A694u) [[unlikely]] return; }
L_0053A694:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 2192u), 0u);  goto L_0053A6BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A8EC; } }
L_0053A6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A6ACu);  if (depth < kMaxDepth) unit_0107(c, 90u, depth + 1u); else { c.pc = 0x0051CC30u; return; } if (c.pc != 0x0053A6ACu) [[unlikely]] return; }
L_0053A6AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053A6BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A8EC; } }
L_0053A6BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 2196u)));
    c.budget -= 1;
L_0053A6C0:
    set32(c.r[3], c.r[19].w[0] + 2196u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0053A6E0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 2200u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0053A6E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0053A6E8; } }
L_0053A6E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0053A6E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053A6A4u | kUnwind; return; } goto L_0053A6A4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 2288u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 1232u)));  goto L_0053A718; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A704u);  if (depth < kMaxDepth) unit_0110(c, 229u, depth + 1u); else { c.pc = 0x00543D40u; return; } if (c.pc != 0x0053A704u) [[unlikely]] return; }
L_0053A704:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 2288u), 0u);  goto L_0053A714; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053A8EC; } }
L_0053A714:
    set32(c.r[4], ld32((c.r[19].w[0] + 1232u)));
    c.budget -= 1;
L_0053A718:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 1264u)));  goto L_0053A7C4; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0053A7C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 76u)));  goto L_0053A75C; }
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 1232u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0053A748; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0053A748:
    set32(c.r[2], ld32((c.r[2].w[0] + 168u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A754u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053A754u) [[unlikely]] return; }
L_0053A754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 3024u);  if (t) { goto L_0053A770; } }
L_0053A75C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053A76C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A76Cu);  if (depth < kMaxDepth) unit_010B(c, 158u, depth + 1u); else { c.pc = 0x0052E300u; return; } if (c.pc != 0x0053A76Cu) [[unlikely]] return; }
L_0053A76C:
    set32(c.r[4], c.r[19].w[0] + 3024u);
    c.budget -= 1;
L_0053A770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0110(c, 169u, depth + 1u); else { c.pc = 0x005430C0u; return; } if (c.pc != 0x0053A778u) [[unlikely]] return; }
L_0053A778:
    set32(c.r[3], ld32((c.r[19].w[0] + 1232u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 1232u)));  goto L_0053A7AC; }
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 1232u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0053A79C; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0053A79C:
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A7A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053A7A8u) [[unlikely]] return; }
L_0053A7A8:
    set32(c.r[4], ld32((c.r[19].w[0] + 1232u)));
    c.budget -= 1;
L_0053A7AC:
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A7BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053A7BCu) [[unlikely]] return; }
L_0053A7BC:
    st32((c.r[19].w[0] + 1232u), 0u);
    c.budget -= 1;
L_0053A7C0:
    set32(c.r[4], ld32((c.r[19].w[0] + 1264u)));
    c.budget -= 1;
L_0053A7C4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 332u)));  goto L_0053A7E4; }
    set32(c.r[25], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A7DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053A7DCu) [[unlikely]] return; }
L_0053A7DC:
    st32((c.r[19].w[0] + 1264u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 332u)));
    c.budget -= 2;
L_0053A7E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 776u);  goto L_0053A878; }
    set32(c.r[2], ld32((c.r[19].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0053A850; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053A7FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 332u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 292u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0053A838; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 6830u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A82Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0053A82Cu) [[unlikely]] return; }
L_0053A82C:
    set32(c.r[2], ld32((c.r[19].w[0] + 332u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 292u), 0u);
    c.budget -= 3;
L_0053A838:
    set32(c.r[2], ld32((c.r[19].w[0] + 328u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 440u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053A7FCu | kUnwind; return; } goto L_0053A7FC; } }
    c.budget -= 1;
L_0053A850:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 332u)));
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 6835u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A870u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0053A870u) [[unlikely]] return; }
L_0053A870:
    st32((c.r[19].w[0] + 332u), 0u);
    set32(c.r[2], c.r[19].w[0] + 776u);
    c.budget -= 2;
L_0053A878:
    st32((c.r[19].w[0] + 776u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 780u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 784u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 2328u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 2332u)));  goto L_0053A8A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A898u);  if (depth < kMaxDepth) unit_0104(c, 231u, depth + 1u); else { c.pc = 0x005129F0u; return; } if (c.pc != 0x0053A898u) [[unlikely]] return; }
L_0053A898:
    st32((c.r[19].w[0] + 2328u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 2332u)));
    c.budget -= 2;
L_0053A8A0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 2352u);  goto L_0053A8B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A8B0u);  if (depth < kMaxDepth) unit_0104(c, 231u, depth + 1u); else { c.pc = 0x005129F0u; return; } if (c.pc != 0x0053A8B0u) [[unlikely]] return; }
L_0053A8B0:
    st32((c.r[19].w[0] + 2332u), 0u);
    set32(c.r[4], c.r[19].w[0] + 2352u);
    c.budget -= 2;
L_0053A8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A8C0u);  if (depth < kMaxDepth) unit_0110(c, 215u, depth + 1u); else { c.pc = 0x00543A00u; return; } if (c.pc != 0x0053A8C0u) [[unlikely]] return; }
L_0053A8C0:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(0u));  goto L_0053A8E8; }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053A8E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0053A8E4:
    st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0053A8E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053A8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0053A8F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0053A910:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].sd[0] < 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0053A948; } }
    c.r[2].d[0] = c.r[19].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], 0u + 1u);  goto L_0053A950; }
L_0053A948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053B01C; } }
L_0053A950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A958u);  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053A958u) [[unlikely]] return; }
L_0053A958:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 16u);  goto L_0053A968; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0053B020; } }
L_0053A968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A970u); st32((c.r[16].w[0] + 20u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0104(c, 255u, depth + 1u); else { c.pc = 0x00512D10u; return; } if (c.pc != 0x0053A970u) [[unlikely]] return; }
L_0053A970:
    set32(c.r[5], ld32((c.r[16].w[0] + 1236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A97Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 370u, depth + 1u); else { c.pc = 0x0053BFB0u; return; } if (c.pc != 0x0053A97Cu) [[unlikely]] return; }
L_0053A97C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 1232u)));  goto L_0053A98C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B01C; } }
L_0053A98C:
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 92u)));  goto L_0053AA20; }
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2368u)));
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1232u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0053A9B4; } }
    set32(c.r[4], c.r[3].w[0] + 24u);
    c.budget -= 1;
L_0053A9B4:
    set32(c.r[11], ld32((c.r[16].w[0] + 1272u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 1276u)));
    set32(c.r[7], c.r[16].w[0] + 1244u);
    set32(c.r[9], c.r[16].w[0] + 1240u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[11].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[2].d[0]);
    st64((c.r[29].w[0] + 8u), 0ull);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 160u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 1256u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053A9F4u); set32(c.r[10], c.r[29].w[0] + 236u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053A9F4u) [[unlikely]] return; }
L_0053A9F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 236u)));  goto L_0053AA04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B01C; } }
L_0053AA04:
    set32(c.r[2], ld32((c.r[16].w[0] + 2368u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0053AA80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AA18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 322u, depth + 1u); else { c.pc = 0x0053B450u; return; } if (c.pc != 0x0053AA18u) [[unlikely]] return; }
L_0053AA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053AA80; } }
L_0053AA20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053AA80; } }
    st32((c.r[3].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1232u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0053AA3C; } }
    set32(c.r[4], c.r[2].w[0] + 24u);
    c.budget -= 1;
L_0053AA3C:
    set32(c.r[10], ld32((c.r[16].w[0] + 1272u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 1244u);
    st64((c.r[29].w[0]), c.r[17].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1276u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 1260u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 1256u)));
    c.r[11].d[0] = c.lo.d[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AA70u); set32(c.r[9], c.r[16].w[0] + 1240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0053AA70u) [[unlikely]] return; }
L_0053AA70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053AA80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B01C; } }
L_0053AA80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AA94u); set32(c.r[6], c.r[16].w[0] + 2192u);  if (depth < kMaxDepth) unit_010E(c, 167u, depth + 1u); else { c.pc = 0x00539780u; return; } if (c.pc != 0x0053AA94u) [[unlikely]] return; }
L_0053AA94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);  goto L_0053AAB4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AAACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AAACu) [[unlikely]] return; }
L_0053AAAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053AAB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20976u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AAC4u); set32(c.r[6], c.r[16].w[0] + 2288u);  if (depth < kMaxDepth) unit_010E(c, 161u, depth + 1u); else { c.pc = 0x00539690u; return; } if (c.pc != 0x0053AAC4u) [[unlikely]] return; }
L_0053AAC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0053AAE4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AADCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AADCu) [[unlikely]] return; }
L_0053AADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053AAE4:
    c.budget -= 2;
    if (c.r[19].sd[0] <= 0) { st32((c.r[16].w[0] + 328u), c.r[19].w[0]);  goto L_0053AB70; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 228u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 6205u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AB10u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0053AB10u) [[unlikely]] return; }
L_0053AB10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 1264u), c.r[2].w[0]);  goto L_0053AB24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AB20u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 153u, depth + 1u); else { c.pc = 0x0052E240u; return; } if (c.pc != 0x0053AB20u) [[unlikely]] return; }
L_0053AB20:
    st32((c.r[16].w[0] + 1264u), c.r[2].w[0]);
    c.budget -= 1;
L_0053AB24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[2].w[0] + 40u), c.r[16].w[0]);  goto L_0053AB40; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AB38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AB38u) [[unlikely]] return; }
L_0053AB38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053B01C; } }
L_0053AB40:
    set32(c.r[4], ld32((c.r[16].w[0] + 1264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AB4Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 145u, depth + 1u); else { c.pc = 0x0052E0F0u; return; } if (c.pc != 0x0053AB4Cu) [[unlikely]] return; }
L_0053AB4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0053AB6C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AB64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AB64u) [[unlikely]] return; }
L_0053AB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053AB6C:
    st32((c.r[16].w[0] + 328u), c.r[19].w[0]);
    c.budget -= 1;
L_0053AB70:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0053AC40; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[7], 0u + 6230u);
    set32(c.r[5], c.r[2].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053ABA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x0053ABA8u) [[unlikely]] return; }
L_0053ABA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 332u), c.r[2].w[0]);  if (t) { goto L_0053ABC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053ABBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053ABBCu) [[unlikely]] return; }
L_0053ABBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053B01C; } }
L_0053ABC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0053AC40; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053ABD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 332u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0053ABF0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053ABF0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0108(c, 106u, depth + 1u); else { c.pc = 0x00521FD0u; return; } if (c.pc != 0x0053ABF0u) [[unlikely]] return; }
L_0053ABF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 332u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 776u)));
    set32(c.r[2], c.r[16].w[0] + 776u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 332u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AC28u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0107(c, 219u, depth + 1u); else { c.pc = 0x0051E980u; return; } if (c.pc != 0x0053AC28u) [[unlikely]] return; }
L_0053AC28:
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 440u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0053ABD4u | kUnwind; return; } goto L_0053ABD4; } }
    c.budget -= 1;
L_0053AC40:
    set32(c.r[2], ld32((c.r[28].w[0] - 21900u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 2332u)));  goto L_0053AC7C; }
    set32(c.r[4], c.r[28].w[0] - 21900u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AC58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0053AC58u) [[unlikely]] return; }
L_0053AC58:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0053AC78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AC70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AC70u) [[unlikely]] return; }
L_0053AC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053AC78:
    set32(c.r[2], ld32((c.r[16].w[0] + 2332u)));
    c.budget -= 1;
L_0053AC7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 2328u)));  goto L_0053ACB4; }
    set32(c.r[4], c.r[16].w[0] + 2332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AC90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0053AC90u) [[unlikely]] return; }
L_0053AC90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0053ACB0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053ACA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053ACA8u) [[unlikely]] return; }
L_0053ACA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053ACB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 2328u)));
    c.budget -= 1;
L_0053ACB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 2952u));  goto L_0053ACEC; }
    set32(c.r[4], c.r[16].w[0] + 2328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053ACC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0053ACC8u) [[unlikely]] return; }
L_0053ACC8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0053ACE8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053ACE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053ACE0u) [[unlikely]] return; }
L_0053ACE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053ACE8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2952u));
    c.budget -= 1;
L_0053ACEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21920u)));  goto L_0053ADD8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053ADD4; } }
    set32(c.r[4], c.r[16].w[0] + 2956u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AD10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0053AD10u) [[unlikely]] return; }
L_0053AD10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 2960u);  goto L_0053AD30; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AD28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AD28u) [[unlikely]] return; }
L_0053AD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053AD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AD38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0053AD38u) [[unlikely]] return; }
L_0053AD38:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 2964u);  goto L_0053AD58; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AD50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AD50u) [[unlikely]] return; }
L_0053AD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053AD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AD60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0053AD60u) [[unlikely]] return; }
L_0053AD60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 10u);  goto L_0053AD80; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AD78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AD78u) [[unlikely]] return; }
L_0053AD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053AD80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + 2660u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[5], c.r[5].w[0] - 20944u);
    set32(c.r[6], c.r[6].w[0] + 7680u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 2u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 16384u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053ADB0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0110(c, 122u, depth + 1u); else { c.pc = 0x00542010u; return; } if (c.pc != 0x0053ADB0u) [[unlikely]] return; }
L_0053ADB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0053ADD0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053ADC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053ADC8u) [[unlikely]] return; }
L_0053ADC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053ADD0:
    st8((c.r[16].w[0] + 2952u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0053ADD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 21920u)));
    c.budget -= 1;
L_0053ADD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053AE0C; } }
    set32(c.r[4], c.r[28].w[0] - 21920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053ADECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0104(c, 234u, depth + 1u); else { c.pc = 0x00512A70u; return; } if (c.pc != 0x0053ADECu) [[unlikely]] return; }
L_0053ADEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0053AE0C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AE04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AE04u) [[unlikely]] return; }
L_0053AE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053AE0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 32416u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 32412u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] - 32400u)));
    set32(c.r[7], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] - 32408u));
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 32392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[4].w[0] - 32396u)));
    c.f[0] = ld32((c.r[2].w[0] - 32404u));
    st32((c.r[29].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 32376u)));
    c.f[2] = ld32((c.r[2].w[0] - 32388u));
    set32(c.r[4], c.r[16].w[0] + 3024u);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[2].w[0] - 32384u));
    set32(c.r[3], ld32((c.r[3].w[0] - 32356u)));
    st32((c.r[29].w[0] + 140u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 32380u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[2].w[0] - 32372u));
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[2] = ld32((c.r[2].w[0] - 32368u));
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 32364u));
    st32((c.r[29].w[0] + 160u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[2].w[0] - 32360u));
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 32352u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[2].w[0] - 32348u));
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 32344u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[2].w[0] - 32340u));
    st32((c.r[29].w[0] + 184u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[1] = ld32((c.r[2].w[0] - 32336u));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[2].w[0] - 32332u));
    st32((c.r[29].w[0] + 192u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] - 32328u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 32324u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 200u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] - 32320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 204u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 32316u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 208u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] - 32312u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 32308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 216u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] - 32304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 32300u));
    st32((c.r[29].w[0] + 224u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 32296u)));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.budget -= 98;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AF94u); st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0110(c, 175u, depth + 1u); else { c.pc = 0x005431E0u; return; } if (c.pc != 0x0053AF94u) [[unlikely]] return; }
L_0053AF94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 112u)));  goto L_0053AFB4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AFACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AFACu) [[unlikely]] return; }
L_0053AFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053AFB4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_0053AFC8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 3024u);  goto L_0053AFD0; }
L_0053AFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 69u);  if (t) { goto L_0053AFE4; } }
L_0053AFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AFD8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0110(c, 160u, depth + 1u); else { c.pc = 0x00542790u; return; } if (c.pc != 0x0053AFD8u) [[unlikely]] return; }
L_0053AFD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0053AFE4; }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0053AFE4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 2356u), c.r[16].w[0]);  goto L_0053B000; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053AFF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010E(c, 220u, depth + 1u); else { c.pc = 0x0053A570u; return; } if (c.pc != 0x0053AFF8u) [[unlikely]] return; }
L_0053AFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0053B01C; } }
L_0053B000:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 29352u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
L_0053B01C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0053B020:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0053B040:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13u));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0053B160; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 640u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 3648u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B0A4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0053B0A4u) [[unlikely]] return; }
L_0053B0A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 1756u), c.r[2].w[0]);  goto L_0053B0B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B0B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 222u, depth + 1u); else { c.pc = 0x0052F240u; return; } if (c.pc != 0x0053B0B4u) [[unlikely]] return; }
L_0053B0B4:
    st32((c.r[20].w[0] + 1756u), c.r[2].w[0]);
    c.budget -= 1;
L_0053B0B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0053B0C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053B150; } }
L_0053B0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B0D0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 210u, depth + 1u); else { c.pc = 0x0052F010u; return; } if (c.pc != 0x0053B0D0u) [[unlikely]] return; }
L_0053B0D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));  goto L_0053B0E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B150; } }
L_0053B0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B0E8u); set32(c.r[5], c.r[20].w[0] + 1760u);  if (depth < kMaxDepth) unit_010B(c, 207u, depth + 1u); else { c.pc = 0x0052EFB0u; return; } if (c.pc != 0x0053B0E8u) [[unlikely]] return; }
L_0053B0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B0F0u); set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));  if (depth < kMaxDepth) unit_0104(c, 329u, depth + 1u); else { c.pc = 0x005136F0u; return; } if (c.pc != 0x0053B0F0u) [[unlikely]] return; }
L_0053B0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B0F8u);  if (depth < kMaxDepth) unit_0109(c, 222u, depth + 1u); else { c.pc = 0x00527920u; return; } if (c.pc != 0x0053B0F8u) [[unlikely]] return; }
L_0053B0F8:
    set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B10Cu); set32(c.r[7], c.r[20].w[0] + 2016u);  if (depth < kMaxDepth) unit_010B(c, 196u, depth + 1u); else { c.pc = 0x0052EB90u; return; } if (c.pc != 0x0053B10Cu) [[unlikely]] return; }
L_0053B10C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B114u);  if (depth < kMaxDepth) unit_0104(c, 210u, depth + 1u); else { c.pc = 0x005126B0u; return; } if (c.pc != 0x0053B114u) [[unlikely]] return; }
L_0053B114:
    set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B128u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 196u, depth + 1u); else { c.pc = 0x0052EB90u; return; } if (c.pc != 0x0053B128u) [[unlikely]] return; }
L_0053B128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B130u);  if (depth < kMaxDepth) unit_0109(c, 242u, depth + 1u); else { c.pc = 0x00527D00u; return; } if (c.pc != 0x0053B130u) [[unlikely]] return; }
L_0053B130:
    set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B144u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 196u, depth + 1u); else { c.pc = 0x0052EB90u; return; } if (c.pc != 0x0053B144u) [[unlikely]] return; }
L_0053B144:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0053B150:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0053B164; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0053B284; } }
L_0053B160:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0053B164:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));  goto L_0053B228; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));  goto L_0053B1D8; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 1756u)));  goto L_0053B188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053B274; } }
L_0053B188:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B194u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_010B(c, 181u, depth + 1u); else { c.pc = 0x0052E700u; return; } if (c.pc != 0x0053B194u) [[unlikely]] return; }
L_0053B194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053B1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B280; } }
L_0053B1A4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0053B1C0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B1C0u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 311u, depth + 1u); else { c.pc = 0x00537FB0u; return; } if (c.pc != 0x0053B1C0u) [[unlikely]] return; }
L_0053B1C0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053B280; }
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0053B27C; } }
L_0053B1D8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B1E4u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_010B(c, 185u, depth + 1u); else { c.pc = 0x0052E7E0u; return; } if (c.pc != 0x0053B1E4u) [[unlikely]] return; }
L_0053B1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053B1F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B280; } }
L_0053B1F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0053B210; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B210u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 311u, depth + 1u); else { c.pc = 0x00537FB0u; return; } if (c.pc != 0x0053B210u) [[unlikely]] return; }
L_0053B210:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053B27C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0053B27C; } }
L_0053B228:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B234u); set32(c.r[6], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_010B(c, 183u, depth + 1u); else { c.pc = 0x0052E770u; return; } if (c.pc != 0x0053B234u) [[unlikely]] return; }
L_0053B234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053B244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B280; } }
L_0053B244:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0053B25C; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B25Cu); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 311u, depth + 1u); else { c.pc = 0x00537FB0u; return; } if (c.pc != 0x0053B25Cu) [[unlikely]] return; }
L_0053B25C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0053B27C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0053B27C; } }
L_0053B274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B280; } }
L_0053B27C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053B280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0053B284:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0053B2B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0053B2DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053B42C; } }
L_0053B2DC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 13u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 2u);  goto L_0053B3CC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 640u);
    set32(c.r[6], c.r[6].w[0] - 21008u);
    set32(c.r[7], 0u + 3648u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B30Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0053B30Cu) [[unlikely]] return; }
L_0053B30C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 1756u), c.r[2].w[0]);  goto L_0053B320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B31Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 222u, depth + 1u); else { c.pc = 0x0052F240u; return; } if (c.pc != 0x0053B31Cu) [[unlikely]] return; }
L_0053B31C:
    st32((c.r[18].w[0] + 1756u), c.r[2].w[0]);
    c.budget -= 1;
L_0053B320:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0053B330; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0053B3B8; } }
L_0053B330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B338u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 210u, depth + 1u); else { c.pc = 0x0052F010u; return; } if (c.pc != 0x0053B338u) [[unlikely]] return; }
L_0053B338:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 1756u)));  goto L_0053B348; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B3B8; } }
L_0053B348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B350u); set32(c.r[5], c.r[18].w[0] + 1760u);  if (depth < kMaxDepth) unit_010B(c, 207u, depth + 1u); else { c.pc = 0x0052EFB0u; return; } if (c.pc != 0x0053B350u) [[unlikely]] return; }
L_0053B350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B358u); set32(c.r[4], ld32((c.r[18].w[0] + 1756u)));  if (depth < kMaxDepth) unit_0104(c, 329u, depth + 1u); else { c.pc = 0x005136F0u; return; } if (c.pc != 0x0053B358u) [[unlikely]] return; }
L_0053B358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B360u);  if (depth < kMaxDepth) unit_0109(c, 222u, depth + 1u); else { c.pc = 0x00527920u; return; } if (c.pc != 0x0053B360u) [[unlikely]] return; }
L_0053B360:
    set32(c.r[4], ld32((c.r[18].w[0] + 1756u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B374u); set32(c.r[7], c.r[18].w[0] + 2016u);  if (depth < kMaxDepth) unit_010B(c, 196u, depth + 1u); else { c.pc = 0x0052EB90u; return; } if (c.pc != 0x0053B374u) [[unlikely]] return; }
L_0053B374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B37Cu);  if (depth < kMaxDepth) unit_0104(c, 210u, depth + 1u); else { c.pc = 0x005126B0u; return; } if (c.pc != 0x0053B37Cu) [[unlikely]] return; }
L_0053B37C:
    set32(c.r[4], ld32((c.r[18].w[0] + 1756u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B390u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 196u, depth + 1u); else { c.pc = 0x0052EB90u; return; } if (c.pc != 0x0053B390u) [[unlikely]] return; }
L_0053B390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B398u);  if (depth < kMaxDepth) unit_0109(c, 242u, depth + 1u); else { c.pc = 0x00527D00u; return; } if (c.pc != 0x0053B398u) [[unlikely]] return; }
L_0053B398:
    set32(c.r[4], ld32((c.r[18].w[0] + 1756u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B3ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 196u, depth + 1u); else { c.pc = 0x0052EB90u; return; } if (c.pc != 0x0053B3ACu) [[unlikely]] return; }
L_0053B3AC:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0053B3B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053B3C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0053B430; } }
L_0053B3C8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0053B3CC:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 1756u)));  goto L_0053B410; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 1756u)));  goto L_0053B400; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 1756u)));  goto L_0053B3F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053B420; } }
L_0053B3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B3F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 187u, depth + 1u); else { c.pc = 0x0052E850u; return; } if (c.pc != 0x0053B3F8u) [[unlikely]] return; }
L_0053B3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0053B42C; } }
L_0053B400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B408u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 191u, depth + 1u); else { c.pc = 0x0052E910u; return; } if (c.pc != 0x0053B408u) [[unlikely]] return; }
L_0053B408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B428; } }
L_0053B410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B418u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 189u, depth + 1u); else { c.pc = 0x0052E8B0u; return; } if (c.pc != 0x0053B418u) [[unlikely]] return; }
L_0053B418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B428; } }
L_0053B420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B42C; } }
L_0053B428:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053B42C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0053B430:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0053B450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0053B470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0053B830; } }
L_0053B470:
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 2368u), c.r[5].w[0]);  if (t) { goto L_0053B824; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20912u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00538000u < 16384u) { entry = entries_010E[(t - 0x00538000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0053B498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0053B830; } }
L_0053B4A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1256u), c.r[2].w[0]);  if (t) { goto L_0053B824; } }
L_0053B4AC:
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 1256u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B4CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B4CCu) [[unlikely]] return; }
L_0053B4CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B4E8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B4E8u) [[unlikely]] return; }
L_0053B4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0053B828; } }
L_0053B4F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1256u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B514u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B514u) [[unlikely]] return; }
L_0053B514:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B530u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B530u) [[unlikely]] return; }
L_0053B530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B54Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B54Cu) [[unlikely]] return; }
L_0053B54C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B56Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B56Cu) [[unlikely]] return; }
L_0053B56C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B824; } }
L_0053B574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], 0u + 5u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1256u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B598u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B598u) [[unlikely]] return; }
L_0053B598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B5B4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B5B4u) [[unlikely]] return; }
L_0053B5B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B5D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B5D0u) [[unlikely]] return; }
L_0053B5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B5ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B5ECu) [[unlikely]] return; }
L_0053B5EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B60Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B60Cu) [[unlikely]] return; }
L_0053B60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B824; } }
L_0053B614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], 0u + 6u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1256u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B638u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B638u) [[unlikely]] return; }
L_0053B638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B654u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B654u) [[unlikely]] return; }
L_0053B654:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B670u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B670u) [[unlikely]] return; }
L_0053B670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B68Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B68Cu) [[unlikely]] return; }
L_0053B68C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B6ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B6ACu) [[unlikely]] return; }
L_0053B6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B824; } }
L_0053B6B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], 0u + 8u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1256u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B6D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B6D8u) [[unlikely]] return; }
L_0053B6D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B6F4u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B6F4u) [[unlikely]] return; }
L_0053B6F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B710u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B710u) [[unlikely]] return; }
L_0053B710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B72Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B72Cu) [[unlikely]] return; }
L_0053B72C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B74Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B74Cu) [[unlikely]] return; }
L_0053B74C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 6u);
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B768u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B768u) [[unlikely]] return; }
L_0053B768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 7u);
    c.f[13] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B784u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B784u) [[unlikely]] return; }
L_0053B784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B824; } }
L_0053B78C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[3], 0u + 2u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[16].w[0] + 1256u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B7B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B7B0u) [[unlikely]] return; }
L_0053B7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B7CCu); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B7CCu) [[unlikely]] return; }
L_0053B7CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B7E8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B7E8u) [[unlikely]] return; }
L_0053B7E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 4u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B804u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B804u) [[unlikely]] return; }
L_0053B804:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[3].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B824u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010E(c, 197u, depth + 1u); else { c.pc = 0x00539E50u; return; } if (c.pc != 0x0053B824u) [[unlikely]] return; }
L_0053B824:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0053B828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B830u);  if (depth < kMaxDepth) unit_010F(c, 46u, depth + 1u); else { c.pc = 0x0053C5C0u; return; } if (c.pc != 0x0053B830u) [[unlikely]] return; }
L_0053B830:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0053B840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0053B864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053B8A8; } }
L_0053B864:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0053B8A8; }
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_0053B888; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053B8A8; } }
L_0053B888:
    set32(c.r[5], c.r[4].w[0] + 2028u);
    set32(c.r[16], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053B89Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0053B89Cu) [[unlikely]] return; }
L_0053B89C:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 3;
L_0053B8A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0053B8C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0053B8E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053BE3C; } }
L_0053B8E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[16].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0053B904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053BE3C; } }
L_0053B904:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_0053BE3C; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_0053B928; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053B928:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_0053BE3C; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0053B94C; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053B94C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_0053BE3C; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 36u));  goto L_0053B970; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053B970:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[2].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 41;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] >> 23;
    c.r[5].d[0] = c.r[5].d[0] >> 31;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] >> 41;
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (t) { goto L_0053B9CC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 255u);  goto L_0053B9D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BA34; } }
L_0053B9CC:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0053B9D0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 255u);  goto L_0053B9F8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0053B9F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0053B9F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BA34; } }
L_0053B9F4:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0053B9F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0053BA18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0053BA18; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0053BA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BA34; } }
L_0053BA18:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053BA34; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053BA30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BA34; } }
L_0053BA30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053BA34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 40u));  goto L_0053BA44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053BA44:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[2].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 41;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] >> 23;
    c.r[5].d[0] = c.r[5].d[0] >> 31;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] >> 41;
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (t) { goto L_0053BAA0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 255u);  goto L_0053BAA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BB08; } }
L_0053BAA0:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0053BAA4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 255u);  goto L_0053BACC; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0053BAC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0053BAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BB08; } }
L_0053BAC8:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0053BACC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0053BAEC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0053BAEC; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0053BAEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BB08; } }
L_0053BAEC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053BB08; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053BB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BB08; } }
L_0053BB04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053BB08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 44u));  goto L_0053BB18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053BB18:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[2].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 41;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] >> 23;
    c.r[5].d[0] = c.r[5].d[0] >> 31;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] >> 41;
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (t) { goto L_0053BB74; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 255u);  goto L_0053BB78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BBDC; } }
L_0053BB74:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0053BB78:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 255u);  goto L_0053BBA0; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0053BB9C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0053BB9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BBDC; } }
L_0053BB9C:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0053BBA0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0053BBC0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0053BBC0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0053BBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BBDC; } }
L_0053BBC0:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053BBDC; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053BBD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BBDC; } }
L_0053BBD8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053BBDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[16].w[0] + 48u));  goto L_0053BBEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053BBEC:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[5].d[0] = c.r[2].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    set32(c.r[2], 0u + 255u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 41;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] >> 23;
    c.r[5].d[0] = c.r[5].d[0] >> 31;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] >> 41;
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (t) { goto L_0053BC48; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 255u);  goto L_0053BC4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BCB0; } }
L_0053BC48:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0053BC4C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 255u);  goto L_0053BC74; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0053BC70; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0053BC70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BCB0; } }
L_0053BC70:
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_0053BC74:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0053BC94; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0053BC94; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0053BC94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BCB0; } }
L_0053BC94:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053BCB0; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0053BCAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 35u);  if (t) { goto L_0053BCB0; } }
L_0053BCAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053BCB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[16].w[0] + 36u));  goto L_0053BCC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053BCC0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 37u);  goto L_0053BE3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[16].w[0] + 40u));  goto L_0053BCF8; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053BCF8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 37u);  goto L_0053BE3C; }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);  goto L_0053BD1C; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053BD1C:
    c.r[2].d[0] = c.r[2].d[0] | 46871ull;
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  goto L_0053BD44; }
    c.f[0] = ld32((c.r[17].w[0] + 2072u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.f[0]);  if (t) { goto L_0053BD80; } }
L_0053BD44:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 37u);  goto L_0053BE3C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46AC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17408ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[16].w[0] + 48u));  goto L_0053BD84; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053BD80:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.budget -= 1;
L_0053BD84:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  goto L_0053BDA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053BE3C; } }
L_0053BDA0:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_0053BE3C; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_0053BDC4; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053BDC4:
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0053BE3C; }
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  goto L_0053BDE4; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BE3C; } }
L_0053BDE4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 56u)));  goto L_0053BE0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053BDF4u);  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x0053BDF4u) [[unlikely]] return; }
L_0053BDF4:
    c.r[2].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0053BE08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0053BE3C; } }
L_0053BE08:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_0053BE0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 2084u)));  goto L_0053BE24; }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(30001ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0])));  goto L_0053BE2C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 2084u)));
    c.budget -= 1;
L_0053BE24:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_0053BE2C:
    set32(c.r[4], c.r[17].w[0] + 2028u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053BE38u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0053BE38u) [[unlikely]] return; }
L_0053BE38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0053BE3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0053BE50:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0053BE60; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 1272u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0053BE60:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053BE80; }
    set32(c.r[3], ld32((c.r[4].w[0] + 1276u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 1272u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_0053BE80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0053BE90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0053BF30; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 1232u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 92u)));  goto L_0053BF24; }
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 1232u)));  goto L_0053BEFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053BEE8u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0108(c, 184u, depth + 1u); else { c.pc = 0x005237F0u; return; } if (c.pc != 0x0053BEE8u) [[unlikely]] return; }
L_0053BEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053BEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0053BF98; } }
L_0053BEF8:
    set32(c.r[2], ld32((c.r[19].w[0] + 1232u)));
    c.budget -= 1;
L_0053BEFC:
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0053BF20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053BF10u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0108(c, 184u, depth + 1u); else { c.pc = 0x005237F0u; return; } if (c.pc != 0x0053BF10u) [[unlikely]] return; }
L_0053BF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0053BF20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BF94; } }
L_0053BF20:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_0053BF24:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0053BF64; } }
L_0053BF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0053BF38u); set32(c.r[5], ld32((c.r[19].w[0] + 1236u)));  if (depth < kMaxDepth) unit_010E(c, 370u, depth + 1u); else { c.pc = 0x0053BFB0u; return; } if (c.pc != 0x0053BF38u) [[unlikely]] return; }
L_0053BF38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 1232u)));  goto L_0053BF48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0053BF94; } }
L_0053BF48:
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 1232u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 1232u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 7;
L_0053BF64:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0053BF74; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0053BF74:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0053BF84; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0053BF84:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0053BF94; }
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0053BF94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0053BF98:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0053BFB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 52u), c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0053BFD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { [[clang::musttail]] return unit_010F(c, 20u, depth); } }
L_0053BFD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 1232u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 13u));  [[clang::musttail]] return unit_010F(c, 3u, depth); }
    set32(c.r[2], ld32((c.r[17].w[0] + 1236u)));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_0053BFF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_010F(c, 20u, depth); } }
L_0053BFF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_010F(c, 1u, depth);
}

}
