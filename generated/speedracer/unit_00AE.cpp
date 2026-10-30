#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AE[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 48, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 168, 0, 169, 0, 0, 170,
    0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0,
    181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0,
    0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202,
    0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0,
    213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0,
    0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234,
    0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0,
    245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 261, 262, 263, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 286, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 300,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 348,
    0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 373, 0,
    0, 0, 0, 0, 374, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 386, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B8000;
    case 2u: goto L_003B8018;
    case 3u: goto L_003B8060;
    case 4u: goto L_003B8068;
    case 5u: goto L_003B8098;
    case 6u: goto L_003B80BC;
    case 7u: goto L_003B80F4;
    case 8u: goto L_003B8124;
    case 9u: goto L_003B8148;
    case 10u: goto L_003B817C;
    case 11u: goto L_003B81C0;
    case 12u: goto L_003B81F8;
    case 13u: goto L_003B8228;
    case 14u: goto L_003B8250;
    case 15u: goto L_003B828C;
    case 16u: goto L_003B82B0;
    case 17u: goto L_003B82EC;
    case 18u: goto L_003B8310;
    case 19u: goto L_003B833C;
    case 20u: goto L_003B8368;
    case 21u: goto L_003B8398;
    case 22u: goto L_003B83A8;
    case 23u: goto L_003B83E8;
    case 24u: goto L_003B83F8;
    case 25u: goto L_003B8434;
    case 26u: goto L_003B8484;
    case 27u: goto L_003B849C;
    case 28u: goto L_003B84B8;
    case 29u: goto L_003B84BC;
    case 30u: goto L_003B851C;
    case 31u: goto L_003B8554;
    case 32u: goto L_003B85D8;
    case 33u: goto L_003B85E8;
    case 34u: goto L_003B85FC;
    case 35u: goto L_003B8608;
    case 36u: goto L_003B8624;
    case 37u: goto L_003B863C;
    case 38u: goto L_003B8650;
    case 39u: goto L_003B865C;
    case 40u: goto L_003B8680;
    case 41u: goto L_003B8690;
    case 42u: goto L_003B86A4;
    case 43u: goto L_003B86B0;
    case 44u: goto L_003B86C0;
    case 45u: goto L_003B86D0;
    case 46u: goto L_003B86E4;
    case 47u: goto L_003B86F0;
    case 48u: goto L_003B86F4;
    case 49u: goto L_003B8710;
    case 50u: goto L_003B8734;
    case 51u: goto L_003B8748;
    case 52u: goto L_003B8760;
    case 53u: goto L_003B8774;
    case 54u: goto L_003B8798;
    case 55u: goto L_003B87C0;
    case 56u: goto L_003B87F8;
    case 57u: goto L_003B8848;
    case 58u: goto L_003B8870;
    case 59u: goto L_003B88A4;
    case 60u: goto L_003B8900;
    case 61u: goto L_003B8918;
    case 62u: goto L_003B8974;
    case 63u: goto L_003B89AC;
    case 64u: goto L_003B8A18;
    case 65u: goto L_003B8A3C;
    case 66u: goto L_003B8A6C;
    case 67u: goto L_003B8A90;
    case 68u: goto L_003B8AB4;
    case 69u: goto L_003B8AE4;
    case 70u: goto L_003B8B20;
    case 71u: goto L_003B8B70;
    case 72u: goto L_003B8B94;
    case 73u: goto L_003B8BCC;
    case 74u: goto L_003B8C10;
    case 75u: goto L_003B8C48;
    case 76u: goto L_003B8C78;
    case 77u: goto L_003B8C8C;
    case 78u: goto L_003B8CA4;
    case 79u: goto L_003B8CB8;
    case 80u: goto L_003B8CD4;
    case 81u: goto L_003B8CE8;
    case 82u: goto L_003B8D00;
    case 83u: goto L_003B8D14;
    case 84u: goto L_003B8D38;
    case 85u: goto L_003B8D50;
    case 86u: goto L_003B8D74;
    case 87u: goto L_003B8DA8;
    case 88u: goto L_003B8DD4;
    case 89u: goto L_003B8E08;
    case 90u: goto L_003B8E38;
    case 91u: goto L_003B8E78;
    case 92u: goto L_003B8EB4;
    case 93u: goto L_003B8EDC;
    case 94u: goto L_003B8EF0;
    case 95u: goto L_003B8F0C;
    case 96u: goto L_003B8F24;
    case 97u: goto L_003B8F48;
    case 98u: goto L_003B8F50;
    case 99u: goto L_003B8F84;
    case 100u: goto L_003B8FA8;
    case 101u: goto L_003B8FBC;
    case 102u: goto L_003B8FF8;
    case 103u: goto L_003B9050;
    case 104u: goto L_003B90B8;
    case 105u: goto L_003B90D8;
    case 106u: goto L_003B90E8;
    case 107u: goto L_003B9120;
    case 108u: goto L_003B9154;
    case 109u: goto L_003B9184;
    case 110u: goto L_003B91A8;
    case 111u: goto L_003B91E0;
    case 112u: goto L_003B9208;
    case 113u: goto L_003B9248;
    case 114u: goto L_003B9268;
    case 115u: goto L_003B92A8;
    case 116u: goto L_003B92EC;
    case 117u: goto L_003B9308;
    case 118u: goto L_003B93B8;
    case 119u: goto L_003B93E8;
    case 120u: goto L_003B9478;
    case 121u: goto L_003B94DC;
    case 122u: goto L_003B9568;
    case 123u: goto L_003B95C4;
    case 124u: goto L_003B95D8;
    case 125u: goto L_003B95E0;
    case 126u: goto L_003B961C;
    case 127u: goto L_003B9658;
    case 128u: goto L_003B9668;
    case 129u: goto L_003B96AC;
    case 130u: goto L_003B96E8;
    case 131u: goto L_003B9700;
    case 132u: goto L_003B9728;
    case 133u: goto L_003B9744;
    case 134u: goto L_003B9760;
    case 135u: goto L_003B97A0;
    case 136u: goto L_003B97C0;
    case 137u: goto L_003B97E0;
    case 138u: goto L_003B9808;
    case 139u: goto L_003B9820;
    case 140u: goto L_003B9848;
    case 141u: goto L_003B9868;
    case 142u: goto L_003B9870;
    case 143u: goto L_003B98C0;
    case 144u: goto L_003B9908;
    case 145u: goto L_003B998C;
    case 146u: goto L_003B99DC;
    case 147u: goto L_003B99FC;
    case 148u: goto L_003B9A20;
    case 149u: goto L_003B9A38;
    case 150u: goto L_003B9A94;
    case 151u: goto L_003B9B60;
    case 152u: goto L_003B9B9C;
    case 153u: goto L_003B9BC8;
    case 154u: goto L_003B9C40;
    case 155u: goto L_003B9CA0;
    case 156u: goto L_003B9CD8;
    case 157u: goto L_003B9D10;
    case 158u: goto L_003B9D28;
    case 159u: goto L_003B9DA4;
    case 160u: goto L_003B9DF0;
    case 161u: goto L_003B9E18;
    case 162u: goto L_003B9E40;
    case 163u: goto L_003B9E4C;
    case 164u: goto L_003B9E64;
    case 165u: goto L_003B9EB0;
    case 166u: goto L_003B9EDC;
    case 167u: goto L_003B9EE4;
    case 168u: goto L_003B9EE8;
    case 169u: goto L_003B9EF0;
    case 170u: goto L_003B9EFC;
    case 171u: goto L_003B9F08;
    case 172u: goto L_003B9F14;
    case 173u: goto L_003B9F20;
    case 174u: goto L_003B9F2C;
    case 175u: goto L_003B9F38;
    case 176u: goto L_003B9F44;
    case 177u: goto L_003B9F50;
    case 178u: goto L_003B9F5C;
    case 179u: goto L_003B9F68;
    case 180u: goto L_003B9F74;
    case 181u: goto L_003B9F80;
    case 182u: goto L_003B9F8C;
    case 183u: goto L_003B9F98;
    case 184u: goto L_003B9FA4;
    case 185u: goto L_003B9FB0;
    case 186u: goto L_003B9FBC;
    case 187u: goto L_003B9FC8;
    case 188u: goto L_003B9FD4;
    case 189u: goto L_003B9FE0;
    case 190u: goto L_003B9FEC;
    case 191u: goto L_003B9FF8;
    case 192u: goto L_003BA004;
    case 193u: goto L_003BA010;
    case 194u: goto L_003BA01C;
    case 195u: goto L_003BA028;
    case 196u: goto L_003BA034;
    case 197u: goto L_003BA040;
    case 198u: goto L_003BA04C;
    case 199u: goto L_003BA058;
    case 200u: goto L_003BA064;
    case 201u: goto L_003BA070;
    case 202u: goto L_003BA07C;
    case 203u: goto L_003BA088;
    case 204u: goto L_003BA094;
    case 205u: goto L_003BA0A0;
    case 206u: goto L_003BA0AC;
    case 207u: goto L_003BA0B8;
    case 208u: goto L_003BA0C4;
    case 209u: goto L_003BA0D0;
    case 210u: goto L_003BA0DC;
    case 211u: goto L_003BA0E8;
    case 212u: goto L_003BA0F4;
    case 213u: goto L_003BA100;
    case 214u: goto L_003BA10C;
    case 215u: goto L_003BA118;
    case 216u: goto L_003BA124;
    case 217u: goto L_003BA130;
    case 218u: goto L_003BA13C;
    case 219u: goto L_003BA148;
    case 220u: goto L_003BA154;
    case 221u: goto L_003BA160;
    case 222u: goto L_003BA16C;
    case 223u: goto L_003BA178;
    case 224u: goto L_003BA184;
    case 225u: goto L_003BA190;
    case 226u: goto L_003BA19C;
    case 227u: goto L_003BA1A8;
    case 228u: goto L_003BA1B4;
    case 229u: goto L_003BA1C0;
    case 230u: goto L_003BA1CC;
    case 231u: goto L_003BA1D8;
    case 232u: goto L_003BA1E4;
    case 233u: goto L_003BA1F0;
    case 234u: goto L_003BA1FC;
    case 235u: goto L_003BA208;
    case 236u: goto L_003BA214;
    case 237u: goto L_003BA220;
    case 238u: goto L_003BA22C;
    case 239u: goto L_003BA238;
    case 240u: goto L_003BA244;
    case 241u: goto L_003BA250;
    case 242u: goto L_003BA25C;
    case 243u: goto L_003BA268;
    case 244u: goto L_003BA274;
    case 245u: goto L_003BA280;
    case 246u: goto L_003BA28C;
    case 247u: goto L_003BA298;
    case 248u: goto L_003BA2A4;
    case 249u: goto L_003BA2B0;
    case 250u: goto L_003BA2BC;
    case 251u: goto L_003BA2C8;
    case 252u: goto L_003BA2D8;
    case 253u: goto L_003BA2E0;
    case 254u: goto L_003BA2F4;
    case 255u: goto L_003BA300;
    case 256u: goto L_003BA378;
    case 257u: goto L_003BA3F4;
    case 258u: goto L_003BA414;
    case 259u: goto L_003BA438;
    case 260u: goto L_003BA450;
    case 261u: goto L_003BA4A0;
    case 262u: goto L_003BA4A4;
    case 263u: goto L_003BA4A8;
    case 264u: goto L_003BA4AC;
    case 265u: goto L_003BA510;
    case 266u: goto L_003BA590;
    case 267u: goto L_003BA608;
    case 268u: goto L_003BA638;
    case 269u: goto L_003BA688;
    case 270u: goto L_003BA6C0;
    case 271u: goto L_003BA6C8;
    case 272u: goto L_003BA74C;
    case 273u: goto L_003BA7E0;
    case 274u: goto L_003BA840;
    case 275u: goto L_003BA878;
    case 276u: goto L_003BA9A8;
    case 277u: goto L_003BA9E0;
    case 278u: goto L_003BAA10;
    case 279u: goto L_003BAA38;
    case 280u: goto L_003BAA48;
    case 281u: goto L_003BAA60;
    case 282u: goto L_003BAAB0;
    case 283u: goto L_003BAACC;
    case 284u: goto L_003BAB08;
    case 285u: goto L_003BAB54;
    case 286u: goto L_003BAB88;
    case 287u: goto L_003BAB8C;
    case 288u: goto L_003BAC0C;
    case 289u: goto L_003BAC20;
    case 290u: goto L_003BAC30;
    case 291u: goto L_003BAC48;
    case 292u: goto L_003BAC7C;
    case 293u: goto L_003BAC90;
    case 294u: goto L_003BAC9C;
    case 295u: goto L_003BACC8;
    case 296u: goto L_003BAD48;
    case 297u: goto L_003BAD78;
    case 298u: goto L_003BADC4;
    case 299u: goto L_003BADF8;
    case 300u: goto L_003BADFC;
    case 301u: goto L_003BAE64;
    case 302u: goto L_003BAE74;
    case 303u: goto L_003BAE88;
    case 304u: goto L_003BAEA0;
    case 305u: goto L_003BAED4;
    case 306u: goto L_003BAEE8;
    case 307u: goto L_003BAEF4;
    case 308u: goto L_003BAF0C;
    case 309u: goto L_003BAF90;
    case 310u: goto L_003BAFC0;
    case 311u: goto L_003BAFE8;
    case 312u: goto L_003BB010;
    case 313u: goto L_003BB018;
    case 314u: goto L_003BB050;
    case 315u: goto L_003BB070;
    case 316u: goto L_003BB094;
    case 317u: goto L_003BB0C8;
    case 318u: goto L_003BB0E8;
    case 319u: goto L_003BB100;
    case 320u: goto L_003BB154;
    case 321u: goto L_003BB188;
    case 322u: goto L_003BB1D8;
    case 323u: goto L_003BB200;
    case 324u: goto L_003BB290;
    case 325u: goto L_003BB2B0;
    case 326u: goto L_003BB2C8;
    case 327u: goto L_003BB2D8;
    case 328u: goto L_003BB33C;
    case 329u: goto L_003BB350;
    case 330u: goto L_003BB388;
    case 331u: goto L_003BB3D4;
    case 332u: goto L_003BB400;
    case 333u: goto L_003BB440;
    case 334u: goto L_003BB47C;
    case 335u: goto L_003BB4B8;
    case 336u: goto L_003BB4BC;
    case 337u: goto L_003BB504;
    case 338u: goto L_003BB514;
    case 339u: goto L_003BB52C;
    case 340u: goto L_003BB534;
    case 341u: goto L_003BB578;
    case 342u: goto L_003BB5A8;
    case 343u: goto L_003BB5AC;
    case 344u: goto L_003BB5B8;
    case 345u: goto L_003BB5E0;
    case 346u: goto L_003BB5EC;
    case 347u: goto L_003BB5F4;
    case 348u: goto L_003BB5FC;
    case 349u: goto L_003BB608;
    case 350u: goto L_003BB610;
    case 351u: goto L_003BB634;
    case 352u: goto L_003BB640;
    case 353u: goto L_003BB648;
    case 354u: goto L_003BB650;
    case 355u: goto L_003BB69C;
    case 356u: goto L_003BB6D0;
    case 357u: goto L_003BB6E4;
    case 358u: goto L_003BB6F0;
    case 359u: goto L_003BB718;
    case 360u: goto L_003BB724;
    case 361u: goto L_003BB738;
    case 362u: goto L_003BB740;
    case 363u: goto L_003BB758;
    case 364u: goto L_003BB7B4;
    case 365u: goto L_003BB7B8;
    case 366u: goto L_003BB7D4;
    case 367u: goto L_003BB808;
    case 368u: goto L_003BB83C;
    case 369u: goto L_003BB894;
    case 370u: goto L_003BB8A0;
    case 371u: goto L_003BB8EC;
    case 372u: goto L_003BB8F4;
    case 373u: goto L_003BB8F8;
    case 374u: goto L_003BB910;
    case 375u: goto L_003BB914;
    case 376u: goto L_003BB944;
    case 377u: goto L_003BB978;
    case 378u: goto L_003BB9D0;
    case 379u: goto L_003BB9FC;
    case 380u: goto L_003BBA30;
    case 381u: goto L_003BBA88;
    case 382u: goto L_003BBAB4;
    case 383u: goto L_003BBAC0;
    case 384u: goto L_003BBAE0;
    case 385u: goto L_003BBAE8;
    case 386u: goto L_003BBAEC;
    case 387u: goto L_003BBB1C;
    case 388u: goto L_003BBB50;
    case 389u: goto L_003BBBA4;
    case 390u: goto L_003BBBD8;
    case 391u: goto L_003BBC00;
    case 392u: goto L_003BBC4C;
    case 393u: goto L_003BBCB0;
    case 394u: goto L_003BBCDC;
    case 395u: goto L_003BBD10;
    case 396u: goto L_003BBDA0;
    case 397u: goto L_003BBDFC;
    case 398u: goto L_003BBE28;
    case 399u: goto L_003BBE5C;
    case 400u: goto L_003BBEB4;
    case 401u: goto L_003BBEC4;
    case 402u: goto L_003BBF20;
    case 403u: goto L_003BBF50;
    case 404u: goto L_003BBF84;
    case 405u: goto L_003BBFDC;
    default: bad_entry(c, 0x003B8000u); return;
    }
L_003B8000:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_003B804C; } }
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B804C; } }
L_003B8018:
    ld128((c.r[4].w[0]) & ~15u, c.r[3]);
    c.r[7].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    mmi::pxor(c.r[8], c.r[2], c.r[3]);
    set32(c.r[2], c.r[5].w[0] + 16u);
    mmi::pcpyud(c.r[10], c.r[8], c.r[7]);
    c.r[9].d[0] = c.r[10].d[0] | c.r[8].d[0];
    if (c.r[9].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 11;
    if (c.r[9].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 16u);  goto L_003B804C; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] - 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8018u | kUnwind; return; } goto L_003B8018; } }
L_003B804C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_003B808C; } }
L_003B8060:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.budget -= 2;
L_003B8068:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_003B8080; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_003B8080:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[7].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8068u | kUnwind; return; } goto L_003B8068; } }
L_003B808C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B8098:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003B8114; } }
    c.r[2].d[0] = c.r[5].d[0] | c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_003B8118; }
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_003B80BC:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] - 32u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[4].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B80BCu | kUnwind; return; } goto L_003B80BC; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003B8114; } }
L_003B80F4:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st64((c.r[7].w[0]), c.r[3].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B80F4u | kUnwind; return; } goto L_003B80F4; } }
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003B8114:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_003B8118:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B8140; } }
L_003B8124:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8124u | kUnwind; return; } goto L_003B8124; } }
L_003B8140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; return; }
L_003B8148:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003B81A0; } }
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B81A0; } }
    set32(c.r[3], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003B8244; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B817C:
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B817Cu | kUnwind; return; } goto L_003B817C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; return; }
L_003B81A0:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_003B821C; }
    c.r[2].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] - 1u);  goto L_003B821C; }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003B81C0:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] - 32u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[4].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    st128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B81C0u | kUnwind; return; } goto L_003B81C0; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003B8218; } }
L_003B81F8:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st64((c.r[7].w[0]), c.r[3].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B81F8u | kUnwind; return; } goto L_003B81F8; } }
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003B8218:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_003B821C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B8244; } }
L_003B8228:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8228u | kUnwind; return; } goto L_003B8228; } }
L_003B8244:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; return; }
L_003B8250:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B82D0; } }
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B82D0; } }
    c.r[9].d[0] = c.r[5].d[0] & 255ull;
    c.r[10].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].d[0] = c.r[8].d[0] << 8;
    c.r[8].d[0] = c.r[3].d[0] | c.r[9].d[0];
    mmi::pcpyh(c.r[3], c.r[8]);
    c.budget -= 8;
    { const bool t = c.r[10].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_003B82BC; } }
    mmi::pcpyld(c.r[8], c.r[3], c.r[3]);
    c.budget -= 1;
L_003B828C:
    st128((c.r[7].w[0]) & ~15u, c.r[8]);
    set32(c.r[6], c.r[6].w[0] - 32u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st128((c.r[7].w[0]) & ~15u, c.r[8]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B828Cu | kUnwind; return; } goto L_003B828C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;  if (t) { goto L_003B82BC; } }
L_003B82B0:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
L_003B82BC:
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st64((c.r[7].w[0]), c.r[3].d[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B82B0u | kUnwind; return; } goto L_003B82B0; }
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003B82D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_003B8308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_003B82EC:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B82ECu | kUnwind; return; } goto L_003B82EC; } }
L_003B8308:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003B8310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 20784u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B833Cu); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 217u, depth + 1u); else { c.pc = 0x003994E0u; return; } if (c.pc != 0x003B833Cu) [[unlikely]] return; }
L_003B833C:
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[15].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B8358; }
    set32(c.r[15], ld32((c.r[16].w[0] + 20784u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[15].w[0]);  goto L_003B8354; }
L_003B8354:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B8358:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8368:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[7].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[9].d[0]);
    set32(c.r[7], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 48u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[11].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8398u); set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AE(c, 332u, depth + 1u); else { c.pc = 0x003BB400u; return; } if (c.pc != 0x003B8398u) [[unlikely]] return; }
L_003B8398:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B83A8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[6].d[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    set32(c.r[6], c.r[29].w[0] + 24u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[11].d[0]);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[14].w[0] + 8u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B83E8u); st32((c.r[4].w[0] + 84u), c.r[14].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 330u, depth + 1u); else { c.pc = 0x003BB388u; return; } if (c.pc != 0x003B83E8u) [[unlikely]] return; }
L_003B83E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B83F8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 120u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[23].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[17].d[0]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 15;
L_003B8434:
    c.r[15].d[0] = c.r[22].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[30], 0u + 2u);  if (t) { goto L_003B8450; } }
    c.r[15].d[0] = c.r[19].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].d[0] = c.r[19].d[0] ^ 8ull;  if (t) { goto L_003B8450; } }
    c.r[30].d[0] = 0ull < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003B8450:
    set32(c.r[13], ld32((c.r[29].w[0])));
    c.r[15].d[0] = c.r[13].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; st32((c.r[29].w[0] + 8u), 0u);  if (t) { goto L_003B8580; } }
    mmi::mult(c, 0, c.r[13].w[0], c.r[19].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[22].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[22].w[0] + c.r[14].w[0]);
    c.r[15].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull; c.r[20].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003B84B8; } }
    st32((c.r[29].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[21], c.r[19].w[0] >> 3);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_003B8484:
    c.r[15].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B84A4; } }
    set32(c.r[17], c.r[16].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B849Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B849Cu) [[unlikely]] return; }
L_003B849C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003B84E8; } }
L_003B84A4:
    set32(c.r[14], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    c.r[15].d[0] = c.r[18].d[0] < c.r[14].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8484u | kUnwind; return; } goto L_003B8484; } }
L_003B84B8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003B84BC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 168u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003B84E8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_003B8508; } }
    c.r[14].d[0] = ld64((c.r[16].w[0]));
    c.r[15].d[0] = ld64((c.r[17].w[0]));
    st64((c.r[16].w[0]), c.r[15].d[0]);
    st64((c.r[17].w[0]), c.r[14].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8484u | kUnwind; return; } goto L_003B8484; } }
L_003B8508:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[12].d[0] = c.r[21].d[0] << 32;  if (t) { goto L_003B8544; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[12].d[0] = c.r[12].d[0] >> 32;
    c.r[13].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_003B851C:
    c.r[14].d[0] = ld64((c.r[4].w[0]));
    c.r[12].d[0] = c.r[12].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld64((c.r[13].w[0]));
    st64((c.r[4].w[0]), c.r[15].d[0]);
    st64((c.r[13].w[0]), c.r[14].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B851Cu | kUnwind; return; } goto L_003B851C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8484u | kUnwind; return; } goto L_003B8484; } }
L_003B8544:
    c.r[12].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[12].d[0] = c.r[12].d[0] >> 32;
    c.r[13].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_003B8554:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[12].d[0] = c.r[12].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8554u | kUnwind; return; } goto L_003B8554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8484u | kUnwind; return; } goto L_003B8484; } }
    c.budget -= 1;
L_003B8580:
    set32(c.r[13], ld32((c.r[29].w[0])));
    set32(c.r[15], c.r[13].w[0] >> 1);
    c.r[14].d[0] = c.r[13].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[15].w[0], c.r[19].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[18], c.r[22].w[0] + c.r[15].w[0]);  if (t) { goto L_003B8D28; } }
    set32(c.r[21], c.r[13].w[0] - 1u);
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    mmi::mult(c, 0, c.r[21].w[0], c.r[19].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.r[14].d[0] = c.r[13].d[0] < static_cast<std::uint64_t>(41ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[20], c.r[22].w[0] + c.r[15].w[0]);  if (t) { goto L_003B86B4; } }
    set32(c.r[15], c.r[13].w[0] >> 3);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    mmi::mult(c, 0, c.r[15].w[0], c.r[19].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[14].w[0] << 1);
    st32((c.r[29].w[0] + 4u), c.r[14].w[0]);
    set32(c.r[16], c.r[22].w[0] + c.r[14].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[15].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B85D8u); set32(c.r[17], c.r[22].w[0] + c.r[15].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B85D8u) [[unlikely]] return; }
L_003B85D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B8CF8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B85E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B85E8u) [[unlikely]] return; }
L_003B85E8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003B8608; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B85FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B85FCu) [[unlikely]] return; }
L_003B85FC:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[22].d[0];
    c.budget -= 3;
L_003B8608:
    set32(c.r[13], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[13], c.r[18].w[0] - c.r[13].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[13].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8624u); set32(c.r[4], ld32((c.r[29].w[0] + 20u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8624u) [[unlikely]] return; }
L_003B8624:
    set32(c.r[14], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[17], c.r[18].w[0] + c.r[14].w[0]);  if (t) { goto L_003B8CC8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B863Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B863Cu) [[unlikely]] return; }
L_003B863C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003B865C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8650u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8650u) [[unlikely]] return; }
L_003B8650:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[17].d[0];
    c.budget -= 3;
L_003B865C:
    set32(c.r[15], ld32((c.r[29].w[0] + 16u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[13], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[15], c.r[20].w[0] - c.r[15].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[15].w[0]);
    set32(c.r[17], c.r[20].w[0] - c.r[13].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8680u); set32(c.r[4], ld32((c.r[29].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8680u) [[unlikely]] return; }
L_003B8680:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B8C9C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8690u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8690u) [[unlikely]] return; }
L_003B8690:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B86B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B86A4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B86A4u) [[unlikely]] return; }
L_003B86A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[20].d[0];
    c.budget -= 3;
L_003B86B0:
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003B86B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B86C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B86C0u) [[unlikely]] return; }
L_003B86C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B8C70; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B86D0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B86D0u) [[unlikely]] return; }
L_003B86D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B86F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B86E4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B86E4u) [[unlikely]] return; }
L_003B86E4:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[16].d[0];
    c.budget -= 3;
L_003B86F0:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003B86F4:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[15].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003B8BF8; } }
    c.r[14].d[0] = ld64((c.r[22].w[0]));
    c.r[15].d[0] = ld64((c.r[18].w[0]));
    st64((c.r[22].w[0]), c.r[15].d[0]);
    st64((c.r[18].w[0]), c.r[14].d[0]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[19].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.budget -= 5;
L_003B8710:
    set32(c.r[18], c.r[22].w[0] + c.r[19].w[0]);
    c.r[13].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 84u), c.r[18].w[0]);
    set32(c.r[14], c.r[19].w[0] >> 3);
    st32((c.r[29].w[0] + 28u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[14].w[0]);
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[21], c.r[22].w[0] + c.r[15].w[0]);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
L_003B8734:
    c.r[16].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B8750; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8748u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8748u) [[unlikely]] return; }
L_003B8748:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003B8B48; } }
L_003B8750:
    c.r[15].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[13], c.r[19].w[0] >> 3);
    st32((c.r[29].w[0] + 48u), c.r[15].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[13].w[0]);
    c.budget -= 4;
L_003B8760:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003B88D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8774u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8774u) [[unlikely]] return; }
L_003B8774:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003B8820; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[15].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003B87A8; } }
    c.r[14].d[0] = ld64((c.r[18].w[0]));
    c.r[15].d[0] = ld64((c.r[17].w[0]));
    st64((c.r[18].w[0]), c.r[15].d[0]);
    st64((c.r[17].w[0]), c.r[14].d[0]);
    set32(c.r[14], 0u + 1u);
    c.budget -= 5;
L_003B8798:
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[14].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8734u | kUnwind; return; } goto L_003B8734; } }
L_003B87A8:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], c.r[19].w[0] >> 3);  if (t) { goto L_003B87E8; } }
    c.r[12].d[0] = c.r[18].d[0] + 0ull;
    c.r[11].d[0] = c.r[15].d[0] << 32;
    c.r[13].d[0] = c.r[17].d[0] + 0ull;
    c.r[11].d[0] = c.r[11].d[0] >> 32;
    c.budget -= 4;
L_003B87C0:
    c.r[14].d[0] = ld64((c.r[12].w[0]));
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld64((c.r[13].w[0]));
    st64((c.r[12].w[0]), c.r[15].d[0]);
    st64((c.r[13].w[0]), c.r[14].d[0]);
    set32(c.r[12], c.r[12].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[11].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B87C0u | kUnwind; return; } goto L_003B87C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8798u | kUnwind; return; } goto L_003B8798; } }
L_003B87E8:
    c.r[11].d[0] = c.r[19].d[0] << 32;
    c.r[12].d[0] = c.r[18].d[0] + 0ull;
    c.r[11].d[0] = c.r[11].d[0] >> 32;
    c.r[13].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_003B87F8:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[11].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B87F8u | kUnwind; return; } goto L_003B87F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8798u | kUnwind; return; } goto L_003B8798; } }
L_003B8820:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - c.r[19].w[0]);  goto L_003B884C; }
    set32(c.r[14], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[14].w[0]);  if (t) { goto L_003B8854; } }
    c.r[14].d[0] = ld64((c.r[17].w[0]));
    c.r[15].d[0] = ld64((c.r[21].w[0]));
    st64((c.r[17].w[0]), c.r[15].d[0]);
    st64((c.r[21].w[0]), c.r[14].d[0]);
    set32(c.r[21], c.r[21].w[0] - c.r[19].w[0]);
    c.budget -= 5;
L_003B8848:
    set32(c.r[17], c.r[17].w[0] - c.r[19].w[0]);
    c.budget -= 1;
L_003B884C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8760u | kUnwind; return; } goto L_003B8760; } }
L_003B8854:
    set32(c.r[15], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[12].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B8898; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 64u)));
    c.r[11].d[0] = c.r[13].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] >> 32;
    c.r[13].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
L_003B8870:
    c.r[14].d[0] = ld64((c.r[12].w[0]));
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld64((c.r[13].w[0]));
    st64((c.r[12].w[0]), c.r[15].d[0]);
    st64((c.r[13].w[0]), c.r[14].d[0]);
    set32(c.r[12], c.r[12].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[11].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8870u | kUnwind; return; } goto L_003B8870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] - c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8848u | kUnwind; return; } goto L_003B8848; } }
L_003B8898:
    c.r[11].d[0] = c.r[19].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] >> 32;
    c.r[13].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
L_003B88A4:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[11].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B88A4u | kUnwind; return; } goto L_003B88A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] - c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8848u | kUnwind; return; } goto L_003B8848; } }
    c.budget -= 1;
L_003B88D0:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], ld32((c.r[29].w[0])));  if (t) { goto L_003B89D8; } }
    set32(c.r[13], ld32((c.r[29].w[0])));
    set32(c.r[18], ld32((c.r[29].w[0] + 84u)));
    mmi::mult(c, 0, c.r[13].w[0], c.r[19].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + c.r[14].w[0]);
    c.r[15].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; c.r[20].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B84B8u | kUnwind; return; } goto L_003B84B8; } }
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[21], c.r[19].w[0] >> 3);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_003B8900:
    c.r[15].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B8920; } }
    set32(c.r[17], c.r[16].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8918u) [[unlikely]] return; }
L_003B8918:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003B8940; } }
L_003B8920:
    set32(c.r[14], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    c.r[15].d[0] = c.r[18].d[0] < c.r[14].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[15].d[0] != 0ull) { c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8900u | kUnwind; return; } goto L_003B8900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B84BCu | kUnwind; return; } goto L_003B84BC; } }
    c.budget -= 1;
L_003B8940:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_003B8960; } }
    c.r[14].d[0] = ld64((c.r[16].w[0]));
    c.r[15].d[0] = ld64((c.r[17].w[0]));
    st64((c.r[16].w[0]), c.r[15].d[0]);
    st64((c.r[17].w[0]), c.r[14].d[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8900u | kUnwind; return; } goto L_003B8900; } }
L_003B8960:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[12].d[0] = c.r[21].d[0] << 32;  if (t) { goto L_003B899C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[12].d[0] = c.r[12].d[0] >> 32;
    c.r[13].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_003B8974:
    c.r[14].d[0] = ld64((c.r[4].w[0]));
    c.r[12].d[0] = c.r[12].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld64((c.r[13].w[0]));
    st64((c.r[4].w[0]), c.r[15].d[0]);
    st64((c.r[13].w[0]), c.r[14].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8974u | kUnwind; return; } goto L_003B8974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8900u | kUnwind; return; } goto L_003B8900; } }
L_003B899C:
    c.r[12].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[12].d[0] = c.r[12].d[0] >> 32;
    c.r[13].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_003B89AC:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[12].d[0] = c.r[12].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B89ACu | kUnwind; return; } goto L_003B89AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8900u | kUnwind; return; } goto L_003B8900; } }
    c.budget -= 1;
L_003B89D8:
    set32(c.r[2], c.r[18].w[0] - c.r[20].w[0]);
    set32(c.r[14], c.r[20].w[0] - c.r[22].w[0]);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[15].w[0], c.r[19].w[0]);
    c.r[13].d[0] = c.lo.d[0];
    c.r[15].d[0] = c.r[14].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[15].d[0] != 0) c.r[2].d[0] = c.r[14].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[20], c.r[22].w[0] + c.r[13].w[0]);  if (t) { goto L_003B8A38; } }
    c.r[15].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[13], c.r[18].w[0] - c.r[2].w[0]);  if (t) { goto L_003B8B10; } }
    set32(c.r[15], c.r[2].w[0] >> 3);
    c.r[12].d[0] = c.r[13].d[0] + 0ull;
    c.r[2].d[0] = c.r[15].d[0] << 32;
    c.r[13].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 5;
L_003B8A18:
    c.r[14].d[0] = ld64((c.r[13].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld64((c.r[12].w[0]));
    st64((c.r[13].w[0]), c.r[15].d[0]);
    st64((c.r[12].w[0]), c.r[14].d[0]);
    set32(c.r[13], c.r[13].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[12], c.r[12].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8A18u | kUnwind; return; } goto L_003B8A18; } }
L_003B8A38:
    set32(c.r[14], c.r[20].w[0] - c.r[21].w[0]);
    c.budget -= 1;
L_003B8A3C:
    set32(c.r[16], c.r[21].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[14].w[0] - c.r[19].w[0]);
    c.r[15].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[15].d[0] != 0) c.r[2].d[0] = c.r[16].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[15].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003B8A8C; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[13], c.r[20].w[0] - c.r[2].w[0]);  if (t) { goto L_003B8AD8; } }
    set32(c.r[15], c.r[2].w[0] >> 3);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[15].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
L_003B8A6C:
    c.r[14].d[0] = ld64((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld64((c.r[13].w[0]));
    st64((c.r[4].w[0]), c.r[15].d[0]);
    st64((c.r[13].w[0]), c.r[14].d[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8A6Cu | kUnwind; return; } goto L_003B8A6C; } }
L_003B8A8C:
    c.r[15].d[0] = c.r[19].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003B8A90:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003B8AB4; } }
    mmi::divu(c, 0, c.r[11].w[0], c.r[19].w[0]);
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { breakpoint(c, 0x003B8AA0u);  goto L_003B8AA4; }
L_003B8AA4:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8AB4u); c.r[5].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_00AE(c, 24u, depth + 1u); else { c.pc = 0x003B83F8u; return; } if (c.pc != 0x003B8AB4u) [[unlikely]] return; }
L_003B8AB4:
    c.r[15].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[22], c.r[20].w[0] - c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B84B8u | kUnwind; return; } goto L_003B84B8; } }
    mmi::divu(c, 0, c.r[16].w[0], c.r[19].w[0]);
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { breakpoint(c, 0x003B8AC8u);  goto L_003B8ACC; }
L_003B8ACC:
    c.r[15].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8434u | kUnwind; return; } goto L_003B8434; } }
L_003B8AD8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 3;
L_003B8AE4:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8AE4u | kUnwind; return; } goto L_003B8AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[19].d[0] < c.r[11].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8A90u | kUnwind; return; } goto L_003B8A90; } }
    c.budget -= 1;
L_003B8B10:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[12].d[0] = c.r[13].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[13].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
L_003B8B20:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld8((c.r[12].w[0]));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8B20u | kUnwind; return; } goto L_003B8B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[20].w[0] - c.r[21].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8A3Cu | kUnwind; return; } goto L_003B8A3C; } }
L_003B8B48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8734u | kUnwind; return; } goto L_003B8734; }
    set32(c.r[15], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[15].w[0]);  if (t) { goto L_003B8B78; } }
    c.r[14].d[0] = ld64((c.r[20].w[0]));
    c.r[15].d[0] = ld64((c.r[18].w[0]));
    st64((c.r[20].w[0]), c.r[15].d[0]);
    st64((c.r[18].w[0]), c.r[14].d[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[19].w[0]);
    c.budget -= 5;
L_003B8B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8734u | kUnwind; return; } goto L_003B8734; } }
L_003B8B78:
    set32(c.r[13], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[14], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_003B8BBC; } }
    c.r[12].d[0] = c.r[20].d[0] + 0ull;
    c.r[13].d[0] = c.r[18].d[0] + 0ull;
    c.r[11].d[0] = c.r[14].d[0] << 32;
    c.r[11].d[0] = c.r[11].d[0] >> 32;
    c.budget -= 4;
L_003B8B94:
    c.r[14].d[0] = ld64((c.r[12].w[0]));
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld64((c.r[13].w[0]));
    st64((c.r[12].w[0]), c.r[15].d[0]);
    st64((c.r[13].w[0]), c.r[14].d[0]);
    set32(c.r[12], c.r[12].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[11].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8B94u | kUnwind; return; } goto L_003B8B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8B70u | kUnwind; return; } goto L_003B8B70; } }
L_003B8BBC:
    c.r[11].d[0] = c.r[19].d[0] << 32;
    c.r[12].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[11].d[0] >> 32;
    c.r[13].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_003B8BCC:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[11].sd[0] > 0; set32(c.r[13], c.r[13].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8BCCu | kUnwind; return; } goto L_003B8BCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8B70u | kUnwind; return; } goto L_003B8B70; } }
    c.budget -= 1;
L_003B8BF8:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], c.r[19].w[0] >> 3);  if (t) { goto L_003B8C38; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[12].d[0] = c.r[15].d[0] << 32;
    c.r[13].d[0] = c.r[22].d[0] + 0ull;
    c.r[12].d[0] = c.r[12].d[0] >> 32;
    c.budget -= 4;
L_003B8C10:
    c.r[14].d[0] = ld64((c.r[13].w[0]));
    c.r[12].d[0] = c.r[12].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld64((c.r[4].w[0]));
    st64((c.r[13].w[0]), c.r[15].d[0]);
    st64((c.r[4].w[0]), c.r[14].d[0]);
    set32(c.r[13], c.r[13].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8C10u | kUnwind; return; } goto L_003B8C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[21].w[0], c.r[19].w[0]); c.r[15].d[0] = c.lo.d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8710u | kUnwind; return; } goto L_003B8710; } }
L_003B8C38:
    c.r[12].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[12].d[0] = c.r[12].d[0] >> 32;
    c.r[13].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
L_003B8C48:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    c.r[12].d[0] = c.r[12].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[15].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8C48u | kUnwind; return; } goto L_003B8C48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[21].w[0], c.r[19].w[0]); c.r[15].d[0] = c.lo.d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8710u | kUnwind; return; } goto L_003B8710; } }
L_003B8C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C78u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8C78u) [[unlikely]] return; }
L_003B8C78:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B86F0u | kUnwind; return; } goto L_003B86F0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8C8Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8C8Cu) [[unlikely]] return; }
L_003B8C8C:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B86F0u | kUnwind; return; } goto L_003B86F0; } }
L_003B8C9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8CA4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8CA4u) [[unlikely]] return; }
L_003B8CA4:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B86B0u | kUnwind; return; } goto L_003B86B0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8CB8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8CB8u) [[unlikely]] return; }
L_003B8CB8:
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B86B0u | kUnwind; return; } goto L_003B86B0; } }
L_003B8CC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8CD4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8CD4u) [[unlikely]] return; }
L_003B8CD4:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B865Cu | kUnwind; return; } goto L_003B865C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8CE8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8CE8u) [[unlikely]] return; }
L_003B8CE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B865Cu | kUnwind; return; } goto L_003B865C; } }
L_003B8CF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D00u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8D00u) [[unlikely]] return; }
L_003B8D00:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8608u | kUnwind; return; } goto L_003B8608; }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[23].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D14u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8D14u) [[unlikely]] return; }
L_003B8D14:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8608u | kUnwind; return; } goto L_003B8608; } }
    c.budget -= 1;
L_003B8D28:
    set32(c.r[14], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[14].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B86F4u | kUnwind; return; } goto L_003B86F4; } }
    c.budget -= 1;
L_003B8D38:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[14].w[0] + 168u), c.r[4].d[0]);  c.pc = t; return; }
L_003B8D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], ld32((c.r[15].w[0] + 30960u)));
    c.r[5].d[0] = ld64((c.r[14].w[0] - 31432u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8D74u); c.r[4].d[0] = ld64((c.r[16].w[0] + 168u));  if (depth < kMaxDepth) unit_00AB(c, 435u, depth + 1u); else { c.pc = 0x003AF7B8u; return; } if (c.pc != 0x003B8D74u) [[unlikely]] return; }
L_003B8D74:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[16].w[0] + 168u), c.r[2].d[0]);
    c.r[15].d[0] = c.r[2].d[0] >> 32;
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].d[0] & c.r[14].d[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8DA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 20784u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8DD4u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 214u, depth + 1u); else { c.pc = 0x00399468u; return; } if (c.pc != 0x003B8DD4u) [[unlikely]] return; }
L_003B8DD4:
    c.r[15].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[14], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != c.r[14].d[0]; c.r[2].d[0] = c.r[15].d[0] + 0ull;  if (t) { goto L_003B8DF0; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 20784u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[15].w[0]);  goto L_003B8DF0; }
L_003B8DF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B8E08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[15], 0u + 9u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[14].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[14].d[0] = c.r[14].d[0] & 9ull;
    c.budget -= 7;
    { const bool t = c.r[14].d[0] != c.r[15].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B8E2C; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6B88u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 243u, depth); }
L_003B8E2C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8E38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { set32(c.r[15], ld32((c.r[4].w[0] + 56u)));  goto L_003B8E68; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    st32((c.r[16].w[0] + 84u), c.r[14].w[0]);
    c.r[4].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[15], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
L_003B8E68:
    c.budget -= 2;
    if (c.r[15].d[0] != 0ull) { c.r[14].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003B8E7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8E78u);  if (depth < kMaxDepth) unit_00AD(c, 259u, depth + 1u); else { c.pc = 0x003B6E80u; return; } if (c.pc != 0x003B8E78u) [[unlikely]] return; }
L_003B8E78:
    c.r[14].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003B8E7C:
    set32(c.r[13], 0u - 1u);
    c.r[15].d[0] = c.r[14].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_003B8F50; } }
    c.r[15].d[0] = c.r[14].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  goto L_003B8F6C; }
    c.r[15].d[0] = c.r[14].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].d[0] = c.r[14].d[0] & 8ull;  if (t) { goto L_003B8F50; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].d[0] = c.r[14].d[0] | 4ull;  if (t) { goto L_003B8ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8EB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003B8EB4u) [[unlikely]] return; }
L_003B8EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], 0u - 1u);  if (t) { goto L_003B8F50; } }
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[15].d[0] = c.r[15].d[0] & 65527ull;
    st32((c.r[16].w[0] + 24u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[14].d[0] = c.r[15].d[0] + 0ull;
    c.r[15].d[0] = c.r[14].d[0] | 4ull;
    c.budget -= 7;
L_003B8ED8:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.budget -= 1;
L_003B8EDC:
    set32(c.r[15], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003B8EF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8EF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 359u, depth + 1u); else { c.pc = 0x003B7DA0u; return; } if (c.pc != 0x003B8EF0u) [[unlikely]] return; }
L_003B8EF0:
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003B8EF4:
    c.r[15].d[0] = c.r[15].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x003C0000u);  if (t) { goto L_003B8F0C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F0Cu); set32(c.r[5], c.r[5].w[0] - 29176u);  if (depth < kMaxDepth) unit_00AD(c, 339u, depth + 1u); else { c.pc = 0x003B7AD8u; return; } if (c.pc != 0x003B8F0Cu) [[unlikely]] return; }
L_003B8F0C:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F24u); set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B8F24u) [[unlikely]] return; }
L_003B8F24:
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[13].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[15].d[0] = c.r[15].d[0] & 57343ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] > 0; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));  if (t) { goto L_003B8F50; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_003B8F64; }
    c.r[15].d[0] = c.r[15].d[0] | 32ull;
    c.budget -= 1;
L_003B8F48:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    set32(c.r[13], 0u - 1u);
    c.budget -= 2;
L_003B8F50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[13].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[15].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8F48u | kUnwind; return; } goto L_003B8F48; } }
L_003B8F6C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[15], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8EDCu | kUnwind; return; } goto L_003B8EDC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[15].d[0]) { set32(c.r[15], ld32((c.r[16].w[0] + 60u)));  goto L_003B8F88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8F84u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x001002A0u; return; } if (c.pc != 0x003B8F84u) [[unlikely]] return; }
L_003B8F84:
    set32(c.r[15], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_003B8F88:
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8EDCu | kUnwind; return; } goto L_003B8EDC; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 56u)));
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B8F50u | kUnwind; return; } goto L_003B8F50; } }
    c.budget -= 1;
L_003B8FA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B8FBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003B8FBCu) [[unlikely]] return; }
L_003B8FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B8FE4; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[14], ld32((c.r[16].w[0])));
    set32(c.r[15], c.r[15].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[15].w[0]);
    c.r[13].d[0] = ld8((c.r[14].w[0]));
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[2].d[0] = c.r[13].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[14].w[0]);
    c.budget -= 8;
L_003B8FE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B8FF8:
    st128((c.r[4].w[0]) & ~15u, c.r[16]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[4].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[4].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[4].w[0] + 128u) & ~15u, c.r[30]);
    st32((c.r[4].w[0] + 144u), c.f[24]);
    st32((c.r[4].w[0] + 148u), c.f[25]);
    st32((c.r[4].w[0] + 152u), c.f[26]);
    st32((c.r[4].w[0] + 156u), c.f[27]);
    st32((c.r[4].w[0] + 160u), c.f[28]);
    st32((c.r[4].w[0] + 164u), c.f[29]);
    st32((c.r[4].w[0] + 168u), c.f[30]);
    st32((c.r[4].w[0] + 172u), c.f[31]);
    st128((c.r[4].w[0] + 176u) & ~15u, c.r[29]);
    st128((c.r[4].w[0] + 192u) & ~15u, c.r[31]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B9050:
    ld128((c.r[4].w[0]) & ~15u, c.r[16]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[4].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[4].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[4].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[4].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[4].w[0] + 128u) & ~15u, c.r[30]);
    c.f[24] = ld32((c.r[4].w[0] + 144u));
    c.f[25] = ld32((c.r[4].w[0] + 148u));
    c.f[26] = ld32((c.r[4].w[0] + 152u));
    c.f[27] = ld32((c.r[4].w[0] + 156u));
    c.f[28] = ld32((c.r[4].w[0] + 160u));
    c.f[29] = ld32((c.r[4].w[0] + 164u));
    c.f[30] = ld32((c.r[4].w[0] + 168u));
    c.f[31] = ld32((c.r[4].w[0] + 172u));
    ld128((c.r[4].w[0] + 176u) & ~15u, c.r[29]);
    ld128((c.r[4].w[0] + 192u) & ~15u, c.r[31]);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003B90A8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_003B90A8:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003B90B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 468u)));
    c.budget -= 6;
    { const bool t = c.r[15].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B9104; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B90D8u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 23u, depth + 1u); else { c.pc = 0x001002B0u; return; } if (c.pc != 0x003B90D8u) [[unlikely]] return; }
L_003B90D8:
    st32((c.r[16].w[0] + 468u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[15], 0u - 1u);  if (t) { goto L_003B9108; } }
    set32(c.r[15], 0u + 31u);
    c.budget -= 1;
L_003B90E8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[15], c.r[15].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[15].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B90E8u | kUnwind; return; } goto L_003B90E8; } }
L_003B9104:
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B9108:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[15].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B9170; } }
    set32(c.r[15], 0u + 22u);
    set32(c.r[14], 0u - 1u);
    st32((c.r[4].w[0]), c.r[15].w[0]);
    c.budget -= 3;
L_003B9154:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[14].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9170:
    set32(c.r[5], ld32((c.r[4].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[15], c.r[17].w[0] << 2);  if (t) { goto L_003B9194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9184u);  if (depth < kMaxDepth) unit_00AE(c, 104u, depth + 1u); else { c.pc = 0x003B90B8u; return; } if (c.pc != 0x003B9184u) [[unlikely]] return; }
L_003B9184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[14], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9154u | kUnwind; return; } goto L_003B9154; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 468u)));
    set32(c.r[15], c.r[17].w[0] << 2);
    c.budget -= 2;
L_003B9194:
    set32(c.r[15], c.r[15].w[0] + c.r[5].w[0]);
    set32(c.r[14], ld32((c.r[15].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[15].w[0]), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9154u | kUnwind; return; } goto L_003B9154; } }
    c.budget -= 1;
L_003B91A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[15].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[12], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B9240; } }
    set32(c.r[14], ld32((c.r[4].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[15], c.r[16].w[0] << 2);  if (t) { goto L_003B91F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B91E0u);  if (depth < kMaxDepth) unit_00AE(c, 104u, depth + 1u); else { c.pc = 0x003B90B8u; return; } if (c.pc != 0x003B91E0u) [[unlikely]] return; }
L_003B91E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[12], 0u - 1u);  if (t) { goto L_003B9248; } }
    set32(c.r[14], ld32((c.r[17].w[0] + 468u)));
    set32(c.r[15], c.r[16].w[0] << 2);
    c.budget -= 2;
L_003B91F0:
    set32(c.r[13], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[13].w[0])));
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[15], 0u + 1u);  if (t) { goto L_003B9228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9208u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 119u, depth + 1u); else { c.pc = 0x003B93E8u; return; } if (c.pc != 0x003B9208u) [[unlikely]] return; }
L_003B9208:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B9390; }
L_003B9228:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_003B9248; } }
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    if (c.r[14].d[0] != c.r[15].d[0]) { st32((c.r[13].w[0]), 0u);  goto L_003B9260; }
    set32(c.r[12], 0u + 1u);
    c.budget -= 1;
L_003B9240:
    set32(c.r[15], 0u + 22u);
    st32((c.r[17].w[0]), c.r[15].w[0]);
    c.budget -= 2;
L_003B9248:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[12].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[14].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B9268u) [[unlikely]] return; }
L_003B9268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9248u | kUnwind; return; } goto L_003B9248; } }
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[12], 0u - 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[15].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B92F0; } }
    set32(c.r[14], ld32((c.r[4].w[0] + 468u)));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[15], c.r[16].w[0] << 2);  if (t) { goto L_003B92B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92A8u);  if (depth < kMaxDepth) unit_00AE(c, 104u, depth + 1u); else { c.pc = 0x003B90B8u; return; } if (c.pc != 0x003B92A8u) [[unlikely]] return; }
L_003B92A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[12], 0u - 1u);  if (t) { goto L_003B92F0; } }
    set32(c.r[14], ld32((c.r[17].w[0] + 468u)));
    set32(c.r[15], c.r[16].w[0] << 2);
    c.budget -= 2;
L_003B92B8:
    set32(c.r[13], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[13].w[0])));
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[12], 0u + 1u);  if (t) { goto L_003B92F0; } }
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; set32(c.r[12], 0u + 2u);  if (t) { goto L_003B92F0; } }
    set32(c.r[15], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; set32(c.r[12], 0u + 3u);  if (t) { goto L_003B92F0; } }
    st32((c.r[13].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[14].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B92ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B92ECu) [[unlikely]] return; }
L_003B92EC:
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B92F0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[12].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[15].w[0] + 30960u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B91A8u | kUnwind; return; } goto L_003B91A8; }
L_003B9390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 20784u), 0u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B93B8u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 228u, depth + 1u); else { c.pc = 0x003995F8u; return; } if (c.pc != 0x003B93B8u) [[unlikely]] return; }
L_003B93B8:
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[15].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B93D4; }
    set32(c.r[15], ld32((c.r[16].w[0] + 20784u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[15].w[0]);  goto L_003B93D0; }
L_003B93D0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B93D4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B93E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003995F0u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 227u, depth); }
L_003B9478:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    set32(c.r[14], c.r[5].w[0] - 1u);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[5].d[0] == 0) c.r[14].d[0] = 0ull;
    st32((c.r[29].w[0] + 16u), c.r[13].w[0]);
    set32(c.r[12], ld32((c.r[15].w[0] + 30960u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[14].w[0]);
    set32(c.r[15], 0u + 520u);
    st64((c.r[29].w[0] + 120u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[8].d[0]);
    set32(c.r[6], c.r[29].w[0] + 120u);
    st64((c.r[29].w[0] + 136u), c.r[9].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[11].d[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[29].w[0] + 84u), c.r[12].w[0]);
    st32((c.r[29].w[0]), c.r[13].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B94DCu); st32((c.r[29].w[0] + 8u), c.r[14].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 330u, depth + 1u); else { c.pc = 0x003BB388u; return; } if (c.pc != 0x003B94DCu) [[unlikely]] return; }
L_003B94DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0])));  if (t) { goto L_003B94E8; } }
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003B94E8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003B9568:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[12], ld32((c.r[15].w[0] + 30960u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[13].w[0]);
    st64((c.r[29].w[0] + 112u), c.r[6].d[0]);
    set32(c.r[15], 0u + 520u);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st64((c.r[29].w[0] + 120u), c.r[7].d[0]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st64((c.r[29].w[0] + 128u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 20u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[12].w[0]);
    st32((c.r[29].w[0]), c.r[13].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B95C4u); st32((c.r[29].w[0] + 8u), c.r[14].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 330u, depth + 1u); else { c.pc = 0x003BB388u; return; } if (c.pc != 0x003B95C4u) [[unlikely]] return; }
L_003B95C4:
    set32(c.r[15], ld32((c.r[29].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003B95D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B95E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[15], 0u + 4u);
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 120u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[11].d[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B961Cu); st32((c.r[29].w[0]), c.r[4].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003B961Cu) [[unlikely]] return; }
L_003B961C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[15], c.r[15].w[0] - 27176u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[15].w[0]);
    c.r[4].d[0] = c.r[14].d[0] + 0ull;
    st32((c.r[29].w[0] + 84u), c.r[14].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9658u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 87u, depth + 1u); else { c.pc = 0x003BCC88u; return; } if (c.pc != 0x003B9658u) [[unlikely]] return; }
L_003B9658:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 104u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003B9668:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[15], 0u + 4u);
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[7].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[8].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 152u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[11].d[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B96ACu); st32((c.r[29].w[0] + 16u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003B96ACu) [[unlikely]] return; }
L_003B96AC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[29].w[0] + 84u), c.r[14].w[0]);
    set32(c.r[15], c.r[15].w[0] - 27176u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[15].w[0]);
    set32(c.r[7], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B96E8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 87u, depth + 1u); else { c.pc = 0x003BCC88u; return; } if (c.pc != 0x003B96E8u) [[unlikely]] return; }
L_003B96E8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003B9700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[15].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[15].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9728u); set32(c.r[4], ld32((c.r[4].w[0] + 84u)));  if (depth < kMaxDepth) unit_00AE(c, 87u, depth + 1u); else { c.pc = 0x003B8DA8u; return; } if (c.pc != 0x003B9728u) [[unlikely]] return; }
L_003B9728:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003B9754; }
    set32(c.r[15], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[15], c.r[15].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[15].w[0]);
    c.budget -= 3;
L_003B9744:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9754:
    c.r[15].d[0] = c.r[15].d[0] & 61439ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9744u | kUnwind; return; } goto L_003B9744; } }
L_003B9760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[15].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[15].d[0] = c.r[15].d[0] & 256ull;
    c.budget -= 12;
    { const bool t = c.r[15].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003B97A0; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    set32(c.r[7], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B97A0u); set32(c.r[4], ld32((c.r[4].w[0] + 84u)));  if (depth < kMaxDepth) unit_00AD(c, 357u, depth + 1u); else { c.pc = 0x003B7D48u; return; } if (c.pc != 0x003B97A0u) [[unlikely]] return; }
L_003B97A0:
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].d[0] & 61439ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B97C0u); st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));  if (depth < kMaxDepth) unit_00AF(c, 205u, depth + 1u); else { c.pc = 0x003BDB78u; return; } if (c.pc != 0x003B97C0u) [[unlikely]] return; }
L_003B97C0:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B97E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[15].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[15].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9808u); set32(c.r[4], ld32((c.r[4].w[0] + 84u)));  if (depth < kMaxDepth) unit_00AD(c, 357u, depth + 1u); else { c.pc = 0x003B7D48u; return; } if (c.pc != 0x003B9808u) [[unlikely]] return; }
L_003B9808:
    c.r[14].d[0] = c.r[2].d[0] << 32;
    set32(c.r[15], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[15].d[0]; c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);  if (t) { goto L_003B9834; } }
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[15].d[0] = c.r[15].d[0] & 61439ull;
    c.budget -= 2;
L_003B9820:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9834:
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 80u), c.r[14].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[15].d[0] | 4096ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9820u | kUnwind; return; } goto L_003B9820; } }
    c.budget -= 1;
L_003B9848:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B69A0u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 228u, depth); }
L_003B9868:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[15].w[0] - 31768u);
    c.budget -= 2;
L_003B9870:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[15], c.r[2].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 24));
    set32(c.r[13], c.r[15].w[0] + c.r[8].w[0]);
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[10], c.r[15].w[0] + 32u);  if (t) { goto L_003B9900; } }
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    c.r[13].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[12], c.r[9].w[0] << 24);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 24));
    c.r[13].d[0] = c.r[13].d[0] & 1ull;
    set32(c.r[11], c.r[12].w[0] + c.r[8].w[0]);
    if (c.r[13].d[0] == 0) c.r[10].d[0] = c.r[15].d[0];
    c.r[15].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[14], c.r[12].w[0] + 32u);
    c.r[15].d[0] = c.r[15].d[0] & 1ull;
    if (c.r[15].d[0] == 0) c.r[14].d[0] = c.r[12].d[0];
    c.budget -= 13;
    { const bool t = c.r[10].d[0] == c.r[14].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9870u | kUnwind; return; } goto L_003B9870; } }
L_003B98C0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[13].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[15], c.r[15].w[0] - 31768u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[12], c.r[13].w[0] + c.r[15].w[0]);
    set32(c.r[10], c.r[2].w[0] + 32u);
    set32(c.r[15], c.r[2].w[0] + c.r[15].w[0]);
    set32(c.r[11], c.r[13].w[0] + 32u);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[12].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & 1ull;
    if (c.r[14].d[0] != 0) c.r[2].d[0] = c.r[10].d[0];
    c.r[15].d[0] = c.r[15].d[0] & 1ull;
    if (c.r[15].d[0] != 0) c.r[13].d[0] = c.r[11].d[0];
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - c.r[13].w[0]);  c.pc = t; return; }
L_003B9900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = ld8((c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B98C0u | kUnwind; return; } goto L_003B98C0; } }
L_003B9908:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003B99FC; } }
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[3].d[0] = c.r[3].d[0] | 257ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 257ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 257ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = ld64((c.r[16].w[0]));  if (t) { goto L_003B99B8; } }
    ld128((c.r[16].w[0]) & ~15u, c.r[2]);
    mmi::pcpyld(c.r[7], c.r[3], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[4], c.r[4]);
    mmi::psubb(c.r[3], c.r[2], c.r[7]);
    mmi::pnor(c.r[2], c.r[0], c.r[2]);
    mmi::pand(c.r[3], c.r[3], c.r[2]);
    mmi::pand(c.r[3], c.r[3], c.r[8]);
    mmi::pcpyud(c.r[2], c.r[3], c.r[3]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B99FC; } }
    set32(c.r[6], c.r[4].w[0] + 16u);
    c.budget -= 1;
L_003B998C:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[7]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[8]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B998Cu | kUnwind; return; } goto L_003B998C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B99FC; } }
L_003B99B8:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] - c.r[3].d[0];
    c.r[2].d[0] = ~(0ull | c.r[6].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B99FC; } }
    set32(c.r[6], c.r[16].w[0] + 8u);
    c.budget -= 1;
L_003B99DC:
    c.r[2].d[0] = ld64((c.r[6].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B99DCu | kUnwind; return; } goto L_003B99DC; }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003B99FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B99FCu | kUnwind; return; } goto L_003B99FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B9A20u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x003B9A20u) [[unlikely]] return; }
L_003B9A20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B9A38:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003B9BA8; } }
    c.r[3].d[0] = c.r[5].d[0] << 8;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[10].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.r[2].d[0] = c.r[10].d[0] << 16;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[2].d[0] = c.r[2].d[0] + c.r[10].d[0];
    c.r[10].d[0] = c.r[2].d[0] << 32;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[2].d[0] + c.r[10].d[0];  if (t) { goto L_003B9B20; } }
L_003B9A94:
    ld128((c.r[4].w[0]) & ~15u, c.r[9]);
    mmi::pcpyld(c.r[10], c.r[6], c.r[6]);
    mmi::pnor(c.r[3], c.r[0], c.r[9]);
    mmi::psubb(c.r[2], c.r[9], c.r[10]);
    mmi::pcpyld(c.r[6], c.r[8], c.r[8]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pcpyld(c.r[8], c.r[7], c.r[7]);
    mmi::pand(c.r[2], c.r[2], c.r[6]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[7]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_003B9BAC; }
    mmi::pxor(c.r[2], c.r[9], c.r[8]);
    mmi::psubb(c.r[3], c.r[2], c.r[10]);
    mmi::pnor(c.r[2], c.r[0], c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    mmi::pand(c.r[3], c.r[3], c.r[2]);
    mmi::pand(c.r[3], c.r[3], c.r[6]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    mmi::pcpyud(c.r[2], c.r[3], c.r[5]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 21;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9A94u | kUnwind; return; } goto L_003B9A94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_003B9BAC; } }
L_003B9B20:
    c.r[9].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[9].d[0]);
    c.r[2].d[0] = c.r[9].d[0] - c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_003B9BAC; }
    c.r[2].d[0] = c.r[9].d[0] ^ c.r[7].d[0];
    c.r[3].d[0] = c.r[2].d[0] - c.r[6].d[0];
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_003B9BAC; }
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 2;
L_003B9B60:
    c.r[6].d[0] = ld64((c.r[4].w[0]));
    c.r[2].d[0] = c.r[6].d[0] - c.r[9].d[0];
    c.r[3].d[0] = ~(0ull | c.r[6].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] ^ c.r[7].d[0];  if (t) { goto L_003B9BA8; } }
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[4].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9B60u | kUnwind; return; } goto L_003B9B60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_003B9BAC; } }
L_003B9B9C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[5].d[0]) { c.r[3].d[0] = ld8((c.r[4].w[0]));  goto L_003B9BB8; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003B9BA8:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 1;
L_003B9BAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9B9Cu | kUnwind; return; } goto L_003B9B9C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 1;
L_003B9BB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];  c.pc = t; return; }
L_003B9BC8:
    c.r[8].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[8].d[0] & 7ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_003B9CF8; }
    c.r[9].d[0] = c.r[8].d[0] & 15ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    c.budget -= 15;
    { const bool t = c.r[9].d[0] != 0ull; c.r[2].d[0] = ld64((c.r[5].w[0]));  if (t) { goto L_003B9C8C; } }
    ld128((c.r[4].w[0]) & ~15u, c.r[3]);
    mmi::pcpyld(c.r[8], c.r[7], c.r[7]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    mmi::pcpyld(c.r[10], c.r[6], c.r[6]);
    mmi::psubw(c.r[7], c.r[2], c.r[3]);
    mmi::pcpyud(c.r[6], c.r[7], c.r[4]);
    c.r[3].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_003B9CF8; }
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    c.budget -= 2;
L_003B9C40:
    mmi::psubb(c.r[2], c.r[2], c.r[8]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[10]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[4]);
    c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { goto L_003B9C64; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B9C64:
    set32(c.r[5], c.r[5].w[0] + 16u);
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    mmi::psubw(c.r[7], c.r[2], c.r[3]);
    mmi::pcpyud(c.r[6], c.r[7], c.r[4]);
    c.r[9].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.budget -= 8;
    if (c.r[9].d[0] == 0ull) { mmi::pnor(c.r[3], c.r[0], c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9C40u | kUnwind; return; } goto L_003B9C40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_003B9CF8; } }
L_003B9C8C:
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_003B9CF8; }
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.r[8].d[0] = ~(0ull | c.r[2].d[0]);
    c.budget -= 2;
L_003B9CA0:
    c.r[2].d[0] = c.r[2].d[0] - c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { goto L_003B9CBC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B9CBC:
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[8].d[0] = ~(0ull | c.r[2].d[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9CA0u | kUnwind; return; } goto L_003B9CA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_003B9CF8; } }
L_003B9CD8:
    set32(c.r[2], c.r[3].w[0] << 24);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[4].w[0]));  goto L_003B9D00; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
L_003B9CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9CD8u | kUnwind; return; } goto L_003B9CD8; } }
L_003B9D00:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_003B9D10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9BC8u | kUnwind; return; } goto L_003B9BC8; }
L_003B9D28:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[8].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003B9E18; } }
    c.r[2].d[0] = c.r[8].d[0] & 15ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.budget -= 15;
    if (c.r[2].d[0] != 0ull) { c.r[10].d[0] = ld64((c.r[5].w[0]));  goto L_003B9DD8; }
    mmi::pcpyld(c.r[10], c.r[9], c.r[9]);
    ld128((c.r[5].w[0]) & ~15u, c.r[9]);
    mmi::pcpyld(c.r[8], c.r[4], c.r[4]);
    mmi::psubb(c.r[2], c.r[9], c.r[10]);
    mmi::pnor(c.r[3], c.r[0], c.r[9]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[8]);
    mmi::pcpyud(c.r[4], c.r[2], c.r[9]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003B9E14; } }
L_003B9DA4:
    st128((c.r[6].w[0]) & ~15u, c.r[9]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    ld128((c.r[5].w[0]) & ~15u, c.r[9]);
    mmi::psubb(c.r[2], c.r[9], c.r[10]);
    mmi::pnor(c.r[3], c.r[0], c.r[9]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[8]);
    mmi::pcpyud(c.r[4], c.r[2], c.r[9]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9DA4u | kUnwind; return; } goto L_003B9DA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B9E18; } }
L_003B9DD8:
    c.r[2].d[0] = c.r[10].d[0] - c.r[9].d[0];
    c.r[3].d[0] = ~(0ull | c.r[10].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003B9E14; } }
L_003B9DF0:
    st64((c.r[6].w[0]), c.r[10].d[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[10].d[0] = ld64((c.r[5].w[0]));
    c.r[2].d[0] = ~(0ull | c.r[10].d[0]);
    c.r[3].d[0] = c.r[10].d[0] - c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9DF0u | kUnwind; return; } goto L_003B9DF0; } }
L_003B9E14:
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003B9E18:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9E18u | kUnwind; return; } goto L_003B9E18; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_003B9E40:
    c.r[12].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B9EA4; } }
L_003B9E4C:
    c.r[14].d[0] = ld8((c.r[5].w[0]));
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull; c.r[15].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_003B9E84; } }
    set32(c.r[12], c.r[12].w[0] << 24);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 24));
    c.budget -= 2;
L_003B9E64:
    set32(c.r[15], c.r[15].w[0] << 24);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[15].d[0]; set32(c.r[15], c.r[14].w[0] << 24);  if (t) { goto L_003B9E88; } }
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[14].d[0] = ld8((c.r[13].w[0]));
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; c.r[15].d[0] = c.r[14].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9E64u | kUnwind; return; } goto L_003B9E64; } }
L_003B9E84:
    set32(c.r[15], c.r[14].w[0] << 24);
    c.budget -= 1;
L_003B9E88:
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 24));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_003B9EA4; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[15].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[12].d[0] = c.r[15].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9E4Cu | kUnwind; return; } goto L_003B9E4C; } }
L_003B9EA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_003B9EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[15].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(135ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003BA2D8; } }
    set32(c.r[15], c.r[4].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] - 29296u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[13], ld32((c.r[15].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[13].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00AE[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003B9EDC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[15].w[0] - 31424u);
    c.budget -= 2;
L_003B9EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B9EE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B9EF0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31408u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9EFC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31376u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F08:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31360u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F14:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31336u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F20:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F2C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F38:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31264u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F44:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F50:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31224u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F5C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31208u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F68:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31184u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F74:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31160u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F80:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31136u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F8C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31120u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9F98:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31096u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9FA4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9FB0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31056u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9FBC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31032u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9FC8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9FD4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 31000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9FE0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30984u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9FEC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30960u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003B9FF8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30928u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA004:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30904u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA010:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30880u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA01C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30864u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA028:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30848u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA034:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30824u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA040:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30808u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA04C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30784u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA058:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30768u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA064:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30752u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA070:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30736u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA07C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30712u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA088:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30680u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA094:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30656u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA0A0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30640u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA0AC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30632u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA0B8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30616u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA0C4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30592u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA0D0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30568u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA0DC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30536u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA0E8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA0F4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30496u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA100:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30472u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA10C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30456u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA118:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30440u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA124:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30416u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA130:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30400u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA13C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30376u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA148:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30360u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA154:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA160:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30280u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA16C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30248u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA178:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30184u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA184:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30144u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA190:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30112u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA19C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30096u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA1A8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA1B4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30040u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA1C0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 30016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA1CC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29976u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA1D8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29944u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA1E4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29896u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA1F0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29864u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA1FC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29832u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA208:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29808u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA214:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29768u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA220:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29744u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA22C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29720u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA238:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29680u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA244:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29656u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA250:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29616u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA25C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29592u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA268:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29576u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA274:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29552u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA280:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29520u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA28C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29488u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA298:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29456u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA2A4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29432u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA2B0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29408u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA2BC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29376u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA2C8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29344u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
    c.budget -= 1;
L_003BA2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BA2E0u);  if (depth < kMaxDepth) unit_00AE(c, 312u, depth + 1u); else { c.pc = 0x003BB010u; return; } if (c.pc != 0x003BA2E0u) [[unlikely]] return; }
L_003BA2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE8u | kUnwind; return; } goto L_003B9EE8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE8u | kUnwind; return; } goto L_003B9EE8; } }
L_003BA2F4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[15].w[0] - 29312u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B9EE4u | kUnwind; return; } goto L_003B9EE4; } }
L_003BA300:
    c.r[2].d[0] = c.r[4].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BA414; } }
    c.r[3].d[0] = c.r[4].d[0] & 15ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BA3A4; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    mmi::pcpyld(c.r[8], c.r[2], c.r[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    mmi::psubb(c.r[2], c.r[3], c.r[8]);
    mmi::pnor(c.r[3], c.r[0], c.r[3]);
    mmi::pcpyld(c.r[9], c.r[4], c.r[4]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[9]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[8]);
    c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 17;
    if (c.r[6].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003BA414; }
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 1;
L_003BA378:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[8]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[4], c.r[2], c.r[9]);
    mmi::pcpyud(c.r[3], c.r[4], c.r[6]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA378u | kUnwind; return; } goto L_003BA378; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BA414; } }
L_003BA3A4:
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.r[3].d[0] = ~(0ull | c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_003BA414; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 257ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 7;
L_003BA3F4:
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA3F4u | kUnwind; return; } goto L_003BA3F4; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_003BA414:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA414u | kUnwind; return; } goto L_003BA414; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] - c.r[7].w[0]);  c.pc = t; return; }
L_003BA438:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BA4DC; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[15].w[0] - 31768u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 4;
L_003BA450:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[7].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_003BA508; } }
    c.r[8].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[7].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[10], c.r[8].w[0] << 24);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 24));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 24));
    set32(c.r[15], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[11], c.r[10].w[0] + c.r[3].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[13].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[12], c.r[9].w[0] + 32u);
    c.r[14].d[0] = c.r[14].d[0] & 1ull;
    set32(c.r[15], c.r[10].w[0] + 32u);
    c.r[13].d[0] = c.r[13].d[0] & 1ull;
    if (c.r[14].d[0] == 0) c.r[12].d[0] = c.r[9].d[0];
    if (c.r[13].d[0] == 0) c.r[15].d[0] = c.r[10].d[0];
    c.budget -= 18;
    { const bool t = c.r[12].d[0] == c.r[15].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003BA4E4; } }
L_003BA4A0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003BA4A4:
    c.r[13].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 1;
L_003BA4A8:
    set32(c.r[15], c.r[15].w[0] - 31768u);
    c.budget -= 1;
L_003BA4AC:
    c.r[12].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[11], c.r[13].w[0] + c.r[15].w[0]);
    set32(c.r[9], c.r[12].w[0] + 32u);
    set32(c.r[15], c.r[12].w[0] + c.r[15].w[0]);
    set32(c.r[10], c.r[13].w[0] + 32u);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[11].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & 1ull;
    if (c.r[14].d[0] != 0) c.r[12].d[0] = c.r[9].d[0];
    c.r[15].d[0] = c.r[15].d[0] & 1ull;
    if (c.r[15].d[0] != 0) c.r[13].d[0] = c.r[10].d[0];
    set32(c.r[2], c.r[12].w[0] - c.r[13].w[0]);
    c.budget -= 12;
L_003BA4DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BA4E4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA4A4u | kUnwind; return; } goto L_003BA4A4; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[13].d[0] = c.r[8].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA4A8u | kUnwind; return; } goto L_003BA4A8; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[15], c.r[15].w[0] - 31768u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA4ACu | kUnwind; return; } goto L_003BA4AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA450u | kUnwind; return; } goto L_003BA450; } }
    c.budget -= 1;
L_003BA508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = ld8((c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA4A0u | kUnwind; return; } goto L_003BA4A0; } }
L_003BA510:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[8].d[0] & 7ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_003BA62C; }
    c.r[3].d[0] = c.r[8].d[0] & 15ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[8].w[0]));  goto L_003BA5BC; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    ld128((c.r[8].w[0]) & ~15u, c.r[2]);
    mmi::pcpyld(c.r[9], c.r[7], c.r[7]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    mmi::psubb(c.r[3], c.r[2], c.r[9]);
    mmi::pnor(c.r[2], c.r[0], c.r[2]);
    mmi::pcpyld(c.r[10], c.r[4], c.r[4]);
    mmi::pand(c.r[3], c.r[3], c.r[2]);
    mmi::pand(c.r[3], c.r[3], c.r[10]);
    mmi::pcpyud(c.r[2], c.r[3], c.r[4]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003BA624; } }
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 2;
L_003BA590:
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[9]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[10]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA590u | kUnwind; return; } goto L_003BA590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 16u);  if (t) { goto L_003BA624; } }
L_003BA5BC:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32896ull;
    c.r[3].d[0] = c.r[2].d[0] - c.r[9].d[0];
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003BA624; } }
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 1;
L_003BA608:
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA608u | kUnwind; return; } goto L_003BA608; }
L_003BA624:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 2;
L_003BA62C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_003BA654; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003BA638:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA638u | kUnwind; return; } goto L_003BA638; }
L_003BA654:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_003BA6B4; } }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_003BA6B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 3;
L_003BA688:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  goto L_003BA690; }
L_003BA690:
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_003BA6B4; } }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA688u | kUnwind; return; } goto L_003BA688; } }
L_003BA6B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; return; }
L_003BA6C0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] | c.r[5].d[0];  if (t) { goto L_003BA6D0; } }
L_003BA6C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003BA6D0:
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BA82C; } }
    c.r[2].d[0] = c.r[3].d[0] & 15ull;
    c.r[7].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BA7A8; } }
    ld128((c.r[4].w[0]) & ~15u, c.r[3]);
    mmi::pcpyld(c.r[10], c.r[9], c.r[9]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32896ull;
    mmi::psubw(c.r[3], c.r[3], c.r[2]);
    mmi::pcpyld(c.r[9], c.r[8], c.r[8]);
    mmi::pcpyud(c.r[2], c.r[3], c.r[4]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BA82C; } }
    set32(c.r[6], c.r[6].w[0] - 16u);
    c.budget -= 1;
L_003BA74C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA6C8u | kUnwind; return; } goto L_003BA6C8; } }
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[10]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[3], c.r[2], c.r[9]);
    mmi::pcpyud(c.r[2], c.r[3], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA6C8u | kUnwind; return; } goto L_003BA6C8; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 16u);  if (t) { goto L_003BA820; } }
    ld128((c.r[8].w[0]) & ~15u, c.r[2]);
    mmi::psubw(c.r[3], c.r[3], c.r[2]);
    mmi::pcpyud(c.r[2], c.r[3], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] - 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA74Cu | kUnwind; return; } goto L_003BA74C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BA824; } }
L_003BA7A8:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BA820; } }
    c.r[3].d[0] = ld64((c.r[4].w[0]));
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BA82C; } }
    set32(c.r[6], c.r[6].w[0] - 8u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.budget -= 7;
L_003BA7E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA6C8u | kUnwind; return; } goto L_003BA6C8; } }
    c.r[2].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA6C8u | kUnwind; return; } goto L_003BA6C8; } }
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { goto L_003BA820; } }
    c.r[3].d[0] = ld64((c.r[7].w[0]));
    c.r[2].d[0] = ld64((c.r[8].w[0]));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA7E0u | kUnwind; return; } goto L_003BA7E0; }
L_003BA820:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003BA824:
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_003BA82C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_003BA868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_003BA85C; } }
    c.budget -= 1;
L_003BA840:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA6C8u | kUnwind; return; } goto L_003BA6C8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA6C8u | kUnwind; return; } goto L_003BA6C8; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 3;
L_003BA85C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = ld8((c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA840u | kUnwind; return; } goto L_003BA840; } }
L_003BA868:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  c.pc = t; return; }
L_003BA878:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[10], 0u + 16u);
    c.r[2].d[0] = c.r[7].d[0] & 7ull;
    set32(c.r[9], 0u + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[7].d[0] & 15ull;  if (t) { goto L_003BA9E0; } }
    if (c.r[2].d[0] == 0) c.r[9].d[0] = c.r[10].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] < c.r[9].d[0] ? 1ull : 0ull;  if (t) { goto L_003BA94C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BA9E0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 257ull;
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    mmi::pcpyld(c.r[9], c.r[7], c.r[7]);
    mmi::pnor(c.r[3], c.r[0], c.r[3]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[7].d[0] = c.r[7].d[0] | 32896ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 32896ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 32896ull;
    mmi::psubb(c.r[2], c.r[3], c.r[9]);
    mmi::pcpyld(c.r[10], c.r[7], c.r[7]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[10]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[4]);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003BA9DC; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { goto L_003BA9DC; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[9]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[10]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[5].w[0]) & ~15u, c.r[3]);  goto L_003BA9A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003BA9E0; } }
L_003BA94C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003BA9E0; } }
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 257ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] | 32896ull;
    c.r[2].d[0] = c.r[3].d[0] - c.r[9].d[0];
    c.r[3].d[0] = ~(0ull | c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003BA9DC; } }
    c.r[3].d[0] = ld64((c.r[5].w[0]));
    c.budget -= 2;
L_003BA9A8:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    st64((c.r[7].w[0]), c.r[3].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { goto L_003BA9DC; } }
    c.r[2].d[0] = ld64((c.r[5].w[0]));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] - c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA9A8u | kUnwind; return; } goto L_003BA9A8; }
L_003BA9DC:
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003BA9E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003BAA2C; } }
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BA9E0u | kUnwind; return; } goto L_003BA9E0; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_003BAA2C; } }
L_003BAA10:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAA10u | kUnwind; return; } goto L_003BAA10; } }
L_003BAA2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[8].d[0] + 0ull;  c.pc = t; return; }
L_003BAA38:
    c.r[13].d[0] = ld8((c.r[4].w[0]));
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[13].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003BAAA8; } }
L_003BAA48:
    c.r[14].d[0] = ld8((c.r[12].w[0]));
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull; c.r[15].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_003BAA80; } }
    set32(c.r[13], c.r[13].w[0] << 24);
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 24));
    c.budget -= 2;
L_003BAA60:
    set32(c.r[15], c.r[15].w[0] << 24);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[13].d[0] == c.r[15].d[0]) { set32(c.r[2], c.r[14].w[0] << 24);  goto L_003BAA84; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[14].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; c.r[15].d[0] = c.r[14].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAA60u | kUnwind; return; } goto L_003BAA60; } }
L_003BAA80:
    set32(c.r[2], c.r[14].w[0] << 24);
    c.budget -= 1;
L_003BAA84:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;  goto L_003BAAA4; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[15].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[13].d[0] = c.r[15].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAA48u | kUnwind; return; } goto L_003BAA48; } }
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    c.budget -= 1;
L_003BAAA4:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003BAAA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BAAB0:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BAAC8; } }
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; if (c.r[15].d[0] != 0) c.r[2].d[0] = 0ull;  c.pc = t; return; }
L_003BAAC8:
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BAACC:
    set32(c.r[15], c.r[5].w[0] + c.r[12].w[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0])));
    c.budget -= 4;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[14], c.r[2].w[0] + c.r[12].w[0]);  if (t) { goto L_003BAAFC; } }
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0])));
    c.budget -= 3;
    { const bool t = c.r[13].d[0] == c.r[15].d[0]; set32(c.r[12], c.r[12].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAACCu | kUnwind; return; } goto L_003BAACC; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { c.r[12].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAACCu | kUnwind; return; } goto L_003BAACC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003BAAFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003BAB08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[13], c.r[15].w[0] - 31768u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 19;
L_003BAB54:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[14], c.r[16].w[0] + c.r[13].w[0]);
    c.r[15].d[0] = ld8((c.r[14].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAB54u | kUnwind; return; } goto L_003BAB54; } }
    set32(c.r[15], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; set32(c.r[15], 0u + 43u);  if (t) { goto L_003BAD38; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[14], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[14].w[0]);
    c.budget -= 3;
L_003BAB88:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003BAB8C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[15], 0u + 16u);  if (t) { goto L_003BAB9C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[15].d[0];  if (t) { goto L_003BABC8; } }
L_003BAB9C:
    set32(c.r[15], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; set32(c.r[15], 0u + 120u);  if (t) { goto L_003BABC8; } }
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; set32(c.r[15], 0u + 88u);  if (t) { goto L_003BABBC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != c.r[15].d[0];  if (t) { goto L_003BABC8; } }
L_003BABBC:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[19], 0u + 16u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 3;
L_003BABC8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[14], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003BABE4; } }
    set32(c.r[19], 0u + 8u);
    c.r[14].d[0] = c.r[16].d[0] ^ 48ull;
    set32(c.r[15], 0u + 10u);
    if (c.r[14].d[0] != 0) c.r[19].d[0] = c.r[15].d[0];
    set32(c.r[14], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
L_003BABE4:
    set32(c.r[18], 0u - 1u);
    set32(c.r[15], 0u - 2u);
    c.r[18].d[0] = c.r[18].d[0] << 63;
    c.r[15].d[0] = c.r[15].d[0] >> 1;
    c.r[21].d[0] = c.r[19].d[0] + 0ull;
    if (c.r[14].d[0] == 0) c.r[18].d[0] = c.r[15].d[0];
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAC0Cu); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 28u, depth + 1u); else { c.pc = 0x003B12A0u; return; } if (c.pc != 0x003BAC0Cu) [[unlikely]] return; }
L_003BAC0C:
    c.r[30].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAC20u); c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x003BAC20u) [[unlikely]] return; }
L_003BAC20:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[15].w[0] - 31768u);
    c.budget -= 4;
L_003BAC30:
    set32(c.r[15], c.r[16].w[0] + c.r[22].w[0]);
    c.r[13].d[0] = ld8((c.r[15].w[0]));
    c.r[14].d[0] = c.r[13].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull; c.r[15].d[0] = c.r[13].d[0] & 3ull;  if (t) { goto L_003BAD1C; } }
    set32(c.r[16], c.r[16].w[0] - 48u);
    c.budget -= 1;
L_003BAC48:
    c.r[15].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003BAC9C; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.r[15].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003BAC78; } }
    c.budget -= 2;
    if (c.r[15].d[0] != 0ull) { set32(c.r[20], 0u - 1u);  goto L_003BAC7C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BAC88; } }
    c.r[15].d[0] = c.r[30].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003BAC88; } }
L_003BAC78:
    set32(c.r[20], 0u - 1u);
    c.budget -= 1;
L_003BAC7C:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAC30u | kUnwind; return; } goto L_003BAC30; } }
L_003BAC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAC90u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 435u, depth + 1u); else { c.pc = 0x003AF7B8u; return; } if (c.pc != 0x003BAC90u) [[unlikely]] return; }
L_003BAC90:
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAC7Cu | kUnwind; return; } goto L_003BAC7C; } }
L_003BAC9C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; set32(c.r[14], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003BAD10; } }
    set32(c.r[14], ld32((c.r[29].w[0])));
    set32(c.r[15], 0u + 34u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[14].w[0]), c.r[15].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 63;
    set32(c.r[15], 0u - 2u);
    set32(c.r[14], ld32((c.r[29].w[0] + 8u)));
    c.r[15].d[0] = c.r[15].d[0] >> 1;
    if (c.r[14].d[0] == 0) c.r[2].d[0] = c.r[15].d[0];
    c.budget -= 9;
L_003BACC8:
    set32(c.r[15], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], c.r[17].w[0] - 1u);  if (t) { goto L_003BACE0; } }
    set32(c.r[14], ld32((c.r[29].w[0] + 4u)));
    if (c.r[20].d[0] != 0) c.r[23].d[0] = c.r[15].d[0];
    st32((c.r[14].w[0]), c.r[23].w[0]);
    c.budget -= 3;
L_003BACE0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BAD10:
    c.r[15].d[0] = 0ull - c.r[2].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[14].d[0] != 0) c.r[2].d[0] = c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BACC8u | kUnwind; return; } goto L_003BACC8; } }
L_003BAD1C:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], c.r[16].w[0] - 87u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAC9Cu | kUnwind; return; } goto L_003BAC9C; } }
    set32(c.r[15], c.r[16].w[0] - 55u);
    c.r[13].d[0] = c.r[13].d[0] & 1ull;
    c.r[16].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[13].d[0] == 0) c.r[16].d[0] = c.r[14].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAC48u | kUnwind; return; } goto L_003BAC48; } }
L_003BAD38:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAB8Cu | kUnwind; return; } goto L_003BAB8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAB88u | kUnwind; return; } goto L_003BAB88; } }
L_003BAD48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[15].w[0] + 30960u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[14].d[0] + 0ull;
    c.r[6].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAB08u | kUnwind; return; } goto L_003BAB08; }
L_003BAD78:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    set32(c.r[13], c.r[15].w[0] - 31768u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 19;
L_003BADC4:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[14], c.r[16].w[0] + c.r[13].w[0]);
    c.r[15].d[0] = ld8((c.r[14].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BADC4u | kUnwind; return; } goto L_003BADC4; } }
    set32(c.r[15], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; set32(c.r[15], 0u + 43u);  if (t) { goto L_003BAF7C; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[14], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[14].w[0]);
    c.budget -= 3;
L_003BADF8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003BADFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[15], 0u + 16u);  if (t) { goto L_003BAE0C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[15].d[0];  if (t) { goto L_003BAE38; } }
L_003BAE0C:
    set32(c.r[15], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; set32(c.r[15], 0u + 120u);  if (t) { goto L_003BAE38; } }
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; set32(c.r[15], 0u + 88u);  if (t) { goto L_003BAE2C; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] != c.r[15].d[0];  if (t) { goto L_003BAE38; } }
L_003BAE2C:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[18], 0u + 16u);
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 3;
L_003BAE38:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[21].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003BAE54; } }
    set32(c.r[18], 0u + 8u);
    c.r[14].d[0] = c.r[16].d[0] ^ 48ull;
    set32(c.r[15], 0u + 10u);
    if (c.r[14].d[0] != 0) c.r[18].d[0] = c.r[15].d[0];
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_003BAE54:
    set32(c.r[4], 0u - 1u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE64u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x003BAE64u) [[unlikely]] return; }
L_003BAE64:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAE74u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 28u, depth + 1u); else { c.pc = 0x003B12A0u; return; } if (c.pc != 0x003BAE74u) [[unlikely]] return; }
L_003BAE74:
    c.r[30].d[0] = c.r[2].d[0] << 32;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 32);
    set32(c.r[22], c.r[15].w[0] - 31768u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_003BAE88:
    set32(c.r[15], c.r[16].w[0] + c.r[22].w[0]);
    c.r[13].d[0] = ld8((c.r[15].w[0]));
    c.r[14].d[0] = c.r[13].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[14].d[0] == 0ull; c.r[15].d[0] = c.r[13].d[0] & 3ull;  if (t) { goto L_003BAF60; } }
    set32(c.r[16], c.r[16].w[0] - 48u);
    c.budget -= 1;
L_003BAEA0:
    c.r[15].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003BAEF4; } }
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0; c.r[15].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003BAED0; } }
    c.budget -= 2;
    if (c.r[15].d[0] != 0ull) { set32(c.r[19], 0u - 1u);  goto L_003BAED4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003BAEE0; } }
    c.r[15].d[0] = c.r[30].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003BAEE0; } }
L_003BAED0:
    set32(c.r[19], 0u - 1u);
    c.budget -= 1;
L_003BAED4:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAE88u | kUnwind; return; } goto L_003BAE88; } }
L_003BAEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BAEE8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 435u, depth + 1u); else { c.pc = 0x003AF7B8u; return; } if (c.pc != 0x003BAEE8u) [[unlikely]] return; }
L_003BAEE8:
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAED4u | kUnwind; return; } goto L_003BAED4; } }
L_003BAEF4:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0; set32(c.r[14], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003BAF54; } }
    set32(c.r[14], ld32((c.r[29].w[0])));
    set32(c.r[15], 0u + 34u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[14].w[0]), c.r[15].w[0]);
    c.budget -= 4;
L_003BAF0C:
    set32(c.r[15], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], c.r[17].w[0] - 1u);  if (t) { goto L_003BAF24; } }
    set32(c.r[14], ld32((c.r[29].w[0] + 4u)));
    if (c.r[19].d[0] != 0) c.r[23].d[0] = c.r[15].d[0];
    st32((c.r[14].w[0]), c.r[23].w[0]);
    c.budget -= 3;
L_003BAF24:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003BAF54:
    c.r[15].d[0] = 0ull - c.r[2].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; if (c.r[14].d[0] != 0) c.r[2].d[0] = c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAF0Cu | kUnwind; return; } goto L_003BAF0C; } }
L_003BAF60:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], c.r[16].w[0] - 87u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAEF4u | kUnwind; return; } goto L_003BAEF4; } }
    set32(c.r[15], c.r[16].w[0] - 55u);
    c.r[13].d[0] = c.r[13].d[0] & 1ull;
    c.r[16].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[13].d[0] == 0) c.r[16].d[0] = c.r[14].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAEA0u | kUnwind; return; } goto L_003BAEA0; } }
L_003BAF7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BADFCu | kUnwind; return; } goto L_003BADFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BADF8u | kUnwind; return; } goto L_003BADF8; } }
    c.budget -= 1;
L_003BAF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[14].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[15].w[0] + 30960u)));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[14].d[0] + 0ull;
    c.r[6].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BAD78u | kUnwind; return; } goto L_003BAD78; }
L_003BAFC0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[13], c.r[4].w[0] + 32u);
    set32(c.r[15], c.r[15].w[0] - 31768u);
    set32(c.r[15], c.r[4].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & 1ull;
    if (c.r[14].d[0] != 0) c.r[4].d[0] = c.r[13].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003BAFE8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[13], c.r[4].w[0] - 32u);
    set32(c.r[15], c.r[15].w[0] - 31768u);
    set32(c.r[15], c.r[4].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & 2ull;
    if (c.r[14].d[0] != 0) c.r[4].d[0] = c.r[13].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003BB010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003BB018:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[15], c.r[4].w[0] + 64u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[15].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BB0B4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB050u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0000(c, 23u, depth + 1u); else { c.pc = 0x001002B0u; return; } if (c.pc != 0x003BB050u) [[unlikely]] return; }
L_003BB050:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003BB094; } }
    st32((c.r[18].w[0] + 48u), c.r[17].w[0]);
    set32(c.r[15], 0u + 1024u);
    st32((c.r[18].w[0] + 52u), c.r[15].w[0]);
    set32(c.r[19], 0u + 2u);
    set32(c.r[17], c.r[17].w[0] + 1021u);
    c.budget -= 5;
L_003BB070:
    set32(c.r[15], c.r[19].w[0] + c.r[18].w[0]);
    set32(c.r[13], c.r[17].w[0] + c.r[19].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0] + 64u));
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[19].sd[0] >= 0; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB070u | kUnwind; return; } goto L_003BB070; } }
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BB094:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003BB0B4:
    set32(c.r[19], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[20], c.r[19].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB0C8u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 21u, depth + 1u); else { c.pc = 0x00100290u; return; } if (c.pc != 0x003BB0C8u) [[unlikely]] return; }
L_003BB0C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB094u | kUnwind; return; } goto L_003BB094; } }
    set32(c.r[16], c.r[17].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB0E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003BB0E8u) [[unlikely]] return; }
L_003BB0E8:
    st32((c.r[18].w[0] + 52u), c.r[20].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 48u), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB094u | kUnwind; return; } goto L_003BB094; } }
    c.budget -= 1;
L_003BB100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[10], 0u - 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[15], 0u - 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[15].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003BB200; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[15], ld32((c.r[4].w[0] + 56u)));  goto L_003BB144; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    st32((c.r[5].w[0] + 84u), c.r[14].w[0]);
    c.r[4].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[15], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
L_003BB144:
    c.budget -= 2;
    if (c.r[15].d[0] != 0ull) { c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003BB158; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB154u);  if (depth < kMaxDepth) unit_00AD(c, 259u, depth + 1u); else { c.pc = 0x003B6E80u; return; } if (c.pc != 0x003BB154u) [[unlikely]] return; }
L_003BB154:
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003BB158:
    c.r[14].d[0] = c.r[15].d[0] & 65503ull;
    c.r[15].d[0] = c.r[14].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[14].w[0]));  if (t) { goto L_003BB1B0; } }
    c.r[15].d[0] = c.r[14].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[10], 0u - 1u);  if (t) { goto L_003BB200; } }
    c.r[15].d[0] = c.r[14].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003BB1A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB188u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003BB188u) [[unlikely]] return; }
L_003BB188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], 0u - 1u);  if (t) { goto L_003BB200; } }
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[15].d[0] = c.r[15].d[0] & 65527ull;
    st32((c.r[16].w[0] + 24u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 6;
L_003BB1A8:
    c.r[15].d[0] = c.r[15].d[0] | 4ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.budget -= 2;
L_003BB1B0:
    set32(c.r[15], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[17].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_003BB218; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[14], ld32((c.r[16].w[0] + 52u)));
    c.r[15].d[0] = c.r[15].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[15].d[0] != 0ull) { set32(c.r[14], ld32((c.r[16].w[0])));  goto L_003BB1E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB1D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 313u, depth + 1u); else { c.pc = 0x003BB018u; return; } if (c.pc != 0x003BB1D8u) [[unlikely]] return; }
L_003BB1D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[10], 0u - 1u);  if (t) { goto L_003BB200; } }
    set32(c.r[14], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003BB1E4:
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[15], c.r[14].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[15].w[0]);
    st8((c.r[14].w[0] - 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[15], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[15].w[0]);
    c.budget -= 7;
L_003BB200:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003BB218:
    set32(c.r[15], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[11], ld32((c.r[16].w[0])));  if (t) { goto L_003BB258; } }
    c.r[15].d[0] = c.r[15].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_003BB25C; } }
    c.r[15].d[0] = ld8((c.r[11].w[0] - 1u));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != c.r[17].d[0];  if (t) { goto L_003BB25C; } }
    set32(c.r[15], c.r[11].w[0] - 1u);
    st32((c.r[16].w[0]), c.r[15].w[0]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB200u | kUnwind; return; } goto L_003BB200; } }
    c.budget -= 1;
L_003BB258:
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003BB25C:
    set32(c.r[15], 0u + 1u);
    set32(c.r[13], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 56u), c.r[11].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[15].w[0]);
    set32(c.r[12], c.r[16].w[0] + 66u);
    st32((c.r[16].w[0] + 60u), c.r[14].w[0]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[15], 0u + 3u);
    st32((c.r[16].w[0] + 48u), c.r[13].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[15].w[0]);
    st32((c.r[16].w[0]), c.r[12].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB200u | kUnwind; return; } goto L_003BB200; } }
L_003BB290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[15], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[15].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BB2C0; } }
    st32((c.r[5].w[0] + 4u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003BB2B0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003BB2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB2C8u);  if (depth < kMaxDepth) unit_00AD(c, 311u, depth + 1u); else { c.pc = 0x003B7710u; return; } if (c.pc != 0x003BB2C8u) [[unlikely]] return; }
L_003BB2C8:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB2B0u | kUnwind; return; } goto L_003BB2B0; } }
    c.budget -= 1;
L_003BB2D8:
    set32(c.r[29], c.r[29].w[0] - 1152u);
    set32(c.r[10], 0u + 1024u);
    st64((c.r[29].w[0] + 1120u), c.r[16].d[0]);
    set32(c.r[9], c.r[29].w[0] + 96u);
    st64((c.r[29].w[0] + 1128u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 1136u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[9].w[0]);
    c.r[15].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[12], ld32((c.r[4].w[0] + 84u)));
    c.r[11].d[0] = ld16((c.r[16].w[0] + 14u));
    c.r[15].d[0] = c.r[15].d[0] & 65533ull;
    set32(c.r[14], ld32((c.r[16].w[0] + 28u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[13], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[29].w[0] + 84u), c.r[12].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[29].w[0] + 14u), static_cast<std::uint16_t>(c.r[11].w[0]));
    st32((c.r[29].w[0] + 28u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[10].w[0]);
    st32((c.r[29].w[0]), c.r[9].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[10].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB33Cu); st32((c.r[29].w[0] + 24u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 330u, depth + 1u); else { c.pc = 0x003BB388u; return; } if (c.pc != 0x003BB33Cu) [[unlikely]] return; }
L_003BB33C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003BB358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB350u);  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003BB350u) [[unlikely]] return; }
L_003BB350:
    set32(c.r[15], 0u - 1u);
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[15].d[0];
    c.budget -= 2;
L_003BB358:
    c.r[15].d[0] = ld16((c.r[29].w[0] + 12u));
    c.r[15].d[0] = c.r[15].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003BB374; } }
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[15].d[0] = c.r[15].d[0] | 64ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.budget -= 3;
L_003BB374:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 1120u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 1128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1136u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1152u);  c.pc = t; return; }
L_003BB388:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003BB3C0; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    st32((c.r[16].w[0] + 84u), c.r[14].w[0]);
    c.r[4].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 4;
L_003BB3C0:
    set32(c.r[15], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  goto L_003BB3D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB3D4u);  if (depth < kMaxDepth) unit_00AD(c, 259u, depth + 1u); else { c.pc = 0x003B6E80u; return; } if (c.pc != 0x003BB3D4u) [[unlikely]] return; }
L_003BB3D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_003BB3D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003BB400; }
L_003BB400:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 560u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 568u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 576u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 584u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 592u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 600u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 616u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 624u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 632u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 500u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[4].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB440u); st32((c.r[29].w[0] + 504u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 356u, depth + 1u); else { c.pc = 0x003B7D28u; return; } if (c.pc != 0x003BB440u) [[unlikely]] return; }
L_003BB440:
    set32(c.r[13], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[14].d[0] = ld16((c.r[13].w[0] + 12u));
    st64((c.r[29].w[0] + 528u), 0ull);
    st32((c.r[29].w[0] + 536u), 0u);
    c.r[15].d[0] = c.r[14].d[0] & 8ull;
    st32((c.r[29].w[0] + 520u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 544u), 0u);
    c.budget -= 10;
    { const bool t = c.r[15].d[0] == 0ull; st32((c.r[29].w[0] + 484u), 0u);  if (t) { goto L_003BB474; } }
    set32(c.r[15], ld32((c.r[13].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[14].d[0] = c.r[14].d[0] & 26ull;  if (t) { goto L_003BB490; } }
L_003BB474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB47Cu); set32(c.r[4], ld32((c.r[29].w[0] + 500u)));  if (depth < kMaxDepth) unit_00AF(c, 207u, depth + 1u); else { c.pc = 0x003BDBD8u; return; } if (c.pc != 0x003BB47Cu) [[unlikely]] return; }
L_003BB47C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[14], 0u - 1u);  if (t) { goto L_003BB4BC; } }
    set32(c.r[15], ld32((c.r[29].w[0] + 500u)));
    c.r[14].d[0] = ld16((c.r[15].w[0] + 12u));
    c.r[14].d[0] = c.r[14].d[0] & 26ull;
    c.budget -= 3;
L_003BB490:
    set32(c.r[15], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[14].d[0] != c.r[15].d[0]; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { goto L_003BB4F0; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 500u)));
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 14u)));
    c.budget -= 4;
    { const bool t = c.r[15].sd[0] < 0; set32(c.r[4], ld32((c.r[29].w[0] + 500u)));  if (t) { goto L_003BB4F0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB4B8u); set32(c.r[6], ld32((c.r[29].w[0] + 504u)));  if (depth < kMaxDepth) unit_00AE(c, 327u, depth + 1u); else { c.pc = 0x003BB2D8u; return; } if (c.pc != 0x003BB4B8u) [[unlikely]] return; }
L_003BB4B8:
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BB4BC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 560u));
    c.r[2].d[0] = c.r[14].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 568u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 576u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 584u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 592u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 600u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 608u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 616u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 632u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_003BB4F0:
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 32u), c.r[20].w[0]);
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 512u), 0u);
    c.budget -= 5;
L_003BB504:
    c.r[22].d[0] = c.r[21].d[0] + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[17], 0u + 37u);
    c.budget -= 4;
L_003BB514:
    set32(c.r[4], ld32((c.r[19].w[0] + 30960u)));
    set32(c.r[5], c.r[29].w[0] + 480u);
    set32(c.r[7], ld32((c.r[18].w[0] + 30968u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB52Cu); set32(c.r[8], c.r[29].w[0] + 484u);  if (depth < kMaxDepth) unit_00AD(c, 367u, depth + 1u); else { c.pc = 0x003B7EF0u; return; } if (c.pc != 0x003BB52Cu) [[unlikely]] return; }
L_003BB52C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00AF(c, 73u, depth); } }
L_003BB534:
    set32(c.r[17], c.r[21].w[0] - c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003BB58C; } }
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[20].w[0]), c.r[22].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BB580; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB578u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BB578u) [[unlikely]] return; }
L_003BB578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { goto L_003BB8F4; } }
L_003BB580:
    set32(c.r[14], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[14], c.r[14].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 512u), c.r[14].w[0]);
    c.budget -= 3;
L_003BB58C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { [[clang::musttail]] return unit_00AF(c, 70u, depth); } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 508u), 0u);
    st32((c.r[29].w[0] + 540u), 0u);
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    st32((c.r[29].w[0] + 516u), 0u);
    c.budget -= 5;
L_003BB5A8:
    set32(c.r[17], 0u - 1u);
    c.budget -= 1;
L_003BB5AC:
    set32(c.r[19], c.r[6].w[0] << 24);
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 24));
    c.budget -= 3;
L_003BB5B8:
    set32(c.r[14], c.r[19].w[0] - 32u);
    c.r[15].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(89ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], c.r[14].w[0] << 2);  if (t) { [[clang::musttail]] return unit_00AF(c, 69u, depth); } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[14], c.r[14].w[0] - 28600u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[13], ld32((c.r[15].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[13].w[0];  c.pc = t; if (t - 0x003B8000u < 16384u) { entry = entries_00AE[(t - 0x003B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003BB5E0:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], 0u + 32u);  if (t) { goto L_003BB5F4; } }
L_003BB5EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[21].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5ACu | kUnwind; return; } goto L_003BB5AC; } }
L_003BB5F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5ECu | kUnwind; return; } goto L_003BB5EC; } }
L_003BB5FC:
    set32(c.r[15], ld32((c.r[29].w[0] + 508u)));
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    c.r[15].d[0] = c.r[15].d[0] | 1ull;
    c.budget -= 3;
L_003BB608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 508u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5ACu | kUnwind; return; } goto L_003BB5AC; } }
L_003BB610:
    set32(c.r[15], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[13], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[13], c.r[13].w[0] + 8u);
    st32((c.r[29].w[0] + 516u), c.r[15].w[0]);
    c.budget -= 7;
    { const bool t = c.r[15].sd[0] >= 0; st32((c.r[29].w[0] + 504u), c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5ECu | kUnwind; return; } goto L_003BB5EC; } }
    set32(c.r[15], 0u - c.r[15].w[0]);
    st32((c.r[29].w[0] + 516u), c.r[15].w[0]);
    c.budget -= 2;
L_003BB634:
    set32(c.r[14], ld32((c.r[29].w[0] + 508u)));
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    c.r[14].d[0] = c.r[14].d[0] | 4ull;
    c.budget -= 3;
L_003BB640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 508u), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5ACu | kUnwind; return; } goto L_003BB5AC; } }
L_003BB648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[14], 0u + 43u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5F4u | kUnwind; return; } goto L_003BB5F4; } }
L_003BB650:
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[15], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[15].d[0]; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003BB688; } }
    set32(c.r[15], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[16], ld32((c.r[15].w[0])));
    set32(c.r[15], c.r[15].w[0] + 8u);
    st32((c.r[29].w[0] + 504u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[16].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5ECu | kUnwind; return; } goto L_003BB5EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[21].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5A8u | kUnwind; return; } goto L_003BB5A8; } }
    c.budget -= 1;
L_003BB688:
    set32(c.r[15], c.r[19].w[0] - 48u);
    c.r[15].d[0] = c.r[15].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003BB6BC; } }
    set32(c.r[13], 0u + 10u);
    c.budget -= 1;
L_003BB69C:
    mmi::mult(c, 0, c.r[16].w[0], c.r[13].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    set32(c.r[15], c.r[15].w[0] + c.r[19].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[16], c.r[15].w[0] - 48u);
    set32(c.r[14], c.r[19].w[0] - 48u);
    c.r[14].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB69Cu | kUnwind; return; } goto L_003BB69C; } }
L_003BB6BC:
    c.r[15].d[0] = c.r[16].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5B8u | kUnwind; return; } goto L_003BB5B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5B8u | kUnwind; return; } goto L_003BB5B8; } }
L_003BB6D0:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[6].d[0] = ld8((c.r[21].w[0]));
    c.r[13].d[0] = c.r[13].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 508u), c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5ACu | kUnwind; return; } goto L_003BB5AC; } }
L_003BB6E4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 10u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[14].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.budget -= 3;
L_003BB6F0:
    set32(c.r[15], c.r[15].w[0] + c.r[19].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[16], c.r[15].w[0] - 48u);
    set32(c.r[15], c.r[19].w[0] - 48u);
    st32((c.r[29].w[0] + 516u), c.r[16].w[0]);
    c.r[15].d[0] = c.r[15].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB5B8u | kUnwind; return; } goto L_003BB5B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[16].w[0], c.r[14].w[0]); c.r[15].d[0] = c.lo.d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB6F0u | kUnwind; return; } goto L_003BB6F0; } }
L_003BB718:
    set32(c.r[14], ld32((c.r[29].w[0] + 508u)));
    c.r[14].d[0] = c.r[14].d[0] | 16ull;
    st32((c.r[29].w[0] + 508u), c.r[14].w[0]);
    c.budget -= 3;
L_003BB724:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 504u)));  if (t) { [[clang::musttail]] return unit_00AF(c, 32u, depth); } }
    c.r[2].d[0] = ld64((c.r[15].w[0]));
    c.budget -= 1;
L_003BB738:
    set32(c.r[14], c.r[15].w[0] + 8u);
    st32((c.r[29].w[0] + 504u), c.r[14].w[0]);
    c.budget -= 2;
L_003BB740:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[14], 0u + 1u);  if (t) { goto L_003BB758; } }
    set32(c.r[14], 0u + 45u);
    c.r[2].d[0] = 0ull - c.r[2].d[0];
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[14], 0u + 1u);
    c.budget -= 4;
L_003BB758:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; st32((c.r[29].w[0] + 540u), c.r[17].w[0]);  if (t) { goto L_003BB770; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    set32(c.r[15], 0u - 129u);
    c.r[13].d[0] = c.r[13].d[0] & c.r[15].d[0];
    st32((c.r[29].w[0] + 508u), c.r[13].w[0]);
    c.budget -= 4;
L_003BB770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[22], c.r[29].w[0] + 460u);  if (t) { goto L_003BB784; } }
    set32(c.r[15], ld32((c.r[29].w[0] + 540u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00AF(c, 31u, depth); } }
L_003BB784:
    set32(c.r[15], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_00AF(c, 27u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull; c.r[15].d[0] = c.r[2].d[0] & 7ull;  if (t) { [[clang::musttail]] return unit_00AF(c, 25u, depth); } }
    set32(c.r[15], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[2].d[0] & 15ull;  if (t) { [[clang::musttail]] return unit_00AF(c, 21u, depth); } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[22], c.r[15].w[0] - 28720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB7B4u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003BB7B4u) [[unlikely]] return; }
L_003BB7B4:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003BB7B8:
    set32(c.r[13], ld32((c.r[29].w[0] + 540u)));
    c.r[23].d[0] = c.r[30].d[0] + 0ull;
    c.r[14].d[0] = ld8((c.r[29].w[0]));
    c.r[15].d[0] = c.r[30].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[14].d[0] == 0ull; if (c.r[15].d[0] != 0) c.r[23].d[0] = c.r[13].d[0];  if (t) { [[clang::musttail]] return unit_00AF(c, 19u, depth); } }
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_003BB7D4:
    set32(c.r[15], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[15].d[0] & 132ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 548u), c.r[15].w[0]);  if (t) { goto L_003BB8A0; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 516u)));
    set32(c.r[16], c.r[13].w[0] - c.r[23].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_003BB8A0; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003BB858; } }
    set32(c.r[18], 0u + 16u);
    set32(c.r[17], c.r[15].w[0] - 28752u);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 3;
L_003BB808:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BB844; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB83Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BB83Cu) [[unlikely]] return; }
L_003BB83C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { goto L_003BB8F4; } }
L_003BB844:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB808u | kUnwind; return; } goto L_003BB808; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003BB858:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] - 28752u);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { [[clang::musttail]] return unit_00AF(c, 18u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB894u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BB894u) [[unlikely]] return; }
L_003BB894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { goto L_003BB8F4; } }
    c.r[14].d[0] = ld8((c.r[29].w[0]));
    c.budget -= 1;
L_003BB8A0:
    set32(c.r[15], c.r[14].w[0] << 24);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 1u);  if (t) { [[clang::musttail]] return unit_00AF(c, 16u, depth); } }
    st32((c.r[20].w[0]), c.r[29].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 1u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BB910; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB8ECu); set32(c.r[20], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BB8ECu) [[unlikely]] return; }
L_003BB8EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 548u)));  if (t) { goto L_003BB914; } }
L_003BB8F4:
    set32(c.r[13], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 1;
L_003BB8F8:
    set32(c.r[14], 0u - 1u);
    c.r[15].d[0] = ld16((c.r[13].w[0] + 12u));
    set32(c.r[13], ld32((c.r[29].w[0] + 512u)));
    c.r[15].d[0] = c.r[15].d[0] & 64ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[15].d[0] == 0) c.r[14].d[0] = c.r[13].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB4BCu | kUnwind; return; } goto L_003BB4BC; } }
L_003BB910:
    set32(c.r[13], ld32((c.r[29].w[0] + 548u)));
    c.budget -= 1;
L_003BB914:
    set32(c.r[15], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[13].d[0] != c.r[15].d[0]; set32(c.r[15], ld32((c.r[29].w[0] + 540u)));  if (t) { goto L_003BB9DC; } }
    set32(c.r[14], ld32((c.r[29].w[0] + 516u)));
    set32(c.r[16], c.r[14].w[0] - c.r[23].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_003BB9D8; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003BB994; } }
    set32(c.r[18], 0u + 16u);
    set32(c.r[17], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 3;
L_003BB944:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BB980; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB978u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BB978u) [[unlikely]] return; }
L_003BB978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BB980:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB944u | kUnwind; return; } goto L_003BB944; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003BB994:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_003BB9D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BB9D0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BB9D0u) [[unlikely]] return; }
L_003BB9D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BB9D8:
    set32(c.r[15], ld32((c.r[29].w[0] + 540u)));
    c.budget -= 1;
L_003BB9DC:
    set32(c.r[16], c.r[15].w[0] - c.r[30].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_003BBA90; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003BBA4C; } }
    set32(c.r[18], 0u + 16u);
    set32(c.r[17], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 3;
L_003BB9FC:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BBA38; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA30u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBA30u) [[unlikely]] return; }
L_003BBA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBA38:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB9FCu | kUnwind; return; } goto L_003BB9FC; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003BBA4C:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_003BBA90; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBA88u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBA88u) [[unlikely]] return; }
L_003BBA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBA90:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[13].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].d[0] = c.r[19].sd[0] < 102ll ? 1ull : 0ull;  if (t) { goto L_003BBBEC; } }
    st32((c.r[20].w[0] + 4u), c.r[30].w[0]);
    st32((c.r[20].w[0]), c.r[22].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[14], c.r[14].w[0] + c.r[30].w[0]);
    c.budget -= 5;
L_003BBAB4:
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 3;
L_003BBAC0:
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 508u)));  if (t) { goto L_003BBAEC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBAE0u); set32(c.r[20], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBAE0u) [[unlikely]] return; }
L_003BBAE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 500u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F8u | kUnwind; return; } goto L_003BB8F8; } }
L_003BBAE8:
    set32(c.r[13], ld32((c.r[29].w[0] + 508u)));
    c.budget -= 1;
L_003BBAEC:
    c.r[15].d[0] = c.r[13].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003BBBAC; } }
    set32(c.r[16], c.r[14].w[0] - c.r[23].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_003BBBAC; } }
    c.budget -= 2;
    if (c.r[15].d[0] != 0ull) { st32((c.r[20].w[0] + 4u), c.r[16].w[0]);  goto L_003BBB6C; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[18], 0u + 16u);
    set32(c.r[17], c.r[15].w[0] - 28752u);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 4;
L_003BBB1C:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BBB58; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBB50u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBB50u) [[unlikely]] return; }
L_003BBB50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBB58:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBB1Cu | kUnwind; return; } goto L_003BBB1C; }
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_003BBB6C:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[14], c.r[14].w[0] - 28752u);
    set32(c.r[13], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[14].w[0]);
    set32(c.r[15], c.r[15].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[13].w[0]);
    c.r[13].d[0] = c.r[13].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[13].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[15].w[0]);  if (t) { goto L_003BBBAC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBBA4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBBA4u) [[unlikely]] return; }
L_003BBBA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 500u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F8u | kUnwind; return; } goto L_003BB8F8; } }
L_003BBBAC:
    set32(c.r[13], ld32((c.r[29].w[0] + 516u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 512u)));
    c.r[15].d[0] = c.r[23].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    if (c.r[15].d[0] == 0) c.r[13].d[0] = c.r[23].d[0];
    set32(c.r[14], c.r[14].w[0] + c.r[13].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 8;
    { const bool t = c.r[15].d[0] == 0ull; st32((c.r[29].w[0] + 512u), c.r[14].w[0]);  if (t) { goto L_003BBBE0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBBD8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBBD8u) [[unlikely]] return; }
L_003BBBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 500u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F8u | kUnwind; return; } goto L_003BB8F8; } }
L_003BBBE0:
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB504u | kUnwind; return; } goto L_003BB504; } }
L_003BBBEC:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 492u)));  if (t) { [[clang::musttail]] return unit_00AF(c, 5u, depth); } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 528u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003BBC00u) [[unlikely]] return; }
L_003BBC00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 488u)));  goto L_003BBD54; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[15], c.r[15].w[0] - 28688u);
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_003BBC54; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBC4Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBC4Cu) [[unlikely]] return; }
L_003BBC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBC54:
    set32(c.r[15], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 492u)));
    c.r[15].d[0] = c.r[15].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 520u)));  if (t) { goto L_003BBC78; } }
    set32(c.r[14], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[14].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], ld32((c.r[29].w[0] + 520u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBAE8u | kUnwind; return; } goto L_003BBAE8; } }
L_003BBC78:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_003BBCB8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBCB0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBCB0u) [[unlikely]] return; }
L_003BBCB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBCB8:
    set32(c.r[15], ld32((c.r[29].w[0] + 492u)));
    set32(c.r[16], c.r[15].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBAE8u | kUnwind; return; } goto L_003BBAE8; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003BBD2C; } }
    set32(c.r[18], 0u + 16u);
    set32(c.r[17], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 3;
L_003BBCDC:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BBD18; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBD10u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBD10u) [[unlikely]] return; }
L_003BBD10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBD18:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBCDCu | kUnwind; return; } goto L_003BBCDC; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003BBD2C:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[14], c.r[14].w[0] + c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBAC0u | kUnwind; return; } goto L_003BBAC0; } }
L_003BBD54:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[14], ld32((c.r[29].w[0] + 492u)));  if (t) { goto L_003BBED8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[15], c.r[15].w[0] - 28688u);
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_003BBDA8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBDA0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBDA0u) [[unlikely]] return; }
L_003BBDA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBDA8:
    set32(c.r[15], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { st32((c.r[20].w[0] + 4u), c.r[16].w[0]);  goto L_003BBDC4; }
    set32(c.r[15], ld32((c.r[29].w[0] + 492u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[13], ld32((c.r[29].w[0] + 508u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBAECu | kUnwind; return; } goto L_003BBAEC; } }
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_003BBDC4:
    set32(c.r[13], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[13].w[0]);
    set32(c.r[14], c.r[14].w[0] + 1u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_003BBE04; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBDFCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBDFCu) [[unlikely]] return; }
L_003BBDFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBE04:
    set32(c.r[15], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[16], 0u - c.r[15].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_003BBEBC; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003BBE78; } }
    set32(c.r[18], 0u + 16u);
    set32(c.r[17], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 3;
L_003BBE28:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BBE64; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBE5Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBE5Cu) [[unlikely]] return; }
L_003BBE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBE64:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBE28u | kUnwind; return; } goto L_003BBE28; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003BBE78:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_003BBEBC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBEB4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBEB4u) [[unlikely]] return; }
L_003BBEB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBEBC:
    set32(c.r[13], ld32((c.r[29].w[0] + 492u)));
    st32((c.r[20].w[0]), c.r[22].w[0]);
    c.budget -= 2;
L_003BBEC4:
    st32((c.r[20].w[0] + 4u), c.r[13].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] + c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBAB4u | kUnwind; return; } goto L_003BBAB4; } }
L_003BBED8:
    c.r[15].d[0] = c.r[5].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { st32((c.r[20].w[0] + 4u), c.r[5].w[0]);  [[clang::musttail]] return unit_00AF(c, 2u, depth); }
    st32((c.r[20].w[0] + 4u), c.r[14].w[0]);
    c.r[2].d[0] = c.r[14].d[0] + 0ull;
    st32((c.r[20].w[0]), c.r[22].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BBF2C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBF20u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBF20u) [[unlikely]] return; }
L_003BBF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 492u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_003BBF2C:
    set32(c.r[15], ld32((c.r[29].w[0] + 488u)));
    set32(c.r[16], c.r[15].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;  if (t) { goto L_003BBFE4; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003BBFA0; } }
    set32(c.r[18], 0u + 16u);
    set32(c.r[17], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 3;
L_003BBF50:
    st32((c.r[20].w[0]), c.r[17].w[0]);
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[14], c.r[14].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 40u), c.r[14].w[0]);  if (t) { goto L_003BBF8C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBF84u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBF84u) [[unlikely]] return; }
L_003BBF84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBF8C:
    set32(c.r[16], c.r[16].w[0] - 16u);
    c.r[15].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[18].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBF50u | kUnwind; return; } goto L_003BBF50; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003BBFA0:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] - 28736u);
    st32((c.r[20].w[0]), c.r[15].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[15], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[14], c.r[14].w[0] + c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { goto L_003BBFE4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003BBFDCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 324u, depth + 1u); else { c.pc = 0x003BB290u; return; } if (c.pc != 0x003BBFDCu) [[unlikely]] return; }
L_003BBFDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[29].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BB8F4u | kUnwind; return; } goto L_003BB8F4; } }
L_003BBFE4:
    set32(c.r[14], ld32((c.r[29].w[0] + 508u)));
    c.r[15].d[0] = c.r[14].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003BBAE8u | kUnwind; return; } goto L_003BBAE8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[20].w[0] + 4u), c.r[14].w[0]);
    set32(c.r[15], c.r[15].w[0] - 28680u);
    c.budget -= 3;
    [[clang::musttail]] return unit_00AF(c, 1u, depth);
}

}
