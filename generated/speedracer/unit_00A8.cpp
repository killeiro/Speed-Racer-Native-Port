#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A8[4096] = {
    1, 2, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36,
    0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0,
    53, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    59, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0,
    0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206,
    0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0,
    241, 0, 242, 0, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0,
    311, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 328, 329, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0,
    334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344,
    0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0,
    366, 0, 0, 367, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0,
    383, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0,
    0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
};

void unit_00A8(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A0000;
    case 2u: goto L_003A0004;
    case 3u: goto L_003A0008;
    case 4u: goto L_003A000C;
    case 5u: goto L_003A00C0;
    case 6u: goto L_003A00E0;
    case 7u: goto L_003A010C;
    case 8u: goto L_003A011C;
    case 9u: goto L_003A0124;
    case 10u: goto L_003A0138;
    case 11u: goto L_003A0148;
    case 12u: goto L_003A0158;
    case 13u: goto L_003A0160;
    case 14u: goto L_003A0198;
    case 15u: goto L_003A01D4;
    case 16u: goto L_003A01EC;
    case 17u: goto L_003A0218;
    case 18u: goto L_003A0280;
    case 19u: goto L_003A02D4;
    case 20u: goto L_003A02F4;
    case 21u: goto L_003A0320;
    case 22u: goto L_003A0330;
    case 23u: goto L_003A0338;
    case 24u: goto L_003A034C;
    case 25u: goto L_003A035C;
    case 26u: goto L_003A036C;
    case 27u: goto L_003A0374;
    case 28u: goto L_003A03A0;
    case 29u: goto L_003A03B0;
    case 30u: goto L_003A03C0;
    case 31u: goto L_003A03FC;
    case 32u: goto L_003A0414;
    case 33u: goto L_003A0440;
    case 34u: goto L_003A04AC;
    case 35u: goto L_003A04EC;
    case 36u: goto L_003A04FC;
    case 37u: goto L_003A0504;
    case 38u: goto L_003A0518;
    case 39u: goto L_003A0528;
    case 40u: goto L_003A0538;
    case 41u: goto L_003A0540;
    case 42u: goto L_003A0570;
    case 43u: goto L_003A05C0;
    case 44u: goto L_003A05D8;
    case 45u: goto L_003A05F8;
    case 46u: goto L_003A0650;
    case 47u: goto L_003A0690;
    case 48u: goto L_003A06B8;
    case 49u: goto L_003A071C;
    case 50u: goto L_003A073C;
    case 51u: goto L_003A0768;
    case 52u: goto L_003A0778;
    case 53u: goto L_003A0780;
    case 54u: goto L_003A0794;
    case 55u: goto L_003A07A4;
    case 56u: goto L_003A07B4;
    case 57u: goto L_003A07BC;
    case 58u: goto L_003A07F0;
    case 59u: goto L_003A0800;
    case 60u: goto L_003A0810;
    case 61u: goto L_003A0824;
    case 62u: goto L_003A0848;
    case 63u: goto L_003A0854;
    case 64u: goto L_003A0880;
    case 65u: goto L_003A08CC;
    case 66u: goto L_003A08F4;
    case 67u: goto L_003A0934;
    case 68u: goto L_003A0970;
    case 69u: goto L_003A09B4;
    case 70u: goto L_003A09C4;
    case 71u: goto L_003A09CC;
    case 72u: goto L_003A09E0;
    case 73u: goto L_003A09F0;
    case 74u: goto L_003A0A08;
    case 75u: goto L_003A0A18;
    case 76u: goto L_003A0A20;
    case 77u: goto L_003A0A50;
    case 78u: goto L_003A0A9C;
    case 79u: goto L_003A0ABC;
    case 80u: goto L_003A0AD8;
    case 81u: goto L_003A0B40;
    case 82u: goto L_003A0B58;
    case 83u: goto L_003A0B80;
    case 84u: goto L_003A0BDC;
    case 85u: goto L_003A0C20;
    case 86u: goto L_003A0C44;
    case 87u: goto L_003A0C70;
    case 88u: goto L_003A0C80;
    case 89u: goto L_003A0C88;
    case 90u: goto L_003A0C9C;
    case 91u: goto L_003A0CAC;
    case 92u: goto L_003A0CBC;
    case 93u: goto L_003A0CC4;
    case 94u: goto L_003A0CF8;
    case 95u: goto L_003A0D34;
    case 96u: goto L_003A0D4C;
    case 97u: goto L_003A0D78;
    case 98u: goto L_003A0DE0;
    case 99u: goto L_003A0E30;
    case 100u: goto L_003A0E70;
    case 101u: goto L_003A0E80;
    case 102u: goto L_003A0E88;
    case 103u: goto L_003A0E9C;
    case 104u: goto L_003A0EAC;
    case 105u: goto L_003A0EBC;
    case 106u: goto L_003A0EC4;
    case 107u: goto L_003A0EF0;
    case 108u: goto L_003A0F38;
    case 109u: goto L_003A0F50;
    case 110u: goto L_003A0F80;
    case 111u: goto L_003A0FE8;
    case 112u: goto L_003A1008;
    case 113u: goto L_003A1048;
    case 114u: goto L_003A1058;
    case 115u: goto L_003A1060;
    case 116u: goto L_003A1074;
    case 117u: goto L_003A1084;
    case 118u: goto L_003A1094;
    case 119u: goto L_003A109C;
    case 120u: goto L_003A10D0;
    case 121u: goto L_003A10E8;
    case 122u: goto L_003A10F0;
    case 123u: goto L_003A1124;
    case 124u: goto L_003A1158;
    case 125u: goto L_003A11AC;
    case 126u: goto L_003A1248;
    case 127u: goto L_003A12A4;
    case 128u: goto L_003A12C0;
    case 129u: goto L_003A12D0;
    case 130u: goto L_003A1620;
    case 131u: goto L_003A1648;
    case 132u: goto L_003A165C;
    case 133u: goto L_003A16A0;
    case 134u: goto L_003A16E0;
    case 135u: goto L_003A1720;
    case 136u: goto L_003A175C;
    case 137u: goto L_003A1774;
    case 138u: goto L_003A1788;
    case 139u: goto L_003A17B0;
    case 140u: goto L_003A17D8;
    case 141u: goto L_003A17E8;
    case 142u: goto L_003A1820;
    case 143u: goto L_003A1830;
    case 144u: goto L_003A187C;
    case 145u: goto L_003A18E0;
    case 146u: goto L_003A1970;
    case 147u: goto L_003A19AC;
    case 148u: goto L_003A19F0;
    case 149u: goto L_003A1A28;
    case 150u: goto L_003A1A38;
    case 151u: goto L_003A1A84;
    case 152u: goto L_003A1AE8;
    case 153u: goto L_003A1B78;
    case 154u: goto L_003A1BB4;
    case 155u: goto L_003A1BF8;
    case 156u: goto L_003A1C10;
    case 157u: goto L_003A1C20;
    case 158u: goto L_003A1C64;
    case 159u: goto L_003A1C88;
    case 160u: goto L_003A1C9C;
    case 161u: goto L_003A1CAC;
    case 162u: goto L_003A1CD4;
    case 163u: goto L_003A1D08;
    case 164u: goto L_003A1D28;
    case 165u: goto L_003A1D40;
    case 166u: goto L_003A1D50;
    case 167u: goto L_003A1D94;
    case 168u: goto L_003A1DB8;
    case 169u: goto L_003A1DC8;
    case 170u: goto L_003A1DD8;
    case 171u: goto L_003A1DE8;
    case 172u: goto L_003A1DF8;
    case 173u: goto L_003A1E30;
    case 174u: goto L_003A1E40;
    case 175u: goto L_003A1E68;
    case 176u: goto L_003A1EA0;
    case 177u: goto L_003A1F08;
    case 178u: goto L_003A1F98;
    case 179u: goto L_003A1FDC;
    case 180u: goto L_003A2020;
    case 181u: goto L_003A2034;
    case 182u: goto L_003A2040;
    case 183u: goto L_003A2050;
    case 184u: goto L_003A2060;
    case 185u: goto L_003A2090;
    case 186u: goto L_003A20A0;
    case 187u: goto L_003A20CC;
    case 188u: goto L_003A20E0;
    case 189u: goto L_003A2110;
    case 190u: goto L_003A2168;
    case 191u: goto L_003A2178;
    case 192u: goto L_003A21B0;
    case 193u: goto L_003A21D8;
    case 194u: goto L_003A2228;
    case 195u: goto L_003A22A0;
    case 196u: goto L_003A22C4;
    case 197u: goto L_003A234C;
    case 198u: goto L_003A2380;
    case 199u: goto L_003A23A4;
    case 200u: goto L_003A23B0;
    case 201u: goto L_003A23B8;
    case 202u: goto L_003A23C0;
    case 203u: goto L_003A23E8;
    case 204u: goto L_003A2464;
    case 205u: goto L_003A2470;
    case 206u: goto L_003A247C;
    case 207u: goto L_003A248C;
    case 208u: goto L_003A2498;
    case 209u: goto L_003A24A8;
    case 210u: goto L_003A24B4;
    case 211u: goto L_003A24D8;
    case 212u: goto L_003A24E8;
    case 213u: goto L_003A2500;
    case 214u: goto L_003A2510;
    case 215u: goto L_003A2528;
    case 216u: goto L_003A2534;
    case 217u: goto L_003A2540;
    case 218u: goto L_003A2550;
    case 219u: goto L_003A2578;
    case 220u: goto L_003A25BC;
    case 221u: goto L_003A25CC;
    case 222u: goto L_003A25D4;
    case 223u: goto L_003A25E8;
    case 224u: goto L_003A2620;
    case 225u: goto L_003A264C;
    case 226u: goto L_003A2660;
    case 227u: goto L_003A2690;
    case 228u: goto L_003A269C;
    case 229u: goto L_003A26A8;
    case 230u: goto L_003A2748;
    case 231u: goto L_003A2750;
    case 232u: goto L_003A2758;
    case 233u: goto L_003A2768;
    case 234u: goto L_003A2790;
    case 235u: goto L_003A2798;
    case 236u: goto L_003A27A0;
    case 237u: goto L_003A27A8;
    case 238u: goto L_003A27B0;
    case 239u: goto L_003A27E0;
    case 240u: goto L_003A27F8;
    case 241u: goto L_003A2800;
    case 242u: goto L_003A2808;
    case 243u: goto L_003A2814;
    case 244u: goto L_003A2820;
    case 245u: goto L_003A2828;
    case 246u: goto L_003A2830;
    case 247u: goto L_003A2840;
    case 248u: goto L_003A2854;
    case 249u: goto L_003A2898;
    case 250u: goto L_003A28A0;
    case 251u: goto L_003A28A8;
    case 252u: goto L_003A28CC;
    case 253u: goto L_003A2938;
    case 254u: goto L_003A2948;
    case 255u: goto L_003A295C;
    case 256u: goto L_003A296C;
    case 257u: goto L_003A2978;
    case 258u: goto L_003A29C8;
    case 259u: goto L_003A29EC;
    case 260u: goto L_003A29F4;
    case 261u: goto L_003A2A08;
    case 262u: goto L_003A2A20;
    case 263u: goto L_003A2A54;
    case 264u: goto L_003A2A5C;
    case 265u: goto L_003A2A70;
    case 266u: goto L_003A2A88;
    case 267u: goto L_003A2AD0;
    case 268u: goto L_003A2AD8;
    case 269u: goto L_003A2AE8;
    case 270u: goto L_003A2B00;
    case 271u: goto L_003A2B28;
    case 272u: goto L_003A2B44;
    case 273u: goto L_003A2B80;
    case 274u: goto L_003A2C80;
    case 275u: goto L_003A2C94;
    case 276u: goto L_003A2C9C;
    case 277u: goto L_003A2CC0;
    case 278u: goto L_003A2EE0;
    case 279u: goto L_003A2EF8;
    case 280u: goto L_003A2F30;
    case 281u: goto L_003A2F48;
    case 282u: goto L_003A2F84;
    case 283u: goto L_003A2F94;
    case 284u: goto L_003A2FC8;
    case 285u: goto L_003A2FD8;
    case 286u: goto L_003A3000;
    case 287u: goto L_003A3018;
    case 288u: goto L_003A3040;
    case 289u: goto L_003A3048;
    case 290u: goto L_003A3088;
    case 291u: goto L_003A30C8;
    case 292u: goto L_003A30D4;
    case 293u: goto L_003A30E4;
    case 294u: goto L_003A30F8;
    case 295u: goto L_003A3110;
    case 296u: goto L_003A3124;
    case 297u: goto L_003A3140;
    case 298u: goto L_003A3188;
    case 299u: goto L_003A3190;
    case 300u: goto L_003A3198;
    case 301u: goto L_003A31A8;
    case 302u: goto L_003A31B0;
    case 303u: goto L_003A31B8;
    case 304u: goto L_003A31C0;
    case 305u: goto L_003A31C8;
    case 306u: goto L_003A31D0;
    case 307u: goto L_003A31D8;
    case 308u: goto L_003A31E0;
    case 309u: goto L_003A31F0;
    case 310u: goto L_003A31F8;
    case 311u: goto L_003A3200;
    case 312u: goto L_003A3208;
    case 313u: goto L_003A3210;
    case 314u: goto L_003A3220;
    case 315u: goto L_003A3248;
    case 316u: goto L_003A3250;
    case 317u: goto L_003A3258;
    case 318u: goto L_003A326C;
    case 319u: goto L_003A3290;
    case 320u: goto L_003A3298;
    case 321u: goto L_003A32A0;
    case 322u: goto L_003A32C0;
    case 323u: goto L_003A32D8;
    case 324u: goto L_003A32F8;
    case 325u: goto L_003A3310;
    case 326u: goto L_003A3318;
    case 327u: goto L_003A3320;
    case 328u: goto L_003A332C;
    case 329u: goto L_003A3330;
    case 330u: goto L_003A3338;
    case 331u: goto L_003A3348;
    case 332u: goto L_003A3370;
    case 333u: goto L_003A3378;
    case 334u: goto L_003A3380;
    case 335u: goto L_003A3388;
    case 336u: goto L_003A33B0;
    case 337u: goto L_003A33B8;
    case 338u: goto L_003A33C0;
    case 339u: goto L_003A3414;
    case 340u: goto L_003A3430;
    case 341u: goto L_003A343C;
    case 342u: goto L_003A3450;
    case 343u: goto L_003A3468;
    case 344u: goto L_003A347C;
    case 345u: goto L_003A3488;
    case 346u: goto L_003A34A0;
    case 347u: goto L_003A34D8;
    case 348u: goto L_003A3550;
    case 349u: goto L_003A3568;
    case 350u: goto L_003A3570;
    case 351u: goto L_003A3598;
    case 352u: goto L_003A35AC;
    case 353u: goto L_003A3610;
    case 354u: goto L_003A3618;
    case 355u: goto L_003A3620;
    case 356u: goto L_003A3628;
    case 357u: goto L_003A3630;
    case 358u: goto L_003A3640;
    case 359u: goto L_003A3668;
    case 360u: goto L_003A3670;
    case 361u: goto L_003A3678;
    case 362u: goto L_003A36C0;
    case 363u: goto L_003A36D8;
    case 364u: goto L_003A36F0;
    case 365u: goto L_003A36F8;
    case 366u: goto L_003A3700;
    case 367u: goto L_003A370C;
    case 368u: goto L_003A3710;
    case 369u: goto L_003A3718;
    case 370u: goto L_003A3728;
    case 371u: goto L_003A3750;
    case 372u: goto L_003A3768;
    case 373u: goto L_003A37C0;
    case 374u: goto L_003A37D0;
    case 375u: goto L_003A37E0;
    case 376u: goto L_003A37F0;
    case 377u: goto L_003A384C;
    case 378u: goto L_003A3860;
    case 379u: goto L_003A3888;
    case 380u: goto L_003A38A0;
    case 381u: goto L_003A38C0;
    case 382u: goto L_003A38F8;
    case 383u: goto L_003A3900;
    case 384u: goto L_003A3908;
    case 385u: goto L_003A3910;
    case 386u: goto L_003A3920;
    case 387u: goto L_003A3948;
    case 388u: goto L_003A399C;
    case 389u: goto L_003A39AC;
    case 390u: goto L_003A39BC;
    case 391u: goto L_003A39C4;
    case 392u: goto L_003A39CC;
    case 393u: goto L_003A39E4;
    case 394u: goto L_003A3A30;
    case 395u: goto L_003A3A44;
    case 396u: goto L_003A3A70;
    case 397u: goto L_003A3A8C;
    case 398u: goto L_003A3A94;
    case 399u: goto L_003A3A9C;
    case 400u: goto L_003A3AAC;
    case 401u: goto L_003A3AC0;
    case 402u: goto L_003A3AD4;
    case 403u: goto L_003A3B00;
    case 404u: goto L_003A3B18;
    case 405u: goto L_003A3B28;
    case 406u: goto L_003A3B40;
    case 407u: goto L_003A3B88;
    case 408u: goto L_003A3BF0;
    case 409u: goto L_003A3C5C;
    case 410u: goto L_003A3C90;
    case 411u: goto L_003A3CD0;
    case 412u: goto L_003A3D00;
    case 413u: goto L_003A3D58;
    case 414u: goto L_003A3D90;
    case 415u: goto L_003A3DF0;
    case 416u: goto L_003A3E3C;
    case 417u: goto L_003A3E78;
    case 418u: goto L_003A3EBC;
    case 419u: goto L_003A3F2C;
    case 420u: goto L_003A3F8C;
    case 421u: goto L_003A3FB8;
    case 422u: goto L_003A3FF0;
    default: bad_entry(c, 0x003A0000u); return;
    }
L_003A0000:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 1;
L_003A0004:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 1;
L_003A0008:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_003A000C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[5].w[0] + 25968u);  if (t) { goto L_003A001C; } }
    st8((c.r[19].w[0] + 1103u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], 0u + 1023u);
    c.budget -= 2;
L_003A001C:
    set32(c.r[2], 0u + 1u);
    ldl(c.r[4], (c.r[16].w[0] + 7u));
    ldr(c.r[4], (c.r[16].w[0]));
    ldl(c.r[5], (c.r[16].w[0] + 15u));
    ldr(c.r[5], (c.r[16].w[0] + 8u));
    ldl(c.r[6], (c.r[16].w[0] + 23u));
    ldr(c.r[6], (c.r[16].w[0] + 16u));
    ldl(c.r[7], (c.r[16].w[0] + 31u));
    ldr(c.r[7], (c.r[16].w[0] + 24u));
    sdl(c.r[4], (c.r[19].w[0] + 23u));
    sdr(c.r[4], (c.r[19].w[0] + 16u));
    sdl(c.r[5], (c.r[19].w[0] + 31u));
    sdr(c.r[5], (c.r[19].w[0] + 24u));
    sdl(c.r[6], (c.r[19].w[0] + 39u));
    sdr(c.r[6], (c.r[19].w[0] + 32u));
    sdl(c.r[7], (c.r[19].w[0] + 47u));
    sdr(c.r[7], (c.r[19].w[0] + 40u));
    ldl(c.r[4], (c.r[16].w[0] + 39u));
    ldr(c.r[4], (c.r[16].w[0] + 32u));
    ldl(c.r[5], (c.r[16].w[0] + 47u));
    ldr(c.r[5], (c.r[16].w[0] + 40u));
    ldl(c.r[6], (c.r[16].w[0] + 55u));
    ldr(c.r[6], (c.r[16].w[0] + 48u));
    ldl(c.r[7], (c.r[16].w[0] + 63u));
    ldr(c.r[7], (c.r[16].w[0] + 56u));
    sdl(c.r[4], (c.r[19].w[0] + 55u));
    sdr(c.r[4], (c.r[19].w[0] + 48u));
    sdl(c.r[5], (c.r[19].w[0] + 63u));
    sdr(c.r[5], (c.r[19].w[0] + 56u));
    sdl(c.r[6], (c.r[19].w[0] + 71u));
    sdr(c.r[6], (c.r[19].w[0] + 64u));
    sdl(c.r[7], (c.r[19].w[0] + 79u));
    sdr(c.r[7], (c.r[19].w[0] + 72u));
    set32(c.r[21], c.r[21].w[0] - 27072u);
    st32((c.r[19].w[0] + 12u), c.r[23].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], c.r[30].w[0] - 30208u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A00C0u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A00C0u) [[unlikely]] return; }
L_003A00C0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1104u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A00E0u); st32((c.r[19].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A00E0u) [[unlikely]] return; }
L_003A00E0:
    set32(c.r[4], c.r[22].w[0] - 24320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + 81u);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A010Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x003A010Cu) [[unlikely]] return; }
L_003A010C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A012C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A011Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A011Cu) [[unlikely]] return; }
L_003A011C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0124u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0124u) [[unlikely]] return; }
L_003A0124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0164; } }
L_003A012C:
    c.r[2].d[0] = c.r[21].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0138u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0138u) [[unlikely]] return; }
L_003A0138:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003A0150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0148u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0148u) [[unlikely]] return; }
L_003A0148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0164; } }
L_003A0150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0158u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003A0158u) [[unlikely]] return; }
L_003A0158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0160u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0160u) [[unlikely]] return; }
L_003A0160:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003A0164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003A0198:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[22].w[0] - 30208u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A01D4u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x003A01D4u) [[unlikely]] return; }
L_003A01D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_003A01F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A01ECu);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x003A01ECu) [[unlikely]] return; }
L_003A01EC:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_003A01F0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A0244; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_003A0218:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_003A0254; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0218u | kUnwind; return; } goto L_003A0218; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_003A0258; } }
L_003A0244:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 4;
L_003A0254:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_003A0258:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_003A0260; }
L_003A0260:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A02A4; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_003A0280:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_003A02A4; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0280u | kUnwind; return; } goto L_003A0280; }
L_003A02A4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_003A02B0; }
L_003A02B0:
    set32(c.r[3], c.r[7].w[0] + 25992u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[16], c.r[22].w[0] - 30208u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A02D4u); set32(c.r[20], c.r[20].w[0] - 27072u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A02D4u) [[unlikely]] return; }
L_003A02D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2060u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A02F4u); st32((c.r[18].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A02F4u) [[unlikely]] return; }
L_003A02F4:
    set32(c.r[4], c.r[21].w[0] - 24320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 17u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0320u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x003A0320u) [[unlikely]] return; }
L_003A0320:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A0340; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0330u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0330u) [[unlikely]] return; }
L_003A0330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0338u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0338u) [[unlikely]] return; }
L_003A0338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0378; } }
L_003A0340:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A034Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A034Cu) [[unlikely]] return; }
L_003A034C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003A0364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A035Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A035Cu) [[unlikely]] return; }
L_003A035C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0378; } }
L_003A0364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A036Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003A036Cu) [[unlikely]] return; }
L_003A036C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0374u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0374u) [[unlikely]] return; }
L_003A0374:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003A0378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003A03A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A03B0u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_00A7(c, 335u, depth + 1u); else { c.pc = 0x0039F290u; return; } if (c.pc != 0x003A03B0u) [[unlikely]] return; }
L_003A03B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A03C0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[4], 0u + 19u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    set32(c.r[16], c.r[22].w[0] - 30208u);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A03FCu); st64((c.r[29].w[0] + 96u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x003A03FCu) [[unlikely]] return; }
L_003A03FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_003A0418; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0414u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x003A0414u) [[unlikely]] return; }
L_003A0414:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_003A0418:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A046C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_003A0440:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_003A047C; } }
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0440u | kUnwind; return; } goto L_003A0440; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_003A0480; } }
L_003A046C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 4;
L_003A047C:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_003A0480:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_003A0488; }
L_003A0488:
    st32((c.r[16].w[0] + 16u), c.r[21].w[0]);
    set32(c.r[3], c.r[6].w[0] + 26016u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] - 27072u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A04ACu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A04ACu) [[unlikely]] return; }
L_003A04AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] - 24320u);
    set32(c.r[7], c.r[22].w[0] - 30208u);
    set32(c.r[5], 0u + 19u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 1044u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A04ECu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x003A04ECu) [[unlikely]] return; }
L_003A04EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A050C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A04FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A04FCu) [[unlikely]] return; }
L_003A04FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0504u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0504u) [[unlikely]] return; }
L_003A0504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0544; } }
L_003A050C:
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0518u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0518u) [[unlikely]] return; }
L_003A0518:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003A0530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0528u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0528u) [[unlikely]] return; }
L_003A0528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0544; } }
L_003A0530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0538u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003A0538u) [[unlikely]] return; }
L_003A0538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0540u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0540u) [[unlikely]] return; }
L_003A0540:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003A0544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003A0570:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 20u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[30].w[0] - 30208u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05C0u); st64((c.r[29].w[0] + 128u), c.r[20].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x003A05C0u) [[unlikely]] return; }
L_003A05C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_003A05DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A05D8u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x003A05D8u) [[unlikely]] return; }
L_003A05D8:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_003A05DC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A0624; } }
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_003A05F8:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_003A0628; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A05F8u | kUnwind; return; } goto L_003A05F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_003A062C; } }
L_003A0624:
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_003A0628:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_003A062C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_003A0634; }
L_003A0634:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A0674; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003A0650:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[5].w[0]);  if (t) { goto L_003A0674; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0650u | kUnwind; return; } goto L_003A0650; }
L_003A0674:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_003A0680; }
L_003A0680:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003A0698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0690u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0690u) [[unlikely]] return; }
L_003A0690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 7u);  if (t) { goto L_003A07C0; } }
L_003A0698:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003A06E0; } }
    set32(c.r[6], c.r[18].w[0] + 2060u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 6;
L_003A06B8:
    set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A06B8u | kUnwind; return; } goto L_003A06B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 3088u), c.r[17].w[0]);  if (t) { goto L_003A06F4; } }
L_003A06E0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[18].w[0] + 3088u), c.r[17].w[0]);
    c.budget -= 5;
L_003A06F4:
    set32(c.r[3], c.r[7].w[0] + 26040u);
    st32((c.r[18].w[0] + 3084u), c.r[23].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[16], c.r[30].w[0] - 30208u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A071Cu); set32(c.r[20], c.r[20].w[0] - 27072u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A071Cu) [[unlikely]] return; }
L_003A071C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 3092u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A073Cu); st32((c.r[18].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A073Cu) [[unlikely]] return; }
L_003A073C:
    set32(c.r[4], c.r[21].w[0] - 24320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 20u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 3092u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0768u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x003A0768u) [[unlikely]] return; }
L_003A0768:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A0788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0778u) [[unlikely]] return; }
L_003A0778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0780u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0780u) [[unlikely]] return; }
L_003A0780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A07C0; } }
L_003A0788:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0794u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0794u) [[unlikely]] return; }
L_003A0794:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003A07AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A07A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A07A4u) [[unlikely]] return; }
L_003A07A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A07C0; } }
L_003A07AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A07B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003A07B4u) [[unlikely]] return; }
L_003A07B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A07BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A07BCu) [[unlikely]] return; }
L_003A07BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003A07C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003A07F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0800u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_00A7(c, 335u, depth + 1u); else { c.pc = 0x0039F290u; return; } if (c.pc != 0x003A0800u) [[unlikely]] return; }
L_003A0800:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A0810:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 5;
L_003A0824:
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[17], c.r[20].w[0] - 30208u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0848u); st64((c.r[29].w[0] + 96u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 148u, depth + 1u); else { c.pc = 0x0039D700u; return; } if (c.pc != 0x003A0848u) [[unlikely]] return; }
L_003A0848:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0854u); set32(c.r[4], 0u + 22u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x003A0854u) [[unlikely]] return; }
L_003A0854:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A0878; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003A0878; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A0888; } }
L_003A0878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0880u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0880u) [[unlikely]] return; }
L_003A0880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_003A0A24; } }
L_003A0888:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 24832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st64((c.r[17].w[0] + 16u), c.r[19].d[0]);
    st32((c.r[17].w[0] + 24u), c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26064u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[18].d[0] & 32768ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A08CCu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A08CCu) [[unlikely]] return; }
L_003A08CC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] - 30208u), c.r[19].w[0]);  if (t) { goto L_003A0978; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A08F4u); set32(c.r[4], ld32((c.r[21].w[0] + 17324u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003A08F4u) [[unlikely]] return; }
L_003A08F4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 17176u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A0928; } }
    set32(c.r[3], ld32((c.r[20].w[0] - 30208u)));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] + 17176u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] - 30208u), c.r[2].w[0]);  if (t) { goto L_003A0968; } }
L_003A0928:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_003A0934:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_003A0968; } }
    set32(c.r[3], c.r[7].w[0] + 17176u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0934u | kUnwind; return; } goto L_003A0934; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_003A0968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0970u); set32(c.r[4], ld32((c.r[21].w[0] + 17324u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003A0970u) [[unlikely]] return; }
L_003A0970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 27072u);  if (t) { goto L_003A0988; } }
L_003A0978:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 27072u);
    c.budget -= 4;
L_003A0988:
    set32(c.r[4], c.r[22].w[0] - 24320u);
    set32(c.r[7], c.r[20].w[0] - 30208u);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A09B4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x003A09B4u) [[unlikely]] return; }
L_003A09B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A09D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A09C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A09C4u) [[unlikely]] return; }
L_003A09C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A09CCu);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A09CCu) [[unlikely]] return; }
L_003A09CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0A24; } }
L_003A09D4:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A09E0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A09E0u) [[unlikely]] return; }
L_003A09E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003A09F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A09F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A09F0u) [[unlikely]] return; }
L_003A09F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0A24; } }
L_003A09F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003A0A10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A08u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0A08u) [[unlikely]] return; }
L_003A0A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A0A24; } }
L_003A0A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A18u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003A0A18u) [[unlikely]] return; }
L_003A0A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A20u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0A20u) [[unlikely]] return; }
L_003A0A20:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003A0A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003A0A50:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    set32(c.r[4], 0u + 23u);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0A9Cu); st32((c.r[29].w[0] + 52u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x003A0A9Cu) [[unlikely]] return; }
L_003A0A9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[2].w[0] - 30208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0]));  goto L_003A0AC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0ABCu);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x003A0ABCu) [[unlikely]] return; }
L_003A0ABC:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 1;
L_003A0AC0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A0B04; } }
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003A0AD8:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[5].w[0]);  if (t) { goto L_003A0B08; } }
    set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0AD8u | kUnwind; return; } goto L_003A0AD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_003A0B0C; } }
L_003A0B04:
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003A0B08:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_003A0B0C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[17].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_003A0B14; }
L_003A0B14:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = c.r[30].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_003A0B50; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 17921u);  if (t) { goto L_003A0B50; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_003A0B60; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_003A0B48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B40u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0B40u) [[unlikely]] return; }
L_003A0B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A0CC8; } }
L_003A0B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003A0B60; } }
L_003A0B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0B58u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0B58u) [[unlikely]] return; }
L_003A0B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 22u);  if (t) { goto L_003A0CC8; } }
L_003A0B60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003A0BA8; } }
    set32(c.r[6], c.r[17].w[0] + 1036u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 6;
L_003A0B80:
    set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0B80u | kUnwind; return; } goto L_003A0B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 2064u), c.r[16].w[0]);  if (t) { goto L_003A0BBC; } }
L_003A0BA8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[17].w[0] + 2064u), c.r[16].w[0]);
    c.budget -= 5;
L_003A0BBC:
    set32(c.r[3], c.r[7].w[0] + 26088u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[17].w[0] + 2060u), c.r[21].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0BDCu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A0BDCu) [[unlikely]] return; }
L_003A0BDC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 2072u), c.r[30].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], 0u + 17921u);
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[17].w[0]), c.r[20].w[0]);
    c.budget -= 10;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 2068u), c.r[2].w[0]);  if (t) { goto L_003A0C28; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[17], 0u + 28u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C20u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A0C20u) [[unlikely]] return; }
L_003A0C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A0C30; } }
L_003A0C28:
    set32(c.r[17], 0u + 23u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 2;
L_003A0C30:
    set32(c.r[5], 0u + 2076u);
    set32(c.r[16], c.r[2].w[0] - 30208u);
    set32(c.r[18], c.r[22].w[0] - 27072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A0C44u) [[unlikely]] return; }
L_003A0C44:
    set32(c.r[4], c.r[23].w[0] - 24320u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2076u);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C70u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x003A0C70u) [[unlikely]] return; }
L_003A0C70:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A0C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0C80u) [[unlikely]] return; }
L_003A0C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C88u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0C88u) [[unlikely]] return; }
L_003A0C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0CC8; } }
L_003A0C90:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0C9Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0C9Cu) [[unlikely]] return; }
L_003A0C9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003A0CB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0CACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0CACu) [[unlikely]] return; }
L_003A0CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0CC8; } }
L_003A0CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0CBCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003A0CBCu) [[unlikely]] return; }
L_003A0CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0CC4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0CC4u) [[unlikely]] return; }
L_003A0CC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003A0CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003A0CF8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[22].w[0] - 30208u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0D34u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x003A0D34u) [[unlikely]] return; }
L_003A0D34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_003A0D50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0D4Cu);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x003A0D4Cu) [[unlikely]] return; }
L_003A0D4C:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_003A0D50:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A0DA4; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_003A0D78:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_003A0DB4; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0D78u | kUnwind; return; } goto L_003A0D78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_003A0DB8; } }
L_003A0DA4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 4;
L_003A0DB4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_003A0DB8:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_003A0DC0; }
L_003A0DC0:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A0E04; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_003A0DE0:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_003A0E04; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0DE0u | kUnwind; return; } goto L_003A0DE0; }
L_003A0E04:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_003A0E10; }
L_003A0E10:
    set32(c.r[2], c.r[7].w[0] + 26112u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[16], c.r[20].w[0] - 27072u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E30u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A0E30u) [[unlikely]] return; }
L_003A0E30:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] - 24320u);
    set32(c.r[7], c.r[22].w[0] - 30208u);
    set32(c.r[5], 0u + 24u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E70u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x003A0E70u) [[unlikely]] return; }
L_003A0E70:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A0E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0E80u) [[unlikely]] return; }
L_003A0E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E88u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0E88u) [[unlikely]] return; }
L_003A0E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0EC8; } }
L_003A0E90:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0E9Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A0E9Cu) [[unlikely]] return; }
L_003A0E9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003A0EB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0EACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0EACu) [[unlikely]] return; }
L_003A0EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A0EC8; } }
L_003A0EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0EBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003A0EBCu) [[unlikely]] return; }
L_003A0EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0EC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A0EC4u) [[unlikely]] return; }
L_003A0EC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003A0EC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003A0EF0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    set32(c.r[18], c.r[30].w[0] - 30208u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F38u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x003A0F38u) [[unlikely]] return; }
L_003A0F38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_003A0F54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0F50u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x003A0F50u) [[unlikely]] return; }
L_003A0F50:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_003A0F54:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A0FAC; } }
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
L_003A0F80:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_003A0FC0; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A0F80u | kUnwind; return; } goto L_003A0F80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_003A0FC4; } }
L_003A0FAC:
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 5;
L_003A0FC0:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_003A0FC4:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_003A0FCC; }
L_003A0FCC:
    set32(c.r[2], 0u + 1023u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    if (c.r[6].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    st32((c.r[18].w[0] + 16u), c.r[21].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A0FE8u); st32((c.r[18].w[0] + 12u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A0FE8u) [[unlikely]] return; }
L_003A0FE8:
    set32(c.r[16], c.r[20].w[0] - 27072u);
    set32(c.r[3], c.r[22].w[0] + 26136u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1008u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A1008u) [[unlikely]] return; }
L_003A1008:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[23].w[0] - 24320u);
    set32(c.r[7], c.r[30].w[0] - 30208u);
    set32(c.r[5], 0u + 25u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1048u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x003A1048u) [[unlikely]] return; }
L_003A1048:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003A1068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1058u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A1058u) [[unlikely]] return; }
L_003A1058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1060u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A1060u) [[unlikely]] return; }
L_003A1060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A10A0; } }
L_003A1068:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1074u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x003A1074u) [[unlikely]] return; }
L_003A1074:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003A108C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1084u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A1084u) [[unlikely]] return; }
L_003A1084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_003A10A0; } }
L_003A108C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1094u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003A1094u) [[unlikely]] return; }
L_003A1094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A109Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003A109Cu) [[unlikely]] return; }
L_003A109C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003A10A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003A10D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003A110C; } }
L_003A10E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003A10F0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A10F0u | kUnwind; return; } goto L_003A10F0; } }
L_003A110C:
    set32(c.r[16], c.r[17].w[0] - 24064u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1124u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x003A1124u) [[unlikely]] return; }
L_003A1124:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003A1134; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A1144; } }
L_003A1134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A10E8u | kUnwind; return; } goto L_003A10E8; } }
    st32((c.r[2].w[0] + 17336u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A1144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1158:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17336u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_003A11B4; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[7].w[0] - 23936u), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 24064u);
    set32(c.r[7], c.r[7].w[0] - 23936u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[16].w[0] - 24000u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A11ACu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A11ACu) [[unlikely]] return; }
L_003A11AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] - 24000u)));  if (t) { goto L_003A11B8; } }
L_003A11B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A11B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1248:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17336u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_003A126C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A12B0; } }
L_003A126C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[7].w[0] - 23936u), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 24064u);
    set32(c.r[7], c.r[7].w[0] - 23936u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[16].w[0] - 24000u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A12A4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A12A4u) [[unlikely]] return; }
L_003A12A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] - 24000u)));  if (t) { goto L_003A12B0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003A12B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A12C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A12D0u);  if (depth < kMaxDepth) unit_00A8(c, 126u, depth + 1u); else { c.pc = 0x003A1248u; return; } if (c.pc != 0x003A12D0u) [[unlikely]] return; }
L_003A12D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A1620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 17344u)));
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_003A1704; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], c.r[17].w[0] - 23104u);
    c.budget -= 2;
L_003A1648:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 6ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A165Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x003A165Cu) [[unlikely]] return; }
L_003A165C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_003A166C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A1708; } }
L_003A166C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A16D4; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[18].w[0] + 17344u), 0u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 255u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[17].w[0] - 23616u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A16A0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A16A0u) [[unlikely]] return; }
L_003A16A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A16B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_003A1708; } }
L_003A16B4:
    set32(c.r[7], c.r[17].w[0] - 23616u);
    set32(c.r[6], c.r[3].w[0] - 23064u);
    lwl(c.r[4], (c.r[7].w[0] + 3u));
    lwr(c.r[4], (c.r[7].w[0]));
    swl(c.r[4], (c.r[6].w[0] + 3u));
    swr(c.r[4], (c.r[6].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A1708; } }
L_003A16D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_003A16E0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A16E0u | kUnwind; return; } goto L_003A16E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 23104u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1648u | kUnwind; return; } goto L_003A1648; } }
L_003A1704:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A1708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A1720:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[19], c.r[2].w[0] + 17132u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[17], c.r[3].w[0] - 23064u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A175Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x003A175Cu) [[unlikely]] return; }
L_003A175C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A178C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 17348u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1774u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x003A1774u) [[unlikely]] return; }
L_003A1774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 17348u)));  if (t) { goto L_003A178C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1788u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x003A1788u) [[unlikely]] return; }
L_003A1788:
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A178C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A17B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 23064u);
    st32((c.r[2].w[0] + 17344u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A17D8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x003A17D8u) [[unlikely]] return; }
L_003A17D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A17E8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1820u); st64((c.r[29].w[0] + 48u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 130u, depth + 1u); else { c.pc = 0x003A1620u; return; } if (c.pc != 0x003A1820u) [[unlikely]] return; }
L_003A1820:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_003A19C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1830u);  if (depth < kMaxDepth) unit_00A8(c, 135u, depth + 1u); else { c.pc = 0x003A1720u; return; } if (c.pc != 0x003A1830u) [[unlikely]] return; }
L_003A1830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A1844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_003A19C8; } }
L_003A1844:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[20].w[0] - 23616u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] - 23616u), c.r[19].w[0]);  if (t) { goto L_003A1978; } }
    c.r[2].d[0] = c.r[17].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A1964; } }
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A18D8; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 2;
L_003A187C:
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[6], (c.r[7].w[0] + 15u));
    ldr(c.r[6], (c.r[7].w[0] + 8u));
    ldl(c.r[8], (c.r[7].w[0] + 23u));
    ldr(c.r[8], (c.r[7].w[0] + 16u));
    ldl(c.r[9], (c.r[7].w[0] + 31u));
    ldr(c.r[9], (c.r[7].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A187Cu | kUnwind; return; } goto L_003A187C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1914; } }
L_003A18D8:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 2;
L_003A18E0:
    c.r[10].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[10].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A18E0u | kUnwind; return; } goto L_003A18E0; } }
L_003A1914:
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    ldl(c.r[10], (c.r[7].w[0] + 15u));
    ldr(c.r[10], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    lwl(c.r[8], (c.r[7].w[0] + 27u));
    lwr(c.r[8], (c.r[7].w[0] + 24u));
    sdl(c.r[9], (c.r[4].w[0] + 7u));
    sdr(c.r[9], (c.r[4].w[0]));
    sdl(c.r[10], (c.r[4].w[0] + 15u));
    sdr(c.r[10], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    swl(c.r[8], (c.r[4].w[0] + 27u));
    set32(c.r[3], c.r[21].w[0] - 23616u);
    set32(c.r[2], 0u + 252u);
    swr(c.r[8], (c.r[4].w[0] + 24u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003A1980; } }
L_003A1964:
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1970u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003A1970u) [[unlikely]] return; }
L_003A1970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_003A197C; } }
L_003A1978:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_003A197C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 1;
L_003A1980:
    set32(c.r[16], c.r[21].w[0] - 23616u);
    set32(c.r[4], c.r[5].w[0] - 23104u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A19ACu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A19ACu) [[unlikely]] return; }
L_003A19AC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003A19C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_003A19C8; } }
L_003A19C0:
    set32(c.r[2], ld32((c.r[20].w[0] - 23616u)));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003A19C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003A19F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A28u); st64((c.r[29].w[0] + 48u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 130u, depth + 1u); else { c.pc = 0x003A1620u; return; } if (c.pc != 0x003A1A28u) [[unlikely]] return; }
L_003A1A28:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_003A1BD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1A38u);  if (depth < kMaxDepth) unit_00A8(c, 135u, depth + 1u); else { c.pc = 0x003A1720u; return; } if (c.pc != 0x003A1A38u) [[unlikely]] return; }
L_003A1A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A1A4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_003A1BD0; } }
L_003A1A4C:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[20].w[0] - 23616u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] - 23616u), c.r[19].w[0]);  if (t) { goto L_003A1B80; } }
    c.r[2].d[0] = c.r[17].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A1B6C; } }
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A1AE0; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 2;
L_003A1A84:
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[6], (c.r[7].w[0] + 15u));
    ldr(c.r[6], (c.r[7].w[0] + 8u));
    ldl(c.r[8], (c.r[7].w[0] + 23u));
    ldr(c.r[8], (c.r[7].w[0] + 16u));
    ldl(c.r[9], (c.r[7].w[0] + 31u));
    ldr(c.r[9], (c.r[7].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1A84u | kUnwind; return; } goto L_003A1A84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1B1C; } }
L_003A1AE0:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 2;
L_003A1AE8:
    c.r[10].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[10].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1AE8u | kUnwind; return; } goto L_003A1AE8; } }
L_003A1B1C:
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    ldl(c.r[10], (c.r[7].w[0] + 15u));
    ldr(c.r[10], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    lwl(c.r[8], (c.r[7].w[0] + 27u));
    lwr(c.r[8], (c.r[7].w[0] + 24u));
    sdl(c.r[9], (c.r[4].w[0] + 7u));
    sdr(c.r[9], (c.r[4].w[0]));
    sdl(c.r[10], (c.r[4].w[0] + 15u));
    sdr(c.r[10], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    swl(c.r[8], (c.r[4].w[0] + 27u));
    set32(c.r[3], c.r[21].w[0] - 23616u);
    set32(c.r[2], 0u + 252u);
    swr(c.r[8], (c.r[4].w[0] + 24u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003A1B88; } }
L_003A1B6C:
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1B78u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003A1B78u) [[unlikely]] return; }
L_003A1B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_003A1B84; } }
L_003A1B80:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_003A1B84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 1;
L_003A1B88:
    set32(c.r[16], c.r[21].w[0] - 23616u);
    set32(c.r[4], c.r[5].w[0] - 23104u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1BB4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A1BB4u) [[unlikely]] return; }
L_003A1BB4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003A1BC8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_003A1BD0; } }
L_003A1BC8:
    set32(c.r[2], ld32((c.r[20].w[0] - 23616u)));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003A1BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003A1BF8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1C10u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 130u, depth + 1u); else { c.pc = 0x003A1620u; return; } if (c.pc != 0x003A1C10u) [[unlikely]] return; }
L_003A1C10:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_003A1C74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1C20u);  if (depth < kMaxDepth) unit_00A8(c, 135u, depth + 1u); else { c.pc = 0x003A1720u; return; } if (c.pc != 0x003A1C20u) [[unlikely]] return; }
L_003A1C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A1C34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_003A1C74; } }
L_003A1C34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[16].w[0] - 23616u);
    st32((c.r[16].w[0] - 23616u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23104u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1C64u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A1C64u) [[unlikely]] return; }
L_003A1C64:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 23616u)));  goto L_003A1C74; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_003A1C74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A1C88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1C9Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 130u, depth + 1u); else { c.pc = 0x003A1620u; return; } if (c.pc != 0x003A1C9Cu) [[unlikely]] return; }
L_003A1C9C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_003A1D18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1CACu);  if (depth < kMaxDepth) unit_00A8(c, 135u, depth + 1u); else { c.pc = 0x003A1720u; return; } if (c.pc != 0x003A1CACu) [[unlikely]] return; }
L_003A1CAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  goto L_003A1CC0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_003A1D18; } }
L_003A1CC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 23608u);
    set32(c.r[6], 0u + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1CD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003A1CD4u) [[unlikely]] return; }
L_003A1CD4:
    set32(c.r[3], c.r[16].w[0] - 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[3].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 23104u);
    set32(c.r[5], 0u + 9u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D08u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A1D08u) [[unlikely]] return; }
L_003A1D08:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 8u)));  goto L_003A1D18; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_003A1D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A1D28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D40u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 130u, depth + 1u); else { c.pc = 0x003A1620u; return; } if (c.pc != 0x003A1D40u) [[unlikely]] return; }
L_003A1D40:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_003A1DA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D50u);  if (depth < kMaxDepth) unit_00A8(c, 135u, depth + 1u); else { c.pc = 0x003A1720u; return; } if (c.pc != 0x003A1D50u) [[unlikely]] return; }
L_003A1D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A1D64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_003A1DA4; } }
L_003A1D64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[16].w[0] - 23616u);
    st32((c.r[16].w[0] - 23616u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23104u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1D94u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A1D94u) [[unlikely]] return; }
L_003A1D94:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 23616u)));  goto L_003A1DA4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_003A1DA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A1DB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1DC8u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 141u, depth + 1u); else { c.pc = 0x003A17E8u; return; } if (c.pc != 0x003A1DC8u) [[unlikely]] return; }
L_003A1DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A1DD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1DE8u);  if (depth < kMaxDepth) unit_00A8(c, 141u, depth + 1u); else { c.pc = 0x003A17E8u; return; } if (c.pc != 0x003A1DE8u) [[unlikely]] return; }
L_003A1DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A1DF8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E30u); st64((c.r[29].w[0] + 96u), c.r[21].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 130u, depth + 1u); else { c.pc = 0x003A1620u; return; } if (c.pc != 0x003A1E30u) [[unlikely]] return; }
L_003A1E30:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_003A1FF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E40u);  if (depth < kMaxDepth) unit_00A8(c, 135u, depth + 1u); else { c.pc = 0x003A1720u; return; } if (c.pc != 0x003A1E40u) [[unlikely]] return; }
L_003A1E40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  goto L_003A1E54; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_003A1FF8; } }
L_003A1E54:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 23608u);
    set32(c.r[6], 0u + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1E68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003A1E68u) [[unlikely]] return; }
L_003A1E68:
    set32(c.r[2], c.r[17].w[0] - 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003A1FA0; } }
    c.r[2].d[0] = c.r[18].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A1F88; } }
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003A1EFC; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
L_003A1EA0:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    ldl(c.r[9], (c.r[3].w[0] + 31u));
    ldr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1EA0u | kUnwind; return; } goto L_003A1EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003A1F3C; } }
L_003A1EFC:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
L_003A1F08:
    c.r[6].d[0] = ld64((c.r[3].w[0]));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[6].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A1F08u | kUnwind; return; } goto L_003A1F08; } }
L_003A1F3C:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    lwl(c.r[9], (c.r[3].w[0] + 27u));
    lwr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    swl(c.r[9], (c.r[4].w[0] + 27u));
    set32(c.r[2], 0u + 252u);
    swr(c.r[9], (c.r[4].w[0] + 24u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] - 23616u), c.r[2].w[0]);  if (t) { goto L_003A1FB0; } }
L_003A1F88:
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1F98u); c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003A1F98u) [[unlikely]] return; }
L_003A1F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 8u), c.r[18].w[0]);  if (t) { goto L_003A1FAC; } }
L_003A1FA0:
    st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(0u));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[17].w[0] - 8u), 0u);
    c.budget -= 3;
L_003A1FAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 1;
L_003A1FB0:
    set32(c.r[16], c.r[21].w[0] - 23616u);
    set32(c.r[4], c.r[5].w[0] - 23104u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A1FDCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A1FDCu) [[unlikely]] return; }
L_003A1FDC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_003A1FF0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_003A1FF8; } }
L_003A1FF0:
    set32(c.r[2], ld32((c.r[21].w[0] - 23616u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_003A1FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A2020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2034u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 172u, depth + 1u); else { c.pc = 0x003A1DF8u; return; } if (c.pc != 0x003A2034u) [[unlikely]] return; }
L_003A2034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A2040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2050u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 172u, depth + 1u); else { c.pc = 0x003A1DF8u; return; } if (c.pc != 0x003A2050u) [[unlikely]] return; }
L_003A2050:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2060:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2090u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 130u, depth + 1u); else { c.pc = 0x003A1620u; return; } if (c.pc != 0x003A2090u) [[unlikely]] return; }
L_003A2090:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_003A2144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A20A0u);  if (depth < kMaxDepth) unit_00A8(c, 135u, depth + 1u); else { c.pc = 0x003A1720u; return; } if (c.pc != 0x003A20A0u) [[unlikely]] return; }
L_003A20A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  goto L_003A20B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_003A2144; } }
L_003A20B4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 23608u);
    set32(c.r[6], 0u + 252u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A20CCu); set32(c.r[16], c.r[17].w[0] - 8u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003A20CCu) [[unlikely]] return; }
L_003A20CC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A20E0u); set32(c.r[6], 0u + 252u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003A20E0u) [[unlikely]] return; }
L_003A20E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st8((c.r[16].w[0] + 511u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 23104u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2110u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A2110u) [[unlikely]] return; }
L_003A2110:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] - 8u)));  goto L_003A2124; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_003A2144; } }
L_003A2124:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0]), c.r[2].w[0]);  goto L_003A2138; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_003A2144; } }
L_003A2138:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_003A2144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003A2168:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2178u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 184u, depth + 1u); else { c.pc = 0x003A2060u; return; } if (c.pc != 0x003A2178u) [[unlikely]] return; }
L_003A2178:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A21B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A21D8u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 130u, depth + 1u); else { c.pc = 0x003A1620u; return; } if (c.pc != 0x003A21D8u) [[unlikely]] return; }
L_003A21D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_003A21E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_003A2280; } }
L_003A21E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A226C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[17].w[0] - 23616u);
    st32((c.r[17].w[0] - 23616u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23104u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2228u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A2228u) [[unlikely]] return; }
L_003A2228:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003A223C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_003A2280; } }
L_003A223C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A2250; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] - 23616u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A227C; } }
L_003A2250:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003A2264; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] - 23616u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003A227C; } }
L_003A2264:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] - 23616u)));  goto L_003A2278; }
L_003A226C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_003A2280; } }
L_003A2278:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003A227C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A2280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A22A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A22C4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 130u, depth + 1u); else { c.pc = 0x003A1620u; return; } if (c.pc != 0x003A22C4u) [[unlikely]] return; }
L_003A22C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003A22D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_003A2364; } }
L_003A22D4:
    set32(c.r[3], c.r[7].w[0] - 23616u);
    st32((c.r[7].w[0] - 23616u), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_003A22F0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003A2320; } }
L_003A22F0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_003A2308; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003A2320; } }
L_003A2308:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003A231C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_003A2364; } }
L_003A231C:
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_003A2320:
    set32(c.r[7], c.r[7].w[0] - 23616u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 23104u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A234Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003A234Cu) [[unlikely]] return; }
L_003A234C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 6;
L_003A2364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A2380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A23A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003A5068u; return; } if (c.pc != 0x003A23A4u) [[unlikely]] return; }
L_003A23A4:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A23B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003A5068u; return; } if (c.pc != 0x003A23B0u) [[unlikely]] return; }
L_003A23B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A23B8u);  if (depth < kMaxDepth) unit_00A6(c, 168u, depth + 1u); else { c.pc = 0x003990F0u; return; } if (c.pc != 0x003A23B8u) [[unlikely]] return; }
L_003A23B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A23C0u); c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (depth < kMaxDepth) unit_00A6(c, 190u, depth + 1u); else { c.pc = 0x00399230u; return; } if (c.pc != 0x003A23C0u) [[unlikely]] return; }
L_003A23C0:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[10].w[0] - 23040u);
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003A2408; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
L_003A23E8:
    set32(c.r[3], c.r[10].w[0] - 23040u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[17].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A23E8u | kUnwind; return; } goto L_003A23E8; }
L_003A2408:
    set32(c.r[6], c.r[10].w[0] - 23040u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 255ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    set32(c.r[5], 0u + 104u);
    c.r[2].d[0] = ld64((c.r[10].w[0] - 23040u));
    set32(c.r[7], 0u + 104u);
    st32((c.r[6].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[8], 0u + 68u);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st64((c.r[10].w[0] - 23040u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[10].w[0] - 23040u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 104u);
    st32((c.r[29].w[0] + 4u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2464u); st32((c.r[29].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003A2464u) [[unlikely]] return; }
L_003A2464:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2470u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_00A6(c, 188u, depth + 1u); else { c.pc = 0x00399220u; return; } if (c.pc != 0x003A2470u) [[unlikely]] return; }
L_003A2470:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A247Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 180u, depth + 1u); else { c.pc = 0x003991E0u; return; } if (c.pc != 0x003A247Cu) [[unlikely]] return; }
L_003A247C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_003A24BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A248Cu); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_00A6(c, 188u, depth + 1u); else { c.pc = 0x00399220u; return; } if (c.pc != 0x003A248Cu) [[unlikely]] return; }
L_003A248C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2498u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_00A6(c, 188u, depth + 1u); else { c.pc = 0x00399220u; return; } if (c.pc != 0x003A2498u) [[unlikely]] return; }
L_003A2498:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A24A8u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_00A6(c, 188u, depth + 1u); else { c.pc = 0x00399220u; return; } if (c.pc != 0x003A24A8u) [[unlikely]] return; }
L_003A24A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A24B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 188u, depth + 1u); else { c.pc = 0x00399220u; return; } if (c.pc != 0x003A24B4u) [[unlikely]] return; }
L_003A24B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A24C0; } }
L_003A24BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A24C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A24D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A24E8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00A6(c, 190u, depth + 1u); else { c.pc = 0x00399230u; return; } if (c.pc != 0x003A24E8u) [[unlikely]] return; }
L_003A24E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2510u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00A6(c, 190u, depth + 1u); else { c.pc = 0x00399230u; return; } if (c.pc != 0x003A2510u) [[unlikely]] return; }
L_003A2510:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A2544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2528u);  if (depth < kMaxDepth) unit_00A6(c, 198u, depth + 1u); else { c.pc = 0x003992A0u; return; } if (c.pc != 0x003A2528u) [[unlikely]] return; }
L_003A2528:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2534u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003A5068u; return; } if (c.pc != 0x003A2534u) [[unlikely]] return; }
L_003A2534:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2540u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A9(c, 98u, depth + 1u); else { c.pc = 0x003A5068u; return; } if (c.pc != 0x003A2540u) [[unlikely]] return; }
L_003A2540:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A2544:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2550:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 26176u);  if (t) { goto L_003A259C; } }
    set32(c.r[3], c.r[16].w[0] - 11u);
    c.budget -= 1;
L_003A2578:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2578u | kUnwind; return; } goto L_003A2578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_003A25A4; } }
L_003A259C:
    set32(c.r[3], c.r[16].w[0] - 11u);
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_003A25A4:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(81ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A25C4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A25BCu); set32(c.r[4], c.r[4].w[0] + 26192u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003A25BCu) [[unlikely]] return; }
L_003A25BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A264C; } }
L_003A25C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A25CCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x003A25CCu) [[unlikely]] return; }
L_003A25CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A25D4u);  if (depth < kMaxDepth) unit_00A7(c, 33u, depth + 1u); else { c.pc = 0x0039C580u; return; } if (c.pc != 0x003A25D4u) [[unlikely]] return; }
L_003A25D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0]));  if (t) { goto L_003A260C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_003A25E8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A25E8u | kUnwind; return; } goto L_003A25E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A2614; } }
L_003A260C:
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_003A2614:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  goto L_003A2640; }
    c.budget -= 1;
L_003A2620:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2620u | kUnwind; return; } goto L_003A2620; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003A2640:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A264Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 198u, depth + 1u); else { c.pc = 0x003A2380u; return; } if (c.pc != 0x003A264Cu) [[unlikely]] return; }
L_003A264C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A2660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[16], c.r[16].w[0] + 11136u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0] + 18168u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2690u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A6(c, 88u, depth + 1u); else { c.pc = 0x00398AD0u; return; } if (c.pc != 0x003A2690u) [[unlikely]] return; }
L_003A2690:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A269Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 88u, depth + 1u); else { c.pc = 0x00398AD0u; return; } if (c.pc != 0x003A269Cu) [[unlikely]] return; }
L_003A269C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A26A8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00A6(c, 88u, depth + 1u); else { c.pc = 0x00398AD0u; return; } if (c.pc != 0x003A26A8u) [[unlikely]] return; }
L_003A26A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A2748:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x003A2750u; syscall(c, 0x003A274Cu); if (c.pc != 0x003A2750u) return;
    c.budget -= 1;
L_003A2750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A2758:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A2788; } }
    c.budget -= 1;
L_003A2768:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2768u | kUnwind; return; } goto L_003A2768; } }
L_003A2788:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A2790:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x003A2798u; syscall(c, 0x003A2794u); if (c.pc != 0x003A2798u) return;
    c.budget -= 1;
L_003A2798:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A27A0:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x003A27A8u; syscall(c, 0x003A27A4u); if (c.pc != 0x003A27A8u) return;
    c.budget -= 1;
L_003A27A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A27B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] + 18248u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18248u)));
    set32(c.r[17], c.r[16].w[0] + 24u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A27E0u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A8(c, 236u, depth + 1u); else { c.pc = 0x003A27A0u; return; } if (c.pc != 0x003A27E0u) [[unlikely]] return; }
L_003A27E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[6], 0u + 816u);
    set32(c.r[5], c.r[5].w[0] + 17352u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A27F8u); c.r[4].d[0] = c.r[4].d[0] | 20480ull;  if (depth < kMaxDepth) unit_00A8(c, 230u, depth + 1u); else { c.pc = 0x003A2748u; return; } if (c.pc != 0x003A27F8u) [[unlikely]] return; }
L_003A27F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2800u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x003A2800u) [[unlikely]] return; }
L_003A2800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2808u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x003A2808u) [[unlikely]] return; }
L_003A2808:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2814u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00A8(c, 236u, depth + 1u); else { c.pc = 0x003A27A0u; return; } if (c.pc != 0x003A2814u) [[unlikely]] return; }
L_003A2814:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2820u); set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_00A8(c, 236u, depth + 1u); else { c.pc = 0x003A27A0u; return; } if (c.pc != 0x003A2820u) [[unlikely]] return; }
L_003A2820:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003A2828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2830u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 234u, depth + 1u); else { c.pc = 0x003A2790u; return; } if (c.pc != 0x003A2830u) [[unlikely]] return; }
L_003A2830:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2840u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_00A8(c, 236u, depth + 1u); else { c.pc = 0x003A27A0u; return; } if (c.pc != 0x003A2840u) [[unlikely]] return; }
L_003A2840:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2828u | kUnwind; return; } goto L_003A2828; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2854u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00A8(c, 234u, depth + 1u); else { c.pc = 0x003A2790u; return; } if (c.pc != 0x003A2854u) [[unlikely]] return; }
L_003A2854:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 18240u), c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A2898:
    set32(c.r[3], 0u + 86u);
    c.budget -= 1;
    c.pc = 0x003A28A0u; syscall(c, 0x003A289Cu); if (c.pc != 0x003A28A0u) return;
    c.budget -= 1;
L_003A28A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A28A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[4].w[0] - 13u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003A28C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A28CC; } }
L_003A28C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A28CCu);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003A2898u; return; } if (c.pc != 0x003A28CCu) [[unlikely]] return; }
L_003A28CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2938:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2948u);  if (depth < kMaxDepth) unit_00A6(c, 194u, depth + 1u); else { c.pc = 0x00399280u; return; } if (c.pc != 0x003A2948u) [[unlikely]] return; }
L_003A2948:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003A2964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A295Cu);  if (depth < kMaxDepth) unit_00A8(c, 257u, depth + 1u); else { c.pc = 0x003A2978u; return; } if (c.pc != 0x003A295Cu) [[unlikely]] return; }
L_003A295C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003A2970; } }
L_003A2964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A296Cu);  if (depth < kMaxDepth) unit_00A6(c, 196u, depth + 1u); else { c.pc = 0x00399290u; return; } if (c.pc != 0x003A296Cu) [[unlikely]] return; }
L_003A296C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A2970:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A2978:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26224u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] + 18936u);
    set32(c.r[5], ld32((c.r[18].w[0] + 18936u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29C8u); set32(c.r[7], c.r[7].w[0] - 1u);  if (depth < kMaxDepth) unit_00A6(c, 479u, depth + 1u); else { c.pc = 0x0039BB88u; return; } if (c.pc != 0x003A29C8u) [[unlikely]] return; }
L_003A29C8:
    mtc0(c, 6u, 0u);
    set32(c.r[17], ld32((c.r[18].w[0] + 18936u)));
    c.r[2].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[25].d[0] = 0ull + 0ull;  if (t) { goto L_003A29F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29ECu); set32(c.r[4], c.r[4].w[0] + 26280u);  if (depth < kMaxDepth) unit_00A6(c, 479u, depth + 1u); else { c.pc = 0x0039BB88u; return; } if (c.pc != 0x003A29ECu) [[unlikely]] return; }
L_003A29EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A29F4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 351u, depth + 1u); else { c.pc = 0x003A3598u; return; } if (c.pc != 0x003A29F4u) [[unlikely]] return; }
L_003A29F4:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_003A2A30; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_003A2A08:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A20u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003A2898u; return; } if (c.pc != 0x003A2A20u) [[unlikely]] return; }
L_003A2A20:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2A08u | kUnwind; return; } goto L_003A2A08; }
L_003A2A30:
    set32(c.r[16], c.r[18].w[0] + 18936u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_003A2A60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A54u); set32(c.r[4], c.r[4].w[0] + 26304u);  if (depth < kMaxDepth) unit_00A6(c, 479u, depth + 1u); else { c.pc = 0x0039BB88u; return; } if (c.pc != 0x003A2A54u) [[unlikely]] return; }
L_003A2A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 351u, depth + 1u); else { c.pc = 0x003A3598u; return; } if (c.pc != 0x003A2A5Cu) [[unlikely]] return; }
L_003A2A5C:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A2A60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_003A2A98; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_003A2A70:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2A88u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003A2898u; return; } if (c.pc != 0x003A2A88u) [[unlikely]] return; }
L_003A2A88:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2A70u | kUnwind; return; } goto L_003A2A70; }
L_003A2A98:
    set32(c.r[16], c.r[18].w[0] + 18936u);
    st32((c.r[16].w[0] + 12u), c.r[25].w[0]);
    mtc0(c, 6u, c.r[25].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = c.r[25].d[0] + 0ull;  goto L_003A2B14; }
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_003A2ADC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AD0u); set32(c.r[4], c.r[4].w[0] + 26328u);  if (depth < kMaxDepth) unit_00A6(c, 479u, depth + 1u); else { c.pc = 0x0039BB88u; return; } if (c.pc != 0x003A2AD0u) [[unlikely]] return; }
L_003A2AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2AD8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A8(c, 351u, depth + 1u); else { c.pc = 0x003A3598u; return; } if (c.pc != 0x003A2AD8u) [[unlikely]] return; }
L_003A2AD8:
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A2ADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_003A2B10; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003A2AE8:
    c.r[4].d[0] = c.r[25].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B00u); set32(c.r[16], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003A2898u; return; } if (c.pc != 0x003A2B00u) [[unlikely]] return; }
L_003A2B00:
    set32(c.r[25], c.r[25].w[0] + 1u);
    c.r[2].d[0] = c.r[25].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2AE8u | kUnwind; return; } goto L_003A2AE8; }
L_003A2B10:
    c.r[16].d[0] = c.r[25].d[0] + 0ull;
    c.budget -= 1;
L_003A2B14:
    c.r[2].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[25], c.r[25].w[0] << 13);  if (t) { goto L_003A2B50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xE0000000u);
    set32(c.r[17], c.r[25].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_003A2B28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2B44u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 249u, depth + 1u); else { c.pc = 0x003A2898u; return; } if (c.pc != 0x003A2B44u) [[unlikely]] return; }
L_003A2B44:
    c.r[2].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2B28u | kUnwind; return; } goto L_003A2B28; } }
L_003A2B50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[25].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A2B80:
    c.r[26].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[26], c.r[26].w[0] - 18816u);
    st128((c.r[26].w[0] + 16u) & ~15u, c.r[1]);
    st128((c.r[26].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[26].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[26].w[0] + 64u) & ~15u, c.r[4]);
    st128((c.r[26].w[0] + 80u) & ~15u, c.r[5]);
    st128((c.r[26].w[0] + 96u) & ~15u, c.r[6]);
    st128((c.r[26].w[0] + 112u) & ~15u, c.r[7]);
    st128((c.r[26].w[0] + 128u) & ~15u, c.r[8]);
    st128((c.r[26].w[0] + 144u) & ~15u, c.r[9]);
    st128((c.r[26].w[0] + 160u) & ~15u, c.r[10]);
    st128((c.r[26].w[0] + 176u) & ~15u, c.r[11]);
    st128((c.r[26].w[0] + 192u) & ~15u, c.r[12]);
    st128((c.r[26].w[0] + 208u) & ~15u, c.r[13]);
    st128((c.r[26].w[0] + 224u) & ~15u, c.r[14]);
    st128((c.r[26].w[0] + 240u) & ~15u, c.r[15]);
    st128((c.r[26].w[0] + 256u) & ~15u, c.r[16]);
    st128((c.r[26].w[0] + 272u) & ~15u, c.r[17]);
    st128((c.r[26].w[0] + 288u) & ~15u, c.r[18]);
    st128((c.r[26].w[0] + 304u) & ~15u, c.r[19]);
    st128((c.r[26].w[0] + 320u) & ~15u, c.r[20]);
    st128((c.r[26].w[0] + 336u) & ~15u, c.r[21]);
    st128((c.r[26].w[0] + 352u) & ~15u, c.r[22]);
    st128((c.r[26].w[0] + 368u) & ~15u, c.r[23]);
    st128((c.r[26].w[0] + 384u) & ~15u, c.r[24]);
    st128((c.r[26].w[0] + 400u) & ~15u, c.r[25]);
    st128((c.r[26].w[0] + 448u) & ~15u, c.r[28]);
    st128((c.r[26].w[0] + 464u) & ~15u, c.r[29]);
    st128((c.r[26].w[0] + 480u) & ~15u, c.r[30]);
    st128((c.r[26].w[0] + 496u) & ~15u, c.r[31]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[1].w[0] - 18304u), c.r[2].d[0]);
    c.r[2].d[0] = c.hi.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[1].w[0] - 18296u), c.r[2].d[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[1].w[0] - 18288u), c.r[2].d[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[1].w[0] - 18280u), c.r[2].d[0]);
    c.r[2].d[0] = c.sa;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[1].w[0] - 18272u), c.r[2].d[0]);
    set32(c.r[4], mfc0(c, 12u, 0u));
    set32(c.r[5], mfc0(c, 13u, 0u));
    set32(c.r[6], mfc0(c, 14u, 0u));
    set32(c.r[7], mfc0(c, 8u, 0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[8], c.r[8].w[0] - 18816u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[1].w[0] - 18264u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[1], c.r[1].w[0] + 11392u);
    mtc0(c, 14u, c.r[1].w[0]);
    set32(c.r[1], mfc0(c, 12u, 0u));
    set32(c.r[2], 0u - 2u);
    c.r[1].d[0] = c.r[1].d[0] & c.r[2].d[0];
    mtc0(c, 12u, c.r[1].w[0]);
    c.budget -= 63;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A2C80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[1], ld32((c.r[1].w[0] + 18168u)));
    c.r[29].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[1].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2C94u); set32(c.r[29], c.r[29].w[0] - 18816u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A2C94u) [[unlikely]] return; }
L_003A2C94:
    set32(c.r[3], 0u - 84u);
    c.budget -= 1;
    c.pc = 0x003A2C9Cu; syscall(c, 0x003A2C98u); if (c.pc != 0x003A2C9Cu) return;
    c.budget -= 1;
L_003A2C9C:
    c.budget -= 9;
L_003A2CC0:
    set32(c.r[1], mfc0(c, 12u, 0u));
    set32(c.r[26], 0u - 28u);
    c.r[1].d[0] = c.r[1].d[0] & c.r[26].d[0];
    mtc0(c, 12u, c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 18264u)));
    mtc0(c, 14u, c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 18304u));
    c.hi.d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 18296u));
    c.hi.d[1] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 18288u));
    c.lo.d[0] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 18280u));
    c.lo.d[1] = c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 18272u));
    c.sa = c.r[2].w[0] & 15u;
    c.r[26].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[26], c.r[26].w[0] - 18816u);
    ld128((c.r[26].w[0] + 16u) & ~15u, c.r[1]);
    ld128((c.r[26].w[0] + 32u) & ~15u, c.r[2]);
    ld128((c.r[26].w[0] + 48u) & ~15u, c.r[3]);
    ld128((c.r[26].w[0] + 64u) & ~15u, c.r[4]);
    ld128((c.r[26].w[0] + 80u) & ~15u, c.r[5]);
    ld128((c.r[26].w[0] + 96u) & ~15u, c.r[6]);
    ld128((c.r[26].w[0] + 112u) & ~15u, c.r[7]);
    ld128((c.r[26].w[0] + 128u) & ~15u, c.r[8]);
    ld128((c.r[26].w[0] + 144u) & ~15u, c.r[9]);
    ld128((c.r[26].w[0] + 160u) & ~15u, c.r[10]);
    ld128((c.r[26].w[0] + 176u) & ~15u, c.r[11]);
    ld128((c.r[26].w[0] + 192u) & ~15u, c.r[12]);
    ld128((c.r[26].w[0] + 208u) & ~15u, c.r[13]);
    ld128((c.r[26].w[0] + 224u) & ~15u, c.r[14]);
    ld128((c.r[26].w[0] + 240u) & ~15u, c.r[15]);
    ld128((c.r[26].w[0] + 256u) & ~15u, c.r[16]);
    ld128((c.r[26].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[26].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[26].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[26].w[0] + 320u) & ~15u, c.r[20]);
    ld128((c.r[26].w[0] + 336u) & ~15u, c.r[21]);
    ld128((c.r[26].w[0] + 352u) & ~15u, c.r[22]);
    ld128((c.r[26].w[0] + 368u) & ~15u, c.r[23]);
    ld128((c.r[26].w[0] + 384u) & ~15u, c.r[24]);
    ld128((c.r[26].w[0] + 400u) & ~15u, c.r[25]);
    ld128((c.r[26].w[0] + 448u) & ~15u, c.r[28]);
    ld128((c.r[26].w[0] + 464u) & ~15u, c.r[29]);
    ld128((c.r[26].w[0] + 480u) & ~15u, c.r[30]);
    ld128((c.r[26].w[0] + 496u) & ~15u, c.r[31]);
    set32(c.r[26], mfc0(c, 12u, 0u));
    c.r[26].d[0] = c.r[26].d[0] | 19ull;
    mtc0(c, 12u, c.r[26].w[0]);
    c.budget -= 60;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A2EE0:
    set32(c.r[3], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_003A2F24; } }
    c.budget -= 1;
L_003A2EF8:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2EF8u | kUnwind; return; } goto L_003A2EF8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003A2F24:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003A2F30:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set_interrupts(c, true);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003A2F48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 26352u);
    set32(c.r[5], c.r[5].w[0] + 26368u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F84u); st32((c.r[29].w[0] + 36u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A2F84u) [[unlikely]] return; }
L_003A2F84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A2F94u); st32((c.r[3].w[0] + 18992u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003A2F94u) [[unlikely]] return; }
L_003A2F94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[3].w[0] + 18996u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A2FC8:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A2FF8; } }
    c.budget -= 1;
L_003A2FD8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2FD8u | kUnwind; return; } goto L_003A2FD8; } }
L_003A2FF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A3000:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_003A3034; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;  goto L_003A3038; }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 1;
L_003A3018:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0]; c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;  if (t) { goto L_003A3034; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3018u | kUnwind; return; } goto L_003A3018; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;  if (t) { goto L_003A3038; } }
L_003A3034:
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 1;
L_003A3038:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003A3040:
    set32(c.r[3], 0u + 131u);
    c.budget -= 1;
    c.pc = 0x003A3048u; syscall(c, 0x003A3044u); if (c.pc != 0x003A3048u) return;
    c.budget -= 1;
L_003A3048:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3088:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] + 18976u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 18976u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A30C8u); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A8(c, 298u, depth + 1u); else { c.pc = 0x003A3188u; return; } if (c.pc != 0x003A30C8u) [[unlikely]] return; }
L_003A30C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A30D4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A8(c, 298u, depth + 1u); else { c.pc = 0x003A3188u; return; } if (c.pc != 0x003A30D4u) [[unlikely]] return; }
L_003A30D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A30E4u); set32(c.r[6], c.r[21].w[0] + 12288u);  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003A3040u; return; } if (c.pc != 0x003A30E4u) [[unlikely]] return; }
L_003A30E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A30F8u); set32(c.r[6], c.r[20].w[0] + 12232u);  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003A3040u; return; } if (c.pc != 0x003A30F8u) [[unlikely]] return; }
L_003A30F8:
    set32(c.r[17], c.r[19].w[0] - 524u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 360u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; c.r[22].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A3158; } }
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A3110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[19].w[0] + 4u);  if (t) { goto L_003A3130; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3124u); set32(c.r[6], c.r[21].w[0] + 12288u);  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003A3040u; return; } if (c.pc != 0x003A3124u) [[unlikely]] return; }
L_003A3124:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[19].w[0] - 524u);  if (t) { goto L_003A3148; } }
L_003A3130:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80080000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3140u); set32(c.r[6], c.r[20].w[0] + 12232u);  if (depth < kMaxDepth) unit_00A8(c, 288u, depth + 1u); else { c.pc = 0x003A3040u; return; } if (c.pc != 0x003A3140u) [[unlikely]] return; }
L_003A3140:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] - 360u);
    c.budget -= 2;
L_003A3148:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0]; c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3110u | kUnwind; return; } goto L_003A3110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 18968u), c.r[17].w[0]);  if (t) { goto L_003A315C; } }
L_003A3158:
    st32((c.r[22].w[0] + 18968u), c.r[17].w[0]);
    c.budget -= 1;
L_003A315C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A3188:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x003A3190u; syscall(c, 0x003A318Cu); if (c.pc != 0x003A3190u) return;
    c.budget -= 1;
L_003A3190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3198:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31A8u);  if (depth < kMaxDepth) unit_00A8(c, 281u, depth + 1u); else { c.pc = 0x003A2F48u; return; } if (c.pc != 0x003A31A8u) [[unlikely]] return; }
L_003A31A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31B0u);  if (depth < kMaxDepth) unit_00A8(c, 290u, depth + 1u); else { c.pc = 0x003A3088u; return; } if (c.pc != 0x003A31B0u) [[unlikely]] return; }
L_003A31B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31B8u);  if (depth < kMaxDepth) unit_00A8(c, 361u, depth + 1u); else { c.pc = 0x003A3678u; return; } if (c.pc != 0x003A31B8u) [[unlikely]] return; }
L_003A31B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31C0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A8(c, 376u, depth + 1u); else { c.pc = 0x003A37F0u; return; } if (c.pc != 0x003A31C0u) [[unlikely]] return; }
L_003A31C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31C8u);  if (depth < kMaxDepth) unit_00A8(c, 394u, depth + 1u); else { c.pc = 0x003A3A30u; return; } if (c.pc != 0x003A31C8u) [[unlikely]] return; }
L_003A31C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31D0u);  if (depth < kMaxDepth) unit_00A6(c, 276u, depth + 1u); else { c.pc = 0x00399BF8u; return; } if (c.pc != 0x003A31D0u) [[unlikely]] return; }
L_003A31D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31D8u);  if (depth < kMaxDepth) unit_00A8(c, 322u, depth + 1u); else { c.pc = 0x003A32C0u; return; } if (c.pc != 0x003A31D8u) [[unlikely]] return; }
L_003A31D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A31E0u);  if (depth < kMaxDepth) unit_00A8(c, 238u, depth + 1u); else { c.pc = 0x003A27B0u; return; } if (c.pc != 0x003A31E0u) [[unlikely]] return; }
L_003A31E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00A9(c, 94u, depth); }
L_003A31F0:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x003A31F8u; syscall(c, 0x003A31F4u); if (c.pc != 0x003A31F8u) return;
    c.budget -= 1;
L_003A31F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3200:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x003A3208u; syscall(c, 0x003A3204u); if (c.pc != 0x003A3208u) return;
    c.budget -= 1;
L_003A3208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3210:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A3240; } }
    c.budget -= 1;
L_003A3220:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3220u | kUnwind; return; } goto L_003A3220; } }
L_003A3240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A3248:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x003A3250u; syscall(c, 0x003A324Cu); if (c.pc != 0x003A3250u) return;
    c.budget -= 1;
L_003A3250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3258:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A326Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 164u, depth + 1u); else { c.pc = 0x00398ED0u; return; } if (c.pc != 0x003A326Cu) [[unlikely]] return; }
L_003A326C:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 8191ull;
    set32(c.r[16], c.r[29].w[0] + 4u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 8192ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3290u); st32((c.r[29].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 162u, depth + 1u); else { c.pc = 0x00398EC0u; return; } if (c.pc != 0x003A3290u) [[unlikely]] return; }
L_003A3290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 164u, depth + 1u); else { c.pc = 0x00398ED0u; return; } if (c.pc != 0x003A3298u) [[unlikely]] return; }
L_003A3298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A32A0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 162u, depth + 1u); else { c.pc = 0x00398EC0u; return; } if (c.pc != 0x003A32A0u) [[unlikely]] return; }
L_003A32A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] >> 13);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003A32C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A32D8u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 317u, depth + 1u); else { c.pc = 0x003A3258u; return; } if (c.pc != 0x003A32D8u) [[unlikely]] return; }
L_003A32D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A3354; } }
    set32(c.r[18], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] + 20960u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20960u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A32F8u); set32(c.r[17], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 309u, depth + 1u); else { c.pc = 0x003A31F0u; return; } if (c.pc != 0x003A32F8u) [[unlikely]] return; }
L_003A32F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[6], 0u + 1960u);
    set32(c.r[5], c.r[5].w[0] + 19000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3310u); c.r[4].d[0] = c.r[4].d[0] | 16384ull;  if (depth < kMaxDepth) unit_00A8(c, 311u, depth + 1u); else { c.pc = 0x003A3200u; return; } if (c.pc != 0x003A3310u) [[unlikely]] return; }
L_003A3310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3318u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x003A3318u) [[unlikely]] return; }
L_003A3318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3320u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x003A3320u) [[unlikely]] return; }
L_003A3320:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A332Cu); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00A8(c, 309u, depth + 1u); else { c.pc = 0x003A31F0u; return; } if (c.pc != 0x003A332Cu) [[unlikely]] return; }
L_003A332C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003A3330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3338u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 315u, depth + 1u); else { c.pc = 0x003A3248u; return; } if (c.pc != 0x003A3338u) [[unlikely]] return; }
L_003A3338:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3348u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_00A8(c, 309u, depth + 1u); else { c.pc = 0x003A31F0u; return; } if (c.pc != 0x003A3348u) [[unlikely]] return; }
L_003A3348:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3330u | kUnwind; return; } goto L_003A3330; }
L_003A3354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A3370:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x003A3378u; syscall(c, 0x003A3374u); if (c.pc != 0x003A3378u) return;
    c.budget -= 1;
L_003A3378:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3380:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A33A8; } }
L_003A3388:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3388u | kUnwind; return; } goto L_003A3388; } }
L_003A33A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A33B0:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x003A33B8u; syscall(c, 0x003A33B4u); if (c.pc != 0x003A33B8u) return;
    c.budget -= 1;
L_003A33B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A33C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[19], ld32((c.r[2].w[0] + 18240u)));
    set32(c.r[7], c.r[3].w[0] + 20984u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], c.r[19].w[0] + 64u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 20984u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3414u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 336u, depth + 1u); else { c.pc = 0x003A33B0u; return; } if (c.pc != 0x003A3414u) [[unlikely]] return; }
L_003A3414:
    c.r[3].d[0] = c.r[18].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 15u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[18].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3430u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003A3370u; return; } if (c.pc != 0x003A3430u) [[unlikely]] return; }
L_003A3430:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A343Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003A343Cu) [[unlikely]] return; }
L_003A343C:
    set32(c.r[17], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3450u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003A3370u; return; } if (c.pc != 0x003A3450u) [[unlikely]] return; }
L_003A3450:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { goto L_003A34B0; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_003A3468:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A347Cu); set32(c.r[19], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003A3370u; return; } if (c.pc != 0x003A347Cu) [[unlikely]] return; }
L_003A347C:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3488u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003A3488u) [[unlikely]] return; }
L_003A3488:
    set32(c.r[17], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A34A0u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00A8(c, 332u, depth + 1u); else { c.pc = 0x003A3370u; return; } if (c.pc != 0x003A34A0u) [[unlikely]] return; }
L_003A34A0:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3468u | kUnwind; return; } goto L_003A3468; } }
L_003A34B0:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A34D8:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A2938u | kUnwind; return; } goto L_003A2938; }
L_003A3550:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3568u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 338u, depth + 1u); else { c.pc = 0x003A33C0u; return; } if (c.pc != 0x003A3568u) [[unlikely]] return; }
L_003A3568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3570u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 347u, depth + 1u); else { c.pc = 0x003A34D8u; return; } if (c.pc != 0x003A3570u) [[unlikely]] return; }
L_003A3570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 18240u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398A60u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 86u, depth); }
L_003A3598:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A35ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 347u, depth + 1u); else { c.pc = 0x003A34D8u; return; } if (c.pc != 0x003A35ACu) [[unlikely]] return; }
L_003A35AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398A40u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 84u, depth); }
L_003A3610:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x003A3618u; syscall(c, 0x003A3614u); if (c.pc != 0x003A3618u) return;
    c.budget -= 1;
L_003A3618:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3620:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x003A3628u; syscall(c, 0x003A3624u); if (c.pc != 0x003A3628u) return;
    c.budget -= 1;
L_003A3628:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3630:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003A3660; } }
    c.budget -= 1;
L_003A3640:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3640u | kUnwind; return; } goto L_003A3640; } }
L_003A3660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003A3668:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x003A3670u; syscall(c, 0x003A366Cu); if (c.pc != 0x003A3670u) return;
    c.budget -= 1;
L_003A3670:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003A3678:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 6160ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003A3738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[18], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] + 22888u);
    set32(c.r[4], ld32((c.r[2].w[0] + 22888u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A36C0u); set32(c.r[17], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00A8(c, 353u, depth + 1u); else { c.pc = 0x003A3610u; return; } if (c.pc != 0x003A36C0u) [[unlikely]] return; }
L_003A36C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[5], c.r[5].w[0] + 20992u);
    c.r[4].d[0] = c.r[4].d[0] | 24576ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A36D8u); set32(c.r[6], 0u + 1856u);  if (depth < kMaxDepth) unit_00A8(c, 355u, depth + 1u); else { c.pc = 0x003A3620u; return; } if (c.pc != 0x003A36D8u) [[unlikely]] return; }
L_003A36D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[5], c.r[5].w[0] + 22848u);
    c.r[4].d[0] = c.r[4].d[0] | 8192ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A36F0u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_00A8(c, 355u, depth + 1u); else { c.pc = 0x003A3620u; return; } if (c.pc != 0x003A36F0u) [[unlikely]] return; }
L_003A36F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A36F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x003A36F8u) [[unlikely]] return; }
L_003A36F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3700u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x003A3700u) [[unlikely]] return; }
L_003A3700:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A370Cu); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00A8(c, 353u, depth + 1u); else { c.pc = 0x003A3610u; return; } if (c.pc != 0x003A370Cu) [[unlikely]] return; }
L_003A370C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003A3710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3718u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00A8(c, 359u, depth + 1u); else { c.pc = 0x003A3668u; return; } if (c.pc != 0x003A3718u) [[unlikely]] return; }
L_003A3718:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3728u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_00A8(c, 353u, depth + 1u); else { c.pc = 0x003A3610u; return; } if (c.pc != 0x003A3728u) [[unlikely]] return; }
L_003A3728:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3710u | kUnwind; return; } goto L_003A3710; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003A3738:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A3750:
    set32(c.r[3], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_003A378C; } }
    c.budget -= 1;
L_003A3768:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3768u | kUnwind; return; } goto L_003A3768; } }
L_003A378C:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] | 6ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    mtc0(c, 12u, c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    mtc0(c, 30u, c.r[31].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = eret(c); c.pc = t; [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003A37C0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xB0000000u);
    c.budget -= 4;
    { c.r[4].d[0] = c.r[4].d[0] | 4096ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3750u | kUnwind; return; } goto L_003A3750; }
L_003A37D0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xB0000000u);
    c.budget -= 4;
    { c.r[4].d[0] = c.r[4].d[0] | 4112ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3750u | kUnwind; return; } goto L_003A3750; }
L_003A37E0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xB0000000u);
    c.budget -= 4;
    { c.r[4].d[0] = c.r[4].d[0] | 4128ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3750u | kUnwind; return; } goto L_003A3750; }
L_003A37F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[17], c.r[18].w[0] + 22952u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A382C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32769ull;  if (t) { goto L_003A3924; } }
L_003A382C:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[18].w[0] + 22952u), 0ull);
    set32(c.r[16], c.r[19].w[0] - 18240u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A384Cu); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x003A384Cu) [[unlikely]] return; }
L_003A384C:
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] + 8192u);
    set32(c.r[2], 0u + 127u);
    set32(c.r[16], c.r[16].w[0] + 8128u);
    c.budget -= 5;
L_003A3860:
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] - 64u);
    set32(c.r[3], c.r[3].w[0] - 64u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3860u | kUnwind; return; } goto L_003A3860; } }
    set32(c.r[2], c.r[19].w[0] - 18240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3888u); st32((c.r[2].w[0] + 8128u), 0u);  if (depth < kMaxDepth) unit_00A9(c, 71u, depth + 1u); else { c.pc = 0x003A4AC0u; return; } if (c.pc != 0x003A3888u) [[unlikely]] return; }
L_003A3888:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], 0u + 11u);
    set32(c.r[5], c.r[5].w[0] + 15760u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 92u, depth + 1u); else { c.pc = 0x00398B10u; return; } if (c.pc != 0x003A38A0u) [[unlikely]] return; }
L_003A38A0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[2], c.r[18].w[0] + 22952u);  goto L_003A38B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 36897ull;  if (t) { goto L_003A3924; } }
L_003A38B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38C0u); st32((c.r[2].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A38C0u) [[unlikely]] return; }
L_003A38C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 65532ull;
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[20].d[0];
    c.r[16].d[0] = c.r[16].d[0] | 768ull;
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003A3900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A38F8u); c.r[16].d[0] = c.r[16].d[0] | 3200ull;  if (depth < kMaxDepth) unit_00A8(c, 373u, depth + 1u); else { c.pc = 0x003A37C0u; return; } if (c.pc != 0x003A38F8u) [[unlikely]] return; }
L_003A38F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3900u); c.r[4].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00A8(c, 375u, depth + 1u); else { c.pc = 0x003A37E0u; return; } if (c.pc != 0x003A3900u) [[unlikely]] return; }
L_003A3900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3908u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 374u, depth + 1u); else { c.pc = 0x003A37D0u; return; } if (c.pc != 0x003A3908u) [[unlikely]] return; }
L_003A3908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3910u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_00A6(c, 249u, depth + 1u); else { c.pc = 0x00399968u; return; } if (c.pc != 0x003A3910u) [[unlikely]] return; }
L_003A3910:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A3924; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3920u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A3920u) [[unlikely]] return; }
L_003A3920:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A3924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003A3948:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] + 22952u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003A397C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32769ull;  if (t) { goto L_003A39E8; } }
L_003A397C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3994; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_003A39E8; } }
L_003A3994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A399Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A399Cu) [[unlikely]] return; }
L_003A399C:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A39ACu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_00A6(c, 94u, depth + 1u); else { c.pc = 0x00398B20u; return; } if (c.pc != 0x003A39ACu) [[unlikely]] return; }
L_003A39AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A39D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A39BCu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_00A6(c, 245u, depth + 1u); else { c.pc = 0x00399900u; return; } if (c.pc != 0x003A39BCu) [[unlikely]] return; }
L_003A39BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A39C4u); set32(c.r[4], 0u + 3072u);  if (depth < kMaxDepth) unit_00A8(c, 374u, depth + 1u); else { c.pc = 0x003A37D0u; return; } if (c.pc != 0x003A39C4u) [[unlikely]] return; }
L_003A39C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A39CCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 373u, depth + 1u); else { c.pc = 0x003A37C0u; return; } if (c.pc != 0x003A39CCu) [[unlikely]] return; }
L_003A39CC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003A39D0:
    st64((c.r[18].w[0] + 22952u), 0ull);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003A39E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A39E4u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A39E4u) [[unlikely]] return; }
L_003A39E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A39E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A3A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A3A44u) [[unlikely]] return; }
L_003A3A44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4112ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003A3A78; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A3AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A70u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A3A70u) [[unlikely]] return; }
L_003A3A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A3AB0; } }
L_003A3A78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 62463ull;
    c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A8Cu); c.r[4].d[0] = c.r[4].d[0] | 128ull;  if (depth < kMaxDepth) unit_00A8(c, 374u, depth + 1u); else { c.pc = 0x003A37D0u; return; } if (c.pc != 0x003A3A8Cu) [[unlikely]] return; }
L_003A3A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A94u);  if (depth < kMaxDepth) unit_00A9(c, 2u, depth + 1u); else { c.pc = 0x003A4038u; return; } if (c.pc != 0x003A3A94u) [[unlikely]] return; }
L_003A3A94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3A9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 406u, depth + 1u); else { c.pc = 0x003A3B40u; return; } if (c.pc != 0x003A3A9Cu) [[unlikely]] return; }
L_003A3A9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A3AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3AACu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A3AACu) [[unlikely]] return; }
L_003A3AAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003A3AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A3AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3AD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003A3AD4u) [[unlikely]] return; }
L_003A3AD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4112ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003A3B08; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A3B2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3B00u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A3B00u) [[unlikely]] return; }
L_003A3B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003A3B2C; } }
L_003A3B08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 62335ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3B18u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_00A8(c, 374u, depth + 1u); else { c.pc = 0x003A37D0u; return; } if (c.pc != 0x003A3B18u) [[unlikely]] return; }
L_003A3B18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003A3B2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3B28u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003A3B28u) [[unlikely]] return; }
L_003A3B28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003A3B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A3B40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22952u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_003A3CB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4112ull;
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[6].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));  goto L_003A3BAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3B88u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 375u, depth + 1u); else { c.pc = 0x003A37E0u; return; } if (c.pc != 0x003A3B88u) [[unlikely]] return; }
L_003A3B88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 63487ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A37D0u | kUnwind; return; } goto L_003A37D0; }
L_003A3BAC:
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[4].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] - c.r[4].d[0];  if (t) { goto L_003A3C24; } }
    c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));
    c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(29491ll);
    c.r[4].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[18].d[0] & 3ull;  if (t) { goto L_003A3C24; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003A3BF0:
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(29491ll);  if (t) { goto L_003A3C28; } }
    c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));
    c.r[4].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[5].d[0];
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] - c.r[7].d[0];  goto L_003A3C2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3BF0u | kUnwind; return; } goto L_003A3BF0; } }
L_003A3C24:
    c.r[17].d[0] = c.r[18].d[0] & 3ull;
    c.budget -= 1;
L_003A3C28:
    c.r[2].d[0] = c.r[16].d[0] - c.r[7].d[0];
    c.budget -= 1;
L_003A3C2C:
    c.r[2].d[0] = c.r[2].sd[0] < 29491ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_003A3C80; } }
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    set32(c.r[4], 0u + 29491u);
    c.r[4].d[0] = c.r[4].d[0] >> (c.r[5].w[0] & 63u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3C5Cu); set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 375u, depth + 1u); else { c.pc = 0x003A37E0u; return; } if (c.pc != 0x003A3C5Cu) [[unlikely]] return; }
L_003A3C5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 63487ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A37D0u | kUnwind; return; } goto L_003A37D0; }
L_003A3C80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 63487ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3C90u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_00A8(c, 374u, depth + 1u); else { c.pc = 0x003A37D0u; return; } if (c.pc != 0x003A3C90u) [[unlikely]] return; }
L_003A3C90:
    set32(c.r[4], c.r[17].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[16].d[0] >> (c.r[4].w[0] & 63u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A37E0u | kUnwind; return; } goto L_003A37E0; }
L_003A3CB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A3CD0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = ld64((c.r[6].w[0] + 32u));
    set32(c.r[5], c.r[9].w[0] + 22952u);
    c.r[3].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld64((c.r[6].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    set32(c.r[5], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[2].d[0] - c.r[4].d[0];  if (t) { goto L_003A3D04; } }
    c.budget -= 1;
L_003A3D00:
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.budget -= 1;
L_003A3D04:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[6].w[0] + 4u), c.r[8].w[0]);  goto L_003A3D30; }
    c.r[2].d[0] = ld64((c.r[5].w[0] + 32u));
    c.r[3].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[4].d[0] = ld64((c.r[5].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] - c.r[4].d[0];
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3D00u | kUnwind; return; } goto L_003A3D00; }
    st32((c.r[6].w[0] + 4u), c.r[8].w[0]);
    c.budget -= 1;
L_003A3D30:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[6].w[0]), c.r[5].w[0]);  if (t) { goto L_003A3D3C; } }
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 1;
L_003A3D3C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[2], c.r[9].w[0] + 22952u);  if (t) { goto L_003A3D4C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_003A3D4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 24u), c.r[6].w[0]);  c.pc = t; return; }
L_003A3D58:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[4].w[0])));  if (t) { goto L_003A3D6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_003A3D74; } }
L_003A3D6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] + 22976u), c.r[3].w[0]);
    c.budget -= 2;
L_003A3D74:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 4u), 0u);  goto L_003A3D88; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
L_003A3D88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_003A3D90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003A3F40; } }
    set32(c.r[2], c.r[21].w[0] + 22952u);
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003A3F40; } }
    set32(c.r[23], 0u + 14745u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
L_003A3DF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[4].d[0] = ld64((c.r[16].w[0] + 32u));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[5].d[0] = c.r[17].d[0] & 2048ull;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 24u));
    c.r[4].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] - c.r[3].d[0];  if (t) { goto L_003A3E44; } }
    c.r[2].d[0] = ld64((c.r[20].w[0] + 22952u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 64511ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E3Cu); st64((c.r[20].w[0] + 22952u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 374u, depth + 1u); else { c.pc = 0x003A37D0u; return; } if (c.pc != 0x003A3E3Cu) [[unlikely]] return; }
L_003A3E3C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 4096u)));
    c.budget -= 2;
L_003A3E44:
    c.r[4].d[0] = ld64((c.r[20].w[0] + 22952u));
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[17].d[0] & 3ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[4].d[0] << (c.r[3].w[0] & 63u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[20].w[0] + 22952u);  if (t) { goto L_003A3F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3E78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 413u, depth + 1u); else { c.pc = 0x003A3D58u; return; } if (c.pc != 0x003A3E78u) [[unlikely]] return; }
L_003A3E78:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld64((c.r[16].w[0] + 24u));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] << 4);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 16u));
    c.r[6].d[0] = c.r[17].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[6].d[0] - c.r[3].d[0];
    set32(c.r[28], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.r[5].d[0] = ld64((c.r[16].w[0] + 32u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3EBCu); set32(c.r[7], ld32((c.r[16].w[0] + 48u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003A3EBCu) [[unlikely]] return; }
L_003A3EBC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003A3EE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65533ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003A3F2C; } }
L_003A3EE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 14744u);  if (t) { goto L_003A3F10; } }
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003A3F30; } }
L_003A3F10:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[23].d[0];
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3F2Cu); st64((c.r[16].w[0] + 32u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 411u, depth + 1u); else { c.pc = 0x003A3CD0u; return; } if (c.pc != 0x003A3F2Cu) [[unlikely]] return; }
L_003A3F2C:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003A3F30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A3DF0u | kUnwind; return; } goto L_003A3DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] + 22952u);  if (t) { goto L_003A3F44; } }
L_003A3F40:
    set32(c.r[4], c.r[21].w[0] + 22952u);
    c.budget -= 1;
L_003A3F44:
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 4112ull;
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[16].d[0] & 2048ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3F94; } }
    c.r[2].d[0] = ld64((c.r[21].w[0] + 22952u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 64511ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[16].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3F8Cu); st64((c.r[21].w[0] + 22952u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 374u, depth + 1u); else { c.pc = 0x003A37D0u; return; } if (c.pc != 0x003A3F8Cu) [[unlikely]] return; }
L_003A3F8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4096u)));
    c.budget -= 2;
L_003A3F94:
    c.r[2].d[0] = ld64((c.r[21].w[0] + 22952u));
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[16].d[0] & 3ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3FB8u); c.r[4].d[0] = c.r[2].d[0] << (c.r[4].w[0] & 63u);  if (depth < kMaxDepth) unit_00A8(c, 406u, depth + 1u); else { c.pc = 0x003A3B40u; return; } if (c.pc != 0x003A3FB8u) [[unlikely]] return; }
L_003A3FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4096u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4112u)));
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003A3FF8; } }
    c.r[2].d[0] = ld64((c.r[21].w[0] + 22952u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 64511ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A3FF0u); st64((c.r[21].w[0] + 22952u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 374u, depth + 1u); else { c.pc = 0x003A37D0u; return; } if (c.pc != 0x003A3FF0u) [[unlikely]] return; }
L_003A3FF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4096u)));
    c.budget -= 2;
L_003A3FF8:
    c.r[2].d[0] = ld64((c.r[21].w[0] + 22952u));
    c.budget -= 2;
    [[clang::musttail]] return unit_00A9(c, 1u, depth);
}

}
