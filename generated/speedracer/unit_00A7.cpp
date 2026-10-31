#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A7[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 63, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0,
    116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0,
    128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0,
    0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0,
    0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0,
    258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0,
    0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 350, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0,
    378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382,
    0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0,
    0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412,
    0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435,
    0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0039C000;
    case 2u: goto L_0039C014;
    case 3u: goto L_0039C030;
    case 4u: goto L_0039C0B8;
    case 5u: goto L_0039C120;
    case 6u: goto L_0039C134;
    case 7u: goto L_0039C144;
    case 8u: goto L_0039C168;
    case 9u: goto L_0039C198;
    case 10u: goto L_0039C1A8;
    case 11u: goto L_0039C1D8;
    case 12u: goto L_0039C1E8;
    case 13u: goto L_0039C240;
    case 14u: goto L_0039C264;
    case 15u: goto L_0039C308;
    case 16u: goto L_0039C330;
    case 17u: goto L_0039C364;
    case 18u: goto L_0039C384;
    case 19u: goto L_0039C3E0;
    case 20u: goto L_0039C3F8;
    case 21u: goto L_0039C428;
    case 22u: goto L_0039C430;
    case 23u: goto L_0039C438;
    case 24u: goto L_0039C4AC;
    case 25u: goto L_0039C4C4;
    case 26u: goto L_0039C4DC;
    case 27u: goto L_0039C4F4;
    case 28u: goto L_0039C4FC;
    case 29u: goto L_0039C508;
    case 30u: goto L_0039C534;
    case 31u: goto L_0039C538;
    case 32u: goto L_0039C540;
    case 33u: goto L_0039C580;
    case 34u: goto L_0039C590;
    case 35u: goto L_0039C5A8;
    case 36u: goto L_0039C5C0;
    case 37u: goto L_0039C5D8;
    case 38u: goto L_0039C61C;
    case 39u: goto L_0039C638;
    case 40u: goto L_0039C650;
    case 41u: goto L_0039C670;
    case 42u: goto L_0039C6A0;
    case 43u: goto L_0039C6C4;
    case 44u: goto L_0039C6E0;
    case 45u: goto L_0039C754;
    case 46u: goto L_0039C788;
    case 47u: goto L_0039C790;
    case 48u: goto L_0039C7B0;
    case 49u: goto L_0039C7D8;
    case 50u: goto L_0039C7F0;
    case 51u: goto L_0039C820;
    case 52u: goto L_0039C830;
    case 53u: goto L_0039C888;
    case 54u: goto L_0039C8C0;
    case 55u: goto L_0039C900;
    case 56u: goto L_0039C954;
    case 57u: goto L_0039C964;
    case 58u: goto L_0039C98C;
    case 59u: goto L_0039C99C;
    case 60u: goto L_0039C9A4;
    case 61u: goto L_0039C9B4;
    case 62u: goto L_0039C9BC;
    case 63u: goto L_0039C9C0;
    case 64u: goto L_0039C9C4;
    case 65u: goto L_0039C9EC;
    case 66u: goto L_0039C9FC;
    case 67u: goto L_0039CA28;
    case 68u: goto L_0039CA38;
    case 69u: goto L_0039CA48;
    case 70u: goto L_0039CA78;
    case 71u: goto L_0039CAA0;
    case 72u: goto L_0039CAB8;
    case 73u: goto L_0039CADC;
    case 74u: goto L_0039CB08;
    case 75u: goto L_0039CB44;
    case 76u: goto L_0039CB88;
    case 77u: goto L_0039CBC0;
    case 78u: goto L_0039CC0C;
    case 79u: goto L_0039CC1C;
    case 80u: goto L_0039CC44;
    case 81u: goto L_0039CC54;
    case 82u: goto L_0039CC5C;
    case 83u: goto L_0039CC6C;
    case 84u: goto L_0039CC74;
    case 85u: goto L_0039CCA4;
    case 86u: goto L_0039CCB4;
    case 87u: goto L_0039CCD8;
    case 88u: goto L_0039CD68;
    case 89u: goto L_0039CDC0;
    case 90u: goto L_0039CE2C;
    case 91u: goto L_0039CE44;
    case 92u: goto L_0039CE54;
    case 93u: goto L_0039CE9C;
    case 94u: goto L_0039CEC8;
    case 95u: goto L_0039CED8;
    case 96u: goto L_0039CF04;
    case 97u: goto L_0039CF14;
    case 98u: goto L_0039CF1C;
    case 99u: goto L_0039CF2C;
    case 100u: goto L_0039CF34;
    case 101u: goto L_0039CF68;
    case 102u: goto L_0039CFA8;
    case 103u: goto L_0039CFC4;
    case 104u: goto L_0039D008;
    case 105u: goto L_0039D1A8;
    case 106u: goto L_0039D1C0;
    case 107u: goto L_0039D1F8;
    case 108u: goto L_0039D220;
    case 109u: goto L_0039D238;
    case 110u: goto L_0039D250;
    case 111u: goto L_0039D278;
    case 112u: goto L_0039D290;
    case 113u: goto L_0039D2C8;
    case 114u: goto L_0039D2E8;
    case 115u: goto L_0039D2F8;
    case 116u: goto L_0039D300;
    case 117u: goto L_0039D31C;
    case 118u: goto L_0039D330;
    case 119u: goto L_0039D33C;
    case 120u: goto L_0039D360;
    case 121u: goto L_0039D380;
    case 122u: goto L_0039D3F8;
    case 123u: goto L_0039D400;
    case 124u: goto L_0039D410;
    case 125u: goto L_0039D458;
    case 126u: goto L_0039D470;
    case 127u: goto L_0039D478;
    case 128u: goto L_0039D480;
    case 129u: goto L_0039D490;
    case 130u: goto L_0039D498;
    case 131u: goto L_0039D4D8;
    case 132u: goto L_0039D4F0;
    case 133u: goto L_0039D508;
    case 134u: goto L_0039D524;
    case 135u: goto L_0039D52C;
    case 136u: goto L_0039D548;
    case 137u: goto L_0039D56C;
    case 138u: goto L_0039D588;
    case 139u: goto L_0039D5A0;
    case 140u: goto L_0039D5A8;
    case 141u: goto L_0039D5C8;
    case 142u: goto L_0039D5DC;
    case 143u: goto L_0039D5F8;
    case 144u: goto L_0039D610;
    case 145u: goto L_0039D668;
    case 146u: goto L_0039D690;
    case 147u: goto L_0039D6AC;
    case 148u: goto L_0039D700;
    case 149u: goto L_0039D71C;
    case 150u: goto L_0039D724;
    case 151u: goto L_0039D738;
    case 152u: goto L_0039D754;
    case 153u: goto L_0039D770;
    case 154u: goto L_0039D80C;
    case 155u: goto L_0039D838;
    case 156u: goto L_0039D860;
    case 157u: goto L_0039D8B0;
    case 158u: goto L_0039D8E0;
    case 159u: goto L_0039D918;
    case 160u: goto L_0039D974;
    case 161u: goto L_0039D9BC;
    case 162u: goto L_0039DA58;
    case 163u: goto L_0039DAA0;
    case 164u: goto L_0039DADC;
    case 165u: goto L_0039DB14;
    case 166u: goto L_0039DB28;
    case 167u: goto L_0039DB68;
    case 168u: goto L_0039DB80;
    case 169u: goto L_0039DB90;
    case 170u: goto L_0039DB9C;
    case 171u: goto L_0039DBB0;
    case 172u: goto L_0039DC60;
    case 173u: goto L_0039DC88;
    case 174u: goto L_0039DCA8;
    case 175u: goto L_0039DCD4;
    case 176u: goto L_0039DCE0;
    case 177u: goto L_0039DD00;
    case 178u: goto L_0039DD18;
    case 179u: goto L_0039DD28;
    case 180u: goto L_0039DD30;
    case 181u: goto L_0039DD38;
    case 182u: goto L_0039DD6C;
    case 183u: goto L_0039DD88;
    case 184u: goto L_0039DD90;
    case 185u: goto L_0039DDB0;
    case 186u: goto L_0039DDE8;
    case 187u: goto L_0039DE24;
    case 188u: goto L_0039DEB0;
    case 189u: goto L_0039DEEC;
    case 190u: goto L_0039DF04;
    case 191u: goto L_0039DF18;
    case 192u: goto L_0039DF40;
    case 193u: goto L_0039DF64;
    case 194u: goto L_0039DF78;
    case 195u: goto L_0039DF9C;
    case 196u: goto L_0039DFB4;
    case 197u: goto L_0039DFBC;
    case 198u: goto L_0039DFCC;
    case 199u: goto L_0039DFE0;
    case 200u: goto L_0039DFF0;
    case 201u: goto L_0039E030;
    case 202u: goto L_0039E078;
    case 203u: goto L_0039E088;
    case 204u: goto L_0039E09C;
    case 205u: goto L_0039E0B8;
    case 206u: goto L_0039E0D4;
    case 207u: goto L_0039E0EC;
    case 208u: goto L_0039E0F4;
    case 209u: goto L_0039E104;
    case 210u: goto L_0039E118;
    case 211u: goto L_0039E128;
    case 212u: goto L_0039E16C;
    case 213u: goto L_0039E17C;
    case 214u: goto L_0039E190;
    case 215u: goto L_0039E1A8;
    case 216u: goto L_0039E204;
    case 217u: goto L_0039E21C;
    case 218u: goto L_0039E224;
    case 219u: goto L_0039E234;
    case 220u: goto L_0039E248;
    case 221u: goto L_0039E25C;
    case 222u: goto L_0039E290;
    case 223u: goto L_0039E320;
    case 224u: goto L_0039E360;
    case 225u: goto L_0039E370;
    case 226u: goto L_0039E378;
    case 227u: goto L_0039E38C;
    case 228u: goto L_0039E39C;
    case 229u: goto L_0039E3AC;
    case 230u: goto L_0039E3B4;
    case 231u: goto L_0039E3C8;
    case 232u: goto L_0039E3D4;
    case 233u: goto L_0039E3E8;
    case 234u: goto L_0039E404;
    case 235u: goto L_0039E438;
    case 236u: goto L_0039E460;
    case 237u: goto L_0039E46C;
    case 238u: goto L_0039E498;
    case 239u: goto L_0039E4D8;
    case 240u: goto L_0039E528;
    case 241u: goto L_0039E538;
    case 242u: goto L_0039E540;
    case 243u: goto L_0039E558;
    case 244u: goto L_0039E568;
    case 245u: goto L_0039E578;
    case 246u: goto L_0039E580;
    case 247u: goto L_0039E5B0;
    case 248u: goto L_0039E5E8;
    case 249u: goto L_0039E5F4;
    case 250u: goto L_0039E620;
    case 251u: goto L_0039E66C;
    case 252u: goto L_0039E694;
    case 253u: goto L_0039E6D4;
    case 254u: goto L_0039E710;
    case 255u: goto L_0039E754;
    case 256u: goto L_0039E764;
    case 257u: goto L_0039E76C;
    case 258u: goto L_0039E780;
    case 259u: goto L_0039E790;
    case 260u: goto L_0039E7A8;
    case 261u: goto L_0039E7B8;
    case 262u: goto L_0039E7C0;
    case 263u: goto L_0039E7F0;
    case 264u: goto L_0039E830;
    case 265u: goto L_0039E83C;
    case 266u: goto L_0039E868;
    case 267u: goto L_0039E8B4;
    case 268u: goto L_0039E8DC;
    case 269u: goto L_0039E918;
    case 270u: goto L_0039E954;
    case 271u: goto L_0039E980;
    case 272u: goto L_0039E98C;
    case 273u: goto L_0039E9C0;
    case 274u: goto L_0039E9D0;
    case 275u: goto L_0039E9D8;
    case 276u: goto L_0039E9E8;
    case 277u: goto L_0039E9F8;
    case 278u: goto L_0039EA10;
    case 279u: goto L_0039EA20;
    case 280u: goto L_0039EA28;
    case 281u: goto L_0039EA60;
    case 282u: goto L_0039EAA0;
    case 283u: goto L_0039EAAC;
    case 284u: goto L_0039EAD8;
    case 285u: goto L_0039EB24;
    case 286u: goto L_0039EB4C;
    case 287u: goto L_0039EB88;
    case 288u: goto L_0039EBC4;
    case 289u: goto L_0039EC10;
    case 290u: goto L_0039EC28;
    case 291u: goto L_0039EC80;
    case 292u: goto L_0039EC90;
    case 293u: goto L_0039EC98;
    case 294u: goto L_0039ECAC;
    case 295u: goto L_0039ECBC;
    case 296u: goto L_0039ECD4;
    case 297u: goto L_0039ECE4;
    case 298u: goto L_0039ECEC;
    case 299u: goto L_0039ED20;
    case 300u: goto L_0039ED60;
    case 301u: goto L_0039ED6C;
    case 302u: goto L_0039ED88;
    case 303u: goto L_0039EDA4;
    case 304u: goto L_0039EDEC;
    case 305u: goto L_0039EE10;
    case 306u: goto L_0039EE50;
    case 307u: goto L_0039EEB8;
    case 308u: goto L_0039EF14;
    case 309u: goto L_0039EF84;
    case 310u: goto L_0039EFDC;
    case 311u: goto L_0039EFFC;
    case 312u: goto L_0039F028;
    case 313u: goto L_0039F038;
    case 314u: goto L_0039F040;
    case 315u: goto L_0039F054;
    case 316u: goto L_0039F064;
    case 317u: goto L_0039F074;
    case 318u: goto L_0039F07C;
    case 319u: goto L_0039F0A8;
    case 320u: goto L_0039F0F0;
    case 321u: goto L_0039F0FC;
    case 322u: goto L_0039F114;
    case 323u: goto L_0039F130;
    case 324u: goto L_0039F150;
    case 325u: goto L_0039F174;
    case 326u: goto L_0039F1A8;
    case 327u: goto L_0039F1D4;
    case 328u: goto L_0039F20C;
    case 329u: goto L_0039F21C;
    case 330u: goto L_0039F224;
    case 331u: goto L_0039F238;
    case 332u: goto L_0039F248;
    case 333u: goto L_0039F258;
    case 334u: goto L_0039F260;
    case 335u: goto L_0039F290;
    case 336u: goto L_0039F2D0;
    case 337u: goto L_0039F2E8;
    case 338u: goto L_0039F310;
    case 339u: goto L_0039F37C;
    case 340u: goto L_0039F3BC;
    case 341u: goto L_0039F3CC;
    case 342u: goto L_0039F3D4;
    case 343u: goto L_0039F3E8;
    case 344u: goto L_0039F3F8;
    case 345u: goto L_0039F408;
    case 346u: goto L_0039F410;
    case 347u: goto L_0039F440;
    case 348u: goto L_0039F450;
    case 349u: goto L_0039F460;
    case 350u: goto L_0039F49C;
    case 351u: goto L_0039F4A0;
    case 352u: goto L_0039F4B8;
    case 353u: goto L_0039F4E0;
    case 354u: goto L_0039F554;
    case 355u: goto L_0039F594;
    case 356u: goto L_0039F5A4;
    case 357u: goto L_0039F5AC;
    case 358u: goto L_0039F5C0;
    case 359u: goto L_0039F5D0;
    case 360u: goto L_0039F5E0;
    case 361u: goto L_0039F5E8;
    case 362u: goto L_0039F618;
    case 363u: goto L_0039F628;
    case 364u: goto L_0039F638;
    case 365u: goto L_0039F680;
    case 366u: goto L_0039F698;
    case 367u: goto L_0039F6B8;
    case 368u: goto L_0039F720;
    case 369u: goto L_0039F760;
    case 370u: goto L_0039F788;
    case 371u: goto L_0039F7E8;
    case 372u: goto L_0039F808;
    case 373u: goto L_0039F834;
    case 374u: goto L_0039F844;
    case 375u: goto L_0039F84C;
    case 376u: goto L_0039F860;
    case 377u: goto L_0039F870;
    case 378u: goto L_0039F880;
    case 379u: goto L_0039F888;
    case 380u: goto L_0039F8B8;
    case 381u: goto L_0039F8E4;
    case 382u: goto L_0039F8FC;
    case 383u: goto L_0039F920;
    case 384u: goto L_0039F970;
    case 385u: goto L_0039F980;
    case 386u: goto L_0039F988;
    case 387u: goto L_0039F99C;
    case 388u: goto L_0039F9AC;
    case 389u: goto L_0039F9BC;
    case 390u: goto L_0039F9C4;
    case 391u: goto L_0039F9E8;
    case 392u: goto L_0039F9F8;
    case 393u: goto L_0039FA08;
    case 394u: goto L_0039FA28;
    case 395u: goto L_0039FA40;
    case 396u: goto L_0039FA48;
    case 397u: goto L_0039FA50;
    case 398u: goto L_0039FA6C;
    case 399u: goto L_0039FA80;
    case 400u: goto L_0039FA94;
    case 401u: goto L_0039FAB4;
    case 402u: goto L_0039FAD0;
    case 403u: goto L_0039FAF8;
    case 404u: goto L_0039FB04;
    case 405u: goto L_0039FB30;
    case 406u: goto L_0039FB5C;
    case 407u: goto L_0039FBAC;
    case 408u: goto L_0039FBBC;
    case 409u: goto L_0039FBC4;
    case 410u: goto L_0039FBDC;
    case 411u: goto L_0039FBEC;
    case 412u: goto L_0039FBFC;
    case 413u: goto L_0039FC04;
    case 414u: goto L_0039FC38;
    case 415u: goto L_0039FC60;
    case 416u: goto L_0039FC6C;
    case 417u: goto L_0039FC98;
    case 418u: goto L_0039FCC8;
    case 419u: goto L_0039FD18;
    case 420u: goto L_0039FD28;
    case 421u: goto L_0039FD30;
    case 422u: goto L_0039FD44;
    case 423u: goto L_0039FD54;
    case 424u: goto L_0039FD64;
    case 425u: goto L_0039FD6C;
    case 426u: goto L_0039FD90;
    case 427u: goto L_0039FDD0;
    case 428u: goto L_0039FDE8;
    case 429u: goto L_0039FE10;
    case 430u: goto L_0039FE80;
    case 431u: goto L_0039FEC0;
    case 432u: goto L_0039FED0;
    case 433u: goto L_0039FED8;
    case 434u: goto L_0039FEEC;
    case 435u: goto L_0039FEFC;
    case 436u: goto L_0039FF0C;
    case 437u: goto L_0039FF14;
    case 438u: goto L_0039FF48;
    case 439u: goto L_0039FF90;
    case 440u: goto L_0039FFA8;
    case 441u: goto L_0039FFD0;
    default: bad_entry(c, 0x0039C000u); return;
    }
L_0039C000:
    set32(c.r[4], ld32((c.r[3].w[0] + 28516u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), 0u);  c.pc = t; return; }
L_0039C014:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 28524u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), 0u);  c.pc = t; return; }
L_0039C030:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] - 16u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(97ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0039C078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039C144; } }
L_0039C078:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0039C0C0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[5].w[0] << 8);
    st32((c.r[16].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[19].d[0] & 4ull;
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 12u), 0u);  if (t) { goto L_0039C0CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C0B8u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039C0B8u) [[unlikely]] return; }
L_0039C0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] << 4);  if (t) { goto L_0039C0D0; } }
L_0039C0C0:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0039C0CC:
    set32(c.r[5], c.r[18].w[0] << 4);
    c.budget -= 1;
L_0039C0D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 28512u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 68u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C120u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039C120u) [[unlikely]] return; }
L_0039C120:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039C13C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C134u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 182u, depth + 1u); else { c.pc = 0x003991F0u; return; } if (c.pc != 0x0039C134u) [[unlikely]] return; }
L_0039C134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0039C148; } }
L_0039C13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C144u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 180u, depth + 1u); else { c.pc = 0x003991E0u; return; } if (c.pc != 0x0039C144u) [[unlikely]] return; }
L_0039C144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0039C148:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0039C168:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C198u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 3u, depth + 1u); else { c.pc = 0x0039C030u; return; } if (c.pc != 0x0039C198u) [[unlikely]] return; }
L_0039C198:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C1A8:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C1D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 3u, depth + 1u); else { c.pc = 0x0039C030u; return; } if (c.pc != 0x0039C1D8u) [[unlikely]] return; }
L_0039C1D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C1E8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 128u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[17], c.r[3].w[0] + 28504u);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 28504u)));
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039C31C; } }
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] + 30u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0039C25C; } }
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_0039C240:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C240u | kUnwind; return; } goto L_0039C240; } }
L_0039C25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C264u);  if (depth < kMaxDepth) unit_00A6(c, 186u, depth + 1u); else { c.pc = 0x00399210u; return; } if (c.pc != 0x0039C264u) [[unlikely]] return; }
L_0039C264:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0039C2BC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0039C310; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0039C310; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_0039C2F8; } }
L_0039C2BC:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0039C310; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0039C310; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_0039C2F8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C308u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C308u) [[unlikely]] return; }
L_0039C308:
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0039C310:
    set_interrupts(c, true);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0039C31C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0039C330:
    c.r[25].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[25].d[0] = c.r[25].d[0] | 65472ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[10], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0039C3D4; } }
    c.r[8].d[0] = c.r[4].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.r[9].d[0] = c.r[10].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[9].w[0] - c.r[8].w[0]);
    set32(c.r[11], c.r[10].w[0] >> 6);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[9].d[0] = c.r[11].d[0] & 7ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[10], c.r[11].w[0] >> 3);  if (t) { goto L_0039C380; } }
L_0039C364:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C364u | kUnwind; return; } goto L_0039C364; } }
L_0039C380:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { goto L_0039C3D4; } }
    goto L_0039C388;
L_0039C384:
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 1;
L_0039C388:
    c.budget -= 19;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C384u | kUnwind; return; } goto L_0039C384; } }
L_0039C3D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039C3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C3F8u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039C3F8u) [[unlikely]] return; }
L_0039C3F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17168u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0039C420; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00A8(c, 280u, depth); }
L_0039C420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C428u); st32((c.r[3].w[0] + 17168u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039C428u) [[unlikely]] return; }
L_0039C428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C430u);  if (depth < kMaxDepth) unit_00A6(c, 486u, depth + 1u); else { c.pc = 0x0039BC80u; return; } if (c.pc != 0x0039C430u) [[unlikely]] return; }
L_0039C430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C438u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039C438u) [[unlikely]] return; }
L_0039C438:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[18], c.r[3].w[0] + 29056u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], c.r[8].w[0] - 30336u);
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[6], c.r[6].w[0] + 31104u);
    set32(c.r[7], c.r[7].w[0] - 32384u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    st32((c.r[8].w[0] - 30336u), c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 14624u);
    st32((c.r[16].w[0] + 28u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C4ACu); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 505u, depth + 1u); else { c.pc = 0x0039BF68u; return; } if (c.pc != 0x0039C4ACu) [[unlikely]] return; }
L_0039C4AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 13640u);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C4C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 505u, depth + 1u); else { c.pc = 0x0039BF68u; return; } if (c.pc != 0x0039C4C4u) [[unlikely]] return; }
L_0039C4C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 13096u);
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C4DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 505u, depth + 1u); else { c.pc = 0x0039BF68u; return; } if (c.pc != 0x0039C4DCu) [[unlikely]] return; }
L_0039C4DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 14352u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C4F4u); c.r[4].d[0] = c.r[4].d[0] | 12ull;  if (depth < kMaxDepth) unit_00A6(c, 505u, depth + 1u); else { c.pc = 0x0039BF68u; return; } if (c.pc != 0x0039C4F4u) [[unlikely]] return; }
L_0039C4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C4FCu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039C4FCu) [[unlikely]] return; }
L_0039C4FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C508u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_00A6(c, 190u, depth + 1u); else { c.pc = 0x00399230u; return; } if (c.pc != 0x0039C508u) [[unlikely]] return; }
L_0039C508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039C568; } }
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[5].w[0] + 12u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C534u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 8u, depth + 1u); else { c.pc = 0x0039C168u; return; } if (c.pc != 0x0039C534u) [[unlikely]] return; }
L_0039C534:
    c.budget -= 1;
L_0039C538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C540u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 485u, depth + 1u); else { c.pc = 0x0039BC38u; return; } if (c.pc != 0x0039C540u) [[unlikely]] return; }
L_0039C540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C538u | kUnwind; return; } goto L_0039C538; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[5], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00399220u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 188u, depth); }
L_0039C568:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039C580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C590u);  if (depth < kMaxDepth) unit_00A6(c, 501u, depth + 1u); else { c.pc = 0x0039BF00u; return; } if (c.pc != 0x0039C590u) [[unlikely]] return; }
L_0039C590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 17168u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C5A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C5C0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039C5C0u) [[unlikely]] return; }
L_0039C5C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0039C630; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_0039C5D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0039C624; }
    set32(c.r[2], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0039C610; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0039C610:
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C61Cu); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039C61Cu) [[unlikely]] return; }
L_0039C61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039C63C; } }
L_0039C624:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039C5D8u | kUnwind; return; } goto L_0039C5D8; } }
L_0039C630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C638u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039C638u) [[unlikely]] return; }
L_0039C638:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039C63C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C650:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_0039C670:
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0039C680u);  goto L_0039C684; }
L_0039C684:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_0039C6A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0039C6BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0039C6CC; }
L_0039C6BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C6C4u);  if (depth < kMaxDepth) unit_00A7(c, 41u, depth + 1u); else { c.pc = 0x0039C670u; return; } if (c.pc != 0x0039C6C4u) [[unlikely]] return; }
L_0039C6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0039C6D8; } }
L_0039C6CC:
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0039C6D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C6E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 10ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0039C72C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_0039C774; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0039C764; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_0039C778; } }
L_0039C72C:
    set32(c.r[17], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_0039C778; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C754u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039C754u) [[unlikely]] return; }
L_0039C754:
    c.r[3].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_0039C774; } }
L_0039C764:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_0039C774:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0039C778:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0039C788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C788u);  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x00398E50u; return; } if (c.pc != 0x0039C788u) [[unlikely]] return; }
L_0039C788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C790u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x0039C650u; return; } if (c.pc != 0x0039C790u) [[unlikely]] return; }
L_0039C790:
    st32((c.r[17].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039C7B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[7], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C7D8u); set32(c.r[9], ld32((c.r[5].w[0] + 44u)));  if (depth < kMaxDepth) unit_00A7(c, 10u, depth + 1u); else { c.pc = 0x0039C1A8u; return; } if (c.pc != 0x0039C7D8u) [[unlikely]] return; }
L_0039C7D8:
    set32(c.r[3], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039C7F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039C828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C820u); set32(c.r[5], c.r[5].w[0] >> 16);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x0039C6A0u; return; } if (c.pc != 0x0039C820u) [[unlikely]] return; }
L_0039C820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039C834; } }
L_0039C828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C830u);  if (depth < kMaxDepth) unit_00A7(c, 41u, depth + 1u); else { c.pc = 0x0039C670u; return; } if (c.pc != 0x0039C830u) [[unlikely]] return; }
L_0039C830:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039C834:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C888u); set32(c.r[8], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_00A7(c, 10u, depth + 1u); else { c.pc = 0x0039C1A8u; return; } if (c.pc != 0x0039C888u) [[unlikely]] return; }
L_0039C888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0039C8B0; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[5], c.r[5].w[0] - 14416u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], 0u + 2048u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00A9(c, 83u, depth); }
L_0039C8B0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039C8C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C900u); set32(c.r[4], c.r[4].w[0] - 30336u);  if (depth < kMaxDepth) unit_00A7(c, 35u, depth + 1u); else { c.pc = 0x0039C5A8u; return; } if (c.pc != 0x0039C900u) [[unlikely]] return; }
L_0039C900:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039CA00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_0039C9C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 25416u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C954u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039C954u) [[unlikely]] return; }
L_0039C954:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0039C96C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C964u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x0039C650u; return; } if (c.pc != 0x0039C964u) [[unlikely]] return; }
L_0039C964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0039CA00; } }
L_0039C96C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C98Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 8u, depth + 1u); else { c.pc = 0x0039C168u; return; } if (c.pc != 0x0039C98Cu) [[unlikely]] return; }
L_0039C98C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039C9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C99Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x0039C650u; return; } if (c.pc != 0x0039C99Cu) [[unlikely]] return; }
L_0039C99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C9A4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039C9A4u) [[unlikely]] return; }
L_0039C9A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0039CA00; } }
L_0039C9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C9B4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039C9B4u) [[unlikely]] return; }
L_0039C9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C9BCu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039C9BCu) [[unlikely]] return; }
L_0039C9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039CA00; } }
    goto L_0039C9C4;
L_0039C9C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039C9C4:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C9ECu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 8u, depth + 1u); else { c.pc = 0x0039C168u; return; } if (c.pc != 0x0039C9ECu) [[unlikely]] return; }
L_0039C9EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039CA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039C9FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x0039C650u; return; } if (c.pc != 0x0039C9FCu) [[unlikely]] return; }
L_0039C9FC:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_0039CA00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0039CA28:
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039CA6C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_0039CA38:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 20u)));  goto L_0039CA64; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0039CA48:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 56u)));  goto L_0039CA58; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_0039CA58:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CA48u | kUnwind; return; } goto L_0039CA48; }
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 1;
L_0039CA64:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039CA38u | kUnwind; return; } goto L_0039CA38; }
L_0039CA6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039CA78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CAA0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 10u, depth + 1u); else { c.pc = 0x0039C1A8u; return; } if (c.pc != 0x0039CAA0u) [[unlikely]] return; }
L_0039CAA0:
    set32(c.r[3], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039CAB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CADCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 41u, depth + 1u); else { c.pc = 0x0039C670u; return; } if (c.pc != 0x0039CADCu) [[unlikely]] return; }
L_0039CADC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    st32((c.r[18].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CB08u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_00A7(c, 67u, depth + 1u); else { c.pc = 0x0039CA28u; return; } if (c.pc != 0x0039CB08u) [[unlikely]] return; }
L_0039CB08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  goto L_0039CB1C; }
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), 0u);  if (t) { goto L_0039CB24; } }
L_0039CB1C:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_0039CB24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CB44u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 10u, depth + 1u); else { c.pc = 0x0039C1A8u; return; } if (c.pc != 0x0039CB44u) [[unlikely]] return; }
L_0039CB44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039CB70; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[5], c.r[5].w[0] - 13704u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], 0u + 2048u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_00A9(c, 83u, depth); }
L_0039CB70:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039CB88:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] - 30336u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CBC0u); st32((c.r[17].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_00A7(c, 35u, depth + 1u); else { c.pc = 0x0039C5A8u; return; } if (c.pc != 0x0039CBC0u) [[unlikely]] return; }
L_0039CBC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039CCB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_0039CC7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 25432u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC0Cu); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039CC0Cu) [[unlikely]] return; }
L_0039CC0C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0039CC24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x0039C650u; return; } if (c.pc != 0x0039CC1Cu) [[unlikely]] return; }
L_0039CC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0039CCB8; } }
L_0039CC24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC44u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 8u, depth + 1u); else { c.pc = 0x0039C168u; return; } if (c.pc != 0x0039CC44u) [[unlikely]] return; }
L_0039CC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039CC64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x0039C650u; return; } if (c.pc != 0x0039CC54u) [[unlikely]] return; }
L_0039CC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC5Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039CC5Cu) [[unlikely]] return; }
L_0039CC5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0039CCB8; } }
L_0039CC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC6Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039CC6Cu) [[unlikely]] return; }
L_0039CC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CC74u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039CC74u) [[unlikely]] return; }
L_0039CC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039CCB8; } }
L_0039CC7C:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CCA4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 8u, depth + 1u); else { c.pc = 0x0039C168u; return; } if (c.pc != 0x0039CCA4u) [[unlikely]] return; }
L_0039CCA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039CCB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CCB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x0039C650u; return; } if (c.pc != 0x0039CCB4u) [[unlikely]] return; }
L_0039CCB4:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_0039CCB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0039CCD8:
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 16u)));  goto L_0039CCF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0039CCF8; } }
L_0039CCF4:
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_0039CCF8:
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 20;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0039CD5C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039CD5C; } }
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00399CE8u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 283u, depth); }
L_0039CD5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0039CD68:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CDC0u); set32(c.r[4], c.r[4].w[0] - 30336u);  if (depth < kMaxDepth) unit_00A7(c, 35u, depth + 1u); else { c.pc = 0x0039C5A8u; return; } if (c.pc != 0x0039CDC0u) [[unlikely]] return; }
L_0039CDC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039CF38; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[23].w[0]);
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[30].d[0] & 2ull;
    st32((c.r[16].w[0] + 32u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0039CE54; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0]; c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_0039CE34; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE2Cu); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[18].d[0];  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039CE2Cu) [[unlikely]] return; }
L_0039CE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] & 1ull;  if (t) { goto L_0039CE58; } }
L_0039CE34:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0039CE44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039CE44u) [[unlikely]] return; }
L_0039CE44:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0039CE54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE54u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039CE54u) [[unlikely]] return; }
L_0039CE54:
    c.r[2].d[0] = c.r[30].d[0] & 1ull;
    c.budget -= 1;
L_0039CE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0039CEAC; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0039CE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_0039CE74; } }
L_0039CE70:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_0039CE74:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CE9Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00A7(c, 8u, depth + 1u); else { c.pc = 0x0039C168u; return; } if (c.pc != 0x0039CE9Cu) [[unlikely]] return; }
L_0039CE9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039CF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039CF14; } }
L_0039CEAC:
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 25448u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CEC8u); st32((c.r[29].w[0] + 4u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039CEC8u) [[unlikely]] return; }
L_0039CEC8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0039CEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CED8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x0039C650u; return; } if (c.pc != 0x0039CED8u) [[unlikely]] return; }
L_0039CED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0039CF38; } }
L_0039CEE0:
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF04u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00A7(c, 8u, depth + 1u); else { c.pc = 0x0039C168u; return; } if (c.pc != 0x0039CF04u) [[unlikely]] return; }
L_0039CF04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039CF24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF14u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039CF14u) [[unlikely]] return; }
L_0039CF14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 40u, depth + 1u); else { c.pc = 0x0039C650u; return; } if (c.pc != 0x0039CF1Cu) [[unlikely]] return; }
L_0039CF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0039CF38; } }
L_0039CF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF2Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039CF2Cu) [[unlikely]] return; }
L_0039CF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CF34u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039CF34u) [[unlikely]] return; }
L_0039CF34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039CF38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0039CF68:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0039CF94; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0039CF94; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039CF9C; } }
L_0039CF94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0039CF9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0039CFA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039CFC4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039CFC4u) [[unlikely]] return; }
L_0039CFC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 30336u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_0039CFF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[17].w[0]);  if (t) { goto L_0039D028; } }
L_0039CFF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 20u), c.r[17].w[0]);  goto L_0039D028; }
    c.budget -= 1;
L_0039D008:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D008u | kUnwind; return; } goto L_0039D008; } }
    st32((c.r[4].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_0039D028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00A8(c, 280u, depth); }
L_0039D1A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D1C0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039D1C0u) [[unlikely]] return; }
L_0039D1C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] - 30336u);
    set32(c.r[16], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_0039D1E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0039D218; } }
L_0039D1E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039D218; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_0039D214; }
    c.budget -= 1;
L_0039D1F8:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039D218; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D1F8u | kUnwind; return; } goto L_0039D1F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0039D214:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_0039D218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D220u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039D220u) [[unlikely]] return; }
L_0039D220:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D238:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D250u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039D250u) [[unlikely]] return; }
L_0039D250:
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_0039D264; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_0039D270; } }
L_0039D264:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_0039D270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D278u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039D278u) [[unlikely]] return; }
L_0039D278:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D290:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2C8u); set32(c.r[6], ld32((c.r[17].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039D2C8u) [[unlikely]] return; }
L_0039D2C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[20], ld32((c.r[17].w[0] + 44u)));  goto L_0039D2D4; }
L_0039D2D4:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0039D2E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2E8u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039D2E8u) [[unlikely]] return; }
L_0039D2E8:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0039D2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D2F8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039D2F8u) [[unlikely]] return; }
L_0039D2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D300u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039D300u) [[unlikely]] return; }
L_0039D300:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] >> 16);  if (t) { goto L_0039D324; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D31Cu); set32(c.r[4], c.r[4].w[0] - 30336u);  if (depth < kMaxDepth) unit_00A7(c, 42u, depth + 1u); else { c.pc = 0x0039C6A0u; return; } if (c.pc != 0x0039D31Cu) [[unlikely]] return; }
L_0039D31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0039D334; } }
L_0039D324:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D330u); set32(c.r[4], c.r[4].w[0] - 30336u);  if (depth < kMaxDepth) unit_00A7(c, 41u, depth + 1u); else { c.pc = 0x0039C670u; return; } if (c.pc != 0x0039D330u) [[unlikely]] return; }
L_0039D330:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0039D334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D33Cu);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039D33Cu) [[unlikely]] return; }
L_0039D33C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] | 10ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_0039D390; }
    c.budget -= 1;
L_0039D360:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D380u); c.r[9].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 8u, depth + 1u); else { c.pc = 0x0039C168u; return; } if (c.pc != 0x0039D380u) [[unlikely]] return; }
L_0039D380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D360u | kUnwind; return; } goto L_0039D360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0039D43C; } }
L_0039D390:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0039D3B4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[19], 0u + 1u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 6;
L_0039D3B4:
    set32(c.r[5], c.r[19].w[0] << 4);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 64u);
    set32(c.r[2], c.r[29].w[0] + 12u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 17;
L_0039D3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D400u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 180u, depth + 1u); else { c.pc = 0x003991E0u; return; } if (c.pc != 0x0039D400u) [[unlikely]] return; }
L_0039D400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0039D438; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_0039D410:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D410u | kUnwind; return; } goto L_0039D410; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D3F8u | kUnwind; return; } goto L_0039D3F8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0039D438:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0039D43C:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0039D458:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0039D478; } }
    c.budget -= 1;
L_0039D470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D478u);  if (depth < kMaxDepth) unit_00A7(c, 112u, depth + 1u); else { c.pc = 0x0039D290u; return; } if (c.pc != 0x0039D478u) [[unlikely]] return; }
L_0039D478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D480u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 109u, depth + 1u); else { c.pc = 0x0039D238u; return; } if (c.pc != 0x0039D480u) [[unlikely]] return; }
L_0039D480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D470u | kUnwind; return; } goto L_0039D470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D490u);  if (depth < kMaxDepth) unit_00A6(c, 138u, depth + 1u); else { c.pc = 0x00398D40u; return; } if (c.pc != 0x0039D490u) [[unlikely]] return; }
L_0039D490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D478u | kUnwind; return; } goto L_0039D478; } }
L_0039D498:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 17320u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039D4FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 25472u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D4D8u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039D4D8u) [[unlikely]] return; }
L_0039D4D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] + 17320u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25488u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D4F0u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039D4F0u) [[unlikely]] return; }
L_0039D4F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 17324u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0039D4FC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039D508:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D524u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 130u, depth + 1u); else { c.pc = 0x0039D498u; return; } if (c.pc != 0x0039D524u) [[unlikely]] return; }
L_0039D524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D52Cu); set32(c.r[4], ld32((c.r[17].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039D52Cu) [[unlikely]] return; }
L_0039D52C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], c.r[3].w[0] - 24832u);
    set32(c.r[3], c.r[5].w[0] + 512u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0039D564; } }
    c.budget -= 1;
L_0039D548:
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    if (c.r[4].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D548u | kUnwind; return; } goto L_0039D548; } }
L_0039D564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D56Cu); set32(c.r[4], ld32((c.r[17].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039D56Cu) [[unlikely]] return; }
L_0039D56C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D588:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D5A0u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A7(c, 130u, depth + 1u); else { c.pc = 0x0039D498u; return; } if (c.pc != 0x0039D5A0u) [[unlikely]] return; }
L_0039D5A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D5A8u); set32(c.r[4], ld32((c.r[17].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039D5A8u) [[unlikely]] return; }
L_0039D5A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], c.r[3].w[0] - 24832u);
    set32(c.r[3], c.r[16].w[0] + 512u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0039D5F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_0039D5C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 16u);  goto L_0039D5E4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 17320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D5DCu); st32((c.r[16].w[0] + 4u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039D5DCu) [[unlikely]] return; }
L_0039D5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039D5FC; } }
L_0039D5E4:
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D5C8u | kUnwind; return; } goto L_0039D5C8; }
L_0039D5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D5F8u); set32(c.r[4], ld32((c.r[17].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039D5F8u) [[unlikely]] return; }
L_0039D5F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0039D5FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D610:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 22;
L_0039D668:
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[10].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D690u); c.r[11].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x0039D690u) [[unlikely]] return; }
L_0039D690:
    set32(c.r[16], c.r[2].w[0] >> 31);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 200u)));  if (t) { goto L_0039D6C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1000u);  if (t) { goto L_0039D6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D6ACu); mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_00A6(c, 293u, depth + 1u); else { c.pc = 0x00399E98u; return; } if (c.pc != 0x0039D6ACu) [[unlikely]] return; }
L_0039D6AC:
    c.r[3].d[0] = c.r[17].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] << 1);  goto L_0039D6B8; }
L_0039D6B8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D668u | kUnwind; return; } goto L_0039D668; } }
L_0039D6C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0039D700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D71Cu); c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A7(c, 130u, depth + 1u); else { c.pc = 0x0039D498u; return; } if (c.pc != 0x0039D71Cu) [[unlikely]] return; }
L_0039D71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D724u); set32(c.r[4], ld32((c.r[17].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039D724u) [[unlikely]] return; }
L_0039D724:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0039D740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D738u); set32(c.r[4], ld32((c.r[17].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039D738u) [[unlikely]] return; }
L_0039D738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039D758; } }
L_0039D740:
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - 24832u);
    set32(c.r[4], ld32((c.r[17].w[0] + 17320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D754u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039D754u) [[unlikely]] return; }
L_0039D754:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039D758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0039D770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17312u)));
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_0039D790; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0039D790:
    set32(c.r[3], 0u + 1088u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[2].w[0] + 17304u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 27008u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = c.r[3].d[0] | c.r[5].d[0];
    lwl(c.r[2], (c.r[16].w[0] + 3u));
    lwr(c.r[2], (c.r[16].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    swr(c.r[2], (c.r[29].w[0]));
    lwl(c.r[6], (c.r[16].w[0] + 7u));
    lwr(c.r[6], (c.r[16].w[0] + 4u));
    swl(c.r[6], (c.r[29].w[0] + 7u));
    swr(c.r[6], (c.r[29].w[0] + 4u));
    lwl(c.r[3], (c.r[16].w[0] + 11u));
    lwr(c.r[3], (c.r[16].w[0] + 8u));
    swl(c.r[3], (c.r[29].w[0] + 11u));
    swr(c.r[3], (c.r[29].w[0] + 8u));
    lwl(c.r[7], (c.r[16].w[0] + 15u));
    lwr(c.r[7], (c.r[16].w[0] + 12u));
    swl(c.r[7], (c.r[29].w[0] + 15u));
    swr(c.r[7], (c.r[29].w[0] + 12u));
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 28;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0039D80C; } }
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039D80Cu); set32(c.r[6], ld32((c.r[29].w[0] + 12u)));  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0039D80Cu) [[unlikely]] return; }
L_0039D80C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0039DAA0; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 25504u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0039C000u < 16384u) { entry = entries_00A7[(t - 0x0039C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0039D838:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[7], c.r[16].w[0] + 20u);  if (t) { goto L_0039D888; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; c.r[10].d[0] = c.r[8].d[0] | c.r[2].d[0];  if (t) { goto L_0039D888; } }
    set32(c.r[9], c.r[16].w[0] + 36u);
    set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);
    c.budget -= 2;
L_0039D860:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D860u | kUnwind; return; } goto L_0039D860; } }
L_0039D888:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039DAA0; } }
    set32(c.r[8], ld32((c.r[7].w[0] + 12u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[10].d[0] = c.r[8].d[0] | c.r[2].d[0];  if (t) { goto L_0039DAA0; } }
    set32(c.r[9], c.r[7].w[0] + 80u);
    set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);
    c.budget -= 3;
L_0039D8B0:
    set32(c.r[5], c.r[10].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D8B0u | kUnwind; return; } goto L_0039D8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_0039DAA4; } }
L_0039D8E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_0039DAA4; } }
    lwl(c.r[4], (c.r[16].w[0] + 23u));
    lwr(c.r[4], (c.r[16].w[0] + 20u));
    swl(c.r[4], (c.r[29].w[0] + 19u));
    swr(c.r[4], (c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[16].w[0] + 24u);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 344u);  if (t) { goto L_0039D974; } }
L_0039D918:
    ldl(c.r[8], (c.r[4].w[0] + 7u));
    ldr(c.r[8], (c.r[4].w[0]));
    ldl(c.r[3], (c.r[4].w[0] + 15u));
    ldr(c.r[3], (c.r[4].w[0] + 8u));
    ldl(c.r[5], (c.r[4].w[0] + 23u));
    ldr(c.r[5], (c.r[4].w[0] + 16u));
    ldl(c.r[7], (c.r[4].w[0] + 31u));
    ldr(c.r[7], (c.r[4].w[0] + 24u));
    sdl(c.r[8], (c.r[6].w[0] + 7u));
    sdr(c.r[8], (c.r[6].w[0]));
    sdl(c.r[3], (c.r[6].w[0] + 15u));
    sdr(c.r[3], (c.r[6].w[0] + 8u));
    sdl(c.r[5], (c.r[6].w[0] + 23u));
    sdr(c.r[5], (c.r[6].w[0] + 16u));
    sdl(c.r[7], (c.r[6].w[0] + 31u));
    sdr(c.r[7], (c.r[6].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D918u | kUnwind; return; } goto L_0039D918; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039D9A8; } }
L_0039D974:
    c.r[8].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[7].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[8].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[6].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[6].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039D974u | kUnwind; return; } goto L_0039D974; } }
L_0039D9A8:
    lwl(c.r[8], (c.r[4].w[0] + 3u));
    lwr(c.r[8], (c.r[4].w[0]));
    swl(c.r[8], (c.r[6].w[0] + 3u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; swr(c.r[8], (c.r[6].w[0]));  if (t) { goto L_0039DAA0; } }
L_0039D9BC:
    lwl(c.r[6], (c.r[16].w[0] + 23u));
    lwr(c.r[6], (c.r[16].w[0] + 20u));
    swl(c.r[6], (c.r[29].w[0] + 19u));
    swr(c.r[6], (c.r[29].w[0] + 16u));
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    ldl(c.r[3], (c.r[16].w[0] + 31u));
    ldr(c.r[3], (c.r[16].w[0] + 24u));
    ldl(c.r[4], (c.r[16].w[0] + 39u));
    ldr(c.r[4], (c.r[16].w[0] + 32u));
    ldl(c.r[5], (c.r[16].w[0] + 47u));
    ldr(c.r[5], (c.r[16].w[0] + 40u));
    ldl(c.r[6], (c.r[16].w[0] + 55u));
    ldr(c.r[6], (c.r[16].w[0] + 48u));
    sdl(c.r[3], (c.r[2].w[0] + 7u));
    sdr(c.r[3], (c.r[2].w[0]));
    sdl(c.r[4], (c.r[2].w[0] + 15u));
    sdr(c.r[4], (c.r[2].w[0] + 8u));
    sdl(c.r[5], (c.r[2].w[0] + 23u));
    sdr(c.r[5], (c.r[2].w[0] + 16u));
    sdl(c.r[6], (c.r[2].w[0] + 31u));
    sdr(c.r[6], (c.r[2].w[0] + 24u));
    ldl(c.r[3], (c.r[16].w[0] + 63u));
    ldr(c.r[3], (c.r[16].w[0] + 56u));
    ldl(c.r[4], (c.r[16].w[0] + 71u));
    ldr(c.r[4], (c.r[16].w[0] + 64u));
    ldl(c.r[5], (c.r[16].w[0] + 79u));
    ldr(c.r[5], (c.r[16].w[0] + 72u));
    ldl(c.r[6], (c.r[16].w[0] + 87u));
    ldr(c.r[6], (c.r[16].w[0] + 80u));
    sdl(c.r[3], (c.r[2].w[0] + 39u));
    sdr(c.r[3], (c.r[2].w[0] + 32u));
    sdl(c.r[4], (c.r[2].w[0] + 47u));
    sdr(c.r[4], (c.r[2].w[0] + 40u));
    sdl(c.r[5], (c.r[2].w[0] + 55u));
    sdr(c.r[5], (c.r[2].w[0] + 48u));
    sdl(c.r[6], (c.r[2].w[0] + 63u));
    sdr(c.r[6], (c.r[2].w[0] + 56u));
    c.budget -= 39;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_0039DAA4; } }
L_0039DA58:
    lwl(c.r[7], (c.r[16].w[0] + 23u));
    lwr(c.r[7], (c.r[16].w[0] + 20u));
    swl(c.r[7], (c.r[29].w[0] + 19u));
    swr(c.r[7], (c.r[29].w[0] + 16u));
    lwl(c.r[4], (c.r[16].w[0] + 27u));
    lwr(c.r[4], (c.r[16].w[0] + 24u));
    swl(c.r[4], (c.r[29].w[0] + 23u));
    swr(c.r[4], (c.r[29].w[0] + 20u));
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_0039DA98; } }
    set32(c.r[2], 0u + 1024u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 4;
L_0039DA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DAA0u); set32(c.r[5], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0039DAA0u) [[unlikely]] return; }
L_0039DAA0:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_0039DAA4:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_0039DB0C; } }
    set32(c.r[2], 0u - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 17176u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0039DAD8; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[7].w[0] + 17176u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039DB18; } }
    c.budget -= 1;
L_0039DAD8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0039DADC:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + 17176u);  if (t) { goto L_0039DB14; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DADCu | kUnwind; return; } goto L_0039DADC; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039DB18; } }
L_0039DB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB14u);  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x00398E50u; return; } if (c.pc != 0x0039DB14u) [[unlikely]] return; }
L_0039DB14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0039DB18:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039DB28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 17316u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0039DB70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 25608u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB68u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039DB68u) [[unlikely]] return; }
L_0039DB68:
    st32((c.r[16].w[0] + 17316u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0039DB70:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039DB80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB90u);  if (depth < kMaxDepth) unit_00A7(c, 166u, depth + 1u); else { c.pc = 0x0039DB28u; return; } if (c.pc != 0x0039DB90u) [[unlikely]] return; }
L_0039DB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DB9Cu); set32(c.r[4], ld32((c.r[2].w[0] + 17316u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039DB9Cu) [[unlikely]] return; }
L_0039DB9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039DBB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] + 17316u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398E40u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 154u, depth); }
L_0039DC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0039DC8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[2].w[0] - 24128u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DC88u); set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0039DC88u) [[unlikely]] return; }
L_0039DC88:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039DC8C:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0039DCA8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[17], c.r[16].w[0] - 24192u);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DCD4u); st64((c.r[29].w[0] + 64u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x0039DCD4u) [[unlikely]] return; }
L_0039DCD4:
    st32((c.r[16].w[0] - 24192u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DCE0u); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0039DCE0u) [[unlikely]] return; }
L_0039DCE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10384u);
    set32(c.r[6], c.r[6].w[0] - 24256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD00u); c.r[4].d[0] = c.r[4].d[0] | 17ull;  if (depth < kMaxDepth) unit_00A6(c, 505u, depth + 1u); else { c.pc = 0x0039BF68u; return; } if (c.pc != 0x0039DD00u) [[unlikely]] return; }
L_0039DD00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 9120u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD18u); c.r[4].d[0] = c.r[4].d[0] | 19ull;  if (depth < kMaxDepth) unit_00A6(c, 505u, depth + 1u); else { c.pc = 0x0039BF68u; return; } if (c.pc != 0x0039DD18u) [[unlikely]] return; }
L_0039DD18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0039DD54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD28u); set32(c.r[16], c.r[19].w[0] - 24320u);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0039DD28u) [[unlikely]] return; }
L_0039DD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039DD58; } }
L_0039DD30:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0039DD38:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DD38u | kUnwind; return; } goto L_0039DD38; } }
L_0039DD54:
    set32(c.r[16], c.r[19].w[0] - 24320u);
    c.budget -= 1;
L_0039DD58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x0039DD6Cu) [[unlikely]] return; }
L_0039DD6C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 22u);  if (t) { goto L_0039DE90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DD30u | kUnwind; return; } goto L_0039DD30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD88u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (depth < kMaxDepth) unit_00A7(c, 130u, depth + 1u); else { c.pc = 0x0039D498u; return; } if (c.pc != 0x0039DD88u) [[unlikely]] return; }
L_0039DD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DD90u); set32(c.r[4], ld32((c.r[20].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039DD90u) [[unlikely]] return; }
L_0039DD90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] - 24832u);
    set32(c.r[4], c.r[3].w[0] + 512u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0039DDD4; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 2;
L_0039DDB0:
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039DDB0u | kUnwind; return; } goto L_0039DDB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 17320u)));  if (t) { goto L_0039DDE0; } }
L_0039DDD4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 17320u)));
    c.budget -= 3;
L_0039DDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DDE8u); set32(c.r[16], c.r[16].w[0] - 27072u);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039DDE8u) [[unlikely]] return; }
L_0039DDE8:
    set32(c.r[3], c.r[17].w[0] - 27008u);
    set32(c.r[7], c.r[18].w[0] - 30272u);
    st32((c.r[18].w[0] - 30272u), c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] - 24320u);
    set32(c.r[3], c.r[3].w[0] + 1088u);
    set32(c.r[5], 0u + 255u);
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u + 8u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DE24u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039DE24u) [[unlikely]] return; }
L_0039DE24:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039DE38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0039DE90; } }
L_0039DE38:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[3].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[8], c.r[5].w[0] - 24280u);
    lwl(c.r[4], (c.r[3].w[0] + 3u));
    lwr(c.r[4], (c.r[3].w[0]));
    swl(c.r[4], (c.r[8].w[0] + 3u));
    swr(c.r[4], (c.r[8].w[0]));
    lwl(c.r[3], (c.r[2].w[0] + 3u));
    lwr(c.r[3], (c.r[2].w[0]));
    swl(c.r[3], (c.r[29].w[0] + 19u));
    swr(c.r[3], (c.r[29].w[0] + 16u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[5].w[0] + 17308u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[6].w[0] + 17312u), c.r[3].w[0]);
    c.budget -= 22;
L_0039DE90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0039DEB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[19], c.r[2].w[0] + 17132u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[17], c.r[3].w[0] - 24280u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DEECu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0039DEECu) [[unlikely]] return; }
L_0039DEEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_0039DF1C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 17328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF04u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0039DF04u) [[unlikely]] return; }
L_0039DF04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 17328u)));  if (t) { goto L_0039DF1C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF18u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0039DF18u) [[unlikely]] return; }
L_0039DF18:
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0039DF1C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039DF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 17308u), 0u);
    set32(c.r[4], c.r[4].w[0] - 24280u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF64u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0039DF64u) [[unlikely]] return; }
L_0039DF64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039DF78:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DF9Cu); set32(c.r[4], 0u + 254u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039DF9Cu) [[unlikely]] return; }
L_0039DF9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039DFB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DFB4u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039DFB4u) [[unlikely]] return; }
L_0039DFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DFBCu);  if (depth < kMaxDepth) unit_00A7(c, 188u, depth + 1u); else { c.pc = 0x0039DEB0u; return; } if (c.pc != 0x0039DFBCu) [[unlikely]] return; }
L_0039DFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039DFD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DFCCu);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039DFCCu) [[unlikely]] return; }
L_0039DFCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0039E0A0; } }
L_0039DFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DFE0u);  if (depth < kMaxDepth) unit_00A7(c, 133u, depth + 1u); else { c.pc = 0x0039D508u; return; } if (c.pc != 0x0039DFE0u) [[unlikely]] return; }
L_0039DFE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] & 16383ull;  if (t) { goto L_0039DFF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039DFF0u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039DFF0u) [[unlikely]] return; }
L_0039DFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 16u);  if (t) { goto L_0039E0A0; } }
L_0039DFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039E028; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0039E028; } }
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039E028; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(33ll) ? 1ull : 0ull;  if (t) { goto L_0039E028; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0039E038; } }
L_0039E028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E030u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E030u) [[unlikely]] return; }
L_0039E030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 22u);  if (t) { goto L_0039E0A0; } }
L_0039E038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[3].w[0] - 30208u);
    st32((c.r[3].w[0] - 30208u), c.r[16].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[18], c.r[2].w[0] - 27072u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 24320u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 254u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 8u);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E078u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039E078u) [[unlikely]] return; }
L_0039E078:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039E090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E088u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E088u) [[unlikely]] return; }
L_0039E088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039E0A0; } }
L_0039E090:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E09Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E09Cu) [[unlikely]] return; }
L_0039E09C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039E0A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0039E0B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E0D4u); set32(c.r[4], 0u + 253u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039E0D4u) [[unlikely]] return; }
L_0039E0D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039E0EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E0ECu);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039E0ECu) [[unlikely]] return; }
L_0039E0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E0F4u);  if (depth < kMaxDepth) unit_00A7(c, 188u, depth + 1u); else { c.pc = 0x0039DEB0u; return; } if (c.pc != 0x0039E0F4u) [[unlikely]] return; }
L_0039E0F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E104u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E104u) [[unlikely]] return; }
L_0039E104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0039E194; } }
L_0039E110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E118u);  if (depth < kMaxDepth) unit_00A7(c, 133u, depth + 1u); else { c.pc = 0x0039D508u; return; } if (c.pc != 0x0039E118u) [[unlikely]] return; }
L_0039E118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0039E130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E128u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E128u) [[unlikely]] return; }
L_0039E128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 16u);  if (t) { goto L_0039E194; } }
L_0039E130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[2].w[0] - 27072u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[7].w[0] - 30208u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24320u);
    set32(c.r[7], c.r[7].w[0] - 30208u);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 253u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 8u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E16Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039E16Cu) [[unlikely]] return; }
L_0039E16C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039E184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E17Cu);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E17Cu) [[unlikely]] return; }
L_0039E17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039E194; } }
L_0039E184:
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E190u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E190u) [[unlikely]] return; }
L_0039E190:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0039E194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039E1A8:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    set32(c.r[17], c.r[30].w[0] - 30208u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 296u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 304u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 312u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 320u), c.r[10].d[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E204u); st64((c.r[29].w[0] + 328u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039E204u) [[unlikely]] return; }
L_0039E204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039E21C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E21Cu);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039E21Cu) [[unlikely]] return; }
L_0039E21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E224u);  if (depth < kMaxDepth) unit_00A7(c, 188u, depth + 1u); else { c.pc = 0x0039DEB0u; return; } if (c.pc != 0x0039E224u) [[unlikely]] return; }
L_0039E224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E234u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E234u) [[unlikely]] return; }
L_0039E234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0039E408; } }
L_0039E240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E248u);  if (depth < kMaxDepth) unit_00A7(c, 138u, depth + 1u); else { c.pc = 0x0039D588u; return; } if (c.pc != 0x0039E248u) [[unlikely]] return; }
L_0039E248:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0]));  goto L_0039E264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E25Cu);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E25Cu) [[unlikely]] return; }
L_0039E25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 19u);  if (t) { goto L_0039E408; } }
L_0039E264:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], c.r[3].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0039E2BC; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 6;
L_0039E290:
    c.r[2].d[0] = c.r[6].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[6].w[0]);  if (t) { goto L_0039E2D0; } }
    set32(c.r[4], c.r[17].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E290u | kUnwind; return; } goto L_0039E290; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0039E2D4; } }
L_0039E2BC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 5;
L_0039E2D0:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0039E2D4:
    c.budget -= 2;
    if (c.r[6].d[0] == c.r[2].d[0]) { st8((c.r[17].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_0039E2DC; }
L_0039E2DC:
    set32(c.r[2], c.r[7].w[0] - 24832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[3].d[0] = c.r[23].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25632u);
    st32((c.r[17].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[20], c.r[20].w[0] - 27072u);
    st32((c.r[17].w[0] + 1044u), c.r[21].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E320u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039E320u) [[unlikely]] return; }
L_0039E320:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[22].w[0] - 24320u);
    set32(c.r[7], c.r[30].w[0] - 30208u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 1048u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E360u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039E360u) [[unlikely]] return; }
L_0039E360:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039E380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E370u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E370u) [[unlikely]] return; }
L_0039E370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E378u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E378u) [[unlikely]] return; }
L_0039E378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039E408; } }
L_0039E380:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E38Cu); set32(c.r[17], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E38Cu) [[unlikely]] return; }
L_0039E38C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0039E3A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E39Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E39Cu) [[unlikely]] return; }
L_0039E39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039E408; } }
L_0039E3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039E3ACu) [[unlikely]] return; }
L_0039E3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E3B4u) [[unlikely]] return; }
L_0039E3B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_0039E3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3C8u); set32(c.r[4], ld32((c.r[16].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039E3C8u) [[unlikely]] return; }
L_0039E3C8:
    st32((c.r[19].w[0] + 4u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3D4u); set32(c.r[4], ld32((c.r[16].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039E3D4u) [[unlikely]] return; }
L_0039E3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_0039E408; } }
L_0039E3DC:
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E3E8u); set32(c.r[4], ld32((c.r[16].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039E3E8u) [[unlikely]] return; }
L_0039E3E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 17320u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E404u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039E404u) [[unlikely]] return; }
L_0039E404:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039E408:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0039E438:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[18], c.r[20].w[0] - 30208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E460u); st64((c.r[29].w[0] + 80u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 148u, depth + 1u); else { c.pc = 0x0039D700u; return; } if (c.pc != 0x0039E460u) [[unlikely]] return; }
L_0039E460:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E46Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039E46Cu) [[unlikely]] return; }
L_0039E46C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E490; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039E490; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0039E4A0; } }
L_0039E490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E498u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E498u) [[unlikely]] return; }
L_0039E498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0039E590; } }
L_0039E4A0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 24832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + 25656u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E4D8u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039E4D8u) [[unlikely]] return; }
L_0039E4D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[20].w[0] - 30208u), c.r[17].w[0]);
    set32(c.r[19], c.r[2].w[0] - 27072u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24320u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 20u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E528u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039E528u) [[unlikely]] return; }
L_0039E528:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0039E548; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E538u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E538u) [[unlikely]] return; }
L_0039E538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E540u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E540u) [[unlikely]] return; }
L_0039E540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039E590; } }
L_0039E548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E558u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E558u) [[unlikely]] return; }
L_0039E558:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039E570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E568u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E568u) [[unlikely]] return; }
L_0039E568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039E590; } }
L_0039E570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039E578u) [[unlikely]] return; }
L_0039E578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E580u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E580u) [[unlikely]] return; }
L_0039E580:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_0039E590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0039E5B0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[17], c.r[20].w[0] - 30208u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5E8u); st64((c.r[29].w[0] + 96u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 148u, depth + 1u); else { c.pc = 0x0039D700u; return; } if (c.pc != 0x0039E5E8u) [[unlikely]] return; }
L_0039E5E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E5F4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039E5F4u) [[unlikely]] return; }
L_0039E5F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E618; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039E618; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0039E628; } }
L_0039E618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E620u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E620u) [[unlikely]] return; }
L_0039E620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0039E7C4; } }
L_0039E628:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 24832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[17].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + 25680u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[18].d[0] & 32768ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E66Cu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039E66Cu) [[unlikely]] return; }
L_0039E66C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] - 30208u), c.r[19].w[0]);  if (t) { goto L_0039E718; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E694u); set32(c.r[4], ld32((c.r[21].w[0] + 17324u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039E694u) [[unlikely]] return; }
L_0039E694:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 17176u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039E6C8; } }
    set32(c.r[3], ld32((c.r[20].w[0] - 30208u)));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] + 17176u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] - 30208u), c.r[2].w[0]);  if (t) { goto L_0039E708; } }
L_0039E6C8:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_0039E6D4:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_0039E708; } }
    set32(c.r[3], c.r[7].w[0] + 17176u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E6D4u | kUnwind; return; } goto L_0039E6D4; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0039E708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E710u); set32(c.r[4], ld32((c.r[21].w[0] + 17324u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039E710u) [[unlikely]] return; }
L_0039E710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 27072u);  if (t) { goto L_0039E728; } }
L_0039E718:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 27072u);
    c.budget -= 4;
L_0039E728:
    set32(c.r[4], c.r[22].w[0] - 24320u);
    set32(c.r[7], c.r[20].w[0] - 30208u);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 28u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E754u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039E754u) [[unlikely]] return; }
L_0039E754:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039E774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E764u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E764u) [[unlikely]] return; }
L_0039E764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E76Cu);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E76Cu) [[unlikely]] return; }
L_0039E76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039E7C4; } }
L_0039E774:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E780u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E780u) [[unlikely]] return; }
L_0039E780:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039E798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E790u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E790u) [[unlikely]] return; }
L_0039E790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039E7C4; } }
L_0039E798:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0039E7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E7A8u) [[unlikely]] return; }
L_0039E7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039E7C4; } }
L_0039E7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039E7B8u) [[unlikely]] return; }
L_0039E7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E7C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E7C0u) [[unlikely]] return; }
L_0039E7C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039E7C4:
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
L_0039E7F0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[17], c.r[21].w[0] - 30208u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E830u); st64((c.r[29].w[0] + 96u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 148u, depth + 1u); else { c.pc = 0x0039D700u; return; } if (c.pc != 0x0039E830u) [[unlikely]] return; }
L_0039E830:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E83Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039E83Cu) [[unlikely]] return; }
L_0039E83C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039E860; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039E860; } }
    set32(c.r[20], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0039E870; } }
L_0039E860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E868u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E868u) [[unlikely]] return; }
L_0039E868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0039EA2C; } }
L_0039E870:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 24832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + 25704u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[20].d[0] & 32768ull;
    st32((c.r[17].w[0] + 16u), c.r[23].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[30].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E8B4u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039E8B4u) [[unlikely]] return; }
L_0039E8B4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[21].w[0] - 30208u), c.r[19].w[0]);  if (t) { goto L_0039E95C; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E8DCu); set32(c.r[4], ld32((c.r[22].w[0] + 17324u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039E8DCu) [[unlikely]] return; }
L_0039E8DC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 17176u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039E910; } }
    set32(c.r[3], ld32((c.r[21].w[0] - 30208u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] + 17176u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] - 30208u), c.r[2].w[0]);  if (t) { goto L_0039E94C; } }
    c.budget -= 1;
L_0039E910:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0039E918:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_0039E94C; } }
    set32(c.r[3], c.r[7].w[0] + 17176u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039E918u | kUnwind; return; } goto L_0039E918; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0039E94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E954u); set32(c.r[4], ld32((c.r[22].w[0] + 17324u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039E954u) [[unlikely]] return; }
L_0039E954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039E968; } }
L_0039E95C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 3;
L_0039E968:
    c.r[2].d[0] = c.r[20].d[0] & c.r[22].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0039E984; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E980u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039E980u) [[unlikely]] return; }
L_0039E980:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039E984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E98Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039E98Cu) [[unlikely]] return; }
L_0039E98C:
    set32(c.r[16], c.r[16].w[0] - 27072u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[21].w[0] - 30208u);
    set32(c.r[4], c.r[2].w[0] - 24320u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0] + 8u), c.r[18].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E9C0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039E9C0u) [[unlikely]] return; }
L_0039E9C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[22].d[0] | c.r[16].d[0];  if (t) { goto L_0039E9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E9D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E9D0u) [[unlikely]] return; }
L_0039E9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E9D8u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E9D8u) [[unlikely]] return; }
L_0039E9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039EA2C; } }
L_0039E9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E9E8u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039E9E8u) [[unlikely]] return; }
L_0039E9E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039EA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039E9F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039E9F8u) [[unlikely]] return; }
L_0039E9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039EA2C; } }
L_0039EA00:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0039EA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA10u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039EA10u) [[unlikely]] return; }
L_0039EA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039EA2C; } }
L_0039EA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA20u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039EA20u) [[unlikely]] return; }
L_0039EA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EA28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039EA28u) [[unlikely]] return; }
L_0039EA28:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039EA2C:
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
L_0039EA60:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[18], c.r[30].w[0] - 30208u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EAA0u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 148u, depth + 1u); else { c.pc = 0x0039D700u; return; } if (c.pc != 0x0039EAA0u) [[unlikely]] return; }
L_0039EAA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EAACu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039EAACu) [[unlikely]] return; }
L_0039EAAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039EAD0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039EAD0; } }
    set32(c.r[23], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0039EAE0; } }
L_0039EAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EAD8u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039EAD8u) [[unlikely]] return; }
L_0039EAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0039ECF0; } }
L_0039EAE0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 24832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[3], c.r[3].w[0] + 25728u);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.r[16].d[0] = c.r[23].d[0] & 32768ull;
    st32((c.r[18].w[0] + 20u), c.r[22].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB24u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039EB24u) [[unlikely]] return; }
L_0039EB24:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[30].w[0] - 30208u), c.r[21].w[0]);  if (t) { goto L_0039EBCC; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EB4Cu); set32(c.r[4], ld32((c.r[19].w[0] + 17324u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039EB4Cu) [[unlikely]] return; }
L_0039EB4C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 17176u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039EB80; } }
    set32(c.r[3], ld32((c.r[30].w[0] - 30208u)));
    c.r[16].d[0] = c.r[17].d[0] & 15ull;
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] + 17176u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0] - 30208u), c.r[2].w[0]);  if (t) { goto L_0039EBBC; } }
    c.budget -= 1;
L_0039EB80:
    c.r[16].d[0] = c.r[17].d[0] & 15ull;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0039EB88:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_0039EBBC; } }
    set32(c.r[3], c.r[7].w[0] + 17176u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EB88u | kUnwind; return; } goto L_0039EB88; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0039EBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EBC4u); set32(c.r[4], ld32((c.r[19].w[0] + 17324u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039EBC4u) [[unlikely]] return; }
L_0039EBC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039EBD4; } }
L_0039EBCC:
    c.r[16].d[0] = c.r[17].d[0] & 15ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0039EBD4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] >> 4);  if (t) { goto L_0039EBE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0039EBF0; } }
L_0039EBE4:
    set32(c.r[3], c.r[17].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_0039EBF0:
    c.r[3].d[0] = c.r[22].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[23].d[0] & c.r[19].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[22].d[0];  if (t) { goto L_0039EC10; } }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039EC10u) [[unlikely]] return; }
L_0039EC10:
    c.r[17].d[0] = c.r[17].d[0] | c.r[19].d[0];
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039EC48; } }
    set32(c.r[6], c.r[18].w[0] + 28u);
    c.budget -= 2;
L_0039EC28:
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EC28u | kUnwind; return; } goto L_0039EC28; } }
L_0039EC48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[30].w[0] - 30208u);
    set32(c.r[16], c.r[2].w[0] - 27072u);
    st32((c.r[29].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    set32(c.r[4], c.r[2].w[0] - 24320u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC80u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039EC80u) [[unlikely]] return; }
L_0039EC80:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039ECA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC90u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039EC90u) [[unlikely]] return; }
L_0039EC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EC98u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039EC98u) [[unlikely]] return; }
L_0039EC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039ECF0; } }
L_0039ECA0:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECACu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039ECACu) [[unlikely]] return; }
L_0039ECAC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039ECC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECBCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039ECBCu) [[unlikely]] return; }
L_0039ECBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039ECF0; } }
L_0039ECC4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0039ECDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECD4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039ECD4u) [[unlikely]] return; }
L_0039ECD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039ECF0; } }
L_0039ECDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECE4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039ECE4u) [[unlikely]] return; }
L_0039ECE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ECECu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039ECECu) [[unlikely]] return; }
L_0039ECEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039ECF0:
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
L_0039ED20:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    set32(c.r[21], 0u + 1u);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED60u); set32(c.r[19], c.r[22].w[0] - 30208u);  if (depth < kMaxDepth) unit_00A7(c, 148u, depth + 1u); else { c.pc = 0x0039D700u; return; } if (c.pc != 0x0039ED60u) [[unlikely]] return; }
L_0039ED60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED6Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039ED6Cu) [[unlikely]] return; }
L_0039ED6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] - 30264u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039ED88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039ED88u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039ED88u) [[unlikely]] return; }
L_0039ED88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039ED9C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 1044u), 0u);  goto L_0039EDAC; }
L_0039ED9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EDA4u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039EDA4u) [[unlikely]] return; }
L_0039EDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0039F080; } }
L_0039EDAC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 1048u), 0u);  if (t) { goto L_0039EE58; } }
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0039EDD4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[21].d[0]) { c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0039EDE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_0039EEC0; } }
L_0039EDD4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_0039EE88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_0039EEC0; } }
L_0039EDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EDECu); set32(c.r[4], ld32((c.r[16].w[0] + 17324u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039EDECu) [[unlikely]] return; }
L_0039EDEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 17176u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_0039EE2C; } }
    set32(c.r[3], c.r[5].w[0] + 17176u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_0039EE10:
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_0039EE28; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EE10u | kUnwind; return; } goto L_0039EE10; }
L_0039EE28:
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_0039EE2C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[20].w[0] - 30264u)));  if (t) { goto L_0039EE40; } }
    set32(c.r[2], ld32((c.r[20].w[0] - 30264u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_0039EE48; } }
L_0039EE40:
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0039EE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EE50u); set32(c.r[4], ld32((c.r[16].w[0] + 17324u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039EE50u) [[unlikely]] return; }
L_0039EE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039EEB0; } }
L_0039EE58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], 0u + 1088u);
    set32(c.r[2], ld32((c.r[4].w[0] + 17304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] - 26992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_0039EEB0; } }
L_0039EE88:
    set32(c.r[5], 0u + 1088u);
    set32(c.r[2], ld32((c.r[4].w[0] + 17304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] - 26992u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[18].w[0]), c.r[3].d[0]);
    c.budget -= 10;
L_0039EEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EEB8u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039EEB8u) [[unlikely]] return; }
L_0039EEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0039F080; } }
L_0039EEC0:
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0039EEE4; } }
    st32((c.r[19].w[0] + 1052u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_0039EFB8; } }
L_0039EEE4:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 20u);
    set32(c.r[3], 0u + 1024u);
    c.r[2].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 1052u), c.r[3].w[0]);  if (t) { goto L_0039EF70; } }
    set32(c.r[2], c.r[6].w[0] + 1024u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 5;
L_0039EF14:
    ldl(c.r[5], (c.r[6].w[0] + 7u));
    ldr(c.r[5], (c.r[6].w[0]));
    ldl(c.r[7], (c.r[6].w[0] + 15u));
    ldr(c.r[7], (c.r[6].w[0] + 8u));
    ldl(c.r[8], (c.r[6].w[0] + 23u));
    ldr(c.r[8], (c.r[6].w[0] + 16u));
    ldl(c.r[9], (c.r[6].w[0] + 31u));
    ldr(c.r[9], (c.r[6].w[0] + 24u));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EF14u | kUnwind; return; } goto L_0039EF14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 25752u);  if (t) { goto L_0039EFBC; } }
L_0039EF70:
    set32(c.r[2], c.r[6].w[0] + 1024u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 5;
L_0039EF84:
    c.r[5].d[0] = ld64((c.r[6].w[0]));
    c.r[7].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[6].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[5].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039EF84u | kUnwind; return; } goto L_0039EF84; } }
L_0039EFB8:
    set32(c.r[3], c.r[3].w[0] + 25752u);
    c.budget -= 1;
L_0039EFBC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[20], c.r[17].w[0] - 27072u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EFDCu); set32(c.r[16], c.r[22].w[0] - 30208u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039EFDCu) [[unlikely]] return; }
L_0039EFDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1056u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039EFFCu); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039EFFCu) [[unlikely]] return; }
L_0039EFFC:
    set32(c.r[4], c.r[21].w[0] - 24320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 5u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1056u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F028u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039F028u) [[unlikely]] return; }
L_0039F028:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039F048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F038u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F038u) [[unlikely]] return; }
L_0039F038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F040u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F040u) [[unlikely]] return; }
L_0039F040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F080; } }
L_0039F048:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F054u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F054u) [[unlikely]] return; }
L_0039F054:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039F06C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F064u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F064u) [[unlikely]] return; }
L_0039F064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F080; } }
L_0039F06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F074u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039F074u) [[unlikely]] return; }
L_0039F074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F07Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F07Cu) [[unlikely]] return; }
L_0039F07C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039F080:
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
L_0039F0A8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F0F0u); set32(c.r[17], c.r[22].w[0] - 30208u);  if (depth < kMaxDepth) unit_00A7(c, 148u, depth + 1u); else { c.pc = 0x0039D700u; return; } if (c.pc != 0x0039F0F0u) [[unlikely]] return; }
L_0039F0F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F0FCu); set32(c.r[4], 0u + 26u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039F0FCu) [[unlikely]] return; }
L_0039F0FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0039F114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F114u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039F114u) [[unlikely]] return; }
L_0039F114:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0039F128; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_0039F138; } }
L_0039F128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F130u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F130u) [[unlikely]] return; }
L_0039F130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0039F264; } }
L_0039F138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_0039F148; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039F158; } }
L_0039F148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F150u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F150u) [[unlikely]] return; }
L_0039F150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 22u);  if (t) { goto L_0039F264; } }
L_0039F158:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039F168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1052u), 0u);  if (t) { goto L_0039F174; } }
L_0039F168:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F174u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0039F174u) [[unlikely]] return; }
L_0039F174:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[17].w[0] + 16u), c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25776u);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 1052u), c.r[19].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[16], c.r[22].w[0] - 30208u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F1A8u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039F1A8u) [[unlikely]] return; }
L_0039F1A8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 1048u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1056u);
    st32((c.r[17].w[0] + 1044u), c.r[23].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F1D4u); st32((c.r[17].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039F1D4u) [[unlikely]] return; }
L_0039F1D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[2].w[0] - 27072u);
    set32(c.r[4], c.r[4].w[0] - 24320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1056u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F20Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039F20Cu) [[unlikely]] return; }
L_0039F20C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039F22C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F21Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F21Cu) [[unlikely]] return; }
L_0039F21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F224u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F224u) [[unlikely]] return; }
L_0039F224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F264; } }
L_0039F22C:
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F238u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F238u) [[unlikely]] return; }
L_0039F238:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039F250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F248u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F248u) [[unlikely]] return; }
L_0039F248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F264; } }
L_0039F250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F258u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039F258u) [[unlikely]] return; }
L_0039F258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F260u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F260u) [[unlikely]] return; }
L_0039F260:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039F264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0039F290:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[19], c.r[23].w[0] - 30208u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F2D0u); st64((c.r[29].w[0] + 64u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039F2D0u) [[unlikely]] return; }
L_0039F2D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0039F2EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F2E8u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039F2E8u) [[unlikely]] return; }
L_0039F2E8:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_0039F2EC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039F33C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
L_0039F310:
    c.r[2].d[0] = c.r[16].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_0039F34C; } }
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F310u | kUnwind; return; } goto L_0039F310; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0039F350; } }
L_0039F33C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 4;
L_0039F34C:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0039F350:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] + 25800u);  if (t) { goto L_0039F360; } }
    st8((c.r[19].w[0] + 1035u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1023u);
    c.budget -= 2;
L_0039F360:
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] - 27072u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F37Cu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039F37Cu) [[unlikely]] return; }
L_0039F37C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0]), c.r[17].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] - 24320u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], c.r[23].w[0] - 30208u);
    set32(c.r[8], c.r[16].w[0] + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F3BCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039F3BCu) [[unlikely]] return; }
L_0039F3BC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039F3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F3CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F3CCu) [[unlikely]] return; }
L_0039F3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F3D4u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F3D4u) [[unlikely]] return; }
L_0039F3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F414; } }
L_0039F3DC:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F3E8u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F3E8u) [[unlikely]] return; }
L_0039F3E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039F400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F3F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F3F8u) [[unlikely]] return; }
L_0039F3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F414; } }
L_0039F400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039F408u) [[unlikely]] return; }
L_0039F408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F410u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F410u) [[unlikely]] return; }
L_0039F410:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039F414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0039F440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F450u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00A7(c, 335u, depth + 1u); else { c.pc = 0x0039F290u; return; } if (c.pc != 0x0039F450u) [[unlikely]] return; }
L_0039F450:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039F460:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 7u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[23].w[0] - 30208u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F4A0u); st64((c.r[29].w[0] + 64u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039F4A0u) [[unlikely]] return; }
    goto L_0039F4A0;
L_0039F49C:
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.budget -= 1;
L_0039F4A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0039F4BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F4B8u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039F4B8u) [[unlikely]] return; }
L_0039F4B8:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_0039F4BC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039F50C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
L_0039F4E0:
    c.r[2].d[0] = c.r[16].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_0039F51C; } }
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F4E0u | kUnwind; return; } goto L_0039F4E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0039F520; } }
L_0039F50C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 4;
L_0039F51C:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0039F520:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { st32((c.r[18].w[0] + 12u), c.r[22].w[0]);  goto L_0039F534; }
    st8((c.r[18].w[0] + 1039u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1023u);
    st32((c.r[18].w[0] + 12u), c.r[22].w[0]);
    c.budget -= 3;
L_0039F534:
    set32(c.r[3], c.r[5].w[0] + 25824u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] - 27072u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F554u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039F554u) [[unlikely]] return; }
L_0039F554:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] - 24320u);
    set32(c.r[7], c.r[23].w[0] - 30208u);
    set32(c.r[8], c.r[16].w[0] + 17u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 7u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F594u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039F594u) [[unlikely]] return; }
L_0039F594:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039F5B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F5A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F5A4u) [[unlikely]] return; }
L_0039F5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F5ACu);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F5ACu) [[unlikely]] return; }
L_0039F5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F5EC; } }
L_0039F5B4:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F5C0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F5C0u) [[unlikely]] return; }
L_0039F5C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039F5D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F5D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F5D0u) [[unlikely]] return; }
L_0039F5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F5EC; } }
L_0039F5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F5E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039F5E0u) [[unlikely]] return; }
L_0039F5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F5E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F5E8u) [[unlikely]] return; }
L_0039F5E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039F5EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0039F618:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F628u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_00A7(c, 335u, depth + 1u); else { c.pc = 0x0039F290u; return; } if (c.pc != 0x0039F628u) [[unlikely]] return; }
L_0039F628:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039F638:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    set32(c.r[4], 0u + 14u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[19], c.r[23].w[0] - 30208u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F680u); st64((c.r[29].w[0] + 128u), c.r[20].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039F680u) [[unlikely]] return; }
L_0039F680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_0039F69C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F698u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039F698u) [[unlikely]] return; }
L_0039F698:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0039F69C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039F6E4; } }
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0039F6B8:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_0039F6E8; } }
    set32(c.r[4], c.r[19].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F6B8u | kUnwind; return; } goto L_0039F6B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0039F6EC; } }
L_0039F6E4:
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_0039F6E8:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0039F6EC:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[19].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0039F6F4; }
L_0039F6F4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_0039F704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1036u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0039F750; } }
L_0039F704:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039F744; } }
    set32(c.r[6], c.r[19].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0039F720:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);  if (t) { goto L_0039F744; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F720u | kUnwind; return; } goto L_0039F720; }
L_0039F744:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[19].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_0039F750; }
L_0039F750:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0039F768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F760u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F760u) [[unlikely]] return; }
L_0039F760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 7u);  if (t) { goto L_0039F88C; } }
L_0039F768:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0039F7B0; } }
    set32(c.r[6], c.r[19].w[0] + 2060u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 6;
L_0039F788:
    set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039F788u | kUnwind; return; } goto L_0039F788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 3084u), c.r[17].w[0]);  if (t) { goto L_0039F7C4; } }
L_0039F7B0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[19].w[0] + 3084u), c.r[17].w[0]);
    c.budget -= 5;
L_0039F7C4:
    set32(c.r[3], c.r[7].w[0] + 25848u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], c.r[23].w[0] - 30208u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[20], c.r[20].w[0] - 27072u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F7E8u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039F7E8u) [[unlikely]] return; }
L_0039F7E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 3088u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F808u); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x0039F808u) [[unlikely]] return; }
L_0039F808:
    set32(c.r[4], c.r[21].w[0] - 24320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 3088u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F834u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039F834u) [[unlikely]] return; }
L_0039F834:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039F854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F844u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F844u) [[unlikely]] return; }
L_0039F844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F84Cu);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F84Cu) [[unlikely]] return; }
L_0039F84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F88C; } }
L_0039F854:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F860u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F860u) [[unlikely]] return; }
L_0039F860:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039F878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F870u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F870u) [[unlikely]] return; }
L_0039F870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F88C; } }
L_0039F878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F880u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039F880u) [[unlikely]] return; }
L_0039F880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F888u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F888u) [[unlikely]] return; }
L_0039F888:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039F88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0039F8B8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[4], 0u + 15u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F8E4u); set32(c.r[16], c.r[19].w[0] - 30208u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039F8E4u) [[unlikely]] return; }
L_0039F8E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0039F900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F8FCu);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039F8FCu) [[unlikely]] return; }
L_0039F8FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_0039F900:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 25872u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F920u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039F920u) [[unlikely]] return; }
L_0039F920:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[19].w[0] - 30208u), c.r[17].w[0]);
    set32(c.r[18], c.r[2].w[0] - 27072u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 16u);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F970u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039F970u) [[unlikely]] return; }
L_0039F970:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039F990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F980u) [[unlikely]] return; }
L_0039F980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F988u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F988u) [[unlikely]] return; }
L_0039F988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F9C8; } }
L_0039F990:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F99Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039F99Cu) [[unlikely]] return; }
L_0039F99C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039F9B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F9ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F9ACu) [[unlikely]] return; }
L_0039F9AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039F9C8; } }
L_0039F9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F9BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039F9BCu) [[unlikely]] return; }
L_0039F9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F9C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039F9C4u) [[unlikely]] return; }
L_0039F9C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039F9C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0039F9E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039F9F8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_00A7(c, 335u, depth + 1u); else { c.pc = 0x0039F290u; return; } if (c.pc != 0x0039F9F8u) [[unlikely]] return; }
L_0039F9F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0039FA08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA28u); st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039FA28u) [[unlikely]] return; }
L_0039FA28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0039FA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA40u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039FA40u) [[unlikely]] return; }
L_0039FA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA48u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039FA48u) [[unlikely]] return; }
L_0039FA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA50u);  if (depth < kMaxDepth) unit_00A7(c, 138u, depth + 1u); else { c.pc = 0x0039D588u; return; } if (c.pc != 0x0039FA50u) [[unlikely]] return; }
L_0039FA50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0039FA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 19u);  if (t) { goto L_0039FAB8; } }
L_0039FA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA6Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_00A7(c, 335u, depth + 1u); else { c.pc = 0x0039F290u; return; } if (c.pc != 0x0039FA6Cu) [[unlikely]] return; }
L_0039FA6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_0039FA8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA80u); set32(c.r[4], ld32((c.r[16].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039FA80u) [[unlikely]] return; }
L_0039FA80:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 17320u)));  if (t) { goto L_0039FAAC; } }
L_0039FA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FA94u); set32(c.r[4], ld32((c.r[16].w[0] + 17320u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039FA94u) [[unlikely]] return; }
L_0039FA94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] - 24832u);
    set32(c.r[4], ld32((c.r[16].w[0] + 17320u)));
    set32(c.r[3], c.r[18].w[0] - c.r[3].w[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 6;
L_0039FAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FAB4u);  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0039FAB4u) [[unlikely]] return; }
L_0039FAB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0039FAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0039FAD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[18], c.r[20].w[0] - 30208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FAF8u); st64((c.r[29].w[0] + 80u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 148u, depth + 1u); else { c.pc = 0x0039D700u; return; } if (c.pc != 0x0039FAF8u) [[unlikely]] return; }
L_0039FAF8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB04u); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039FB04u) [[unlikely]] return; }
L_0039FB04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039FB28; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039FB28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_0039FB38; }
L_0039FB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB30u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039FB30u) [[unlikely]] return; }
L_0039FB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0039FC14; } }
L_0039FB38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] + 25896u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FB5Cu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039FB5Cu) [[unlikely]] return; }
L_0039FB5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[20].w[0] - 30208u), c.r[17].w[0]);
    set32(c.r[19], c.r[2].w[0] - 27072u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24320u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 20u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBACu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039FBACu) [[unlikely]] return; }
L_0039FBAC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0039FBCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039FBBCu) [[unlikely]] return; }
L_0039FBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBC4u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039FBC4u) [[unlikely]] return; }
L_0039FBC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039FC14; } }
L_0039FBCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBDCu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039FBDCu) [[unlikely]] return; }
L_0039FBDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039FBF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039FBECu) [[unlikely]] return; }
L_0039FBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039FC14; } }
L_0039FBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FBFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039FBFCu) [[unlikely]] return; }
L_0039FBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039FC04u) [[unlikely]] return; }
L_0039FC04:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_0039FC14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0039FC38:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC60u); set32(c.r[18], c.r[19].w[0] - 30208u);  if (depth < kMaxDepth) unit_00A7(c, 148u, depth + 1u); else { c.pc = 0x0039D700u; return; } if (c.pc != 0x0039FC60u) [[unlikely]] return; }
L_0039FC60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC6Cu); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039FC6Cu) [[unlikely]] return; }
L_0039FC6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039FC90; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0039FC90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_0039FCA0; }
L_0039FC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FC98u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039FC98u) [[unlikely]] return; }
L_0039FC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0039FD70; } }
L_0039FCA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 25920u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FCC8u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039FCC8u) [[unlikely]] return; }
L_0039FCC8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[19].w[0] - 30208u), c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] - 27072u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 24320u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD18u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039FD18u) [[unlikely]] return; }
L_0039FD18:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039FD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039FD28u) [[unlikely]] return; }
L_0039FD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD30u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039FD30u) [[unlikely]] return; }
L_0039FD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039FD70; } }
L_0039FD38:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD44u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039FD44u) [[unlikely]] return; }
L_0039FD44:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039FD5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039FD54u) [[unlikely]] return; }
L_0039FD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039FD70; } }
L_0039FD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039FD64u) [[unlikely]] return; }
L_0039FD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FD6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039FD6Cu) [[unlikely]] return; }
L_0039FD6C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039FD70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0039FD90:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 12u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[23].w[0] - 30208u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FDD0u); st64((c.r[29].w[0] + 64u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039FDD0u) [[unlikely]] return; }
L_0039FDD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 17308u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0039FDEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FDE8u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039FDE8u) [[unlikely]] return; }
L_0039FDE8:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_0039FDEC:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039FE38; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 5;
L_0039FE10:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_0039FE48; } }
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FE10u | kUnwind; return; } goto L_0039FE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0039FE4C; } }
L_0039FE38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 4;
L_0039FE48:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0039FE4C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { st32((c.r[18].w[0] + 12u), c.r[22].w[0]);  goto L_0039FE60; }
    st8((c.r[18].w[0] + 1039u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1023u);
    st32((c.r[18].w[0] + 12u), c.r[22].w[0]);
    c.budget -= 3;
L_0039FE60:
    set32(c.r[3], c.r[5].w[0] + 25944u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] - 27072u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FE80u); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0039FE80u) [[unlikely]] return; }
L_0039FE80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] - 24320u);
    set32(c.r[7], c.r[23].w[0] - 30208u);
    set32(c.r[8], c.r[16].w[0] + 17u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 12u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEC0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 144u, depth + 1u); else { c.pc = 0x0039D610u; return; } if (c.pc != 0x0039FEC0u) [[unlikely]] return; }
L_0039FEC0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0039FEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FED0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039FED0u) [[unlikely]] return; }
L_0039FED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FED8u);  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039FED8u) [[unlikely]] return; }
L_0039FED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039FF18; } }
L_0039FEE0:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEECu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 171u, depth + 1u); else { c.pc = 0x0039DBB0u; return; } if (c.pc != 0x0039FEECu) [[unlikely]] return; }
L_0039FEEC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0039FF04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FEFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039FEFCu) [[unlikely]] return; }
L_0039FEFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0039FF18; } }
L_0039FF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0039FF0Cu) [[unlikely]] return; }
L_0039FF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0039FF14u) [[unlikely]] return; }
L_0039FF14:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0039FF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0039FF48:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    set32(c.r[4], 0u + 13u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    set32(c.r[19], c.r[30].w[0] - 30208u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FF90u); st64((c.r[29].w[0] + 80u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_00A7(c, 168u, depth + 1u); else { c.pc = 0x0039DB80u; return; } if (c.pc != 0x0039FF90u) [[unlikely]] return; }
L_0039FF90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17308u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_0039FFAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039FFA8u);  if (depth < kMaxDepth) unit_00A7(c, 174u, depth + 1u); else { c.pc = 0x0039DCA8u; return; } if (c.pc != 0x0039FFA8u) [[unlikely]] return; }
L_0039FFA8:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 1;
L_0039FFAC:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0039FFF8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 5;
L_0039FFD0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (t) { [[clang::musttail]] return unit_00A8(c, 3u, depth); } }
    set32(c.r[4], c.r[19].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039FFD0u | kUnwind; return; } goto L_0039FFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { [[clang::musttail]] return unit_00A8(c, 4u, depth); } }
L_0039FFF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.budget -= 2;
    [[clang::musttail]] return unit_00A8(c, 1u, depth);
}

}
