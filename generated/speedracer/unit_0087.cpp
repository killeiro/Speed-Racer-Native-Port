#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0087[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15,
    0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0,
    40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0,
    0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0,
    0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0,
    0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0,
    278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0,
    0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350,
    0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0,
    0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0,
    0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0,
    0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0,
    419, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0,
    0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0,
    448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0,
    0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0,
};

void unit_0087(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0031C000;
    case 2u: goto L_0031C01C;
    case 3u: goto L_0031C024;
    case 4u: goto L_0031C054;
    case 5u: goto L_0031C064;
    case 6u: goto L_0031C07C;
    case 7u: goto L_0031C134;
    case 8u: goto L_0031C1BC;
    case 9u: goto L_0031C1E0;
    case 10u: goto L_0031C1FC;
    case 11u: goto L_0031C21C;
    case 12u: goto L_0031C23C;
    case 13u: goto L_0031C24C;
    case 14u: goto L_0031C268;
    case 15u: goto L_0031C27C;
    case 16u: goto L_0031C28C;
    case 17u: goto L_0031C2B0;
    case 18u: goto L_0031C310;
    case 19u: goto L_0031C320;
    case 20u: goto L_0031C334;
    case 21u: goto L_0031C354;
    case 22u: goto L_0031C360;
    case 23u: goto L_0031C374;
    case 24u: goto L_0031C398;
    case 25u: goto L_0031C39C;
    case 26u: goto L_0031C3D0;
    case 27u: goto L_0031C3F0;
    case 28u: goto L_0031C408;
    case 29u: goto L_0031C430;
    case 30u: goto L_0031C484;
    case 31u: goto L_0031C48C;
    case 32u: goto L_0031C4A0;
    case 33u: goto L_0031C4AC;
    case 34u: goto L_0031C4B8;
    case 35u: goto L_0031C4C4;
    case 36u: goto L_0031C4D0;
    case 37u: goto L_0031C4DC;
    case 38u: goto L_0031C4E8;
    case 39u: goto L_0031C4F4;
    case 40u: goto L_0031C500;
    case 41u: goto L_0031C50C;
    case 42u: goto L_0031C518;
    case 43u: goto L_0031C524;
    case 44u: goto L_0031C548;
    case 45u: goto L_0031C5F4;
    case 46u: goto L_0031C6A0;
    case 47u: goto L_0031C72C;
    case 48u: goto L_0031C7B8;
    case 49u: goto L_0031C840;
    case 50u: goto L_0031CA10;
    case 51u: goto L_0031CA3C;
    case 52u: goto L_0031CA70;
    case 53u: goto L_0031CAB8;
    case 54u: goto L_0031CACC;
    case 55u: goto L_0031CAE8;
    case 56u: goto L_0031CB14;
    case 57u: goto L_0031CB70;
    case 58u: goto L_0031CB7C;
    case 59u: goto L_0031CBC8;
    case 60u: goto L_0031CBD4;
    case 61u: goto L_0031CC50;
    case 62u: goto L_0031CC5C;
    case 63u: goto L_0031CCB0;
    case 64u: goto L_0031CCB8;
    case 65u: goto L_0031CD10;
    case 66u: goto L_0031CD18;
    case 67u: goto L_0031CD60;
    case 68u: goto L_0031CD68;
    case 69u: goto L_0031CDA0;
    case 70u: goto L_0031CDA8;
    case 71u: goto L_0031CE10;
    case 72u: goto L_0031CE18;
    case 73u: goto L_0031CE80;
    case 74u: goto L_0031CE88;
    case 75u: goto L_0031CEF0;
    case 76u: goto L_0031CEF8;
    case 77u: goto L_0031CF30;
    case 78u: goto L_0031CF38;
    case 79u: goto L_0031CF70;
    case 80u: goto L_0031CF78;
    case 81u: goto L_0031CFB0;
    case 82u: goto L_0031CFEC;
    case 83u: goto L_0031D008;
    case 84u: goto L_0031D04C;
    case 85u: goto L_0031D090;
    case 86u: goto L_0031D0A8;
    case 87u: goto L_0031D0D8;
    case 88u: goto L_0031D130;
    case 89u: goto L_0031D164;
    case 90u: goto L_0031D17C;
    case 91u: goto L_0031D1A0;
    case 92u: goto L_0031D1BC;
    case 93u: goto L_0031D1E0;
    case 94u: goto L_0031D208;
    case 95u: goto L_0031D21C;
    case 96u: goto L_0031D2D0;
    case 97u: goto L_0031D34C;
    case 98u: goto L_0031D368;
    case 99u: goto L_0031D37C;
    case 100u: goto L_0031D3A0;
    case 101u: goto L_0031D3C4;
    case 102u: goto L_0031D3D4;
    case 103u: goto L_0031D414;
    case 104u: goto L_0031D430;
    case 105u: goto L_0031D44C;
    case 106u: goto L_0031D468;
    case 107u: goto L_0031D490;
    case 108u: goto L_0031D4C0;
    case 109u: goto L_0031D4D4;
    case 110u: goto L_0031D4E4;
    case 111u: goto L_0031D4F8;
    case 112u: goto L_0031D508;
    case 113u: goto L_0031D51C;
    case 114u: goto L_0031D52C;
    case 115u: goto L_0031D540;
    case 116u: goto L_0031D550;
    case 117u: goto L_0031D564;
    case 118u: goto L_0031D574;
    case 119u: goto L_0031D588;
    case 120u: goto L_0031D598;
    case 121u: goto L_0031D5AC;
    case 122u: goto L_0031D5BC;
    case 123u: goto L_0031D5D0;
    case 124u: goto L_0031D5E4;
    case 125u: goto L_0031D5F4;
    case 126u: goto L_0031D62C;
    case 127u: goto L_0031D64C;
    case 128u: goto L_0031D660;
    case 129u: goto L_0031D67C;
    case 130u: goto L_0031D690;
    case 131u: goto L_0031D6A8;
    case 132u: goto L_0031D6BC;
    case 133u: goto L_0031D6D4;
    case 134u: goto L_0031D6E8;
    case 135u: goto L_0031D710;
    case 136u: goto L_0031D72C;
    case 137u: goto L_0031D7F0;
    case 138u: goto L_0031D810;
    case 139u: goto L_0031D818;
    case 140u: goto L_0031D838;
    case 141u: goto L_0031D854;
    case 142u: goto L_0031D860;
    case 143u: goto L_0031D86C;
    case 144u: goto L_0031D878;
    case 145u: goto L_0031D884;
    case 146u: goto L_0031D890;
    case 147u: goto L_0031D8A4;
    case 148u: goto L_0031D8C0;
    case 149u: goto L_0031D8DC;
    case 150u: goto L_0031D904;
    case 151u: goto L_0031D920;
    case 152u: goto L_0031D948;
    case 153u: goto L_0031D968;
    case 154u: goto L_0031D978;
    case 155u: goto L_0031D994;
    case 156u: goto L_0031D9A8;
    case 157u: goto L_0031D9B8;
    case 158u: goto L_0031D9C4;
    case 159u: goto L_0031D9F0;
    case 160u: goto L_0031DA0C;
    case 161u: goto L_0031DA14;
    case 162u: goto L_0031DA20;
    case 163u: goto L_0031DA2C;
    case 164u: goto L_0031DA38;
    case 165u: goto L_0031DA44;
    case 166u: goto L_0031DA50;
    case 167u: goto L_0031DA58;
    case 168u: goto L_0031DAB0;
    case 169u: goto L_0031DACC;
    case 170u: goto L_0031DAE8;
    case 171u: goto L_0031DB00;
    case 172u: goto L_0031DB2C;
    case 173u: goto L_0031DBA4;
    case 174u: goto L_0031DBE0;
    case 175u: goto L_0031DBF4;
    case 176u: goto L_0031DC24;
    case 177u: goto L_0031DC44;
    case 178u: goto L_0031DC54;
    case 179u: goto L_0031DC70;
    case 180u: goto L_0031DC84;
    case 181u: goto L_0031DC94;
    case 182u: goto L_0031DCC0;
    case 183u: goto L_0031DCD0;
    case 184u: goto L_0031DCF8;
    case 185u: goto L_0031DD08;
    case 186u: goto L_0031DD28;
    case 187u: goto L_0031DD3C;
    case 188u: goto L_0031DD4C;
    case 189u: goto L_0031DD5C;
    case 190u: goto L_0031DD78;
    case 191u: goto L_0031DD98;
    case 192u: goto L_0031DDA8;
    case 193u: goto L_0031DDD8;
    case 194u: goto L_0031DDE8;
    case 195u: goto L_0031DE04;
    case 196u: goto L_0031DE20;
    case 197u: goto L_0031DE3C;
    case 198u: goto L_0031DE4C;
    case 199u: goto L_0031DE74;
    case 200u: goto L_0031DE84;
    case 201u: goto L_0031DEB4;
    case 202u: goto L_0031DED0;
    case 203u: goto L_0031DEF4;
    case 204u: goto L_0031DF04;
    case 205u: goto L_0031DF34;
    case 206u: goto L_0031DF60;
    case 207u: goto L_0031DF90;
    case 208u: goto L_0031DFB4;
    case 209u: goto L_0031DFC4;
    case 210u: goto L_0031DFEC;
    case 211u: goto L_0031DFFC;
    case 212u: goto L_0031E02C;
    case 213u: goto L_0031E048;
    case 214u: goto L_0031E06C;
    case 215u: goto L_0031E07C;
    case 216u: goto L_0031E0AC;
    case 217u: goto L_0031E0D8;
    case 218u: goto L_0031E110;
    case 219u: goto L_0031E12C;
    case 220u: goto L_0031E13C;
    case 221u: goto L_0031E164;
    case 222u: goto L_0031E174;
    case 223u: goto L_0031E1A4;
    case 224u: goto L_0031E1C0;
    case 225u: goto L_0031E1E4;
    case 226u: goto L_0031E1F4;
    case 227u: goto L_0031E224;
    case 228u: goto L_0031E250;
    case 229u: goto L_0031E280;
    case 230u: goto L_0031E320;
    case 231u: goto L_0031E334;
    case 232u: goto L_0031E344;
    case 233u: goto L_0031E390;
    case 234u: goto L_0031E3A8;
    case 235u: goto L_0031E3B8;
    case 236u: goto L_0031E440;
    case 237u: goto L_0031E48C;
    case 238u: goto L_0031E514;
    case 239u: goto L_0031E52C;
    case 240u: goto L_0031E53C;
    case 241u: goto L_0031E560;
    case 242u: goto L_0031E5A0;
    case 243u: goto L_0031E5E0;
    case 244u: goto L_0031E5E8;
    case 245u: goto L_0031E610;
    case 246u: goto L_0031E658;
    case 247u: goto L_0031E668;
    case 248u: goto L_0031E684;
    case 249u: goto L_0031E690;
    case 250u: goto L_0031E6AC;
    case 251u: goto L_0031E6D0;
    case 252u: goto L_0031E6E8;
    case 253u: goto L_0031E73C;
    case 254u: goto L_0031E74C;
    case 255u: goto L_0031E7D0;
    case 256u: goto L_0031E7EC;
    case 257u: goto L_0031E7F8;
    case 258u: goto L_0031E804;
    case 259u: goto L_0031E820;
    case 260u: goto L_0031E83C;
    case 261u: goto L_0031E848;
    case 262u: goto L_0031E854;
    case 263u: goto L_0031E870;
    case 264u: goto L_0031E894;
    case 265u: goto L_0031E8A0;
    case 266u: goto L_0031E904;
    case 267u: goto L_0031E940;
    case 268u: goto L_0031E96C;
    case 269u: goto L_0031EA30;
    case 270u: goto L_0031EA44;
    case 271u: goto L_0031EA80;
    case 272u: goto L_0031EA90;
    case 273u: goto L_0031EAA4;
    case 274u: goto L_0031EAB0;
    case 275u: goto L_0031EAC4;
    case 276u: goto L_0031EAE0;
    case 277u: goto L_0031EAF0;
    case 278u: goto L_0031EB00;
    case 279u: goto L_0031EB10;
    case 280u: goto L_0031EB20;
    case 281u: goto L_0031EB30;
    case 282u: goto L_0031EB40;
    case 283u: goto L_0031EB50;
    case 284u: goto L_0031EB80;
    case 285u: goto L_0031EB9C;
    case 286u: goto L_0031EBC0;
    case 287u: goto L_0031EBD4;
    case 288u: goto L_0031EC00;
    case 289u: goto L_0031EC14;
    case 290u: goto L_0031EC40;
    case 291u: goto L_0031EC50;
    case 292u: goto L_0031EC6C;
    case 293u: goto L_0031EC78;
    case 294u: goto L_0031EC8C;
    case 295u: goto L_0031EC9C;
    case 296u: goto L_0031ECB0;
    case 297u: goto L_0031ECC0;
    case 298u: goto L_0031ECD4;
    case 299u: goto L_0031ECF0;
    case 300u: goto L_0031ED0C;
    case 301u: goto L_0031ED50;
    case 302u: goto L_0031ED6C;
    case 303u: goto L_0031ED78;
    case 304u: goto L_0031ED90;
    case 305u: goto L_0031EDA0;
    case 306u: goto L_0031EDB0;
    case 307u: goto L_0031EDCC;
    case 308u: goto L_0031EDD8;
    case 309u: goto L_0031EE00;
    case 310u: goto L_0031EE10;
    case 311u: goto L_0031EE20;
    case 312u: goto L_0031EE50;
    case 313u: goto L_0031EE6C;
    case 314u: goto L_0031EE90;
    case 315u: goto L_0031EEA4;
    case 316u: goto L_0031EED0;
    case 317u: goto L_0031EEE4;
    case 318u: goto L_0031EF10;
    case 319u: goto L_0031EF20;
    case 320u: goto L_0031EF34;
    case 321u: goto L_0031EF40;
    case 322u: goto L_0031EF54;
    case 323u: goto L_0031EF70;
    case 324u: goto L_0031EF80;
    case 325u: goto L_0031EF90;
    case 326u: goto L_0031EFA0;
    case 327u: goto L_0031EFB0;
    case 328u: goto L_0031EFC0;
    case 329u: goto L_0031EFD8;
    case 330u: goto L_0031EFE8;
    case 331u: goto L_0031F010;
    case 332u: goto L_0031F020;
    case 333u: goto L_0031F048;
    case 334u: goto L_0031F058;
    case 335u: goto L_0031F074;
    case 336u: goto L_0031F090;
    case 337u: goto L_0031F0AC;
    case 338u: goto L_0031F0C0;
    case 339u: goto L_0031F0E0;
    case 340u: goto L_0031F170;
    case 341u: goto L_0031F184;
    case 342u: goto L_0031F1B0;
    case 343u: goto L_0031F1C4;
    case 344u: goto L_0031F1F0;
    case 345u: goto L_0031F244;
    case 346u: goto L_0031F280;
    case 347u: goto L_0031F28C;
    case 348u: goto L_0031F2D0;
    case 349u: goto L_0031F2E0;
    case 350u: goto L_0031F2FC;
    case 351u: goto L_0031F308;
    case 352u: goto L_0031F31C;
    case 353u: goto L_0031F32C;
    case 354u: goto L_0031F340;
    case 355u: goto L_0031F350;
    case 356u: goto L_0031F364;
    case 357u: goto L_0031F380;
    case 358u: goto L_0031F39C;
    case 359u: goto L_0031F3F8;
    case 360u: goto L_0031F420;
    case 361u: goto L_0031F444;
    case 362u: goto L_0031F450;
    case 363u: goto L_0031F468;
    case 364u: goto L_0031F484;
    case 365u: goto L_0031F490;
    case 366u: goto L_0031F498;
    case 367u: goto L_0031F4B8;
    case 368u: goto L_0031F4DC;
    case 369u: goto L_0031F520;
    case 370u: goto L_0031F530;
    case 371u: goto L_0031F540;
    case 372u: goto L_0031F568;
    case 373u: goto L_0031F574;
    case 374u: goto L_0031F580;
    case 375u: goto L_0031F5A4;
    case 376u: goto L_0031F5B8;
    case 377u: goto L_0031F5C4;
    case 378u: goto L_0031F5E0;
    case 379u: goto L_0031F5FC;
    case 380u: goto L_0031F60C;
    case 381u: goto L_0031F628;
    case 382u: goto L_0031F648;
    case 383u: goto L_0031F654;
    case 384u: goto L_0031F668;
    case 385u: goto L_0031F69C;
    case 386u: goto L_0031F6C0;
    case 387u: goto L_0031F710;
    case 388u: goto L_0031F780;
    case 389u: goto L_0031F790;
    case 390u: goto L_0031F7A8;
    case 391u: goto L_0031F7B8;
    case 392u: goto L_0031F7F0;
    case 393u: goto L_0031F820;
    case 394u: goto L_0031F864;
    case 395u: goto L_0031F87C;
    case 396u: goto L_0031F894;
    case 397u: goto L_0031F8AC;
    case 398u: goto L_0031F8C4;
    case 399u: goto L_0031F8DC;
    case 400u: goto L_0031F8F4;
    case 401u: goto L_0031F90C;
    case 402u: goto L_0031F924;
    case 403u: goto L_0031F930;
    case 404u: goto L_0031F93C;
    case 405u: goto L_0031F948;
    case 406u: goto L_0031F954;
    case 407u: goto L_0031F960;
    case 408u: goto L_0031F96C;
    case 409u: goto L_0031F978;
    case 410u: goto L_0031F984;
    case 411u: goto L_0031F990;
    case 412u: goto L_0031F9AC;
    case 413u: goto L_0031F9E0;
    case 414u: goto L_0031FA40;
    case 415u: goto L_0031FA70;
    case 416u: goto L_0031FA84;
    case 417u: goto L_0031FAB0;
    case 418u: goto L_0031FAE8;
    case 419u: goto L_0031FB00;
    case 420u: goto L_0031FB0C;
    case 421u: goto L_0031FB18;
    case 422u: goto L_0031FB30;
    case 423u: goto L_0031FB3C;
    case 424u: goto L_0031FB58;
    case 425u: goto L_0031FB80;
    case 426u: goto L_0031FB94;
    case 427u: goto L_0031FBD0;
    case 428u: goto L_0031FBEC;
    case 429u: goto L_0031FC30;
    case 430u: goto L_0031FC60;
    case 431u: goto L_0031FC7C;
    case 432u: goto L_0031FCA0;
    case 433u: goto L_0031FCB0;
    case 434u: goto L_0031FCC0;
    case 435u: goto L_0031FCD0;
    case 436u: goto L_0031FCE0;
    case 437u: goto L_0031FCF0;
    case 438u: goto L_0031FD04;
    case 439u: goto L_0031FD10;
    case 440u: goto L_0031FD24;
    case 441u: goto L_0031FD40;
    case 442u: goto L_0031FD5C;
    case 443u: goto L_0031FDA0;
    case 444u: goto L_0031FDBC;
    case 445u: goto L_0031FDC8;
    case 446u: goto L_0031FDD4;
    case 447u: goto L_0031FDF0;
    case 448u: goto L_0031FE00;
    case 449u: goto L_0031FE10;
    case 450u: goto L_0031FE2C;
    case 451u: goto L_0031FE38;
    case 452u: goto L_0031FE44;
    case 453u: goto L_0031FE60;
    case 454u: goto L_0031FE78;
    case 455u: goto L_0031FE88;
    case 456u: goto L_0031FEB0;
    case 457u: goto L_0031FEE0;
    case 458u: goto L_0031FF10;
    case 459u: goto L_0031FF60;
    case 460u: goto L_0031FF90;
    case 461u: goto L_0031FFAC;
    case 462u: goto L_0031FFD0;
    case 463u: goto L_0031FFE0;
    case 464u: goto L_0031FFF4;
    default: bad_entry(c, 0x0031C000u); return;
    }
L_0031C000:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[21].w[0] + 4u);  goto L_0031C014; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_0031C024; } }
L_0031C014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C01Cu);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0031C01Cu) [[unlikely]] return; }
L_0031C01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031C39C; } }
L_0031C024:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 21u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[21].w[0] + 42u));  goto L_0031C06C; }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 24u));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 26u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16384ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0031C05C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C054u); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0031C054u) [[unlikely]] return; }
L_0031C054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031C39C; } }
L_0031C05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C064u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 52u, depth + 1u); else { c.pc = 0x0031CA70u; return; } if (c.pc != 0x0031C064u) [[unlikely]] return; }
L_0031C064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C084; } }
L_0031C06C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031C084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C07Cu); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0031C07Cu) [[unlikely]] return; }
L_0031C07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031C39C; } }
L_0031C084:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], 0u + 116u);  goto L_0031C1B4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 34u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031C1B0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    c.r[3].d[0] = ld16((c.r[21].w[0] + 36u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0031C1B0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[19].w[0] + 8u);  if (t) { goto L_0031C0F4; } }
    c.r[4].d[0] = ld8((c.r[21].w[0] + 48u));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031C1A0; }
    set32(c.r[4], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031C0F4; } }
    c.r[4].d[0] = ld8((c.r[21].w[0] + 49u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[2].w[0] + 12u)));  goto L_0031C100; }
L_0031C0F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C1A0; } }
L_0031C100:
    set32(c.r[4], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_0031C190; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0031C128; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031C128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031C1A0; } }
L_0031C128:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C190; } }
L_0031C134:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031C1A0; }
    set32(c.r[4], ld32((c.r[5].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031C184; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 80u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0031C184; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 81u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0031C190; }
L_0031C184:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C1A0; } }
L_0031C190:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C134u | kUnwind; return; } goto L_0031C134; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0031C1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031C1B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[21].w[0] + 42u));  if (t) { goto L_0031C1E8; } }
L_0031C1B0:
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_0031C1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C1BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0031C1BCu) [[unlikely]] return; }
L_0031C1BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[2].d[0] + 0ull;  goto L_0031C1E4; }
    c.r[5].d[0] = ld16((c.r[21].w[0] + 34u));
    set32(c.r[8], 0u + 1u);
    c.r[6].d[0] = ld16((c.r[21].w[0] + 36u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[21].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C1E0u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 242u, depth + 1u); else { c.pc = 0x002C6150u; return; } if (c.pc != 0x0031C1E0u) [[unlikely]] return; }
L_0031C1E0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031C1E4:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 42u));
    c.budget -= 1;
L_0031C1E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 120u)));  goto L_0031C290; }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C1FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0031C1FCu) [[unlikely]] return; }
L_0031C1FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 80u)));  goto L_0031C224; }
    c.r[6].d[0] = ld16((c.r[21].w[0] + 26u));
    c.r[5].d[0] = ld8((c.r[21].w[0] + 41u));
    set32(c.r[7], ld32((c.r[21].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C21Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 340u, depth + 1u); else { c.pc = 0x002C2DD0u; return; } if (c.pc != 0x0031C21Cu) [[unlikely]] return; }
L_0031C21C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 2;
L_0031C224:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_0031C28C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[19].w[0] + 80u), c.r[17].w[0]);  goto L_0031C26C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C23Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031C23Cu) [[unlikely]] return; }
L_0031C23C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C24Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031C24Cu) [[unlikely]] return; }
L_0031C24C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031C268; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031C268u) [[unlikely]] return; }
L_0031C268:
    st32((c.r[19].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 1;
L_0031C26C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0031C28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C27Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031C27Cu) [[unlikely]] return; }
L_0031C27C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C28Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031C28Cu) [[unlikely]] return; }
L_0031C28C:
    set32(c.r[2], ld32((c.r[21].w[0] + 120u)));
    c.budget -= 1;
L_0031C290:
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 96u)));  goto L_0031C2B8; }
    st32((c.r[21].w[0] + 120u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 124u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C2B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 98u, depth + 1u); else { c.pc = 0x0021D010u; return; } if (c.pc != 0x0031C2B0u) [[unlikely]] return; }
L_0031C2B0:
    st32((c.r[21].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 2;
L_0031C2B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_0031C2DC; } }
    set32(c.r[16], c.r[3].w[0] >> 1);
    c.budget -= 1;
L_0031C2DC:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 43u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[21].w[0] + 44u));  goto L_0031C300; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 36u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 44u));
    c.budget -= 6;
L_0031C300:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_0031C37C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0031C33C; } }
L_0031C310:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[21].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C320u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 81u, depth + 1u); else { c.pc = 0x0031CFB0u; return; } if (c.pc != 0x0031C320u) [[unlikely]] return; }
L_0031C320:
    set32(c.r[5], ld32((c.r[21].w[0] + 124u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C334u); set32(c.r[25], c.r[21].w[0] + 136u);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x00397B00u; return; } if (c.pc != 0x0031C334u) [[unlikely]] return; }
L_0031C334:
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0031C33C:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 36u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[21].w[0] + 124u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C310u | kUnwind; return; } goto L_0031C310; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] + 4u);  if (t) { goto L_0031C390; } }
L_0031C354:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C360u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 4u, depth + 1u); else { c.pc = 0x0027C030u; return; } if (c.pc != 0x0031C360u) [[unlikely]] return; }
L_0031C360:
    set32(c.r[5], ld32((c.r[21].w[0] + 124u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C374u); set32(c.r[25], c.r[21].w[0] + 136u);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x00397B00u; return; } if (c.pc != 0x0031C374u) [[unlikely]] return; }
L_0031C374:
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_0031C37C:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 36u));
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 124u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C354u | kUnwind; return; } goto L_0031C354; }
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 1;
L_0031C390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C398u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0031C398u) [[unlikely]] return; }
L_0031C398:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0031C39C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0031C3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C3F0u); set32(c.r[5], c.r[5].w[0] - 18384u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x0031C3F0u) [[unlikely]] return; }
L_0031C3F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0031C414; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C408u); set32(c.r[5], c.r[5].w[0] - 18379u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x0031C408u) [[unlikely]] return; }
L_0031C408:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031C414; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031C414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031C430:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
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
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C484u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031C484u) [[unlikely]] return; }
L_0031C484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C48Cu); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x0031C48Cu) [[unlikely]] return; }
L_0031C48C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4A0u); set32(c.r[5], c.r[21].w[0] + 20u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x0031C4A0u) [[unlikely]] return; }
L_0031C4A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4ACu); set32(c.r[5], c.r[21].w[0] + 21u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x0031C4ACu) [[unlikely]] return; }
L_0031C4AC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4B8u); set32(c.r[5], c.r[21].w[0] + 22u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x0031C4B8u) [[unlikely]] return; }
L_0031C4B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4C4u); set32(c.r[5], c.r[21].w[0] + 24u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x0031C4C4u) [[unlikely]] return; }
L_0031C4C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4D0u); set32(c.r[5], c.r[21].w[0] + 26u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x0031C4D0u) [[unlikely]] return; }
L_0031C4D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4DCu); set32(c.r[5], c.r[21].w[0] + 28u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x0031C4DCu) [[unlikely]] return; }
L_0031C4DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4E8u); set32(c.r[5], c.r[21].w[0] + 30u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x0031C4E8u) [[unlikely]] return; }
L_0031C4E8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C4F4u); set32(c.r[5], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x0031C4F4u) [[unlikely]] return; }
L_0031C4F4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C500u); set32(c.r[5], c.r[21].w[0] + 34u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x0031C500u) [[unlikely]] return; }
L_0031C500:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C50Cu); set32(c.r[5], c.r[21].w[0] + 36u);  if (depth < kMaxDepth) unit_005F(c, 5u, depth + 1u); else { c.pc = 0x0027C040u; return; } if (c.pc != 0x0031C50Cu) [[unlikely]] return; }
L_0031C50C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C518u); set32(c.r[5], c.r[21].w[0] + 38u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x0031C518u) [[unlikely]] return; }
L_0031C518:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C524u); set32(c.r[5], c.r[21].w[0] + 39u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x0031C524u) [[unlikely]] return; }
L_0031C524:
    c.r[5].d[0] = ld8((c.r[21].w[0] + 20u));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[21].w[0] + 39u));  goto L_0031C54C; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 7456u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C548u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031C548u) [[unlikely]] return; }
L_0031C548:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 39u));
    c.budget -= 1;
L_0031C54C:
    set32(c.r[2], 0u + 10u);
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[21].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 22u));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[21].w[0] + 42u), static_cast<std::uint8_t>(0u));  goto L_0031C5E0; }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[21].w[0] + 42u), static_cast<std::uint8_t>(0u));  goto L_0031C5D4; }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0031C5C8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[21].w[0] + 42u), static_cast<std::uint8_t>(0u));  goto L_0031C5C0; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[21].w[0] + 42u), static_cast<std::uint8_t>(0u));  goto L_0031C5B8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[21].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0031C5B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[21].w[0] + 4u);  if (t) { goto L_0031C5EC; } }
L_0031C5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 44u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031C5FC; } }
L_0031C5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 44u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031C5FC; } }
L_0031C5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 44u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031C5FC; } }
L_0031C5C8:
    st8((c.r[21].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0031C5FC; } }
L_0031C5D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0031C5FC; } }
L_0031C5E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0031C5FC; } }
L_0031C5EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C5F4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0031C5F4u) [[unlikely]] return; }
L_0031C5F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031CA40; } }
L_0031C5FC:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 42u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[21].w[0] + 38u));  goto L_0031C60C; }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 28u));
    c.budget -= 1;
L_0031C60C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 32ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[21].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 42u));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[21].w[0] + 41u));  goto L_0031C754; }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 26u));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[21].w[0] + 41u));  goto L_0031C6C8; }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 41u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0031C650; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 24784u);  if (t) { goto L_0031C654; } }
L_0031C650:
    set32(c.r[3], c.r[3].w[0] + 24704u);
    c.budget -= 1;
L_0031C654:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[3].w[0] + 24u);
    set32(c.r[5], c.r[21].w[0] + 72u);
    set32(c.r[4], 0u + 6u);
    st8((c.r[21].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[21].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[21].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[21].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[21].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[21].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[21].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 19;
L_0031C6A0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C6A0u | kUnwind; return; } goto L_0031C6A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[21].w[0] + 38u));  if (t) { goto L_0031C7DC; } }
L_0031C6C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0031C6DC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 24944u);  if (t) { goto L_0031C6E0; } }
L_0031C6DC:
    set32(c.r[3], c.r[3].w[0] + 24864u);
    c.budget -= 1;
L_0031C6E0:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[3].w[0] + 24u);
    set32(c.r[5], c.r[21].w[0] + 72u);
    set32(c.r[4], 0u + 6u);
    st8((c.r[21].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[21].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[21].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[21].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[21].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[21].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[21].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 19;
L_0031C72C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C72Cu | kUnwind; return; } goto L_0031C72C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031C7D8; } }
L_0031C754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0031C768; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 25024u);  if (t) { goto L_0031C76C; } }
L_0031C768:
    set32(c.r[3], c.r[3].w[0] + 25104u);
    c.budget -= 1;
L_0031C76C:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[6], c.r[3].w[0] + 24u);
    set32(c.r[5], c.r[21].w[0] + 72u);
    set32(c.r[4], 0u + 6u);
    st8((c.r[21].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    st8((c.r[21].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    st8((c.r[21].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[21].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[21].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[21].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[21].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 19;
L_0031C7B8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031C7B8u | kUnwind; return; } goto L_0031C7B8; } }
L_0031C7D8:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 38u));
    c.budget -= 1;
L_0031C7DC:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 4u);  goto L_0031C984; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 3u);  goto L_0031C958; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0031C8CC; }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0031C8C8; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0031C86C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(0u));  goto L_0031C82C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 152u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0031C9B0; } }
L_0031C82C:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 42u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0031C848; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031C840u); set32(c.r[4], c.r[21].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0031C840u) [[unlikely]] return; }
L_0031C840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031CA40; } }
L_0031C848:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] - 4344u));
    c.f[1] = ld32((c.r[3].w[0] - 4340u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 4336u));
    st32((c.r[21].w[0] + 136u), c.f[2]);
    st32((c.r[21].w[0] + 140u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 144u), c.f[0]);  if (t) { goto L_0031C9AC; } }
L_0031C86C:
    st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 42u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0031C8A4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] - 4328u));
    c.f[1] = ld32((c.r[3].w[0] - 4324u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 4320u));
    st32((c.r[21].w[0] + 136u), c.f[2]);
    st32((c.r[21].w[0] + 140u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 144u), c.f[0]);  if (t) { goto L_0031C9AC; } }
L_0031C8A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] - 4312u));
    c.f[1] = ld32((c.r[3].w[0] - 4308u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 4304u));
    st32((c.r[21].w[0] + 136u), c.f[2]);
    st32((c.r[21].w[0] + 140u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 144u), c.f[0]);  if (t) { goto L_0031C9AC; } }
L_0031C8C8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0031C8CC:
    st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 42u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0031C934; }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 41u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_0031C910; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] - 4296u));
    c.f[1] = ld32((c.r[3].w[0] - 4292u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 4288u));
    st32((c.r[21].w[0] + 136u), c.f[2]);
    st32((c.r[21].w[0] + 140u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 144u), c.f[0]);  if (t) { goto L_0031C9AC; } }
L_0031C910:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] - 4280u));
    c.f[1] = ld32((c.r[3].w[0] - 4276u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 4272u));
    st32((c.r[21].w[0] + 136u), c.f[2]);
    st32((c.r[21].w[0] + 140u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 144u), c.f[0]);  if (t) { goto L_0031C9AC; } }
L_0031C934:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] - 4264u));
    c.f[1] = ld32((c.r[3].w[0] - 4260u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 4256u));
    st32((c.r[21].w[0] + 136u), c.f[2]);
    st32((c.r[21].w[0] + 140u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 144u), c.f[0]);  if (t) { goto L_0031C9AC; } }
L_0031C958:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0] - 4248u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] - 4244u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 4240u));
    st32((c.r[21].w[0] + 136u), c.f[2]);
    st32((c.r[21].w[0] + 140u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 144u), c.f[0]);  if (t) { goto L_0031C9AC; } }
L_0031C984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0] - 4232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] - 4228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] - 4224u));
    st32((c.r[21].w[0] + 136u), c.f[2]);
    st32((c.r[21].w[0] + 140u), c.f[1]);
    st32((c.r[21].w[0] + 144u), c.f[0]);
    c.budget -= 10;
L_0031C9AC:
    st8((c.r[21].w[0] + 152u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0031C9B0:
    set32(c.r[6], c.r[21].w[0] + 72u);
    st32((c.r[21].w[0] + 148u), 0u);
    set32(c.r[5], c.r[17].w[0] + 24u);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 34u));
    set32(c.r[4], 0u + 6u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 36u));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 48u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 49u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 50u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 24;
L_0031CA10:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CA10u | kUnwind; return; } goto L_0031CA10; } }
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CA3Cu); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0031CA3Cu) [[unlikely]] return; }
L_0031CA3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031CA40:
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
L_0031CA70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[4].w[0] + 26u));
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031CAEC; } }
    st32((c.r[16].w[0] + 128u), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CAB8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0031CAB8u) [[unlikely]] return; }
L_0031CAB8:
    set32(c.r[18], ld32((c.r[16].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CACCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0031CACCu) [[unlikely]] return; }
L_0031CACC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16368u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CAE8u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0031CAE8u) [[unlikely]] return; }
L_0031CAE8:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 1;
L_0031CAEC:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = ld8((c.r[16].w[0] + 28u));  goto L_0031CB1C; }
    st32((c.r[16].w[0] + 120u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CB14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 98u, depth + 1u); else { c.pc = 0x0021D010u; return; } if (c.pc != 0x0031CB14u) [[unlikely]] return; }
L_0031CB14:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 28u));
    c.budget -= 2;
L_0031CB1C:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[18], ld32((c.r[16].w[0] + 132u)));  if (t) { goto L_0031CC98; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0031CC38; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0031CBB4; }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0031CBB0; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0031CB60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0031CCF4; } }
L_0031CB60:
    c.r[6].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[17], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CB70u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 4u, depth + 1u); else { c.pc = 0x0027C030u; return; } if (c.pc != 0x0031CB70u) [[unlikely]] return; }
L_0031CB70:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_0031CB98; } }
L_0031CB7C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 7;
L_0031CB98:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 26u));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CB7Cu | kUnwind; return; } goto L_0031CB7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CCF0; } }
L_0031CBB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031CBB4:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[17], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CBC8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 4u, depth + 1u); else { c.pc = 0x0027C030u; return; } if (c.pc != 0x0031CBC8u) [[unlikely]] return; }
L_0031CBC8:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_0031CC20; } }
L_0031CBD4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 124ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & 3ull;
    c.r[3].d[0] = c.r[3].d[0] & 224ull;
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 3);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 19;
L_0031CC20:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 26u));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CBD4u | kUnwind; return; } goto L_0031CBD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CCF0; } }
L_0031CC38:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[17], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CC50u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005F(c, 4u, depth + 1u); else { c.pc = 0x0027C030u; return; } if (c.pc != 0x0031CC50u) [[unlikely]] return; }
L_0031CC50:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_0031CC80; } }
L_0031CC5C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 3u);
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 9;
L_0031CC80:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 26u));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CC5Cu | kUnwind; return; } goto L_0031CC5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031CCF0; } }
L_0031CC98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[17], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031CCB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 4u, depth + 1u); else { c.pc = 0x0027C030u; return; } if (c.pc != 0x0031CCB0u) [[unlikely]] return; }
L_0031CCB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031CCE0; } }
L_0031CCB8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 10;
L_0031CCE0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 26u));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CCB8u | kUnwind; return; } goto L_0031CCB8; }
L_0031CCF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0031CCF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031CD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0031CD40; } }
L_0031CD18:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 10;
L_0031CD40:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 34u));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CD18u | kUnwind; return; } goto L_0031CD18; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0031CD88; } }
L_0031CD68:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 3u);
    set32(c.r[6], c.r[6].w[0] + 3u);
    c.budget -= 8;
L_0031CD88:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 34u));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CD68u | kUnwind; return; } goto L_0031CD68; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0031CDF4; } }
L_0031CDA8:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[8].d[0] = ld8((c.r[5].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 24u));
    set32(c.r[9], c.r[3].w[0] << 8);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 3u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 19;
L_0031CDF4:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 34u));
    c.r[3].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CDA8u | kUnwind; return; } goto L_0031CDA8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0031CE5C; } }
L_0031CE18:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[8].d[0] = ld8((c.r[5].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 24u));
    set32(c.r[9], c.r[3].w[0] << 8);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 2u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 3u);
    c.budget -= 17;
L_0031CE5C:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 34u));
    c.r[3].d[0] = c.r[10].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CE18u | kUnwind; return; } goto L_0031CE18; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0031CED0; } }
L_0031CE88:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 124ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[7].d[0] = c.r[7].d[0] & 3ull;
    c.r[3].d[0] = c.r[3].d[0] & 224ull;
    set32(c.r[7], c.r[7].w[0] << 6);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 31ull;
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] << 3);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 3u);
    c.budget -= 18;
L_0031CED0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 34u));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CE88u | kUnwind; return; } goto L_0031CE88; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0031CF10; } }
L_0031CEF8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 3u);
    c.budget -= 6;
L_0031CF10:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 34u));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CEF8u | kUnwind; return; } goto L_0031CEF8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0031CF50; } }
L_0031CF38:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 6;
L_0031CF50:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 34u));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CF38u | kUnwind; return; } goto L_0031CF38; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0031CF90; } }
L_0031CF78:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 6;
L_0031CF90:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 34u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CF78u | kUnwind; return; } goto L_0031CF78; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031CFB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0031D0F4; } }
L_0031CFEC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[21].w[0] + 34u));  goto L_0031D064; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 143u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D008u); st8((c.r[29].w[0] + 143u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_005F(c, 4u, depth + 1u); else { c.pc = 0x0027C030u; return; } if (c.pc != 0x0031D008u) [[unlikely]] return; }
L_0031D008:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 143u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[21].w[0] + 152u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 143u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { st8((c.r[21].w[0] + 152u), static_cast<std::uint8_t>(0u));  goto L_0031D054; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[21].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 143u));
    set32(c.r[2], c.r[2].w[0] - 127u);
    st32((c.r[21].w[0] + 148u), c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[21].w[0] + 40u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D04Cu); set32(c.r[5], c.r[21].w[0] + 153u);  if (depth < kMaxDepth) unit_005F(c, 4u, depth + 1u); else { c.pc = 0x0027C030u; return; } if (c.pc != 0x0031D04Cu) [[unlikely]] return; }
L_0031D04C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D060; } }
L_0031D054:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 143u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 148u), c.r[3].w[0]);
    c.budget -= 3;
L_0031D060:
    c.r[4].d[0] = ld16((c.r[21].w[0] + 34u));
    c.budget -= 1;
L_0031D064:
    set32(c.r[3], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[17], c.r[4].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[21].w[0] + 152u));  goto L_0031D080; }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[21].w[0] + 152u));
    c.budget -= 2;
L_0031D080:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[21].w[0] + 40u));  goto L_0031D0C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0031D0B4; } }
L_0031D090:
    c.r[3].d[0] = c.r[22].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[21].w[0] + 40u));  goto L_0031D0AC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D0A8u); set32(c.r[5], c.r[21].w[0] + 153u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0031D0A8u) [[unlikely]] return; }
L_0031D0A8:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 40u));
    c.budget -= 1;
L_0031D0AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0031D0B4:
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[21].w[0] + 40u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D090u | kUnwind; return; } goto L_0031D090; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 148u)));  if (t) { goto L_0031D0E8; } }
L_0031D0C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D0D8u); mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]); c.r[6].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_005F(c, 4u, depth + 1u); else { c.pc = 0x0027C030u; return; } if (c.pc != 0x0031D0D8u) [[unlikely]] return; }
L_0031D0D8:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 40u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 148u)));
    c.budget -= 4;
L_0031D0E8:
    set32(c.r[18], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    st32((c.r[21].w[0] + 148u), c.r[3].w[0]);
    c.budget -= 3;
L_0031D0F4:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 34u));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031CFECu | kUnwind; return; } goto L_0031CFEC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0031D130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031D1BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 18400u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D164u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031D164u) [[unlikely]] return; }
L_0031D164:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D17Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0031D17Cu) [[unlikely]] return; }
L_0031D17C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0031D1A4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 7728u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0031D1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D1A0u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0031D1A0u) [[unlikely]] return; }
L_0031D1A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0031D1A4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0031D1C0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D1BCu); set32(c.r[5], 0u + 160u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031D1BCu) [[unlikely]] return; }
L_0031D1BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031D1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031D1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 7728u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D208u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x0031D208u) [[unlikely]] return; }
L_0031D208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 18400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D21Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0071(c, 352u, depth + 1u); else { c.pc = 0x002C7D90u; return; } if (c.pc != 0x0031D21Cu) [[unlikely]] return; }
L_0031D21C:
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 34u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    set32(c.r[12], c.r[12].w[0] + 25128u);
    st8((c.r[16].w[0] + 38u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], c.r[16].w[0] + 72u);
    st8((c.r[16].w[0] + 39u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], 0u + 6u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 42u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 43u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.r[9].d[0] = ld8((c.r[9].w[0] + 25104u));
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 25105u));
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25106u));
    st8((c.r[16].w[0] + 50u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25108u)));
    st32((c.r[16].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25112u)));
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25116u)));
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25120u)));
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25124u)));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 45;
L_0031D2D0:
    set32(c.r[3], ld32((c.r[12].w[0])));
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[2], ld32((c.r[12].w[0] + 4u)));
    st32((c.r[11].w[0]), c.r[3].w[0]);
    set32(c.r[12], c.r[12].w[0] + 8u);
    st32((c.r[11].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[11], c.r[11].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D2D0u | kUnwind; return; } goto L_0031D2D0; } }
    st32((c.r[16].w[0] + 120u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 25072u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[2].w[0] + 25072u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 136u), c.f[2]);
    st32((c.r[16].w[0] + 140u), c.f[1]);
    st32((c.r[16].w[0] + 144u), c.f[0]);
    st32((c.r[16].w[0] + 148u), 0u);
    st8((c.r[16].w[0] + 152u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 153u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 154u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 155u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 156u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], ld32((c.r[28].w[0] - 30608u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    st32((c.r[16].w[0] + 128u), c.r[17].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D34Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0031D34Cu) [[unlikely]] return; }
L_0031D34C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16368u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D368u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0031D368u) [[unlikely]] return; }
L_0031D368:
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 30604u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D37Cu); st32((c.r[16].w[0] + 120u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0031D37Cu) [[unlikely]] return; }
L_0031D37C:
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031D3A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D3C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0031D3C4u) [[unlikely]] return; }
L_0031D3C4:
    set32(c.r[17], c.r[2].w[0] + 11u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D3D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0031D3D4u) [[unlikely]] return; }
L_0031D3D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0031D438; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0031D41C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0031D400; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_0031D454; } }
L_0031D400:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D414u); set32(c.r[6], c.r[6].w[0] - 18352u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0031D414u) [[unlikely]] return; }
L_0031D414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0031D46C; } }
L_0031D41C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D430u); set32(c.r[6], c.r[6].w[0] - 18342u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0031D430u) [[unlikely]] return; }
L_0031D430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D468; } }
L_0031D438:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D44Cu); set32(c.r[6], c.r[6].w[0] - 18329u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0031D44Cu) [[unlikely]] return; }
L_0031D44C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D468; } }
L_0031D454:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D468u); set32(c.r[6], c.r[6].w[0] - 18318u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0031D468u) [[unlikely]] return; }
L_0031D468:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0031D46C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031D490:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 18368u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D4C0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0031D4C0u) [[unlikely]] return; }
L_0031D4C0:
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D4D4u); set32(c.r[6], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D4D4u) [[unlikely]] return; }
L_0031D4D4:
    c.f[12] = ld32((c.r[17].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D4E4u); set32(c.r[4], c.r[4].w[0] - 18274u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0031D4E4u) [[unlikely]] return; }
L_0031D4E4:
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D4F8u); set32(c.r[6], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D4F8u) [[unlikely]] return; }
L_0031D4F8:
    c.f[12] = ld32((c.r[17].w[0] + 16u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D508u); set32(c.r[4], c.r[4].w[0] - 18261u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0031D508u) [[unlikely]] return; }
L_0031D508:
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D51Cu); set32(c.r[6], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D51Cu) [[unlikely]] return; }
L_0031D51C:
    c.f[12] = ld32((c.r[17].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D52Cu); set32(c.r[4], c.r[4].w[0] - 18252u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0031D52Cu) [[unlikely]] return; }
L_0031D52C:
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D540u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D540u) [[unlikely]] return; }
L_0031D540:
    c.f[12] = ld32((c.r[17].w[0] + 24u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D550u); set32(c.r[4], c.r[4].w[0] - 18239u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0031D550u) [[unlikely]] return; }
L_0031D550:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D564u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D564u) [[unlikely]] return; }
L_0031D564:
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D574u); set32(c.r[4], c.r[4].w[0] - 18226u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0031D574u) [[unlikely]] return; }
L_0031D574:
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D588u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D588u) [[unlikely]] return; }
L_0031D588:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D598u); set32(c.r[4], c.r[4].w[0] - 18213u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x0031D598u) [[unlikely]] return; }
L_0031D598:
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D5ACu); set32(c.r[6], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D5ACu) [[unlikely]] return; }
L_0031D5AC:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D5BCu); set32(c.r[4], c.r[4].w[0] - 18201u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x0031D5BCu) [[unlikely]] return; }
L_0031D5BC:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D5D0u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D5D0u) [[unlikely]] return; }
L_0031D5D0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 18190u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D5E4u); c.r[18].d[0] = c.r[2].d[0] & 1ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0031D5E4u) [[unlikely]] return; }
L_0031D5E4:
    set32(c.r[20], c.r[2].w[0] + 12u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D5F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0031D5F4u) [[unlikely]] return; }
L_0031D5F4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0031D634; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_0031D614; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.r[19].w[0]);  if (t) { goto L_0031D650; } }
L_0031D614:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18302u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D62Cu); set32(c.r[7], c.r[7].w[0] - 18190u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0031D62Cu) [[unlikely]] return; }
L_0031D62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D64C; } }
L_0031D634:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D64Cu); set32(c.r[7], c.r[7].w[0] - 18190u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x0031D64Cu) [[unlikely]] return; }
L_0031D64C:
    st32((c.r[29].w[0] + 108u), c.r[19].w[0]);
    c.budget -= 1;
L_0031D650:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D660u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D660u) [[unlikely]] return; }
L_0031D660:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 18180u);
    c.r[2].d[0] = c.r[2].d[0] & 6ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D67Cu); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0087(c, 100u, depth + 1u); else { c.pc = 0x0031D3A0u; return; } if (c.pc != 0x0031D67Cu) [[unlikely]] return; }
L_0031D67C:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D690u); set32(c.r[6], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D690u) [[unlikely]] return; }
L_0031D690:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 18169u);
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D6A8u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x0031D6A8u) [[unlikely]] return; }
L_0031D6A8:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D6BCu); set32(c.r[6], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D6BCu) [[unlikely]] return; }
L_0031D6BC:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 18162u);
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D6D4u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x0031D6D4u) [[unlikely]] return; }
L_0031D6D4:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D6E8u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031D6E8u) [[unlikely]] return; }
L_0031D6E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0031D710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D72Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x0031D72Cu) [[unlikely]] return; }
L_0031D72C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 8u));  goto L_0031D73C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031D7DC; } }
L_0031D73C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031D7DC; }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031D798; } }
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031D798; } }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031D798; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_0031D7A4; }
L_0031D798:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D7DC; } }
L_0031D7A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031D7B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031D7DC; }
L_0031D7B8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0031D7DC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031D7D8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031D7DC; } }
L_0031D7D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031D7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031D7F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D810u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x0031D810u) [[unlikely]] return; }
L_0031D810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 48u)));  if (t) { goto L_0031D818; } }
L_0031D818:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0031D844; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D838u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031D838u) [[unlikely]] return; }
L_0031D838:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031D818u | kUnwind; return; } goto L_0031D818; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0031D844:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D854u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031D854u) [[unlikely]] return; }
L_0031D854:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D860u); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0031D860u) [[unlikely]] return; }
L_0031D860:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D86Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0031D86Cu) [[unlikely]] return; }
L_0031D86C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D878u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0031D878u) [[unlikely]] return; }
L_0031D878:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D884u); set32(c.r[5], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0031D884u) [[unlikely]] return; }
L_0031D884:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D890u); set32(c.r[5], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0031D890u) [[unlikely]] return; }
L_0031D890:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D8A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031D8A4u) [[unlikely]] return; }
L_0031D8A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031D8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D8DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BB2E0u; return; } if (c.pc != 0x0031D8DCu) [[unlikely]] return; }
L_0031D8DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  goto L_0031D8EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031D908; } }
L_0031D8EC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0031D908; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D904u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031D904u) [[unlikely]] return; }
L_0031D904:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0031D908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031D920:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D948u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0031D948u) [[unlikely]] return; }
L_0031D948:
    set32(c.r[19], ld32((c.r[18].w[0] + 48u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0031D9BC; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[18].w[0] + 48u), c.r[16].w[0]);  goto L_0031D998; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D968u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031D968u) [[unlikely]] return; }
L_0031D968:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D978u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031D978u) [[unlikely]] return; }
L_0031D978:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031D994; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D994u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031D994u) [[unlikely]] return; }
L_0031D994:
    st32((c.r[18].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 1;
L_0031D998:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031D9B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D9A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031D9A8u) [[unlikely]] return; }
L_0031D9A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D9B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031D9B8u) [[unlikely]] return; }
L_0031D9B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031D9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031D9C4u);  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0031D9C4u) [[unlikely]] return; }
L_0031D9C4:
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031D9F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA0Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0031DA0Cu) [[unlikely]] return; }
L_0031DA0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0031DA14u) [[unlikely]] return; }
L_0031DA14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA20u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0031DA20u) [[unlikely]] return; }
L_0031DA20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA2Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0031DA2Cu) [[unlikely]] return; }
L_0031DA2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA38u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0031DA38u) [[unlikely]] return; }
L_0031DA38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA44u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0031DA44u) [[unlikely]] return; }
L_0031DA44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA50u); set32(c.r[5], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0031DA50u) [[unlikely]] return; }
L_0031DA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DA58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0031DA58u) [[unlikely]] return; }
L_0031DA58:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 109ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_0031DA80; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 65503ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 4;
L_0031DA80:
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031DAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DACCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB580u; return; } if (c.pc != 0x0031DACCu) [[unlikely]] return; }
L_0031DACC:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0031DAEC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DAE8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DAE8u) [[unlikely]] return; }
L_0031DAE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0031DAEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031DB00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DB2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 446u, depth + 1u); else { c.pc = 0x002BB4A0u; return; } if (c.pc != 0x0031DB2Cu) [[unlikely]] return; }
L_0031DB2C:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 8u));
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 19;
    if (c.r[5].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 48u)));  goto L_0031DC0C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_0031DB8C; } }
    breakpoint(c, 0x0031DB88u);
    c.budget -= 1;
L_0031DB8C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0031DBB8; } }
L_0031DBA4:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0031DBB8; }
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031DBC4; } }
L_0031DBB8:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DBA4u | kUnwind; return; } goto L_0031DBA4; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031DBC4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0] + 44u), 0u);  goto L_0031DC08; }
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DBE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DBE0u) [[unlikely]] return; }
L_0031DBE0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DBF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DBF4u) [[unlikely]] return; }
L_0031DBF4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0031DC04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), c.r[16].w[0]);  if (t) { goto L_0031DC08; } }
L_0031DC04:
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 1;
L_0031DC08:
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 1;
L_0031DC0C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0031DC98; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DC24u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DC24u) [[unlikely]] return; }
L_0031DC24:
    set32(c.r[17], ld32((c.r[18].w[0] + 48u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_0031DC94; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 48u), c.r[16].w[0]);  goto L_0031DC74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DC44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031DC44u) [[unlikely]] return; }
L_0031DC44:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DC54u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031DC54u) [[unlikely]] return; }
L_0031DC54:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031DC70; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DC70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DC70u) [[unlikely]] return; }
L_0031DC70:
    st32((c.r[18].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 1;
L_0031DC74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0031DC94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DC84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031DC84u) [[unlikely]] return; }
L_0031DC84:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DC94u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031DC94u) [[unlikely]] return; }
L_0031DC94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0031DC98:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0031DCC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031DCD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031DE04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DCF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031DCF8u) [[unlikely]] return; }
L_0031DCF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD08u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031DD08u) [[unlikely]] return; }
L_0031DD08:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 44u), c.r[17].w[0]);  goto L_0031DD2C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031DD28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD28u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 57u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x0031DD28u) [[unlikely]] return; }
L_0031DD28:
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    c.budget -= 1;
L_0031DD2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0031DDD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_0031DD84; } }
L_0031DD3C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 48u)));  goto L_0031DD84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031DD4Cu) [[unlikely]] return; }
L_0031DD4C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD5Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031DD5Cu) [[unlikely]] return; }
L_0031DD5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0031DE08; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DD78u) [[unlikely]] return; }
L_0031DD78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031DE04; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 1;
L_0031DD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DD3Cu | kUnwind; return; } goto L_0031DD3C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DD98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 95u, depth + 1u); else { c.pc = 0x002BCB50u; return; } if (c.pc != 0x0031DD98u) [[unlikely]] return; }
L_0031DD98:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DDA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DDA8u) [[unlikely]] return; }
L_0031DDA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031DDD0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 52u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
L_0031DDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DDD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031DDD8u) [[unlikely]] return; }
L_0031DDD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DDE8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031DDE8u) [[unlikely]] return; }
L_0031DDE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0031DE04; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DE04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DE04u) [[unlikely]] return; }
L_0031DE04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0031DE08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031DE20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031DE50; } }
L_0031DE3C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DE4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DE4Cu) [[unlikely]] return; }
L_0031DE4C:
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_0031DE50:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DE3Cu | kUnwind; return; } goto L_0031DE3C; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0031DE68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031DEA4; } }
L_0031DE68:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DE74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DE74u) [[unlikely]] return; }
L_0031DE74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_0031DE94; } }
L_0031DE84:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0031DE94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031DEA0; } }
L_0031DE94:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DE84u | kUnwind; return; } goto L_0031DE84; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031DEA0:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0031DEA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031DED8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 180u)));  if (t) { goto L_0031DED0; } }
L_0031DEB4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { goto L_0031DED0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031DED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DED0u);  if (depth < kMaxDepth) unit_0087(c, 196u, depth + 1u); else { c.pc = 0x0031DE20u; return; } if (c.pc != 0x0031DED0u) [[unlikely]] return; }
L_0031DED0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DEB4u | kUnwind; return; } goto L_0031DEB4; }
L_0031DED8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0031DEE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031DF24; } }
L_0031DEE8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DEF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DEF4u) [[unlikely]] return; }
L_0031DEF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_0031DF14; } }
L_0031DF04:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0031DF14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031DF20; } }
L_0031DF14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DF04u | kUnwind; return; } goto L_0031DF04; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031DF20:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0031DF24:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0031DF78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0031DF64; } }
L_0031DF34:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 212u)));  goto L_0031DF44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031DF50; } }
L_0031DF44:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0031DF50:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0031DF64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DF60u);  if (depth < kMaxDepth) unit_0087(c, 196u, depth + 1u); else { c.pc = 0x0031DE20u; return; } if (c.pc != 0x0031DF60u) [[unlikely]] return; }
L_0031DF60:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0031DF64:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DF34u | kUnwind; return; } goto L_0031DF34; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0031DF78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031DF90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[12];  if (t) { goto L_0031DFC8; } }
L_0031DFB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DFC4u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DFC4u) [[unlikely]] return; }
L_0031DFC4:
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_0031DFC8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DFB4u | kUnwind; return; } goto L_0031DFB4; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0031DFE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031E01C; } }
L_0031DFE0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031DFECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031DFECu) [[unlikely]] return; }
L_0031DFEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_0031E00C; } }
L_0031DFFC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0031E00C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031E018; } }
L_0031E00C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031DFFCu | kUnwind; return; } goto L_0031DFFC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031E018:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0031E01C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031E050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 180u)));  if (t) { goto L_0031E048; } }
L_0031E02C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { goto L_0031E048; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031E048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E048u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0087(c, 207u, depth + 1u); else { c.pc = 0x0031DF90u; return; } if (c.pc != 0x0031E048u) [[unlikely]] return; }
L_0031E048:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E02Cu | kUnwind; return; } goto L_0031E02C; }
L_0031E050:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0031E060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031E09C; } }
L_0031E060:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E06Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031E06Cu) [[unlikely]] return; }
L_0031E06C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_0031E08C; } }
L_0031E07C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0031E08C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031E098; } }
L_0031E08C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E07Cu | kUnwind; return; } goto L_0031E07C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031E098:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0031E09C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0031E0F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0031E0DC; } }
L_0031E0AC:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 212u)));  goto L_0031E0BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031E0C8; } }
L_0031E0BC:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0031E0C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0031E0DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E0D8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0087(c, 207u, depth + 1u); else { c.pc = 0x0031DF90u; return; } if (c.pc != 0x0031E0D8u) [[unlikely]] return; }
L_0031E0D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0031E0DC:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E0ACu | kUnwind; return; } goto L_0031E0AC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0031E0F0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031E110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031E140; } }
L_0031E12C:
    c.f[12] = ld32((c.r[28].w[0] - 32644u));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E13Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031E13Cu) [[unlikely]] return; }
L_0031E13C:
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_0031E140:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E12Cu | kUnwind; return; } goto L_0031E12C; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0031E158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031E194; } }
L_0031E158:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E164u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031E164u) [[unlikely]] return; }
L_0031E164:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_0031E184; } }
L_0031E174:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0031E184; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031E190; } }
L_0031E184:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E174u | kUnwind; return; } goto L_0031E174; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031E190:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0031E194:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031E1C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 180u)));  if (t) { goto L_0031E1C0; } }
L_0031E1A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { goto L_0031E1C0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0031E1C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E1C0u);  if (depth < kMaxDepth) unit_0087(c, 218u, depth + 1u); else { c.pc = 0x0031E110u; return; } if (c.pc != 0x0031E1C0u) [[unlikely]] return; }
L_0031E1C0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E1A4u | kUnwind; return; } goto L_0031E1A4; }
L_0031E1C8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0031E1D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0031E214; } }
L_0031E1D8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E1E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031E1E4u) [[unlikely]] return; }
L_0031E1E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_0031E204; } }
L_0031E1F4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0031E204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0031E210; } }
L_0031E204:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E1F4u | kUnwind; return; } goto L_0031E1F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031E210:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0031E214:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0031E268; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0031E254; } }
L_0031E224:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 212u)));  goto L_0031E234; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0031E240; } }
L_0031E234:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_0031E240:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0031E254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E250u);  if (depth < kMaxDepth) unit_0087(c, 218u, depth + 1u); else { c.pc = 0x0031E110u; return; } if (c.pc != 0x0031E250u) [[unlikely]] return; }
L_0031E250:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0031E254:
    c.r[4].d[0] = ld16((c.r[17].w[0] + 218u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E224u | kUnwind; return; } goto L_0031E224; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0031E268:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031E280:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0031E2B4; } }
    st32((c.r[17].w[0] + 28u), c.f[12]);
    c.budget -= 1;
L_0031E2B4:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = fp::sub(c.f[12], c.f[1]);  goto L_0031E2E4; }
    st32((c.r[17].w[0] + 36u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 8u));
    c.f[3] = 0u;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[3] = c.f[12];  goto L_0031E2E4; }
L_0031E2E4:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[17].w[0] + 36u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[17].w[0] + 32u), c.f[12]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    c.f[20] = fp::add(c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 6ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E320u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031E320u) [[unlikely]] return; }
L_0031E320:
    set32(c.r[2], ld32((c.r[28].w[0] - 27500u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 27500u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E334u); c.r[18].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031E334u) [[unlikely]] return; }
L_0031E334:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.f[2] = ld32((c.r[17].w[0] + 24u));  goto L_0031E348; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E344u); set32(c.r[4], ld32((c.r[28].w[0] - 27504u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0031E344u) [[unlikely]] return; }
L_0031E344:
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 1;
L_0031E348:
    c.f[0] = ld32((c.r[28].w[0] - 27496u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 24u));  goto L_0031E3C8; }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 27492u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031E3C4; } }
    c.f[0] = ld32((c.r[28].w[0] - 27488u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031E3C4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30600u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_0031E3C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E390u); c.f[20] = ld32((c.r[28].w[0] - 27484u));  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031E390u) [[unlikely]] return; }
L_0031E390:
    set32(c.r[2], ld32((c.r[28].w[0] - 27500u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[28].w[0] - 27500u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E3A8u); c.r[16].d[0] = c.r[16].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031E3A8u) [[unlikely]] return; }
L_0031E3A8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[0] = c.f[20];  goto L_0031E540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E3B8u); set32(c.r[4], ld32((c.r[28].w[0] - 27504u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0031E3B8u) [[unlikely]] return; }
L_0031E3B8:
    c.f[0] = c.f[20];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E540; } }
L_0031E3C4:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 1;
L_0031E3C8:
    st32((c.r[28].w[0] - 30600u), c.r[16].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[28].w[0] - 27496u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    st32((c.r[28].w[0] - 27488u), c.f[20]);
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[28].w[0] - 27492u), c.f[2]);  if (t) { goto L_0031E4C4; } }
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 24u));  goto L_0031E4C8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0031E4C4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.f[21] = fp::sub(c.f[1], c.f[2]);  goto L_0031E45C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[21] = fp::sub(c.f[1], c.f[2]);  goto L_0031E420; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0031E4C4; } }
L_0031E420:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[2];  goto L_0031E4C4; }
    c.f[12] = fp::sub(c.f[20], c.f[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E440u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x0031E440u) [[unlikely]] return; }
L_0031E440:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[20] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031E4C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[21]);  if (t) { goto L_0031E4C4; } }
L_0031E45C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[2];  goto L_0031E4C4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.f[20];
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[0], c.f[21]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E48Cu); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x0031E48Cu) [[unlikely]] return; }
L_0031E48C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031E4A4; } }
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 1;
L_0031E4A4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 20u));  goto L_0031E4C0; }
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_0031E4C4; } }
L_0031E4C0:
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 1;
L_0031E4C4:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 1;
L_0031E4C8:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[17].w[0] + 20u));  goto L_0031E4DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_0031E4EC; } }
L_0031E4DC:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));  goto L_0031E4F0; }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0031E4EC:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8u));
    c.budget -= 1;
L_0031E4F0:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 27484u), c.f[20]);  goto L_0031E50C; }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[28].w[0] - 27484u), c.f[20]);
    c.budget -= 4;
L_0031E50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E514u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031E514u) [[unlikely]] return; }
L_0031E514:
    set32(c.r[2], ld32((c.r[28].w[0] - 27500u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[16].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[28].w[0] - 27500u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E52Cu); c.r[16].d[0] = c.r[16].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031E52Cu) [[unlikely]] return; }
L_0031E52C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[0] = c.f[20];  goto L_0031E540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E53Cu); set32(c.r[4], ld32((c.r[28].w[0] - 27504u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0031E53Cu) [[unlikely]] return; }
L_0031E53C:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_0031E540:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031E560:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 65527ull;
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0031E58C; } }
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.budget -= 1;
L_0031E58C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031E5A0:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] | 8ull;
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0031E5CC; } }
    st32((c.r[4].w[0] + 28u), c.f[12]);
    c.budget -= 1;
L_0031E5CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031E5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031E5F0; } }
L_0031E5E8:
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0031E5F0:
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E5E8u | kUnwind; return; } goto L_0031E5E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031E610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031E6AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 18432u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0031E684; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0031E688; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E658u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031E658u) [[unlikely]] return; }
L_0031E658:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E668u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031E668u) [[unlikely]] return; }
L_0031E668:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E684; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E684u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031E684u) [[unlikely]] return; }
L_0031E684:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031E688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E690u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0031E690u) [[unlikely]] return; }
L_0031E690:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0031E6B0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E6ACu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031E6ACu) [[unlikely]] return; }
L_0031E6AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031E6B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031E6D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E6E8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0031E6E8u) [[unlikely]] return; }
L_0031E6E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 18432u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), c.f[1]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 19;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_0031E74C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E73Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0031E73Cu) [[unlikely]] return; }
L_0031E73C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E74Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0031E74Cu) [[unlikely]] return; }
L_0031E74C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 8u));
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u - 7u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 65519ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031E7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E7ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 45u, depth + 1u); else { c.pc = 0x0027CA50u; return; } if (c.pc != 0x0031E7ECu) [[unlikely]] return; }
L_0031E7EC:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E7F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x0031E7F8u) [[unlikely]] return; }
L_0031E7F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E804u); set32(c.r[5], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0031E804u) [[unlikely]] return; }
L_0031E804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031E820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E83Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 49u, depth + 1u); else { c.pc = 0x0027CAE0u; return; } if (c.pc != 0x0031E83Cu) [[unlikely]] return; }
L_0031E83C:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E848u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x0031E848u) [[unlikely]] return; }
L_0031E848:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E854u); set32(c.r[5], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0031E854u) [[unlikely]] return; }
L_0031E854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031E870:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E894u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 66u, depth + 1u); else { c.pc = 0x0027CE60u; return; } if (c.pc != 0x0031E894u) [[unlikely]] return; }
L_0031E894:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0031E8A0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031E8A0u | kUnwind; return; } goto L_0031E8A0; } }
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E904u); st32((c.r[29].w[0] + 104u), c.f[2]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x0031E904u) [[unlikely]] return; }
L_0031E904:
    c.f[3] = ld32((c.r[16].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0031E940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031E96Cu); c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 79u, depth + 1u); else { c.pc = 0x0027D700u; return; } if (c.pc != 0x0031E96Cu) [[unlikely]] return; }
L_0031E96C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E9E8; } }
    c.f[1] = ld32((c.r[19].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031E998; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031E998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031E9B8; } }
    c.f[1] = ld32((c.r[19].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031E9B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031E9B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0031E9DC; }
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031E9D8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031E9D8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0031E9DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031E9E8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031E9E8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0031EA0C; }
    c.f[1] = ld32((c.r[19].w[0] + 60u));
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0031EA08; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031EA08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031EA0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0031EA30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EA44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 92u, depth + 1u); else { c.pc = 0x0027DB50u; return; } if (c.pc != 0x0031EA44u) [[unlikely]] return; }
L_0031EA44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31024u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    st32((c.r[16].w[0] + 60u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 18128u);  c.pc = t; return; }
L_0031EA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EAA4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 434u, depth + 1u); else { c.pc = 0x002A3E80u; return; } if (c.pc != 0x0031EAA4u) [[unlikely]] return; }
L_0031EAA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EAB0u); set32(c.r[4], ld32((c.r[2].w[0] - 18128u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0031EAB0u) [[unlikely]] return; }
L_0031EAB0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EAC4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031EAC4u) [[unlikely]] return; }
L_0031EAC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031EAE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3ED0u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 438u, depth); }
L_0031EAF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3F90u | kUnwind; return; } [[clang::musttail]] return unit_0068(c, 442u, depth); }
L_0031EB00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4080u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 8u, depth); }
L_0031EB10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4150u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 14u, depth); }
L_0031EB20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4290u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 28u, depth); }
L_0031EB30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4860u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 76u, depth); }
L_0031EB40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A5190u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 141u, depth); }
L_0031EB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031EB9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EB80u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 225u, depth + 1u); else { c.pc = 0x002A5BA0u; return; } if (c.pc != 0x0031EB80u) [[unlikely]] return; }
L_0031EB80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0031EBA0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EB9Cu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031EB9Cu) [[unlikely]] return; }
L_0031EB9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031EBA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031EBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EBD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 260u, depth + 1u); else { c.pc = 0x002A5F50u; return; } if (c.pc != 0x0031EBD4u) [[unlikely]] return; }
L_0031EBD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18560u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EC00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EC14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 272u, depth + 1u); else { c.pc = 0x002A6060u; return; } if (c.pc != 0x0031EC14u) [[unlikely]] return; }
L_0031EC14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18560u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 18104u);  c.pc = t; return; }
L_0031EC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EC6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 290u, depth + 1u); else { c.pc = 0x002A6280u; return; } if (c.pc != 0x0031EC6Cu) [[unlikely]] return; }
L_0031EC6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EC78u); set32(c.r[4], ld32((c.r[2].w[0] - 18104u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0031EC78u) [[unlikely]] return; }
L_0031EC78:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EC8Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031EC8Cu) [[unlikely]] return; }
L_0031EC8C:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 80u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EC9Cu); set32(c.r[4], c.r[4].w[0] - 18096u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x0031EC9Cu) [[unlikely]] return; }
L_0031EC9C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ECB0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031ECB0u) [[unlikely]] return; }
L_0031ECB0:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 82u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ECC0u); set32(c.r[4], c.r[4].w[0] - 18082u);  if (depth < kMaxDepth) unit_0088(c, 241u, depth + 1u); else { c.pc = 0x00321C40u; return; } if (c.pc != 0x0031ECC0u) [[unlikely]] return; }
L_0031ECC0:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ECD4u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031ECD4u) [[unlikely]] return; }
L_0031ECD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031ECF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ED0Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 321u, depth + 1u); else { c.pc = 0x002A64D0u; return; } if (c.pc != 0x0031ED0Cu) [[unlikely]] return; }
L_0031ED0C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 80u));  goto L_0031ED1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031ED3C; } }
L_0031ED1C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 80u));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031ED3C; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 82u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 82u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0031ED3C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031ED3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031ED50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ED6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 329u, depth + 1u); else { c.pc = 0x002A69A0u; return; } if (c.pc != 0x0031ED6Cu) [[unlikely]] return; }
L_0031ED6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031ED78u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0031ED78u) [[unlikely]] return; }
L_0031ED78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031ED90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6B70u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 347u, depth); }
L_0031EDA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A6BE0u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 350u, depth); }
L_0031EDB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EDCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 358u, depth + 1u); else { c.pc = 0x002A6CB0u; return; } if (c.pc != 0x0031EDCCu) [[unlikely]] return; }
L_0031EDCC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EDD8u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0031EDD8u) [[unlikely]] return; }
L_0031EDD8:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 80u));
    st16((c.r[17].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031EE00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031EE10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0031EE20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031EE6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EE50u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 461u, depth + 1u); else { c.pc = 0x002A7D40u; return; } if (c.pc != 0x0031EE50u) [[unlikely]] return; }
L_0031EE50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0031EE70; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EE6Cu); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031EE6Cu) [[unlikely]] return; }
L_0031EE6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031EE70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031EE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EEA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 486u, depth + 1u); else { c.pc = 0x002A7FD0u; return; } if (c.pc != 0x0031EEA4u) [[unlikely]] return; }
L_0031EEA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18736u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EEE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 6u, depth + 1u); else { c.pc = 0x002A80B0u; return; } if (c.pc != 0x0031EEE4u) [[unlikely]] return; }
L_0031EEE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] + 18736u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031EF10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 18040u);  c.pc = t; return; }
L_0031EF20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EF34u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 272u, depth + 1u); else { c.pc = 0x0031EA90u; return; } if (c.pc != 0x0031EF34u) [[unlikely]] return; }
L_0031EF34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EF40u); set32(c.r[4], ld32((c.r[2].w[0] - 18040u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0031EF40u) [[unlikely]] return; }
L_0031EF40:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EF54u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031EF54u) [[unlikely]] return; }
L_0031EF54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031EF70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EAE0u | kUnwind; return; } goto L_0031EAE0; }
L_0031EF80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EAF0u | kUnwind; return; } goto L_0031EAF0; }
L_0031EF90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EB00u | kUnwind; return; } goto L_0031EB00; }
L_0031EFA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EB10u | kUnwind; return; } goto L_0031EB10; }
L_0031EFB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EB20u | kUnwind; return; } goto L_0031EB20; }
L_0031EFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 256u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EFD8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0031EFD8u) [[unlikely]] return; }
L_0031EFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031EFF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031EFE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 286u, depth + 1u); else { c.pc = 0x0031EBC0u; return; } if (c.pc != 0x0031EFE8u) [[unlikely]] return; }
L_0031EFE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 18848u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0031EFF4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F010:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EB30u | kUnwind; return; } goto L_0031EB30; }
L_0031F020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F048u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0031F048u) [[unlikely]] return; }
L_0031F048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031F064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 286u, depth + 1u); else { c.pc = 0x0031EBC0u; return; } if (c.pc != 0x0031F058u) [[unlikely]] return; }
L_0031F058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 18848u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0031F064:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F074u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 281u, depth + 1u); else { c.pc = 0x0031EB30u; return; } if (c.pc != 0x0031F074u) [[unlikely]] return; }
L_0031F074:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031F090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F0ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 219u, depth + 1u); else { c.pc = 0x002A5AC0u; return; } if (c.pc != 0x0031F0ACu) [[unlikely]] return; }
L_0031F0AC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 388u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F0C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031F0C0u) [[unlikely]] return; }
L_0031F0C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031F0E0:
    set32(c.r[9], ld32((c.r[4].w[0] + 220u)));
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[10], ld32((c.r[9].w[0] + 100u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[9], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[10].w[0] + c.r[4].w[0]);
    c.r[10].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    st32((c.r[6].w[0]), c.r[9].w[0]);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0031F170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F184u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 286u, depth + 1u); else { c.pc = 0x0031EBC0u; return; } if (c.pc != 0x0031F184u) [[unlikely]] return; }
L_0031F184:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18848u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F1C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031EC00u; return; } if (c.pc != 0x0031F1C4u) [[unlikely]] return; }
L_0031F1C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18848u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F1F0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
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
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], 0u + 128u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0031F244u) [[unlikely]] return; }
L_0031F244:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_0031F284; }
    c.r[12].d[0] = ld16((c.r[29].w[0] + 160u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[12].d[0]);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[11].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F280u); st64((c.r[29].w[0] + 8u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0087(c, 427u, depth + 1u); else { c.pc = 0x0031FBD0u; return; } if (c.pc != 0x0031F280u) [[unlikely]] return; }
L_0031F280:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0031F284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F28Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 288u, depth + 1u); else { c.pc = 0x0031EC00u; return; } if (c.pc != 0x0031F28Cu) [[unlikely]] return; }
L_0031F28C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 18848u);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0031F2D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 18016u);  c.pc = t; return; }
L_0031F2E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F2FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 291u, depth + 1u); else { c.pc = 0x0031EC50u; return; } if (c.pc != 0x0031F2FCu) [[unlikely]] return; }
L_0031F2FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F308u); set32(c.r[4], ld32((c.r[2].w[0] - 18016u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0031F308u) [[unlikely]] return; }
L_0031F308:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F31Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031F31Cu) [[unlikely]] return; }
L_0031F31C:
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F32Cu); set32(c.r[4], c.r[4].w[0] - 18000u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0031F32Cu) [[unlikely]] return; }
L_0031F32C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F340u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031F340u) [[unlikely]] return; }
L_0031F340:
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F350u); set32(c.r[4], c.r[4].w[0] - 17982u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x0031F350u) [[unlikely]] return; }
L_0031F350:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F364u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031F364u) [[unlikely]] return; }
L_0031F364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031F380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F39Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 299u, depth + 1u); else { c.pc = 0x0031ECF0u; return; } if (c.pc != 0x0031F39Cu) [[unlikely]] return; }
L_0031F39C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 96u)));  goto L_0031F3AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031F408; } }
L_0031F3AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  goto L_0031F3C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031F408; } }
L_0031F3C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0031F3DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031F3DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0031F408; } }
L_0031F3DC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031F408; }
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0031F404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F3F8u); set32(c.r[6], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0031F3F8u) [[unlikely]] return; }
L_0031F3F8:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0031F408; } }
L_0031F404:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031F408:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031F420:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F444u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 301u, depth + 1u); else { c.pc = 0x0031ED50u; return; } if (c.pc != 0x0031F444u) [[unlikely]] return; }
L_0031F444:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F450u); set32(c.r[5], c.r[19].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0031F450u) [[unlikely]] return; }
L_0031F450:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 95u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F468u); st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0031F468u) [[unlikely]] return; }
L_0031F468:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 95u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0031F488; }
    set32(c.r[5], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F484u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 195u, depth + 1u); else { c.pc = 0x002CDE10u; return; } if (c.pc != 0x0031F484u) [[unlikely]] return; }
L_0031F484:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0031F488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F490u); set32(c.r[5], c.r[19].w[0] + 108u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0031F490u) [[unlikely]] return; }
L_0031F490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0031F4E4; } }
L_0031F498:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 3);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F4B8u); st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0031F4B8u) [[unlikely]] return; }
L_0031F4B8:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 92u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 1u);  goto L_0031F4E0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F4DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 195u, depth + 1u); else { c.pc = 0x002CDE10u; return; } if (c.pc != 0x0031F4DCu) [[unlikely]] return; }
L_0031F4DC:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0031F4E0:
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_0031F4E4:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 108u));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F498u | kUnwind; return; } goto L_0031F498; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0031F520:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031ED90u | kUnwind; return; } goto L_0031ED90; }
L_0031F530:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031EDA0u | kUnwind; return; } goto L_0031EDA0; }
L_0031F540:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F568u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 306u, depth + 1u); else { c.pc = 0x0031EDB0u; return; } if (c.pc != 0x0031F568u) [[unlikely]] return; }
L_0031F568:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F574u); set32(c.r[5], c.r[20].w[0] + 96u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0031F574u) [[unlikely]] return; }
L_0031F574:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F580u); set32(c.r[5], c.r[29].w[0] + 111u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x0031F580u) [[unlikely]] return; }
L_0031F580:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0031F5BC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0031F5B8; } }
    set32(c.r[4], c.r[2].w[0] << 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F5A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0031F5A4u) [[unlikely]] return; }
L_0031F5A4:
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F5B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 197u, depth + 1u); else { c.pc = 0x002CDE30u; return; } if (c.pc != 0x0031F5B8u) [[unlikely]] return; }
L_0031F5B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0031F5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F5C4u); set32(c.r[5], c.r[20].w[0] + 108u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0031F5C4u) [[unlikely]] return; }
L_0031F5C4:
    c.r[16].d[0] = ld16((c.r[20].w[0] + 108u));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0031F760; }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F5E0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0031F5E0u) [[unlikely]] return; }
L_0031F5E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2176u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F5FCu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0031F5FCu) [[unlikely]] return; }
L_0031F5FC:
    st32((c.r[20].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F60Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0031F60Cu) [[unlikely]] return; }
L_0031F60C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 112u), c.r[17].w[0]);  goto L_0031F640; }
    c.r[16].d[0] = ld16((c.r[20].w[0] + 108u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F628u); set32(c.r[4], c.r[16].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0031F628u) [[unlikely]] return; }
L_0031F628:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[20].w[0] + 112u), c.r[17].w[0]);
    c.budget -= 6;
L_0031F640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0031F748; } }
L_0031F648:
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F654u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0031F654u) [[unlikely]] return; }
L_0031F654:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 108u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] & 65535ull;  goto L_0031F714; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 112u)));  if (t) { goto L_0031F67C; } }
L_0031F668:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0031F688; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0031F67C:
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F668u | kUnwind; return; } goto L_0031F668; } }
L_0031F688:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[6].d[0] = ld16((c.r[29].w[0] + 108u));  goto L_0031F6E4; }
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F69Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0031F69Cu) [[unlikely]] return; }
L_0031F69C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 112u)));  goto L_0031F6D8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 112u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[17], c.r[2].w[0] << 1);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F6C0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0031F6C0u) [[unlikely]] return; }
L_0031F6C0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 112u)));
    c.budget -= 6;
L_0031F6D8:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 112u), c.r[16].w[0]);
    c.r[6].d[0] = ld16((c.r[29].w[0] + 108u));
    c.budget -= 3;
L_0031F6E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F710u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 197u, depth + 1u); else { c.pc = 0x002CDE30u; return; } if (c.pc != 0x0031F710u) [[unlikely]] return; }
L_0031F710:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 1;
L_0031F714:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 108u));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0031F730; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  goto L_0031F73C; }
L_0031F730:
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_0031F740; } }
L_0031F73C:
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0031F740:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_0031F748:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 108u));
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F648u | kUnwind; return; } goto L_0031F648; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0031F760:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0031F780:
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_0031F790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F7A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0031F7A8u) [[unlikely]] return; }
L_0031F7A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031F7D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F7B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 314u, depth + 1u); else { c.pc = 0x0031EE90u; return; } if (c.pc != 0x0031F7B8u) [[unlikely]] return; }
L_0031F7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 19024u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st16((c.r[16].w[0] + 108u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 112u), 0u);
    c.budget -= 8;
L_0031F7D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031F7F0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 80u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[6].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 80u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0031F820:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0031F9AC; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F864u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031F864u) [[unlikely]] return; }
L_0031F864:
    set32(c.r[20], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 174u)));  goto L_0031F994; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F87Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031F87Cu) [[unlikely]] return; }
L_0031F87C:
    set32(c.r[19], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0031F988; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F894u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031F894u) [[unlikely]] return; }
L_0031F894:
    set32(c.r[18], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0031F97C; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F8ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031F8ACu) [[unlikely]] return; }
L_0031F8AC:
    set32(c.r[17], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0031F970; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F8C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031F8C4u) [[unlikely]] return; }
L_0031F8C4:
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0031F964; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F8DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031F8DCu) [[unlikely]] return; }
L_0031F8DC:
    set32(c.r[22], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[22].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0031F958; }
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F8F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031F8F4u) [[unlikely]] return; }
L_0031F8F4:
    set32(c.r[23], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[23].d[0] == 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_0031F94C; }
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F90Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031F90Cu) [[unlikely]] return; }
L_0031F90C:
    set32(c.r[30], ld32((c.r[23].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[30].d[0] == 0ull) { c.r[4].d[0] = c.r[23].d[0] + 0ull;  goto L_0031F940; }
    set32(c.r[4], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F924u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031F924u) [[unlikely]] return; }
L_0031F924:
    set32(c.r[4], ld32((c.r[30].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F930u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 393u, depth + 1u); else { c.pc = 0x0031F820u; return; } if (c.pc != 0x0031F930u) [[unlikely]] return; }
L_0031F930:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F93Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031F93Cu) [[unlikely]] return; }
L_0031F93C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_0031F940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F948u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031F948u) [[unlikely]] return; }
L_0031F948:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0031F94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F954u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031F954u) [[unlikely]] return; }
L_0031F954:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0031F958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F960u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031F960u) [[unlikely]] return; }
L_0031F960:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031F964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F96Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031F96Cu) [[unlikely]] return; }
L_0031F96C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0031F970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F978u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031F978u) [[unlikely]] return; }
L_0031F978:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0031F97C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F984u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031F984u) [[unlikely]] return; }
L_0031F984:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0031F988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F990u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031F990u) [[unlikely]] return; }
L_0031F990:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 174u)));
    c.budget -= 1;
L_0031F994:
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_0031F9B0; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031F9ACu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031F9ACu) [[unlikely]] return; }
L_0031F9AC:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0031F9B0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0031F9E0:
    c.r[9].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[5], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[11], c.r[5].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[9], c.r[11].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[10].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], c.r[11].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0031FA40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031FA70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FA70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031FA70u) [[unlikely]] return; }
L_0031FA70:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FA84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031FA84u) [[unlikely]] return; }
L_0031FA84:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 80u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 100u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031FAB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031FB58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 19024u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FAE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031FAE8u) [[unlikely]] return; }
L_0031FAE8:
    set32(c.r[16], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 104u)));  goto L_0031FB1C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0031FB00u) [[unlikely]] return; }
L_0031FB00:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 393u, depth + 1u); else { c.pc = 0x0031F820u; return; } if (c.pc != 0x0031FB0Cu) [[unlikely]] return; }
L_0031FB0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB18u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031FB18u) [[unlikely]] return; }
L_0031FB18:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 1;
L_0031FB1C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB30u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0031FB30u) [[unlikely]] return; }
L_0031FB30:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 311u, depth + 1u); else { c.pc = 0x0031EE20u; return; } if (c.pc != 0x0031FB3Cu) [[unlikely]] return; }
L_0031FB3C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0031FB5C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB58u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031FB58u) [[unlikely]] return; }
L_0031FB58:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0031FB5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031FB80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FB94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 314u, depth + 1u); else { c.pc = 0x0031EE90u; return; } if (c.pc != 0x0031FB94u) [[unlikely]] return; }
L_0031FB94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 19024u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st16((c.r[16].w[0] + 108u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031FBD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 48u));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FBECu); st64((c.r[29].w[0]), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0087(c, 316u, depth + 1u); else { c.pc = 0x0031EED0u; return; } if (c.pc != 0x0031FBECu) [[unlikely]] return; }
L_0031FBEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 19024u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 80u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    st16((c.r[16].w[0] + 108u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031FC30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031FC7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 19136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FC60u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 417u, depth + 1u); else { c.pc = 0x0031FAB0u; return; } if (c.pc != 0x0031FC60u) [[unlikely]] return; }
L_0031FC60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0031FC80; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FC7Cu); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031FC7Cu) [[unlikely]] return; }
L_0031FC7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031FC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031FCA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 17952u);  c.pc = t; return; }
L_0031FCB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0031FCC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 82u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0031FCD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0031FCE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0031FCF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD04u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 349u, depth + 1u); else { c.pc = 0x0031F2E0u; return; } if (c.pc != 0x0031FD04u) [[unlikely]] return; }
L_0031FD04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD10u); set32(c.r[4], ld32((c.r[2].w[0] - 17952u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0031FD10u) [[unlikely]] return; }
L_0031FD10:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD24u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0031FD24u) [[unlikely]] return; }
L_0031FD24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031FD40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FD5Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 357u, depth + 1u); else { c.pc = 0x0031F380u; return; } if (c.pc != 0x0031FD5Cu) [[unlikely]] return; }
L_0031FD5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 48u));  goto L_0031FD6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0031FD8C; } }
L_0031FD6C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 48u));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0031FD8C; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 82u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 82u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0031FD8C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0031FD8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031FDA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FDBCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 360u, depth + 1u); else { c.pc = 0x0031F420u; return; } if (c.pc != 0x0031FDBCu) [[unlikely]] return; }
L_0031FDBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FDC8u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0031FDC8u) [[unlikely]] return; }
L_0031FDC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FDD4u); set32(c.r[5], c.r[17].w[0] + 82u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0031FDD4u) [[unlikely]] return; }
L_0031FDD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031FDF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F520u | kUnwind; return; } goto L_0031F520; }
L_0031FE00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0031F530u | kUnwind; return; } goto L_0031F530; }
L_0031FE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FE2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 371u, depth + 1u); else { c.pc = 0x0031F540u; return; } if (c.pc != 0x0031FE2Cu) [[unlikely]] return; }
L_0031FE2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FE38u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0031FE38u) [[unlikely]] return; }
L_0031FE38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FE44u); set32(c.r[5], c.r[17].w[0] + 82u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0031FE44u) [[unlikely]] return; }
L_0031FE44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031FE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 128u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FE78u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0031FE78u) [[unlikely]] return; }
L_0031FE78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0031FE9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FE88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 425u, depth + 1u); else { c.pc = 0x0031FB80u; return; } if (c.pc != 0x0031FE88u) [[unlikely]] return; }
L_0031FE88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 19136u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 82u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
L_0031FE9C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0031FEB0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 82u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[6].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 82u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0031FEE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[29].w[0] + 88u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.r[5].d[0] = ld16((c.r[29].w[0] + 80u));
    st64((c.r[29].w[0]), c.r[3].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FF10u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0087(c, 427u, depth + 1u); else { c.pc = 0x0031FBD0u; return; } if (c.pc != 0x0031FF10u) [[unlikely]] return; }
L_0031FF10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 80u));
    set32(c.r[2], c.r[2].w[0] + 19136u);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 88u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[29].w[0] + 64u));
    st16((c.r[17].w[0] + 82u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[17].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 80u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0031FF60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0031FFAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 19248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FF90u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 283u, depth + 1u); else { c.pc = 0x0031EB50u; return; } if (c.pc != 0x0031FF90u) [[unlikely]] return; }
L_0031FF90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0031FFB0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FFACu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0031FFACu) [[unlikely]] return; }
L_0031FFAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0031FFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0031FFD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 17912u);  c.pc = t; return; }
L_0031FFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031FFF4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 272u, depth + 1u); else { c.pc = 0x0031EA90u; return; } if (c.pc != 0x0031FFF4u) [[unlikely]] return; }
L_0031FFF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00320000u); set32(c.r[4], ld32((c.r[2].w[0] - 17912u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00320000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0088(c, 1u, depth);
}

}
