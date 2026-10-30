#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B4[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0,
    7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    38, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76,
    0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 168,
    0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0,
    0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
};

void unit_00B4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003D0000;
    case 2u: goto L_003D0004;
    case 3u: goto L_003D0048;
    case 4u: goto L_003D0054;
    case 5u: goto L_003D0060;
    case 6u: goto L_003D006C;
    case 7u: goto L_003D0080;
    case 8u: goto L_003D0088;
    case 9u: goto L_003D00D0;
    case 10u: goto L_003D00E4;
    case 11u: goto L_003D0100;
    case 12u: goto L_003D0160;
    case 13u: goto L_003D01A0;
    case 14u: goto L_003D01B8;
    case 15u: goto L_003D01D0;
    case 16u: goto L_003D01E4;
    case 17u: goto L_003D0200;
    case 18u: goto L_003D0228;
    case 19u: goto L_003D0230;
    case 20u: goto L_003D0238;
    case 21u: goto L_003D0244;
    case 22u: goto L_003D0250;
    case 23u: goto L_003D0290;
    case 24u: goto L_003D02A4;
    case 25u: goto L_003D02B8;
    case 26u: goto L_003D02D0;
    case 27u: goto L_003D0304;
    case 28u: goto L_003D0310;
    case 29u: goto L_003D031C;
    case 30u: goto L_003D0328;
    case 31u: goto L_003D0340;
    case 32u: goto L_003D0370;
    case 33u: goto L_003D0384;
    case 34u: goto L_003D0398;
    case 35u: goto L_003D03B0;
    case 36u: goto L_003D03D0;
    case 37u: goto L_003D03F8;
    case 38u: goto L_003D0400;
    case 39u: goto L_003D0408;
    case 40u: goto L_003D0414;
    case 41u: goto L_003D0420;
    case 42u: goto L_003D0460;
    case 43u: goto L_003D0474;
    case 44u: goto L_003D0488;
    case 45u: goto L_003D04A0;
    case 46u: goto L_003D04D4;
    case 47u: goto L_003D04E0;
    case 48u: goto L_003D04EC;
    case 49u: goto L_003D04F8;
    case 50u: goto L_003D0510;
    case 51u: goto L_003D0538;
    case 52u: goto L_003D0540;
    case 53u: goto L_003D0548;
    case 54u: goto L_003D0554;
    case 55u: goto L_003D0560;
    case 56u: goto L_003D05A4;
    case 57u: goto L_003D05B8;
    case 58u: goto L_003D05CC;
    case 59u: goto L_003D05E4;
    case 60u: goto L_003D0618;
    case 61u: goto L_003D0624;
    case 62u: goto L_003D0630;
    case 63u: goto L_003D063C;
    case 64u: goto L_003D0660;
    case 65u: goto L_003D0688;
    case 66u: goto L_003D0690;
    case 67u: goto L_003D0698;
    case 68u: goto L_003D06A4;
    case 69u: goto L_003D06B0;
    case 70u: goto L_003D06F0;
    case 71u: goto L_003D0704;
    case 72u: goto L_003D0718;
    case 73u: goto L_003D0730;
    case 74u: goto L_003D0764;
    case 75u: goto L_003D0770;
    case 76u: goto L_003D077C;
    case 77u: goto L_003D0788;
    case 78u: goto L_003D07A0;
    case 79u: goto L_003D07D4;
    case 80u: goto L_003D07F0;
    case 81u: goto L_003D0800;
    case 82u: goto L_003D0814;
    case 83u: goto L_003D0838;
    case 84u: goto L_003D0850;
    case 85u: goto L_003D0870;
    case 86u: goto L_003D08A4;
    case 87u: goto L_003D08B0;
    case 88u: goto L_003D08BC;
    case 89u: goto L_003D08CC;
    case 90u: goto L_003D08D8;
    case 91u: goto L_003D08E4;
    case 92u: goto L_003D08F4;
    case 93u: goto L_003D0904;
    case 94u: goto L_003D0920;
    case 95u: goto L_003D0938;
    case 96u: goto L_003D0940;
    case 97u: goto L_003D0950;
    case 98u: goto L_003D0960;
    case 99u: goto L_003D096C;
    case 100u: goto L_003D0990;
    case 101u: goto L_003D09A4;
    case 102u: goto L_003D09C0;
    case 103u: goto L_003D09E0;
    case 104u: goto L_003D09EC;
    case 105u: goto L_003D09FC;
    case 106u: goto L_003D0A08;
    case 107u: goto L_003D0A30;
    case 108u: goto L_003D0A78;
    case 109u: goto L_003D0A90;
    case 110u: goto L_003D0AB0;
    case 111u: goto L_003D0ACC;
    case 112u: goto L_003D0AD8;
    case 113u: goto L_003D0AF0;
    case 114u: goto L_003D0B10;
    case 115u: goto L_003D0B1C;
    case 116u: goto L_003D0B24;
    case 117u: goto L_003D0B30;
    case 118u: goto L_003D0B3C;
    case 119u: goto L_003D0B50;
    case 120u: goto L_003D0B70;
    case 121u: goto L_003D0C04;
    case 122u: goto L_003D0C10;
    case 123u: goto L_003D0C70;
    case 124u: goto L_003D0CA0;
    case 125u: goto L_003D0CB0;
    case 126u: goto L_003D0CD0;
    case 127u: goto L_003D0CE0;
    case 128u: goto L_003D0CF0;
    case 129u: goto L_003D0D2C;
    case 130u: goto L_003D0D3C;
    case 131u: goto L_003D0D44;
    case 132u: goto L_003D0D74;
    case 133u: goto L_003D0D90;
    case 134u: goto L_003D0DA0;
    case 135u: goto L_003D0DA8;
    case 136u: goto L_003D0DD8;
    case 137u: goto L_003D0DE8;
    case 138u: goto L_003D0DF4;
    case 139u: goto L_003D0E0C;
    case 140u: goto L_003D0E30;
    case 141u: goto L_003D0EE0;
    case 142u: goto L_003D0EF0;
    case 143u: goto L_003D0F20;
    case 144u: goto L_003D0F3C;
    case 145u: goto L_003D0F60;
    case 146u: goto L_003D1018;
    case 147u: goto L_003D103C;
    case 148u: goto L_003D1044;
    case 149u: goto L_003D105C;
    case 150u: goto L_003D1078;
    case 151u: goto L_003D10C0;
    case 152u: goto L_003D10DC;
    case 153u: goto L_003D1100;
    case 154u: goto L_003D11B8;
    case 155u: goto L_003D11DC;
    case 156u: goto L_003D11E4;
    case 157u: goto L_003D11FC;
    case 158u: goto L_003D1218;
    case 159u: goto L_003D1260;
    case 160u: goto L_003D1290;
    case 161u: goto L_003D1308;
    case 162u: goto L_003D1318;
    case 163u: goto L_003D1544;
    case 164u: goto L_003D15D8;
    case 165u: goto L_003D15E0;
    case 166u: goto L_003D15E8;
    case 167u: goto L_003D15F4;
    case 168u: goto L_003D15FC;
    case 169u: goto L_003D1608;
    case 170u: goto L_003D1614;
    case 171u: goto L_003D1628;
    case 172u: goto L_003D1668;
    case 173u: goto L_003D1670;
    case 174u: goto L_003D16E8;
    case 175u: goto L_003D1708;
    case 176u: goto L_003D1714;
    case 177u: goto L_003D17B4;
    case 178u: goto L_003D17BC;
    case 179u: goto L_003D17C8;
    case 180u: goto L_003D17D4;
    case 181u: goto L_003D17DC;
    case 182u: goto L_003D17E4;
    case 183u: goto L_003D17F0;
    case 184u: goto L_003D1804;
    case 185u: goto L_003D1838;
    case 186u: goto L_003D1840;
    case 187u: goto L_003D18A4;
    case 188u: goto L_003D18E4;
    case 189u: goto L_003D192C;
    case 190u: goto L_003D1938;
    case 191u: goto L_003D1944;
    case 192u: goto L_003D1950;
    case 193u: goto L_003D1980;
    case 194u: goto L_003D1A90;
    case 195u: goto L_003D1AB0;
    case 196u: goto L_003D1B10;
    case 197u: goto L_003D1B2C;
    case 198u: goto L_003D1B68;
    case 199u: goto L_003D1B84;
    case 200u: goto L_003D1BB0;
    case 201u: goto L_003D1BC0;
    case 202u: goto L_003D1C30;
    case 203u: goto L_003D1C50;
    case 204u: goto L_003D1C60;
    case 205u: goto L_003D1C70;
    case 206u: goto L_003D1C8C;
    case 207u: goto L_003D1CAC;
    case 208u: goto L_003D1CB8;
    case 209u: goto L_003D1CE0;
    case 210u: goto L_003D1D08;
    case 211u: goto L_003D1D50;
    case 212u: goto L_003D1D7C;
    case 213u: goto L_003D1D9C;
    case 214u: goto L_003D1DA8;
    case 215u: goto L_003D1DE0;
    case 216u: goto L_003D1E74;
    case 217u: goto L_003D1E7C;
    case 218u: goto L_003D1EA8;
    case 219u: goto L_003D1EEC;
    case 220u: goto L_003D1F04;
    case 221u: goto L_003D1F18;
    case 222u: goto L_003D1F28;
    case 223u: goto L_003D1F64;
    case 224u: goto L_003D1F78;
    case 225u: goto L_003D1F84;
    case 226u: goto L_003D1F94;
    case 227u: goto L_003D1FBC;
    case 228u: goto L_003D1FD8;
    case 229u: goto L_003D1FEC;
    case 230u: goto L_003D2028;
    case 231u: goto L_003D2070;
    case 232u: goto L_003D207C;
    case 233u: goto L_003D20A0;
    case 234u: goto L_003D2130;
    case 235u: goto L_003D2150;
    case 236u: goto L_003D22A0;
    case 237u: goto L_003D22C4;
    case 238u: goto L_003D22D0;
    case 239u: goto L_003D2350;
    case 240u: goto L_003D237C;
    case 241u: goto L_003D238C;
    case 242u: goto L_003D239C;
    case 243u: goto L_003D23A8;
    case 244u: goto L_003D23C0;
    case 245u: goto L_003D23E0;
    case 246u: goto L_003D241C;
    case 247u: goto L_003D2450;
    case 248u: goto L_003D2540;
    case 249u: goto L_003D25BC;
    case 250u: goto L_003D25D4;
    case 251u: goto L_003D2634;
    case 252u: goto L_003D264C;
    case 253u: goto L_003D2680;
    case 254u: goto L_003D26FC;
    case 255u: goto L_003D2714;
    case 256u: goto L_003D2774;
    case 257u: goto L_003D278C;
    case 258u: goto L_003D27C0;
    case 259u: goto L_003D290C;
    case 260u: goto L_003D2930;
    case 261u: goto L_003D293C;
    case 262u: goto L_003D29D0;
    case 263u: goto L_003D2AE0;
    case 264u: goto L_003D2B00;
    case 265u: goto L_003D2B14;
    case 266u: goto L_003D2B24;
    case 267u: goto L_003D2B38;
    case 268u: goto L_003D2B50;
    case 269u: goto L_003D2BEC;
    case 270u: goto L_003D2BF8;
    case 271u: goto L_003D2CB0;
    case 272u: goto L_003D2D18;
    case 273u: goto L_003D2D28;
    case 274u: goto L_003D2D4C;
    case 275u: goto L_003D2DB4;
    case 276u: goto L_003D2DC4;
    case 277u: goto L_003D2DD4;
    case 278u: goto L_003D2E10;
    case 279u: goto L_003D2E58;
    case 280u: goto L_003D2E84;
    case 281u: goto L_003D2EC0;
    case 282u: goto L_003D2ECC;
    case 283u: goto L_003D2EEC;
    case 284u: goto L_003D2EF8;
    case 285u: goto L_003D2F30;
    case 286u: goto L_003D2F98;
    case 287u: goto L_003D2FA8;
    case 288u: goto L_003D2FB4;
    case 289u: goto L_003D2FC8;
    case 290u: goto L_003D3008;
    case 291u: goto L_003D3014;
    case 292u: goto L_003D3020;
    case 293u: goto L_003D304C;
    case 294u: goto L_003D3058;
    case 295u: goto L_003D3060;
    case 296u: goto L_003D306C;
    case 297u: goto L_003D30A0;
    case 298u: goto L_003D30C8;
    case 299u: goto L_003D30F0;
    case 300u: goto L_003D310C;
    case 301u: goto L_003D3148;
    case 302u: goto L_003D3198;
    case 303u: goto L_003D31DC;
    case 304u: goto L_003D31E8;
    case 305u: goto L_003D3208;
    case 306u: goto L_003D3214;
    case 307u: goto L_003D3224;
    case 308u: goto L_003D3250;
    case 309u: goto L_003D3280;
    case 310u: goto L_003D32AC;
    case 311u: goto L_003D32C4;
    case 312u: goto L_003D32F0;
    case 313u: goto L_003D3310;
    case 314u: goto L_003D3324;
    case 315u: goto L_003D3340;
    case 316u: goto L_003D3364;
    case 317u: goto L_003D3380;
    case 318u: goto L_003D3394;
    case 319u: goto L_003D33B0;
    case 320u: goto L_003D33D4;
    case 321u: goto L_003D33F0;
    case 322u: goto L_003D342C;
    case 323u: goto L_003D3488;
    case 324u: goto L_003D3498;
    case 325u: goto L_003D34A8;
    case 326u: goto L_003D34B8;
    case 327u: goto L_003D34E0;
    case 328u: goto L_003D3514;
    case 329u: goto L_003D3540;
    case 330u: goto L_003D3564;
    case 331u: goto L_003D3580;
    case 332u: goto L_003D359C;
    case 333u: goto L_003D35B8;
    case 334u: goto L_003D35D0;
    case 335u: goto L_003D35F4;
    case 336u: goto L_003D3604;
    case 337u: goto L_003D360C;
    case 338u: goto L_003D3630;
    case 339u: goto L_003D3654;
    case 340u: goto L_003D3670;
    case 341u: goto L_003D368C;
    case 342u: goto L_003D36A8;
    case 343u: goto L_003D36C0;
    case 344u: goto L_003D3754;
    case 345u: goto L_003D3790;
    case 346u: goto L_003D37BC;
    case 347u: goto L_003D37D4;
    case 348u: goto L_003D37F0;
    case 349u: goto L_003D38A8;
    case 350u: goto L_003D3918;
    case 351u: goto L_003D3950;
    case 352u: goto L_003D3984;
    case 353u: goto L_003D399C;
    case 354u: goto L_003D39B8;
    case 355u: goto L_003D39D0;
    case 356u: goto L_003D39E0;
    case 357u: goto L_003D39EC;
    case 358u: goto L_003D3A10;
    case 359u: goto L_003D3A68;
    case 360u: goto L_003D3AAC;
    case 361u: goto L_003D3AD4;
    case 362u: goto L_003D3B24;
    case 363u: goto L_003D3B4C;
    case 364u: goto L_003D3B54;
    case 365u: goto L_003D3B60;
    case 366u: goto L_003D3B68;
    case 367u: goto L_003D3B70;
    case 368u: goto L_003D3BA0;
    case 369u: goto L_003D3BAC;
    case 370u: goto L_003D3BE4;
    case 371u: goto L_003D3BFC;
    case 372u: goto L_003D3C40;
    case 373u: goto L_003D3C68;
    case 374u: goto L_003D3C80;
    case 375u: goto L_003D3D54;
    case 376u: goto L_003D3D88;
    case 377u: goto L_003D3D98;
    case 378u: goto L_003D3DCC;
    case 379u: goto L_003D3DE0;
    case 380u: goto L_003D3E04;
    case 381u: goto L_003D3E18;
    case 382u: goto L_003D3E2C;
    case 383u: goto L_003D3E44;
    case 384u: goto L_003D3E84;
    case 385u: goto L_003D3EC4;
    case 386u: goto L_003D3F00;
    case 387u: goto L_003D3F14;
    case 388u: goto L_003D3F30;
    case 389u: goto L_003D3F44;
    case 390u: goto L_003D3F60;
    case 391u: goto L_003D3F7C;
    case 392u: goto L_003D3FA4;
    case 393u: goto L_003D3FC0;
    case 394u: goto L_003D3FD0;
    case 395u: goto L_003D3FF0;
    default: bad_entry(c, 0x003D0000u); return;
    }
L_003D0000:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003D0004:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 288u)));  goto L_003D008C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[29].w[0] + 176u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[29].w[0] + 188u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0048u); st32((c.r[29].w[0] + 196u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 12u, depth + 1u); else { c.pc = 0x003D0160u; return; } if (c.pc != 0x003D0048u) [[unlikely]] return; }
L_003D0048:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0054u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00B4(c, 12u, depth + 1u); else { c.pc = 0x003D0160u; return; } if (c.pc != 0x003D0054u) [[unlikely]] return; }
L_003D0054:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0060u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00B4(c, 11u, depth + 1u); else { c.pc = 0x003D0100u; return; } if (c.pc != 0x003D0060u) [[unlikely]] return; }
L_003D0060:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D006Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 12u, depth + 1u); else { c.pc = 0x003D0160u; return; } if (c.pc != 0x003D006Cu) [[unlikely]] return; }
L_003D006C:
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0080u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 160u, depth + 1u); else { c.pc = 0x003D1290u; return; } if (c.pc != 0x003D0080u) [[unlikely]] return; }
L_003D0080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003D00E8; } }
L_003D0088:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 1;
L_003D008C:
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_003D00CC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_003D00B8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 2;
L_003D00B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 5;
L_003D00CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 1;
L_003D00D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CFFDCu | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 487u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D00E4u); set32(c.r[4], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00B4(c, 209u, depth + 1u); else { c.pc = 0x003D1CE0u; return; } if (c.pc != 0x003D00E4u) [[unlikely]] return; }
L_003D00E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003D00E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003D0100:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + 32u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_003D0150; }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_003D013C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_003D013C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_003D0150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D0160:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_003D01A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D01B8u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00B4(c, 215u, depth + 1u); else { c.pc = 0x003D1DE0u; return; } if (c.pc != 0x003D01B8u) [[unlikely]] return; }
L_003D01B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003D01E8; }
    set32(c.r[5], ld32((c.r[28].w[0] - 30420u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D01D0u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x003D01D0u) [[unlikely]] return; }
L_003D01D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D01E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D01E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x003D01E4u) [[unlikely]] return; }
L_003D01E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003D01E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D0200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0228u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0228u) [[unlikely]] return; }
L_003D0228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0230u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0230u) [[unlikely]] return; }
L_003D0230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0238u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0238u) [[unlikely]] return; }
L_003D0238:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0244u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0244u) [[unlikely]] return; }
L_003D0244:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0250u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0250u) [[unlikely]] return; }
L_003D0250:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_003D02C0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D02AC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D0298; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D0284; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_003D02D4; } }
L_003D0284:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0290u); set32(c.r[5], c.r[5].w[0] - 22648u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0290u) [[unlikely]] return; }
L_003D0290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D02D0; } }
L_003D0298:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02A4u); set32(c.r[5], c.r[5].w[0] - 22637u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D02A4u) [[unlikely]] return; }
L_003D02A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D02D0; } }
L_003D02AC:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02B8u); set32(c.r[5], c.r[5].w[0] - 22626u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D02B8u) [[unlikely]] return; }
L_003D02B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D02D0; } }
L_003D02C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D02D0u); set32(c.r[5], c.r[5].w[0] - 22612u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D02D0u) [[unlikely]] return; }
L_003D02D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_003D02D4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 101u);  goto L_003D02E4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003D02E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_003D02F8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_003D02F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0304u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 253u, depth + 1u); else { c.pc = 0x00429960u; return; } if (c.pc != 0x003D0304u) [[unlikely]] return; }
L_003D0304:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D0310u) [[unlikely]] return; }
L_003D0310:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D031Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D031Cu) [[unlikely]] return; }
L_003D031C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0328u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D0328u) [[unlikely]] return; }
L_003D0328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D0340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D03B0; } }
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 16u);  goto L_003D0374; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0370u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D0370u) [[unlikely]] return; }
L_003D0370:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_003D0374:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D0384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D0384u) [[unlikely]] return; }
L_003D0384:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003D039C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0398u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D0398u) [[unlikely]] return; }
L_003D0398:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003D039C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D03B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D03B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D03B0u) [[unlikely]] return; }
L_003D03B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D03B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D03D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D03F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D03F8u) [[unlikely]] return; }
L_003D03F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0400u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0400u) [[unlikely]] return; }
L_003D0400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0408u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0408u) [[unlikely]] return; }
L_003D0408:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0414u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0414u) [[unlikely]] return; }
L_003D0414:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0420u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0420u) [[unlikely]] return; }
L_003D0420:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_003D0490; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D047C; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D0468; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D0454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_003D04A4; } }
L_003D0454:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0460u); set32(c.r[5], c.r[5].w[0] - 22648u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0460u) [[unlikely]] return; }
L_003D0460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D04A0; } }
L_003D0468:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0474u); set32(c.r[5], c.r[5].w[0] - 22637u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0474u) [[unlikely]] return; }
L_003D0474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D04A0; } }
L_003D047C:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0488u); set32(c.r[5], c.r[5].w[0] - 22626u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0488u) [[unlikely]] return; }
L_003D0488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D04A0; } }
L_003D0490:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D04A0u); set32(c.r[5], c.r[5].w[0] - 22612u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D04A0u) [[unlikely]] return; }
L_003D04A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_003D04A4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 101u);  goto L_003D04B4; }
    set32(c.r[6], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003D04B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_003D04C8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_003D04C8:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D04D4u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 253u, depth + 1u); else { c.pc = 0x00429960u; return; } if (c.pc != 0x003D04D4u) [[unlikely]] return; }
L_003D04D4:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D04E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D04E0u) [[unlikely]] return; }
L_003D04E0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D04ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D04ECu) [[unlikely]] return; }
L_003D04EC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D04F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D04F8u) [[unlikely]] return; }
L_003D04F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D0510:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0538u) [[unlikely]] return; }
L_003D0538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0540u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0540u) [[unlikely]] return; }
L_003D0540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0548u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0548u) [[unlikely]] return; }
L_003D0548:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0554u) [[unlikely]] return; }
L_003D0554:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0560u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0560u) [[unlikely]] return; }
L_003D0560:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[16].w[0] + 32u), 0u);  if (t) { goto L_003D05D4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D05C0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D05AC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D0598; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_003D05E8; } }
L_003D0598:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D05A4u); set32(c.r[5], c.r[5].w[0] - 22648u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D05A4u) [[unlikely]] return; }
L_003D05A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D05E4; } }
L_003D05AC:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D05B8u); set32(c.r[5], c.r[5].w[0] - 22637u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D05B8u) [[unlikely]] return; }
L_003D05B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D05E4; } }
L_003D05C0:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D05CCu); set32(c.r[5], c.r[5].w[0] - 22626u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D05CCu) [[unlikely]] return; }
L_003D05CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D05E4; } }
L_003D05D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D05E4u); set32(c.r[5], c.r[5].w[0] - 22612u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D05E4u) [[unlikely]] return; }
L_003D05E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_003D05E8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 101u);  goto L_003D05F8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003D05F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_003D060C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_003D060C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0618u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 253u, depth + 1u); else { c.pc = 0x00429960u; return; } if (c.pc != 0x003D0618u) [[unlikely]] return; }
L_003D0618:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D0624u) [[unlikely]] return; }
L_003D0624:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0630u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D0630u) [[unlikely]] return; }
L_003D0630:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D063Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D063Cu) [[unlikely]] return; }
L_003D063C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D0660:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0688u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0688u) [[unlikely]] return; }
L_003D0688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0690u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0690u) [[unlikely]] return; }
L_003D0690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0698u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003D0698u) [[unlikely]] return; }
L_003D0698:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D06A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D06A4u) [[unlikely]] return; }
L_003D06A4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D06B0u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D06B0u) [[unlikely]] return; }
L_003D06B0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_003D0720; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D070C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D06F8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003D06E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_003D0734; } }
L_003D06E4:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D06F0u); set32(c.r[5], c.r[5].w[0] - 22648u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D06F0u) [[unlikely]] return; }
L_003D06F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0730; } }
L_003D06F8:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0704u); set32(c.r[5], c.r[5].w[0] - 22637u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0704u) [[unlikely]] return; }
L_003D0704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0730; } }
L_003D070C:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0718u); set32(c.r[5], c.r[5].w[0] - 22626u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0718u) [[unlikely]] return; }
L_003D0718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D0730; } }
L_003D0720:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0730u); set32(c.r[5], c.r[5].w[0] - 22612u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D0730u) [[unlikely]] return; }
L_003D0730:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_003D0734:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 101u);  goto L_003D0744; }
    set32(c.r[6], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003D0744:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_003D0758; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_003D0758:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0764u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 253u, depth + 1u); else { c.pc = 0x00429960u; return; } if (c.pc != 0x003D0764u) [[unlikely]] return; }
L_003D0764:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0770u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D0770u) [[unlikely]] return; }
L_003D0770:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D077Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D077Cu) [[unlikely]] return; }
L_003D077C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0788u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D0788u) [[unlikely]] return; }
L_003D0788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D07A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D0850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22016u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D07D4u); set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));  if (depth < kMaxDepth) unit_0010(c, 440u, depth + 1u); else { c.pc = 0x00143460u; return; } if (c.pc != 0x003D07D4u) [[unlikely]] return; }
L_003D07D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 44u);  goto L_003D07F4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D07F0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D07F0u) [[unlikely]] return; }
L_003D07F0:
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_003D07F4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_003D0814; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  goto L_003D0818; }
    goto L_003D0804;
L_003D0800:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_003D0804:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D0814; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0814u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 239u, depth + 1u); else { c.pc = 0x003D2350u; return; } if (c.pc != 0x003D0814u) [[unlikely]] return; }
L_003D0814:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_003D0818:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003D083C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D0838; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D0838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0838u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 128u, depth + 1u); else { c.pc = 0x003D0CF0u; return; } if (c.pc != 0x003D0838u) [[unlikely]] return; }
L_003D0838:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003D083C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D0854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0850u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D0850u) [[unlikely]] return; }
L_003D0850:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D0854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D0870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22016u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + 12u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D08A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 473u, depth + 1u); else { c.pc = 0x003CFE00u; return; } if (c.pc != 0x003D08A4u) [[unlikely]] return; }
L_003D08A4:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D08B0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 472u, depth + 1u); else { c.pc = 0x003CFDF0u; return; } if (c.pc != 0x003D08B0u) [[unlikely]] return; }
L_003D08B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D08BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 445u, depth + 1u); else { c.pc = 0x003CFAA0u; return; } if (c.pc != 0x003D08BCu) [[unlikely]] return; }
L_003D08BC:
    set32(c.r[16], c.r[17].w[0] + 44u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D08CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 473u, depth + 1u); else { c.pc = 0x003CFE00u; return; } if (c.pc != 0x003D08CCu) [[unlikely]] return; }
L_003D08CC:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D08D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 127u, depth + 1u); else { c.pc = 0x003D0CE0u; return; } if (c.pc != 0x003D08D8u) [[unlikely]] return; }
L_003D08D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D08E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 100u, depth + 1u); else { c.pc = 0x003D0990u; return; } if (c.pc != 0x003D08E4u) [[unlikely]] return; }
L_003D08E4:
    st32((c.r[28].w[0] - 26924u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D08F4u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D08F4u) [[unlikely]] return; }
L_003D08F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D0904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0904u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 115u, depth + 1u); else { c.pc = 0x00144B80u; return; } if (c.pc != 0x003D0904u) [[unlikely]] return; }
L_003D0904:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 22602u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0920u); set32(c.r[6], c.r[6].w[0] - 304u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x003D0920u) [[unlikely]] return; }
L_003D0920:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[5].w[0] - 22585u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0938u); set32(c.r[6], c.r[6].w[0] - 400u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x003D0938u) [[unlikely]] return; }
L_003D0938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0940u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0011(c, 85u, depth + 1u); else { c.pc = 0x001447C0u; return; } if (c.pc != 0x003D0940u) [[unlikely]] return; }
L_003D0940:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0950u); set32(c.r[5], c.r[5].w[0] - 22563u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003D0950u) [[unlikely]] return; }
L_003D0950:
    set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0960u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 445u, depth + 1u); else { c.pc = 0x00143520u; return; } if (c.pc != 0x003D0960u) [[unlikely]] return; }
L_003D0960:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D096Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D096Cu) [[unlikely]] return; }
L_003D096C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D0990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D09A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 102u, depth + 1u); else { c.pc = 0x003D09C0u; return; } if (c.pc != 0x003D09A4u) [[unlikely]] return; }
L_003D09A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003D09C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D09E0u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00B4(c, 126u, depth + 1u); else { c.pc = 0x003D0CD0u; return; } if (c.pc != 0x003D09E0u) [[unlikely]] return; }
L_003D09E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D09ECu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B4(c, 125u, depth + 1u); else { c.pc = 0x003D0CB0u; return; } if (c.pc != 0x003D09ECu) [[unlikely]] return; }
L_003D09EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D09FCu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B4(c, 110u, depth + 1u); else { c.pc = 0x003D0AB0u; return; } if (c.pc != 0x003D09FCu) [[unlikely]] return; }
L_003D09FC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0A08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B4(c, 107u, depth + 1u); else { c.pc = 0x003D0A30u; return; } if (c.pc != 0x003D0A08u) [[unlikely]] return; }
L_003D0A08:
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D0A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D0A90; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003D0A7C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003D0A78; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D0A78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D0A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0A78u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D0A78u) [[unlikely]] return; }
L_003D0A78:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003D0A7C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D0A94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0A90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D0A90u) [[unlikely]] return; }
L_003D0A90:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D0A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D0AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0ACCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 124u, depth + 1u); else { c.pc = 0x003D0CA0u; return; } if (c.pc != 0x003D0ACCu) [[unlikely]] return; }
L_003D0ACC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0AD8u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B4(c, 113u, depth + 1u); else { c.pc = 0x003D0AF0u; return; } if (c.pc != 0x003D0AD8u) [[unlikely]] return; }
L_003D0AD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D0AF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 485u, depth + 1u); else { c.pc = 0x00123BF0u; return; } if (c.pc != 0x003D0B10u) [[unlikely]] return; }
L_003D0B10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 484u, depth + 1u); else { c.pc = 0x00123BD0u; return; } if (c.pc != 0x003D0B1Cu) [[unlikely]] return; }
L_003D0B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B24u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x003D0B24u) [[unlikely]] return; }
L_003D0B24:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 123u, depth + 1u); else { c.pc = 0x003D0C70u; return; } if (c.pc != 0x003D0B30u) [[unlikely]] return; }
L_003D0B30:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B3Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B4(c, 122u, depth + 1u); else { c.pc = 0x003D0C10u; return; } if (c.pc != 0x003D0B3Cu) [[unlikely]] return; }
L_003D0B3C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0B50u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B4(c, 120u, depth + 1u); else { c.pc = 0x003D0B70u; return; } if (c.pc != 0x003D0B50u) [[unlikely]] return; }
L_003D0B50:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D0B70:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 112u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[29].w[0] + 120u), c.f[2]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 124u), c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[29].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[29].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0C04u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 151u, depth + 1u); else { c.pc = 0x003D10C0u; return; } if (c.pc != 0x003D0C04u) [[unlikely]] return; }
L_003D0C04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003D0C10:
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_003D0C30; }
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
L_003D0C30:
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[8], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    st32((c.r[4].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_003D0C70:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  c.pc = t; return; }
L_003D0CA0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003D0CB0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_003D0CD0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003D0CE0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003D0CF0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D0E0C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0D2Cu); set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 159u, depth + 1u); else { c.pc = 0x003D1260u; return; } if (c.pc != 0x003D0D2Cu) [[unlikely]] return; }
L_003D0D2C:
    set32(c.r[6], c.r[16].w[0] >> 4);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0D3Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00B4(c, 140u, depth + 1u); else { c.pc = 0x003D0E30u; return; } if (c.pc != 0x003D0D3Cu) [[unlikely]] return; }
L_003D0D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0D44u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00B4(c, 141u, depth + 1u); else { c.pc = 0x003D0EE0u; return; } if (c.pc != 0x003D0D44u) [[unlikely]] return; }
L_003D0D44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  goto L_003D0D54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D0D58; } }
L_003D0D54:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_003D0D58:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0D74u); set32(c.r[7], c.r[3].w[0] + 512u);  if (depth < kMaxDepth) unit_00B4(c, 142u, depth + 1u); else { c.pc = 0x003D0EF0u; return; } if (c.pc != 0x003D0D74u) [[unlikely]] return; }
L_003D0D74:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[16], c.r[29].w[0] + 144u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0D90u); set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B4(c, 159u, depth + 1u); else { c.pc = 0x003D1260u; return; } if (c.pc != 0x003D0D90u) [[unlikely]] return; }
L_003D0D90:
    set32(c.r[6], c.r[19].w[0] >> 4);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0DA0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B4(c, 140u, depth + 1u); else { c.pc = 0x003D0E30u; return; } if (c.pc != 0x003D0DA0u) [[unlikely]] return; }
L_003D0DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0DA8u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00B4(c, 141u, depth + 1u); else { c.pc = 0x003D0EE0u; return; } if (c.pc != 0x003D0DA8u) [[unlikely]] return; }
L_003D0DA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  goto L_003D0DB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D0DBC; } }
L_003D0DB8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_003D0DBC:
    c.r[2].d[0] = c.r[19].d[0] & 15ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0DD8u); set32(c.r[7], c.r[3].w[0] + 512u);  if (depth < kMaxDepth) unit_00B4(c, 142u, depth + 1u); else { c.pc = 0x003D0EF0u; return; } if (c.pc != 0x003D0DD8u) [[unlikely]] return; }
L_003D0DD8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0DE8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00B4(c, 235u, depth + 1u); else { c.pc = 0x003D2150u; return; } if (c.pc != 0x003D0DE8u) [[unlikely]] return; }
L_003D0DE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0DF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 248u, depth + 1u); else { c.pc = 0x003D2540u; return; } if (c.pc != 0x003D0DF4u) [[unlikely]] return; }
L_003D0DF4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003D0E10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D0E0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D0E0Cu) [[unlikely]] return; }
L_003D0E0C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003D0E10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003D0E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[8], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003D0E68; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D0E68:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[3].w[0] - c.r[8].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));  if (t) { goto L_003D0E80; } }
    set32(c.r[3], c.r[5].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D0E80:
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { c.r[3].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;  goto L_003D0E94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);  if (t) { goto L_003D0EA0; } }
L_003D0E94:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 4u)));  goto L_003D0EA4; }
    set32(c.r[5], c.r[5].w[0] - c.r[7].w[0]);
    c.budget -= 1;
L_003D0EA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003D0EA4:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D0EE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003D0EF0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[7].w[0]);  c.pc = t; return; }
L_003D0F20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 5u);
    c.budget -= 7;
L_003D0F3C:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0F3Cu | kUnwind; return; } goto L_003D0F3C; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 2;
L_003D0F60:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D0F60u | kUnwind; return; } goto L_003D0F60; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003D0FA4; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D0FA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 80u)));  goto L_003D0FE0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[16].w[0]);  goto L_003D1008; }
    set32(c.r[4], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003D0FD8; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D0FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (t) { goto L_003D1004; } }
L_003D0FE0:
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D1004; } }
    set32(c.r[4], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003D1000; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D1000:
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003D1004:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_003D1008:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003D10A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1018u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 125u, depth + 1u); else { c.pc = 0x001252F0u; return; } if (c.pc != 0x003D1018u) [[unlikely]] return; }
L_003D1018:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_003D1048; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D103Cu); set32(c.r[5], c.r[5].w[0] - 22558u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003D103Cu) [[unlikely]] return; }
L_003D103C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1044u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003D1044u) [[unlikely]] return; }
L_003D1044:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003D1048:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D105Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003D105Cu) [[unlikely]] return; }
L_003D105C:
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003D108C; } }
L_003D1078:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[5].d[0]; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_003D1088; } }
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003D1088:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 1;
L_003D108C:
    c.r[3].d[0] = c.r[7].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1078u | kUnwind; return; } goto L_003D1078; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003D10A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003D10C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 5u);
    c.budget -= 7;
L_003D10DC:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D10DCu | kUnwind; return; } goto L_003D10DC; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 2;
L_003D1100:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1100u | kUnwind; return; } goto L_003D1100; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003D1144; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D1144:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 80u)));  goto L_003D1180; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[16].w[0]);  goto L_003D11A8; }
    set32(c.r[4], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003D1178; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D1178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (t) { goto L_003D11A4; } }
L_003D1180:
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D11A4; } }
    set32(c.r[4], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003D11A0; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D11A0:
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003D11A4:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_003D11A8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003D1244; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D11B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 125u, depth + 1u); else { c.pc = 0x001252F0u; return; } if (c.pc != 0x003D11B8u) [[unlikely]] return; }
L_003D11B8:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_003D11E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D11DCu); set32(c.r[5], c.r[5].w[0] - 22558u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003D11DCu) [[unlikely]] return; }
L_003D11DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D11E4u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003D11E4u) [[unlikely]] return; }
L_003D11E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003D11E8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D11FCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003D11FCu) [[unlikely]] return; }
L_003D11FC:
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003D122C; } }
L_003D1218:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[5].d[0]; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_003D1228; } }
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003D1228:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 1;
L_003D122C:
    c.r[3].d[0] = c.r[7].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1218u | kUnwind; return; } goto L_003D1218; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003D1244:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003D1260:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  c.pc = t; return; }
L_003D1290:
    set32(c.r[29], c.r[29].w[0] - 496u);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003D12FC; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[20].w[0]), c.r[5].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[20].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 16u), c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003D1950; } }
L_003D12FC:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1308u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 247u, depth + 1u); else { c.pc = 0x003D2450u; return; } if (c.pc != 0x003D1308u) [[unlikely]] return; }
L_003D1308:
    set32(c.r[6], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1318u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 247u, depth + 1u); else { c.pc = 0x003D2450u; return; } if (c.pc != 0x003D1318u) [[unlikely]] return; }
L_003D1318:
    set32(c.r[13], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[12], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[12].w[0] - c.r[13].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003D1338; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_003D1338:
    c.r[3].d[0] = c.r[12].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[13].d[0] < c.r[4].d[0] ? 1ull : 0ull;  goto L_003D1374; }
    c.r[1].d[0] = c.r[13].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_003D13A0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003D136C; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D136C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_003D139C; } }
L_003D1374:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D139C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003D1398; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D1398:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003D139C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_003D13A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_003D13B8; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_003D13B8:
    set32(c.r[10], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[4], c.r[9].w[0] - c.r[10].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_003D13D4; } }
    set32(c.r[3], c.r[4].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_003D13D4:
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 440u)));
    set32(c.r[3], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003D1400; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_003D1400:
    c.r[3].d[0] = c.r[6].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;  goto L_003D143C; }
    c.r[1].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[14], ld32((c.r[17].w[0] + 20u)));  goto L_003D1468; }
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003D1434; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D1434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_003D1464; } }
L_003D143C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D1464; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 436u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003D1460; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003D1460:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003D1464:
    set32(c.r[14], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003D1468:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 448u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 452u)));
    set32(c.r[14], c.r[14].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[14].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 5));  if (t) { goto L_003D1488; } }
    set32(c.r[3], c.r[14].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_003D1488:
    set32(c.r[15], c.r[2].w[0] << 4);
    set32(c.r[14], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[14].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 5));  if (t) { goto L_003D14A0; } }
    set32(c.r[2], c.r[14].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_003D14A0:
    set32(c.r[2], c.r[15].w[0] - c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[15], c.r[7].w[0] - c.r[12].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[15].sd[0] >= 0; set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 2));  if (t) { goto L_003D14C0; } }
    set32(c.r[14], c.r[15].w[0] + 3u);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 2));
    c.budget -= 2;
L_003D14C0:
    c.r[15].d[0] = c.r[7].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { c.r[15].d[0] = c.r[12].d[0] < c.r[21].d[0] ? 1ull : 0ull;  goto L_003D14FC; }
    c.r[1].d[0] = c.r[12].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[15], c.r[14].w[0] << 4);  goto L_003D1528; }
    set32(c.r[21], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[21], c.r[21].w[0] - c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].sd[0] >= 0; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 2));  if (t) { goto L_003D14F4; } }
    set32(c.r[15], c.r[21].w[0] + 3u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 2));
    c.budget -= 2;
L_003D14F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] - c.r[15].w[0]);  if (t) { goto L_003D1524; } }
L_003D14FC:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_003D1524; } }
    set32(c.r[21], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[15], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[21], c.r[21].w[0] - c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].sd[0] >= 0; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 2));  if (t) { goto L_003D1520; } }
    set32(c.r[15], c.r[21].w[0] + 3u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 2));
    c.budget -= 2;
L_003D1520:
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.budget -= 1;
L_003D1524:
    set32(c.r[15], c.r[14].w[0] << 4);
    c.budget -= 1;
L_003D1528:
    set32(c.r[14], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[3], c.r[15].w[0] - c.r[3].w[0]);
    set32(c.r[21], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[21].d[0] != c.r[14].d[0]) { c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;  goto L_003D154C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1544u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 202u, depth + 1u); else { c.pc = 0x003D1C30u; return; } if (c.pc != 0x003D1544u) [[unlikely]] return; }
L_003D1544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003D1920; } }
L_003D154C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_003D1738; }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[29].w[0] + 320u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    st32((c.r[29].w[0] + 340u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 356u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 472u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    st32((c.r[29].w[0] + 304u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 384u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 388u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 352u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 376u), c.r[3].w[0]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 380u), c.r[2].w[0]);  if (t) { goto L_003D1608; } }
L_003D15D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D15E0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00B4(c, 201u, depth + 1u); else { c.pc = 0x003D1BC0u; return; } if (c.pc != 0x003D15E0u) [[unlikely]] return; }
L_003D15E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D15E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 200u, depth + 1u); else { c.pc = 0x003D1BB0u; return; } if (c.pc != 0x003D15E8u) [[unlikely]] return; }
L_003D15E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D15F4u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_00B4(c, 201u, depth + 1u); else { c.pc = 0x003D1BC0u; return; } if (c.pc != 0x003D15F4u) [[unlikely]] return; }
L_003D15F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D15FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 200u, depth + 1u); else { c.pc = 0x003D1BB0u; return; } if (c.pc != 0x003D15FCu) [[unlikely]] return; }
L_003D15FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1608u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 195u, depth + 1u); else { c.pc = 0x003D1AB0u; return; } if (c.pc != 0x003D1608u) [[unlikely]] return; }
L_003D1608:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1614u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_00B4(c, 194u, depth + 1u); else { c.pc = 0x003D1A90u; return; } if (c.pc != 0x003D1614u) [[unlikely]] return; }
L_003D1614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D15D8u | kUnwind; return; } goto L_003D15D8; } }
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1628u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00B4(c, 12u, depth + 1u); else { c.pc = 0x003D0160u; return; } if (c.pc != 0x003D1628u) [[unlikely]] return; }
L_003D1628:
    set32(c.r[4], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 404u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 408u)));
    st32((c.r[29].w[0] + 432u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 436u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 440u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 416u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 420u)));
    st32((c.r[29].w[0] + 444u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 448u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 452u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_003D16B4; } }
L_003D1668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1670u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B3(c, 107u, depth + 1u); else { c.pc = 0x003CCF80u; return; } if (c.pc != 0x003D1670u) [[unlikely]] return; }
L_003D1670:
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 480u), c.r[3].w[0]);  if (t) { goto L_003D16B4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 464u), c.r[3].w[0]);  if (t) { goto L_003D16A0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    c.budget -= 2;
L_003D16A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[29].w[0] + 484u), c.r[2].w[0]);
    c.budget -= 5;
L_003D16B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1668u | kUnwind; return; } goto L_003D1668; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - c.r[21].w[0]);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D191C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] + 4u);  if (t) { goto L_003D1720; } }
L_003D16E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 4u);  goto L_003D170C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1708u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D1708u) [[unlikely]] return; }
L_003D1708:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_003D170C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1714u);  if (depth < kMaxDepth) unit_0009(c, 154u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x003D1714u) [[unlikely]] return; }
L_003D1714:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 16u);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_003D1720:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D16E8u | kUnwind; return; } goto L_003D16E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D191C; } }
L_003D1738:
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 436u)));
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[29].w[0] + 220u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[29].w[0] + 176u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 248u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 252u), c.r[3].w[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_003D17E4; } }
L_003D17B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D17BCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00B4(c, 200u, depth + 1u); else { c.pc = 0x003D1BB0u; return; } if (c.pc != 0x003D17BCu) [[unlikely]] return; }
L_003D17BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D17C8u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00B4(c, 200u, depth + 1u); else { c.pc = 0x003D1BB0u; return; } if (c.pc != 0x003D17C8u) [[unlikely]] return; }
L_003D17C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D17D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 195u, depth + 1u); else { c.pc = 0x003D1AB0u; return; } if (c.pc != 0x003D17D4u) [[unlikely]] return; }
L_003D17D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D17DCu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00B4(c, 11u, depth + 1u); else { c.pc = 0x003D0100u; return; } if (c.pc != 0x003D17DCu) [[unlikely]] return; }
L_003D17DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D17E4u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00B4(c, 11u, depth + 1u); else { c.pc = 0x003D0100u; return; } if (c.pc != 0x003D17E4u) [[unlikely]] return; }
L_003D17E4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D17F0u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00B4(c, 194u, depth + 1u); else { c.pc = 0x003D1A90u; return; } if (c.pc != 0x003D17F0u) [[unlikely]] return; }
L_003D17F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D17B4u | kUnwind; return; } goto L_003D17B4; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1804u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00B4(c, 12u, depth + 1u); else { c.pc = 0x003D0160u; return; } if (c.pc != 0x003D1804u) [[unlikely]] return; }
L_003D1804:
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[29].w[0] + 464u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 468u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 472u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[29].w[0] + 476u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 480u), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 484u), c.r[2].w[0]);  if (t) { goto L_003D1884; } }
L_003D1838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1840u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B3(c, 107u, depth + 1u); else { c.pc = 0x003CCF80u; return; } if (c.pc != 0x003D1840u) [[unlikely]] return; }
L_003D1840:
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 480u), c.r[3].w[0]);  if (t) { goto L_003D1884; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 476u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 464u), c.r[3].w[0]);  if (t) { goto L_003D1870; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 468u)));
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    c.budget -= 2;
L_003D1870:
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[29].w[0] + 484u), c.r[2].w[0]);
    c.budget -= 5;
L_003D1884:
    set32(c.r[4], ld32((c.r[29].w[0] + 480u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 448u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1838u | kUnwind; return; } goto L_003D1838; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - c.r[21].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003D18E8; } }
L_003D18A4:
    set32(c.r[5], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 14;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_003D18E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D18E4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D18E4u) [[unlikely]] return; }
L_003D18E4:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003D18E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_003D18FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003D1900; } }
L_003D18FC:
    set32(c.r[4], c.r[2].w[0] << 4);
    c.budget -= 1;
L_003D1900:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D18A4u | kUnwind; return; } goto L_003D18A4; }
L_003D191C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003D1920:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D192Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 247u, depth + 1u); else { c.pc = 0x003D2450u; return; } if (c.pc != 0x003D192Cu) [[unlikely]] return; }
L_003D192C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1938u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00B4(c, 12u, depth + 1u); else { c.pc = 0x003D0160u; return; } if (c.pc != 0x003D1938u) [[unlikely]] return; }
L_003D1938:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1944u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 193u, depth + 1u); else { c.pc = 0x003D1980u; return; } if (c.pc != 0x003D1944u) [[unlikely]] return; }
L_003D1944:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1950u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 12u, depth + 1u); else { c.pc = 0x003D0160u; return; } if (c.pc != 0x003D1950u) [[unlikely]] return; }
L_003D1950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_003D1980:
    set32(c.r[9], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_003D19A0; } }
    set32(c.r[2], c.r[3].w[0] + 31u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_003D19A0:
    set32(c.r[8], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[8].sd[0] < 0) { set32(c.r[2], 0u + 15u);  goto L_003D19C8; }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 4));  if (t) { goto L_003D19E0; } }
    set32(c.r[2], c.r[8].w[0] + 15u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D19E0; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 1;
L_003D19C8:
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));  if (t) { goto L_003D19E0; } }
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_003D19E0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_003D1A78; }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_003D1A04; } }
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_003D1A04:
    set32(c.r[3], c.r[9].w[0] - c.r[6].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003D1A18; } }
    set32(c.r[2], c.r[3].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_003D1A18:
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;  goto L_003D1A30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003D1A3C; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003D1A30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] << 2);  goto L_003D1A40; }
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_003D1A3C:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_003D1A40:
    set32(c.r[2], c.r[7].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003D1A84; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 1;
L_003D1A78:
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_003D1A84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003D1A90:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003D1AB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D1AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_003D1AE8; } }
L_003D1AE4:
    set32(c.r[16], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003D1AE8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_003D1B00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_003D1B08; } }
L_003D1B00:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003D1B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1B10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003D1B10u) [[unlikely]] return; }
L_003D1B10:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 92u)));
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1B2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x003D1B2Cu) [[unlikely]] return; }
L_003D1B2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 17u);  goto L_003D1B40; }
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_003D1B40:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));  goto L_003D1B58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 20u)));  if (t) { goto L_003D1B60; } }
L_003D1B58:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003D1B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1B68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003D1B68u) [[unlikely]] return; }
L_003D1B68:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 88u)));
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1B84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x003D1B84u) [[unlikely]] return; }
L_003D1B84:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D1BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_003D1BC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));  if (t) { goto L_003D1BDC; } }
    set32(c.r[2], c.r[2].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 2;
L_003D1BDC:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  goto L_003D1C20; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_003D1C04; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
L_003D1C04:
    set32(c.r[2], c.r[3].w[0] - 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[2], c.r[2].w[0] + 512u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
L_003D1C20:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_003D1C30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1C50u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 247u, depth + 1u); else { c.pc = 0x003D2450u; return; } if (c.pc != 0x003D1C50u) [[unlikely]] return; }
L_003D1C50:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1C60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 247u, depth + 1u); else { c.pc = 0x003D2450u; return; } if (c.pc != 0x003D1C60u) [[unlikely]] return; }
L_003D1C60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1C70u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00B4(c, 235u, depth + 1u); else { c.pc = 0x003D2150u; return; } if (c.pc != 0x003D1C70u) [[unlikely]] return; }
L_003D1C70:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_003D1CD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_003D1CBC; } }
L_003D1C8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_003D1CB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1CACu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D1CACu) [[unlikely]] return; }
L_003D1CAC:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_003D1CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1CB8u);  if (depth < kMaxDepth) unit_0009(c, 154u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x003D1CB8u) [[unlikely]] return; }
L_003D1CB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_003D1CBC:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1C8Cu | kUnwind; return; } goto L_003D1C8C; }
    set32(c.r[3], 0u + 8u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_003D1CD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003D1CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003D1D10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D08u);  if (depth < kMaxDepth) unit_00B4(c, 202u, depth + 1u); else { c.pc = 0x003D1C30u; return; } if (c.pc != 0x003D1D08u) [[unlikely]] return; }
L_003D1D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003D1DC8; } }
L_003D1D10:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], c.r[2].w[0] >> 4);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    mmi::divu(c, 0, c.r[6].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D50u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 107u, depth + 1u); else { c.pc = 0x003CCF80u; return; } if (c.pc != 0x003D1D50u) [[unlikely]] return; }
L_003D1D50:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003D1DC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 4u);  if (t) { goto L_003D1DB4; } }
L_003D1D7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_003D1DA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1D9Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D1D9Cu) [[unlikely]] return; }
L_003D1D9C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_003D1DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1DA8u);  if (depth < kMaxDepth) unit_0009(c, 154u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x003D1DA8u) [[unlikely]] return; }
L_003D1DA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 16u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 3;
L_003D1DB4:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D1D7Cu | kUnwind; return; } goto L_003D1D7C; }
L_003D1DC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003D1DC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003D1DE0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_003D1E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003D1E20; } }
L_003D1E18:
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 2;
L_003D1E20:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[18].w[0] + 16u)));  goto L_003D202C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26920u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D1E48; } }
    set32(c.r[3], 0u - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] - 22736u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 26920u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003D1E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 22736u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_003D1E80; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1E74u); set32(c.r[5], c.r[5].w[0] - 22444u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003D1E74u) [[unlikely]] return; }
L_003D1E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1E7Cu);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003D1E7Cu) [[unlikely]] return; }
L_003D1E7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_003D1E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_003D1E90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003D1E94; } }
L_003D1E90:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_003D1E94:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[18].w[0])));  goto L_003D1FE4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1EA8u); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003D1EA8u) [[unlikely]] return; }
L_003D1EA8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 124u);
    st32((c.r[29].w[0] + 124u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[29].w[0] + 96u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] << 1);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1EECu); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 41u, depth + 1u); else { c.pc = 0x003C4920u; return; } if (c.pc != 0x003D1EECu) [[unlikely]] return; }
L_003D1EEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_003D1F10; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F04u); set32(c.r[5], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00B4(c, 233u, depth + 1u); else { c.pc = 0x003D20A0u; return; } if (c.pc != 0x003D1F04u) [[unlikely]] return; }
L_003D1F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_003D1F2C; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_003D1F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F18u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 141u, depth + 1u); else { c.pc = 0x00125760u; return; } if (c.pc != 0x003D1F18u) [[unlikely]] return; }
L_003D1F18:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F28u); st32((c.r[29].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x003D1F28u) [[unlikely]] return; }
L_003D1F28:
    set32(c.r[7], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_003D1F2C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    mmi::divu(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F64u); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x003D1F64u) [[unlikely]] return; }
L_003D1F64:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_003D1F88; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003D1F78u) [[unlikely]] return; }
L_003D1F78:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F84u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003D1F84u) [[unlikely]] return; }
L_003D1F84:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_003D1F88:
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1F94u); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 35u, depth + 1u); else { c.pc = 0x003C4760u; return; } if (c.pc != 0x003D1F94u) [[unlikely]] return; }
L_003D1F94:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  goto L_003D1FC0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D1FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1FBCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D1FBCu) [[unlikely]] return; }
L_003D1FBC:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_003D1FC0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003D208C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1FD8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D1FD8u) [[unlikely]] return; }
L_003D1FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2088; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003D1FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D1FECu); set32(c.r[4], 0u + 512u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003D1FECu) [[unlikely]] return; }
L_003D1FEC:
    set32(c.r[8], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2028u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x003D2028u) [[unlikely]] return; }
L_003D2028:
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_003D202C:
    set32(c.r[7], c.r[16].w[0] >> 4);
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].d[0] & 15ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  goto L_003D2080; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2070u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003D2070u) [[unlikely]] return; }
L_003D2070:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D207Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003D207Cu) [[unlikely]] return; }
L_003D207C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_003D2080:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 2;
L_003D2088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003D208C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D20A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == c.r[5].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003D2134; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003D20D8; }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
L_003D20D8:
    set32(c.r[8], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[8].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2130u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 30u, depth + 1u); else { c.pc = 0x003C45C0u; return; } if (c.pc != 0x003D2130u) [[unlikely]] return; }
L_003D2130:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003D2134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003D2150:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003D232C; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[9], ld32((c.r[6].w[0])));
    set32(c.r[11], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[8], c.r[9].w[0] - c.r[10].w[0]);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  if (t) { goto L_003D219C; } }
    set32(c.r[7], c.r[8].w[0] + 3u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));
    c.budget -= 2;
L_003D219C:
    c.r[8].d[0] = c.r[9].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { c.r[8].d[0] = c.r[10].d[0] < c.r[11].d[0] ? 1ull : 0ull;  goto L_003D21D8; }
    c.r[1].d[0] = c.r[10].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[6].w[0] + 20u)));  goto L_003D2204; }
    set32(c.r[9], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[9], c.r[9].w[0] - c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));  if (t) { goto L_003D21D0; } }
    set32(c.r[8], c.r[9].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_003D21D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);  if (t) { goto L_003D2200; } }
L_003D21D8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003D2200; } }
    set32(c.r[9], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[9], c.r[9].w[0] - c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));  if (t) { goto L_003D21FC; } }
    set32(c.r[8], c.r[9].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_003D21FC:
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_003D2200:
    set32(c.r[6], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 1;
L_003D2204:
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_003D2218; } }
    set32(c.r[4], c.r[4].w[0] + 31u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.budget -= 2;
L_003D2218:
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] - c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));  if (t) { goto L_003D2238; } }
    set32(c.r[3], c.r[4].w[0] + 31u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_003D2238:
    set32(c.r[19], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[18], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[21], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] - c.r[21].w[0]);
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 5));  if (t) { goto L_003D2268; } }
    set32(c.r[4], c.r[5].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    c.budget -= 2;
L_003D2268:
    c.r[3].d[0] = c.r[3].d[0] << 32;
    st32((c.r[29].w[0] + 116u), c.r[4].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 120u), c.r[3].w[0]);  if (t) { goto L_003D2288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[29].w[0] + 116u);  if (t) { goto L_003D228C; } }
L_003D2288:
    set32(c.r[3], c.r[29].w[0] + 120u);
    c.budget -= 1;
L_003D228C:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 22728u)));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[20], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003D22A0:
    set32(c.r[3], c.r[20].w[0] - c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_003D22B4; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_003D22B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_003D22D4; } }
L_003D22C4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D22D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B3(c, 107u, depth + 1u); else { c.pc = 0x003CCF80u; return; } if (c.pc != 0x003D22D0u) [[unlikely]] return; }
L_003D22D0:
    set32(c.r[21], c.r[21].w[0] + 32u);
    c.budget -= 1;
L_003D22D4:
    c.r[3].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D22C4u | kUnwind; return; } goto L_003D22C4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003D2330; }
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 124u)));  goto L_003D2300; }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 2;
L_003D2300:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], ld32((c.r[19].w[0])));  if (t) { goto L_003D2318; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 22728u);  if (t) { goto L_003D231C; } }
L_003D2318:
    set32(c.r[3], c.r[29].w[0] + 124u);
    c.budget -= 1;
L_003D231C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[21].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D22A0u | kUnwind; return; } goto L_003D22A0; } }
L_003D232C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003D2330:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D2350:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003D23C0; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D237Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 262u, depth + 1u); else { c.pc = 0x003D29D0u; return; } if (c.pc != 0x003D237Cu) [[unlikely]] return; }
L_003D237C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D238Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 262u, depth + 1u); else { c.pc = 0x003D29D0u; return; } if (c.pc != 0x003D238Cu) [[unlikely]] return; }
L_003D238C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D239Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B4(c, 258u, depth + 1u); else { c.pc = 0x003D27C0u; return; } if (c.pc != 0x003D239Cu) [[unlikely]] return; }
L_003D239C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D23A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 253u, depth + 1u); else { c.pc = 0x003D2680u; return; } if (c.pc != 0x003D23A8u) [[unlikely]] return; }
L_003D23A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003D23C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D23C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D23C0u) [[unlikely]] return; }
L_003D23C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D23C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003D23E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003D2440; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[16].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D241Cu); st32((c.r[16].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 35u, depth + 1u); else { c.pc = 0x003C4760u; return; } if (c.pc != 0x003D241Cu) [[unlikely]] return; }
L_003D241C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
L_003D2440:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003D2450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[10], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] >> 4);
    set32(c.r[6], c.r[10].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], c.r[10].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[10].w[0]);
    c.budget -= 18;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_003D24A0; } }
    set32(c.r[6], c.r[6].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));
    c.budget -= 2;
L_003D24A0:
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[6].w[0] - c.r[10].w[0]);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));  if (t) { goto L_003D24B8; } }
    set32(c.r[6], c.r[7].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));
    c.budget -= 2;
L_003D24B8:
    set32(c.r[7], c.r[9].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[7].sd[0] >= 0) { c.r[6].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;  goto L_003D24CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_003D24D8; } }
L_003D24CC:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  goto L_003D24DC; }
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_003D24D8:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003D24DC:
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0]), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003D2504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003D2508; } }
L_003D2504:
    set32(c.r[6], ld32((c.r[10].w[0])));
    c.budget -= 1;
L_003D2508:
    st32((c.r[4].w[0]), c.r[10].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    st32((c.r[4].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[3], c.r[6].w[0] + 512u);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D2540:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003D264C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[19].w[0] + 4u);  if (t) { goto L_003D25EC; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003D2598; }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
L_003D2598:
    set32(c.r[17], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[20], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_003D25E4; } }
L_003D25BC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 4u);  goto L_003D25D8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D25D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D25D4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D25D4u) [[unlikely]] return; }
L_003D25D4:
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 1;
L_003D25D8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0];  if (t) { goto L_003D25E4; } }
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D25E4:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D25BCu | kUnwind; return; } goto L_003D25BC; }
L_003D25EC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_003D2638; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003D2634; } }
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2634; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2634; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2634; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2634; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2634u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D2634u) [[unlikely]] return; }
L_003D2634:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_003D2638:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_003D2650; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D264Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D264Cu) [[unlikely]] return; }
L_003D264C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003D2650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003D2680:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003D278C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[19].w[0] + 4u);  if (t) { goto L_003D272C; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003D26D8; }
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
L_003D26D8:
    set32(c.r[17], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[20], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_003D2724; } }
L_003D26FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 4u);  goto L_003D2718; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2714u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D2714u) [[unlikely]] return; }
L_003D2714:
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 1;
L_003D2718:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0];  if (t) { goto L_003D2724; } }
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003D2724:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003D26FCu | kUnwind; return; } goto L_003D26FC; }
L_003D272C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_003D2778; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003D2774; } }
    set32(c.r[2], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2774; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2774; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2774; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2774; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003D2774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2774u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003D2774u) [[unlikely]] return; }
L_003D2774:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_003D2778:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_003D2790; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D278Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003D278Cu) [[unlikely]] return; }
L_003D278C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003D2790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003D27C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003D29A8; } }
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[9], ld32((c.r[6].w[0])));
    set32(c.r[11], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[8], c.r[9].w[0] - c.r[10].w[0]);
    c.budget -= 6;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));  if (t) { goto L_003D280C; } }
    set32(c.r[7], c.r[8].w[0] + 3u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));
    c.budget -= 2;
L_003D280C:
    c.r[8].d[0] = c.r[9].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { c.r[8].d[0] = c.r[10].d[0] < c.r[11].d[0] ? 1ull : 0ull;  goto L_003D2848; }
    c.r[1].d[0] = c.r[10].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[10], ld32((c.r[6].w[0] + 20u)));  goto L_003D2874; }
    set32(c.r[9], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[9], c.r[9].w[0] - c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));  if (t) { goto L_003D2840; } }
    set32(c.r[8], c.r[9].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_003D2840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);  if (t) { goto L_003D2870; } }
L_003D2848:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003D2870; } }
    set32(c.r[9], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[9], c.r[9].w[0] - c.r[8].w[0]);
    c.budget -= 5;
    { const bool t = c.r[9].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 2));  if (t) { goto L_003D286C; } }
    set32(c.r[8], c.r[9].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 2));
    c.budget -= 2;
L_003D286C:
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_003D2870:
    set32(c.r[10], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 1;
L_003D2874:
    set32(c.r[8], c.r[7].w[0] << 3);
    set32(c.r[9], 0u + 52u);
    set32(c.r[21], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[19], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[10].w[0] - c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[9].w[0]);
    set32(c.r[18], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[6].w[0] - c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::div(c, 1, c.r[3].w[0], c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], c.r[3].w[0] - c.r[21].w[0]);
    set32(c.r[5], c.r[7].w[0] - c.r[6].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 124u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 26;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_003D28E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[29].w[0] + 116u);  if (t) { goto L_003D28E8; } }
L_003D28E4:
    set32(c.r[3], c.r[29].w[0] + 120u);
    c.budget -= 1;
L_003D28E8:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 22720u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[20], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_003D290C:
    set32(c.r[4], c.r[20].w[0] - c.r[21].w[0]);
    set32(c.r[3], 0u + 52u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.r[3].w[0]);  if (t) { goto L_003D2940; } }
L_003D2930:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D293Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B4(c, 31u, depth + 1u); else { c.pc = 0x003D0340u; return; } if (c.pc != 0x003D293Cu) [[unlikely]] return; }
L_003D293C:
    set32(c.r[21], c.r[21].w[0] + 52u);
    c.budget -= 1;
L_003D2940:
    c.r[3].d[0] = c.r[21].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2930u | kUnwind; return; } goto L_003D2930; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003D29AC; }
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 124u)));  goto L_003D296C; }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 2;
L_003D296C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], ld32((c.r[19].w[0])));  if (t) { goto L_003D2984; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 22720u);  if (t) { goto L_003D2988; } }
L_003D2984:
    set32(c.r[3], c.r[29].w[0] + 124u);
    c.budget -= 1;
L_003D2988:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[21].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D290Cu | kUnwind; return; } goto L_003D290C; } }
L_003D29A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003D29AC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003D29D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[10], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[7], 0u + 9u);
    set32(c.r[9], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    mmi::divu(c, 0, c.r[3].w[0], c.r[7].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[6], c.r[10].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[10].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - c.r[10].w[0]);
    c.budget -= 20;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (t) { goto L_003D2A28; } }
    set32(c.r[6], c.r[6].w[0] + 3u);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));
    c.budget -= 2;
L_003D2A28:
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[7], c.r[6].w[0] - c.r[10].w[0]);
    c.budget -= 4;
    { const bool t = c.r[7].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 2));  if (t) { goto L_003D2A40; } }
    set32(c.r[6], c.r[7].w[0] + 3u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));
    c.budget -= 2;
L_003D2A40:
    set32(c.r[7], c.r[9].w[0] + c.r[6].w[0]);
    c.budget -= 3;
    if (c.r[7].sd[0] >= 0) { c.r[6].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;  goto L_003D2A54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);  if (t) { goto L_003D2A60; } }
L_003D2A54:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  goto L_003D2A64; }
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.budget -= 1;
L_003D2A60:
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003D2A64:
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[10], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0]), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[9], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003D2A8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003D2A90; } }
L_003D2A8C:
    set32(c.r[7], ld32((c.r[10].w[0])));
    c.budget -= 1;
L_003D2A90:
    set32(c.r[5], 0u + 9u);
    st32((c.r[4].w[0]), c.r[10].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[7].w[0] + 468u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003D2AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2B00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D2B00u) [[unlikely]] return; }
L_003D2B00:
    set32(c.r[2], ld32((c.r[28].w[0] - 26892u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 26892u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2B14u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D2B14u) [[unlikely]] return; }
L_003D2B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2B38; } }
L_003D2B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2B24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D2B24u) [[unlikely]] return; }
L_003D2B24:
    set32(c.r[2], ld32((c.r[28].w[0] - 26892u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 26892u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2B38u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D2B38u) [[unlikely]] return; }
L_003D2B38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D2B50:
    set32(c.r[29], c.r[29].w[0] - 288u);
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
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[17], c.r[17].w[0] - 20517u);
    c.budget -= 20;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_003D2BAC; } }
    c.r[1].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003D2BC0; } }
L_003D2BAC:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 31344u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
L_003D2BC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D2BD8; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2C60; } }
L_003D2BD8:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2BECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2BECu) [[unlikely]] return; }
L_003D2BEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2C34; } }
L_003D2BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] - 28864u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_003D2C18; } }
    set32(c.r[2], 0u + 1u);
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2C40; } }
L_003D2C18:
    st32((c.r[29].w[0] + 240u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 7;
L_003D2C34:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003D2BF8u | kUnwind; return; } goto L_003D2BF8; } }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D2C40:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003D2C54; } }
    set32(c.r[22], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2C58; } }
L_003D2C54:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003D2C58:
    st32((c.r[29].w[0] + 244u), c.r[22].w[0]);
    set32(c.r[23], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 2;
L_003D2C60:
    c.r[30].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_003D2D30; } }
    set32(c.r[2], c.r[30].w[0] + 52u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 20501u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2CB0u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003D2CB0u) [[unlikely]] return; }
L_003D2CB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 255u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 255u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2CF0; } }
    set32(c.r[2], c.r[29].w[0] + 177u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2D00; } }
L_003D2CF0:
    set32(c.r[2], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_003D2D00:
    st32((c.r[29].w[0] + 208u), c.r[20].w[0]);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2D18u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D2D18u) [[unlikely]] return; }
L_003D2D18:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2D28u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D2D28u) [[unlikely]] return; }
L_003D2D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2DC4; } }
L_003D2D30:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 20469u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2D4Cu);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003D2D4Cu) [[unlikely]] return; }
L_003D2D4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 254u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 254u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2D8C; } }
    set32(c.r[2], c.r[29].w[0] + 161u);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2D9C; } }
L_003D2D8C:
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_003D2D9C:
    st32((c.r[29].w[0] + 196u), c.r[19].w[0]);
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2DB4u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D2DB4u) [[unlikely]] return; }
L_003D2DB4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2DC4u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D2DC4u) [[unlikely]] return; }
L_003D2DC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2DD4u);  if (depth < kMaxDepth) unit_0085(c, 45u, depth + 1u); else { c.pc = 0x003149E0u; return; } if (c.pc != 0x003D2DD4u) [[unlikely]] return; }
L_003D2DD4:
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
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D2E10:
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
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27612u)));
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E58u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x003D2E58u) [[unlikely]] return; }
L_003D2E58:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003D2E84; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 324u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2E84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2E84u) [[unlikely]] return; }
L_003D2E84:
    set32(c.r[2], ld32((c.r[28].w[0] - 26156u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 27612u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003D2EC0; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2EC0u);  if (depth < kMaxDepth) unit_00FF(c, 266u, depth + 1u); else { c.pc = 0x004FE4D0u; return; } if (c.pc != 0x003D2EC0u) [[unlikely]] return; }
L_003D2EC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2ECCu);  if (depth < kMaxDepth) unit_00C0(c, 263u, depth + 1u); else { c.pc = 0x00403B90u; return; } if (c.pc != 0x003D2ECCu) [[unlikely]] return; }
L_003D2ECC:
    st8((c.r[29].w[0] + 191u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 191u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3020; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2EECu);  if (depth < kMaxDepth) unit_00C0(c, 249u, depth + 1u); else { c.pc = 0x004038D0u; return; } if (c.pc != 0x003D2EECu) [[unlikely]] return; }
L_003D2EEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2EF8u);  if (depth < kMaxDepth) unit_00C0(c, 233u, depth + 1u); else { c.pc = 0x00403560u; return; } if (c.pc != 0x003D2EF8u) [[unlikely]] return; }
L_003D2EF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2F38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 8704u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2F30u);  if (depth < kMaxDepth) unit_00C0(c, 245u, depth + 1u); else { c.pc = 0x004037E0u; return; } if (c.pc != 0x003D2F30u) [[unlikely]] return; }
L_003D2F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D2F58; } }
L_003D2F38:
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 160u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_003D2F58:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D2F98; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = ld8((c.r[22].w[0] + 328u));
    st8((c.r[29].w[0] + 190u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 190u));
    st8((c.r[29].w[0] + 189u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[29].w[0] + 189u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2F98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D2F98u) [[unlikely]] return; }
L_003D2F98:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2FA8u);  if (depth < kMaxDepth) unit_00AF(c, 288u, depth + 1u); else { c.pc = 0x003BE6A0u; return; } if (c.pc != 0x003D2FA8u) [[unlikely]] return; }
L_003D2FA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2FB4u);  if (depth < kMaxDepth) unit_00C0(c, 233u, depth + 1u); else { c.pc = 0x00403560u; return; } if (c.pc != 0x003D2FB4u) [[unlikely]] return; }
L_003D2FB4:
    set32(c.r[2], ld32((c.r[28].w[0] - 22500u)));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D2FC8u);  if (depth < kMaxDepth) unit_00FC(c, 409u, depth + 1u); else { c.pc = 0x004F30F0u; return; } if (c.pc != 0x003D2FC8u) [[unlikely]] return; }
L_003D2FC8:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3008; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 328u));
    st8((c.r[29].w[0] + 188u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 188u));
    st8((c.r[29].w[0] + 187u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[29].w[0] + 187u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3008u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D3008u) [[unlikely]] return; }
L_003D3008:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3014u);  if (depth < kMaxDepth) unit_00C0(c, 241u, depth + 1u); else { c.pc = 0x00403700u; return; } if (c.pc != 0x003D3014u) [[unlikely]] return; }
L_003D3014:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3020u);  if (depth < kMaxDepth) unit_00C0(c, 238u, depth + 1u); else { c.pc = 0x00403660u; return; } if (c.pc != 0x003D3020u) [[unlikely]] return; }
L_003D3020:
    set32(c.r[30], ld32((c.r[28].w[0] - 27612u)));
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[23].d[0] != c.r[2].d[0];  if (t) { goto L_003D304C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D304Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D304Cu) [[unlikely]] return; }
L_003D304C:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3058u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x003D3058u) [[unlikely]] return; }
L_003D3058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3060u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x003D3060u) [[unlikely]] return; }
L_003D3060:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D306Cu);  if (depth < kMaxDepth) unit_00E8(c, 512u, depth + 1u); else { c.pc = 0x004A3B90u; return; } if (c.pc != 0x003D306Cu) [[unlikely]] return; }
L_003D306C:
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
L_003D30A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D30C8u);  if (depth < kMaxDepth) unit_0010(c, 338u, depth + 1u); else { c.pc = 0x00142AA0u; return; } if (c.pc != 0x003D30C8u) [[unlikely]] return; }
L_003D30C8:
    c.f[0] = ld32((c.r[28].w[0] - 29056u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 29048u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D30F0u);  if (depth < kMaxDepth) unit_0015(c, 189u, depth + 1u); else { c.pc = 0x00155BA0u; return; } if (c.pc != 0x003D30F0u) [[unlikely]] return; }
L_003D30F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D310C; } }
    set32(c.r[20], ld32((c.r[28].w[0] - 25052u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D310Cu);  if (depth < kMaxDepth) unit_00CE(c, 120u, depth + 1u); else { c.pc = 0x00439160u; return; } if (c.pc != 0x003D310Cu) [[unlikely]] return; }
L_003D310C:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D3148; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D3148; } }
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3148u);  if (depth < kMaxDepth) unit_00FD(c, 50u, depth + 1u); else { c.pc = 0x004F4520u; return; } if (c.pc != 0x003D3148u) [[unlikely]] return; }
L_003D3148:
    set32(c.r[2], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3198; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D3198; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D3198; } }
    set32(c.r[19], ld32((c.r[28].w[0] - 24752u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3198u);  if (depth < kMaxDepth) unit_00D2(c, 334u, depth + 1u); else { c.pc = 0x0044AC70u; return; } if (c.pc != 0x003D3198u) [[unlikely]] return; }
L_003D3198:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D31DC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D31DC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.f[12] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D31DCu);  if (depth < kMaxDepth) unit_00AF(c, 290u, depth + 1u); else { c.pc = 0x003BE6E0u; return; } if (c.pc != 0x003D31DCu) [[unlikely]] return; }
L_003D31DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D31E8u);  if (depth < kMaxDepth) unit_0012(c, 430u, depth + 1u); else { c.pc = 0x0014B520u; return; } if (c.pc != 0x003D31E8u) [[unlikely]] return; }
L_003D31E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3208; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 25052u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3208u);  if (depth < kMaxDepth) unit_00CE(c, 122u, depth + 1u); else { c.pc = 0x004391A0u; return; } if (c.pc != 0x003D3208u) [[unlikely]] return; }
L_003D3208:
    c.f[12] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3214u);  if (depth < kMaxDepth) unit_00B6(c, 257u, depth + 1u); else { c.pc = 0x003DA420u; return; } if (c.pc != 0x003D3214u) [[unlikely]] return; }
L_003D3214:
    set32(c.r[17], ld32((c.r[28].w[0] - 24928u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3224u);  if (depth < kMaxDepth) unit_00CF(c, 418u, depth + 1u); else { c.pc = 0x0043F4E0u; return; } if (c.pc != 0x003D3224u) [[unlikely]] return; }
L_003D3224:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D3250; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D3250; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 24752u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3250u);  if (depth < kMaxDepth) unit_00D2(c, 316u, depth + 1u); else { c.pc = 0x0044AA00u; return; } if (c.pc != 0x003D3250u) [[unlikely]] return; }
L_003D3250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3280:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[6].w[0]);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], 0u + 364u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D32ACu);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003D32ACu) [[unlikely]] return; }
L_003D32AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D32C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D32C4u);  if (depth < kMaxDepth) unit_00FF(c, 541u, depth + 1u); else { c.pc = 0x004FFDE0u; return; } if (c.pc != 0x003D32C4u) [[unlikely]] return; }
L_003D32C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003D32C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[2].w[0] + 48u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 64u)));
    c.r[8].d[0] = ld8((c.r[29].w[0] + 80u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D32F0u);  if (depth < kMaxDepth) unit_00FF(c, 471u, depth + 1u); else { c.pc = 0x004FF740u; return; } if (c.pc != 0x003D32F0u) [[unlikely]] return; }
L_003D32F0:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3324u);  if (depth < kMaxDepth) unit_00D1(c, 155u, depth + 1u); else { c.pc = 0x00444DB0u; return; } if (c.pc != 0x003D3324u) [[unlikely]] return; }
L_003D3324:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 20386u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3364u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D3364u) [[unlikely]] return; }
L_003D3364:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3394u);  if (depth < kMaxDepth) unit_00D1(c, 155u, depth + 1u); else { c.pc = 0x00444DB0u; return; } if (c.pc != 0x003D3394u) [[unlikely]] return; }
L_003D3394:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D33B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 20347u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D33D4u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D33D4u) [[unlikely]] return; }
L_003D33D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D33F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 144u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 6u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 20287u);
    set32(c.r[7], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D342Cu);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003D342Cu) [[unlikely]] return; }
L_003D342C:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[20].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3464; } }
    set32(c.r[19], c.r[29].w[0] + 113u);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D346C; } }
L_003D3464:
    set32(c.r[17], c.r[29].w[0] + 120u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003D346C:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3488u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D3488u) [[unlikely]] return; }
L_003D3488:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3498u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003D3498u) [[unlikely]] return; }
L_003D3498:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D34A8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D34A8u) [[unlikely]] return; }
L_003D34A8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D34B8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003D34B8u) [[unlikely]] return; }
L_003D34B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D34E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 20263u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3514u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D3514u) [[unlikely]] return; }
L_003D3514:
    set32(c.r[19], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_003D3548; } }
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 20224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3540u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D3540u) [[unlikely]] return; }
L_003D3540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3564; } }
L_003D3548:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 20183u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3564u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D3564u) [[unlikely]] return; }
L_003D3564:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 20146u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3580u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D3580u) [[unlikely]] return; }
L_003D3580:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 20106u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D359Cu);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D359Cu) [[unlikely]] return; }
L_003D359C:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 20070u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D35B8u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D35B8u) [[unlikely]] return; }
L_003D35B8:
    set32(c.r[18], ld32((c.r[28].w[0] - 26060u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D35D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D35D0u) [[unlikely]] return; }
L_003D35D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D35F4; } }
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D35F4u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D35F4u) [[unlikely]] return; }
L_003D35F4:
    set32(c.r[17], ld32((c.r[28].w[0] - 25180u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3604u);  if (depth < kMaxDepth) unit_00CD(c, 113u, depth + 1u); else { c.pc = 0x00434B50u; return; } if (c.pc != 0x003D3604u) [[unlikely]] return; }
L_003D3604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D360Cu);  if (depth < kMaxDepth) unit_0010(c, 360u, depth + 1u); else { c.pc = 0x00142CB0u; return; } if (c.pc != 0x003D360Cu) [[unlikely]] return; }
L_003D360C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 20033u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3654u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D3654u) [[unlikely]] return; }
L_003D3654:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3670:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 22500u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D368Cu);  if (depth < kMaxDepth) unit_00FD(c, 67u, depth + 1u); else { c.pc = 0x004F46A0u; return; } if (c.pc != 0x003D368Cu) [[unlikely]] return; }
L_003D368C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 19996u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D36A8u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D36A8u) [[unlikely]] return; }
L_003D36A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D36C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[23], c.r[2].w[0] + 716u);
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3734; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[21], c.r[2].w[0] + 716u);
    set32(c.r[20], c.r[21].w[0] + 1u);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3744; } }
L_003D3734:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[19], c.r[2].w[0] + 716u);
    set32(c.r[17], c.r[19].w[0] + 8u);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 4;
L_003D3744:
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3754u);  if (depth < kMaxDepth) unit_00D1(c, 167u, depth + 1u); else { c.pc = 0x004450C0u; return; } if (c.pc != 0x003D3754u) [[unlikely]] return; }
L_003D3754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.r[4].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 19957u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D37BCu);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D37BCu) [[unlikely]] return; }
L_003D37BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], c.r[2].w[0] + 716u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D37D4u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D37D4u) [[unlikely]] return; }
L_003D37D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D37F0:
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
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 700u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 191u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 191u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3880; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 700u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3898; } }
L_003D3880:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 700u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[19], c.r[2].w[0] + 8u);
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 6;
L_003D3898:
    st32((c.r[29].w[0] + 168u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D38A8u);  if (depth < kMaxDepth) unit_00D1(c, 167u, depth + 1u); else { c.pc = 0x004450C0u; return; } if (c.pc != 0x003D38A8u) [[unlikely]] return; }
L_003D38A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] + 684u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[30].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = 0ull < c.r[30].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D38F8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[23], c.r[2].w[0] + 684u);
    set32(c.r[22], c.r[23].w[0] + 1u);
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3908; } }
L_003D38F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[21], c.r[2].w[0] + 684u);
    set32(c.r[18], c.r[21].w[0] + 8u);
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 4;
L_003D3908:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3918u);  if (depth < kMaxDepth) unit_00D1(c, 167u, depth + 1u); else { c.pc = 0x004450C0u; return; } if (c.pc != 0x003D3918u) [[unlikely]] return; }
L_003D3918:
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
L_003D3950:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 19911u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3984u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D3984u) [[unlikely]] return; }
L_003D3984:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[2].w[0] + 684u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D399Cu);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D399Cu) [[unlikely]] return; }
L_003D399C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 19869u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D39B8u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003D39B8u) [[unlikely]] return; }
L_003D39B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[4], c.r[2].w[0] + 700u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D39D0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003D39D0u) [[unlikely]] return; }
L_003D39D0:
    set32(c.r[16], ld32((c.r[28].w[0] - 25180u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D39E0u);  if (depth < kMaxDepth) unit_00CD(c, 113u, depth + 1u); else { c.pc = 0x00434B50u; return; } if (c.pc != 0x003D39E0u) [[unlikely]] return; }
L_003D39E0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D39ECu);  if (depth < kMaxDepth) unit_00D2(c, 222u, depth + 1u); else { c.pc = 0x00449F70u; return; } if (c.pc != 0x003D39ECu) [[unlikely]] return; }
L_003D39EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3A10:
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
    st32((c.r[29].w[0] + 224u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[6].w[0]);
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 27612u)));
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 19;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D3A68; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3A68u);  if (depth < kMaxDepth) unit_004B(c, 268u, depth + 1u); else { c.pc = 0x0022F040u; return; } if (c.pc != 0x003D3A68u) [[unlikely]] return; }
L_003D3A68:
    set32(c.r[2], ld32((c.r[28].w[0] - 25180u)));
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 256u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 256u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3AAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3AACu);  if (depth < kMaxDepth) unit_00CD(c, 161u, depth + 1u); else { c.pc = 0x00435020u; return; } if (c.pc != 0x003D3AACu) [[unlikely]] return; }
L_003D3AAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 25180u)));
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3AD4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25180u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3AD4u);  if (depth < kMaxDepth) unit_00CD(c, 113u, depth + 1u); else { c.pc = 0x00434B50u; return; } if (c.pc != 0x003D3AD4u) [[unlikely]] return; }
L_003D3AD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3B24; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26156u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3B24; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26156u)));
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B24u);  if (depth < kMaxDepth) unit_00C7(c, 370u, depth + 1u); else { c.pc = 0x0041F5C0u; return; } if (c.pc != 0x003D3B24u) [[unlikely]] return; }
L_003D3B24:
    set32(c.r[2], ld32((c.r[28].w[0] - 22500u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3B4C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 22500u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B4Cu);  if (depth < kMaxDepth) unit_00FC(c, 549u, depth + 1u); else { c.pc = 0x004F3F70u; return; } if (c.pc != 0x003D3B4Cu) [[unlikely]] return; }
L_003D3B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B54u);  if (depth < kMaxDepth) unit_0010(c, 113u, depth + 1u); else { c.pc = 0x00140D70u; return; } if (c.pc != 0x003D3B54u) [[unlikely]] return; }
L_003D3B54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B60u);  if (depth < kMaxDepth) unit_0010(c, 117u, depth + 1u); else { c.pc = 0x00140DF0u; return; } if (c.pc != 0x003D3B60u) [[unlikely]] return; }
L_003D3B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B68u);  if (depth < kMaxDepth) unit_000A(c, 324u, depth + 1u); else { c.pc = 0x0012AC00u; return; } if (c.pc != 0x003D3B68u) [[unlikely]] return; }
L_003D3B68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3B70u);  if (depth < kMaxDepth) unit_00CE(c, 201u, depth + 1u); else { c.pc = 0x00439980u; return; } if (c.pc != 0x003D3B70u) [[unlikely]] return; }
L_003D3B70:
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3BA0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26064u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[30], ld32((c.r[29].w[0] + 160u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3BA0u);  if (depth < kMaxDepth) unit_00BF(c, 396u, depth + 1u); else { c.pc = 0x003FEFB0u; return; } if (c.pc != 0x003D3BA0u) [[unlikely]] return; }
L_003D3BA0:
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3BACu);  if (depth < kMaxDepth) unit_0000(c, 178u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x003D3BACu) [[unlikely]] return; }
L_003D3BAC:
    set32(c.r[23], ld32((c.r[28].w[0] - 26156u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003D3BC8; } }
    set32(c.r[22], ld32((c.r[28].w[0] - 26156u)));
    c.r[20].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003D3BC8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 256u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D3BFC; } }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3BE4u);  if (depth < kMaxDepth) unit_00CD(c, 163u, depth + 1u); else { c.pc = 0x00435060u; return; } if (c.pc != 0x003D3BE4u) [[unlikely]] return; }
L_003D3BE4:
    set32(c.r[21], ld32((c.r[28].w[0] - 25180u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 19827u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3BFCu);  if (depth < kMaxDepth) unit_00CD(c, 138u, depth + 1u); else { c.pc = 0x00434E50u; return; } if (c.pc != 0x003D3BFCu) [[unlikely]] return; }
L_003D3BFC:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[28].w[0] - 29244u), c.r[3].w[0]);
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24752u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D3C68; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 24752u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3C68u);  if (depth < kMaxDepth) unit_00D2(c, 316u, depth + 1u); else { c.pc = 0x0044AA00u; return; } if (c.pc != 0x003D3C68u) [[unlikely]] return; }
L_003D3C68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3C80:
    set32(c.r[29], c.r[29].w[0] - 224u);
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
    st32((c.r[29].w[0] + 208u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u + 4u);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D3E8C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D3CDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3EC4; } }
L_003D3CDC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26888u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003D3EC4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[29].w[0] + 175u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3D54; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], c.r[18].w[0] + 0u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003D3D54; } }
    set32(c.r[30], ld32((c.r[28].w[0] - 26860u)));
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 0u);
    set32(c.r[23], ld32((c.r[2].w[0] + 4u)));
    c.r[22].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[29].w[0] + 175u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D3D54u) [[unlikely]] return; }
L_003D3D54:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[28].w[0] - 26888u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D3DEC; } }
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19817u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D88u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D3D88u) [[unlikely]] return; }
L_003D3D88:
    set32(c.r[21], ld32((c.r[28].w[0] - 22052u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3D98u);  if (depth < kMaxDepth) unit_0103(c, 70u, depth + 1u); else { c.pc = 0x0050C6D0u; return; } if (c.pc != 0x003D3D98u) [[unlikely]] return; }
L_003D3D98:
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 160u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26884u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003D3EC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3DCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D3DCCu) [[unlikely]] return; }
L_003D3DCC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26892u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 26892u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3DE0u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D3DE0u) [[unlikely]] return; }
L_003D3DE0:
    st8((c.r[28].w[0] - 26884u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3EC4; } }
L_003D3DEC:
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19808u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E04u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D3E04u) [[unlikely]] return; }
L_003D3E04:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26884u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D3E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003D3E18u) [[unlikely]] return; }
L_003D3E18:
    set32(c.r[2], ld32((c.r[28].w[0] - 26892u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 26892u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E2Cu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003D3E2Cu) [[unlikely]] return; }
L_003D3E2C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 26884u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003D3E34:
    set32(c.r[20], ld32((c.r[28].w[0] - 22052u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E44u);  if (depth < kMaxDepth) unit_0103(c, 74u, depth + 1u); else { c.pc = 0x0050C730u; return; } if (c.pc != 0x003D3E44u) [[unlikely]] return; }
L_003D3E44:
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 160u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], ld32((c.r[28].w[0] - 24752u)));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D3EC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3E84u);  if (depth < kMaxDepth) unit_00D2(c, 316u, depth + 1u); else { c.pc = 0x0044AA00u; return; } if (c.pc != 0x003D3E84u) [[unlikely]] return; }
L_003D3E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003D3EC4; } }
L_003D3E8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003D3EAC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[2].w[0] + 164u), c.r[3].w[0]);
    c.budget -= 4;
L_003D3EAC:
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 19796u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3EC4u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003D3EC4u) [[unlikely]] return; }
L_003D3EC4:
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
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F14u);  if (depth < kMaxDepth) unit_00D1(c, 155u, depth + 1u); else { c.pc = 0x00444DB0u; return; } if (c.pc != 0x003D3F14u) [[unlikely]] return; }
L_003D3F14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F44u);  if (depth < kMaxDepth) unit_00D1(c, 155u, depth + 1u); else { c.pc = 0x00444DB0u; return; } if (c.pc != 0x003D3F44u) [[unlikely]] return; }
L_003D3F44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3F7Cu);  if (depth < kMaxDepth) unit_00FF(c, 329u, depth + 1u); else { c.pc = 0x004FEA90u; return; } if (c.pc != 0x003D3F7Cu) [[unlikely]] return; }
L_003D3F7C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003D3FA4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3FA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D3FA4u) [[unlikely]] return; }
L_003D3FA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[3].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3FC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003D3FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003D3FF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003D3FF0u) [[unlikely]] return; }
L_003D3FF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26892u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B5(c, 2u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_00B5(c, 1u, depth);
}

}
