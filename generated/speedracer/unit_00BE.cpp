#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BE[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285,
    0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 304,
    0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0,
    0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0,
    0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0,
    0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0,
    0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F8000;
    case 2u: goto L_003F8004;
    case 3u: goto L_003F8020;
    case 4u: goto L_003F8024;
    case 5u: goto L_003F8034;
    case 6u: goto L_003F803C;
    case 7u: goto L_003F80A0;
    case 8u: goto L_003F8114;
    case 9u: goto L_003F8148;
    case 10u: goto L_003F8350;
    case 11u: goto L_003F839C;
    case 12u: goto L_003F8448;
    case 13u: goto L_003F85D8;
    case 14u: goto L_003F8608;
    case 15u: goto L_003F8650;
    case 16u: goto L_003F8694;
    case 17u: goto L_003F86D0;
    case 18u: goto L_003F86E4;
    case 19u: goto L_003F873C;
    case 20u: goto L_003F8748;
    case 21u: goto L_003F8754;
    case 22u: goto L_003F8790;
    case 23u: goto L_003F87B4;
    case 24u: goto L_003F87D0;
    case 25u: goto L_003F87F4;
    case 26u: goto L_003F880C;
    case 27u: goto L_003F8830;
    case 28u: goto L_003F8840;
    case 29u: goto L_003F8864;
    case 30u: goto L_003F8870;
    case 31u: goto L_003F8880;
    case 32u: goto L_003F88C8;
    case 33u: goto L_003F890C;
    case 34u: goto L_003F893C;
    case 35u: goto L_003F8980;
    case 36u: goto L_003F89B0;
    case 37u: goto L_003F89F4;
    case 38u: goto L_003F8A10;
    case 39u: goto L_003F8A28;
    case 40u: goto L_003F8A48;
    case 41u: goto L_003F8A98;
    case 42u: goto L_003F8AAC;
    case 43u: goto L_003F8AC0;
    case 44u: goto L_003F8AE0;
    case 45u: goto L_003F8B10;
    case 46u: goto L_003F8B28;
    case 47u: goto L_003F8B50;
    case 48u: goto L_003F8B88;
    case 49u: goto L_003F8BA8;
    case 50u: goto L_003F8BD0;
    case 51u: goto L_003F8C00;
    case 52u: goto L_003F8C50;
    case 53u: goto L_003F8CA4;
    case 54u: goto L_003F8CF8;
    case 55u: goto L_003F8D20;
    case 56u: goto L_003F8D4C;
    case 57u: goto L_003F8D5C;
    case 58u: goto L_003F8D70;
    case 59u: goto L_003F8D80;
    case 60u: goto L_003F8DA4;
    case 61u: goto L_003F8DC4;
    case 62u: goto L_003F8DFC;
    case 63u: goto L_003F8E30;
    case 64u: goto L_003F8E50;
    case 65u: goto L_003F8E88;
    case 66u: goto L_003F8ED0;
    case 67u: goto L_003F8F48;
    case 68u: goto L_003F8F94;
    case 69u: goto L_003F8FA8;
    case 70u: goto L_003F8FC8;
    case 71u: goto L_003F8FE0;
    case 72u: goto L_003F8FEC;
    case 73u: goto L_003F8FF8;
    case 74u: goto L_003F9008;
    case 75u: goto L_003F9024;
    case 76u: goto L_003F9030;
    case 77u: goto L_003F9038;
    case 78u: goto L_003F9044;
    case 79u: goto L_003F9144;
    case 80u: goto L_003F9190;
    case 81u: goto L_003F91B0;
    case 82u: goto L_003F91EC;
    case 83u: goto L_003F9208;
    case 84u: goto L_003F9224;
    case 85u: goto L_003F9244;
    case 86u: goto L_003F924C;
    case 87u: goto L_003F9290;
    case 88u: goto L_003F9304;
    case 89u: goto L_003F9348;
    case 90u: goto L_003F9358;
    case 91u: goto L_003F9378;
    case 92u: goto L_003F9388;
    case 93u: goto L_003F93B4;
    case 94u: goto L_003F93E8;
    case 95u: goto L_003F942C;
    case 96u: goto L_003F943C;
    case 97u: goto L_003F945C;
    case 98u: goto L_003F946C;
    case 99u: goto L_003F9498;
    case 100u: goto L_003F94C0;
    case 101u: goto L_003F94C8;
    case 102u: goto L_003F94F4;
    case 103u: goto L_003F9504;
    case 104u: goto L_003F9530;
    case 105u: goto L_003F9548;
    case 106u: goto L_003F9570;
    case 107u: goto L_003F9580;
    case 108u: goto L_003F958C;
    case 109u: goto L_003F95A0;
    case 110u: goto L_003F95BC;
    case 111u: goto L_003F95D0;
    case 112u: goto L_003F95E0;
    case 113u: goto L_003F95F0;
    case 114u: goto L_003F9608;
    case 115u: goto L_003F9630;
    case 116u: goto L_003F964C;
    case 117u: goto L_003F966C;
    case 118u: goto L_003F9690;
    case 119u: goto L_003F96C4;
    case 120u: goto L_003F96E8;
    case 121u: goto L_003F9700;
    case 122u: goto L_003F9720;
    case 123u: goto L_003F9744;
    case 124u: goto L_003F9778;
    case 125u: goto L_003F979C;
    case 126u: goto L_003F97B4;
    case 127u: goto L_003F97D4;
    case 128u: goto L_003F97F8;
    case 129u: goto L_003F982C;
    case 130u: goto L_003F9850;
    case 131u: goto L_003F9868;
    case 132u: goto L_003F9888;
    case 133u: goto L_003F98AC;
    case 134u: goto L_003F98E0;
    case 135u: goto L_003F9904;
    case 136u: goto L_003F991C;
    case 137u: goto L_003F993C;
    case 138u: goto L_003F9960;
    case 139u: goto L_003F9994;
    case 140u: goto L_003F99B8;
    case 141u: goto L_003F99D0;
    case 142u: goto L_003F99F0;
    case 143u: goto L_003F9A14;
    case 144u: goto L_003F9A48;
    case 145u: goto L_003F9A6C;
    case 146u: goto L_003F9A84;
    case 147u: goto L_003F9AA4;
    case 148u: goto L_003F9AC8;
    case 149u: goto L_003F9AF8;
    case 150u: goto L_003F9B1C;
    case 151u: goto L_003F9B40;
    case 152u: goto L_003F9B9C;
    case 153u: goto L_003F9BDC;
    case 154u: goto L_003F9C1C;
    case 155u: goto L_003F9C34;
    case 156u: goto L_003F9C50;
    case 157u: goto L_003F9C88;
    case 158u: goto L_003F9C9C;
    case 159u: goto L_003F9CB0;
    case 160u: goto L_003F9CD8;
    case 161u: goto L_003F9CEC;
    case 162u: goto L_003F9D00;
    case 163u: goto L_003F9D28;
    case 164u: goto L_003F9D3C;
    case 165u: goto L_003F9D50;
    case 166u: goto L_003F9D90;
    case 167u: goto L_003F9DE8;
    case 168u: goto L_003F9E00;
    case 169u: goto L_003F9E20;
    case 170u: goto L_003F9E78;
    case 171u: goto L_003F9E90;
    case 172u: goto L_003F9EB0;
    case 173u: goto L_003F9F08;
    case 174u: goto L_003F9F20;
    case 175u: goto L_003F9F40;
    case 176u: goto L_003F9F98;
    case 177u: goto L_003F9FB0;
    case 178u: goto L_003F9FD0;
    case 179u: goto L_003FA028;
    case 180u: goto L_003FA040;
    case 181u: goto L_003FA060;
    case 182u: goto L_003FA0B8;
    case 183u: goto L_003FA0D0;
    case 184u: goto L_003FA0F0;
    case 185u: goto L_003FA148;
    case 186u: goto L_003FA160;
    case 187u: goto L_003FA180;
    case 188u: goto L_003FA1C0;
    case 189u: goto L_003FA1D0;
    case 190u: goto L_003FA200;
    case 191u: goto L_003FA20C;
    case 192u: goto L_003FA224;
    case 193u: goto L_003FA234;
    case 194u: goto L_003FA250;
    case 195u: goto L_003FA290;
    case 196u: goto L_003FA2A0;
    case 197u: goto L_003FA2D0;
    case 198u: goto L_003FA2DC;
    case 199u: goto L_003FA2F4;
    case 200u: goto L_003FA304;
    case 201u: goto L_003FA320;
    case 202u: goto L_003FA360;
    case 203u: goto L_003FA370;
    case 204u: goto L_003FA3A0;
    case 205u: goto L_003FA3AC;
    case 206u: goto L_003FA3C4;
    case 207u: goto L_003FA3D4;
    case 208u: goto L_003FA3F0;
    case 209u: goto L_003FA430;
    case 210u: goto L_003FA440;
    case 211u: goto L_003FA470;
    case 212u: goto L_003FA47C;
    case 213u: goto L_003FA494;
    case 214u: goto L_003FA4A4;
    case 215u: goto L_003FA4C0;
    case 216u: goto L_003FA500;
    case 217u: goto L_003FA510;
    case 218u: goto L_003FA540;
    case 219u: goto L_003FA54C;
    case 220u: goto L_003FA564;
    case 221u: goto L_003FA574;
    case 222u: goto L_003FA590;
    case 223u: goto L_003FA5D0;
    case 224u: goto L_003FA5E0;
    case 225u: goto L_003FA620;
    case 226u: goto L_003FA630;
    case 227u: goto L_003FA654;
    case 228u: goto L_003FA660;
    case 229u: goto L_003FA684;
    case 230u: goto L_003FA690;
    case 231u: goto L_003FA6B4;
    case 232u: goto L_003FA6C0;
    case 233u: goto L_003FA6FC;
    case 234u: goto L_003FA70C;
    case 235u: goto L_003FA734;
    case 236u: goto L_003FA758;
    case 237u: goto L_003FA774;
    case 238u: goto L_003FA798;
    case 239u: goto L_003FA7B0;
    case 240u: goto L_003FA7C0;
    case 241u: goto L_003FA7E0;
    case 242u: goto L_003FA7F0;
    case 243u: goto L_003FA800;
    case 244u: goto L_003FA820;
    case 245u: goto L_003FA85C;
    case 246u: goto L_003FA86C;
    case 247u: goto L_003FA894;
    case 248u: goto L_003FA8B8;
    case 249u: goto L_003FA8D4;
    case 250u: goto L_003FA8F8;
    case 251u: goto L_003FA910;
    case 252u: goto L_003FA920;
    case 253u: goto L_003FA940;
    case 254u: goto L_003FA950;
    case 255u: goto L_003FA960;
    case 256u: goto L_003FA980;
    case 257u: goto L_003FA9C4;
    case 258u: goto L_003FAA18;
    case 259u: goto L_003FAA34;
    case 260u: goto L_003FAB50;
    case 261u: goto L_003FAB78;
    case 262u: goto L_003FAC60;
    case 263u: goto L_003FACB8;
    case 264u: goto L_003FACD0;
    case 265u: goto L_003FACF0;
    case 266u: goto L_003FAD30;
    case 267u: goto L_003FAD40;
    case 268u: goto L_003FAD7C;
    case 269u: goto L_003FAD8C;
    case 270u: goto L_003FADA4;
    case 271u: goto L_003FADB8;
    case 272u: goto L_003FADCC;
    case 273u: goto L_003FADD8;
    case 274u: goto L_003FADE8;
    case 275u: goto L_003FADF4;
    case 276u: goto L_003FAE04;
    case 277u: goto L_003FAE1C;
    case 278u: goto L_003FAE40;
    case 279u: goto L_003FAE58;
    case 280u: goto L_003FAE80;
    case 281u: goto L_003FAEA8;
    case 282u: goto L_003FAEC4;
    case 283u: goto L_003FAEDC;
    case 284u: goto L_003FAEF0;
    case 285u: goto L_003FAEFC;
    case 286u: goto L_003FAF08;
    case 287u: goto L_003FAF14;
    case 288u: goto L_003FAF40;
    case 289u: goto L_003FAF6C;
    case 290u: goto L_003FAF7C;
    case 291u: goto L_003FAF9C;
    case 292u: goto L_003FAFE8;
    case 293u: goto L_003FB00C;
    case 294u: goto L_003FB030;
    case 295u: goto L_003FB048;
    case 296u: goto L_003FB05C;
    case 297u: goto L_003FB07C;
    case 298u: goto L_003FB094;
    case 299u: goto L_003FB09C;
    case 300u: goto L_003FB0A4;
    case 301u: goto L_003FB0BC;
    case 302u: goto L_003FB0DC;
    case 303u: goto L_003FB0F4;
    case 304u: goto L_003FB0FC;
    case 305u: goto L_003FB104;
    case 306u: goto L_003FB11C;
    case 307u: goto L_003FB13C;
    case 308u: goto L_003FB154;
    case 309u: goto L_003FB15C;
    case 310u: goto L_003FB174;
    case 311u: goto L_003FB1A0;
    case 312u: goto L_003FB1D8;
    case 313u: goto L_003FB1EC;
    case 314u: goto L_003FB208;
    case 315u: goto L_003FB230;
    case 316u: goto L_003FB248;
    case 317u: goto L_003FB270;
    case 318u: goto L_003FB278;
    case 319u: goto L_003FB2AC;
    case 320u: goto L_003FB2B8;
    case 321u: goto L_003FB2D8;
    case 322u: goto L_003FB2F4;
    case 323u: goto L_003FB308;
    case 324u: goto L_003FB31C;
    case 325u: goto L_003FB338;
    case 326u: goto L_003FB360;
    case 327u: goto L_003FB378;
    case 328u: goto L_003FB3A0;
    case 329u: goto L_003FB3C0;
    case 330u: goto L_003FB3E8;
    case 331u: goto L_003FB3F8;
    case 332u: goto L_003FB40C;
    case 333u: goto L_003FB420;
    case 334u: goto L_003FB428;
    case 335u: goto L_003FB484;
    case 336u: goto L_003FB4A4;
    case 337u: goto L_003FB4DC;
    case 338u: goto L_003FB4EC;
    case 339u: goto L_003FB50C;
    case 340u: goto L_003FB520;
    case 341u: goto L_003FB530;
    case 342u: goto L_003FB544;
    case 343u: goto L_003FB55C;
    case 344u: goto L_003FB56C;
    case 345u: goto L_003FB590;
    case 346u: goto L_003FB5A8;
    case 347u: goto L_003FB5C4;
    case 348u: goto L_003FB5D4;
    case 349u: goto L_003FB5E8;
    case 350u: goto L_003FB604;
    case 351u: goto L_003FB614;
    case 352u: goto L_003FB638;
    case 353u: goto L_003FB650;
    case 354u: goto L_003FB668;
    case 355u: goto L_003FB678;
    case 356u: goto L_003FB68C;
    case 357u: goto L_003FB6B0;
    case 358u: goto L_003FB6C0;
    case 359u: goto L_003FB730;
    case 360u: goto L_003FB754;
    case 361u: goto L_003FB76C;
    case 362u: goto L_003FB800;
    case 363u: goto L_003FB80C;
    case 364u: goto L_003FB818;
    case 365u: goto L_003FB828;
    case 366u: goto L_003FBA08;
    case 367u: goto L_003FBA20;
    case 368u: goto L_003FBA34;
    case 369u: goto L_003FBC14;
    case 370u: goto L_003FBCA0;
    case 371u: goto L_003FBE80;
    case 372u: goto L_003FBF68;
    case 373u: goto L_003FBF74;
    case 374u: goto L_003FBF88;
    case 375u: goto L_003FBF94;
    case 376u: goto L_003FBFA0;
    case 377u: goto L_003FBFAC;
    case 378u: goto L_003FBFB8;
    default: bad_entry(c, 0x003F8000u); return;
    }
L_003F8000:
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.budget -= 1;
L_003F8004:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 74u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F8020; } }
    c.f[12] = ld32((c.r[29].w[0] + 376u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8020u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x003F8020u) [[unlikely]] return; }
L_003F8020:
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.budget -= 1;
L_003F8024:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8034u); st32((c.r[17].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003F8034u) [[unlikely]] return; }
L_003F8034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F803Cu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003F803Cu) [[unlikely]] return; }
L_003F803C:
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003F8078; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F8078:
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_003F80A0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; c.f[26] = c.f[12];  if (t) { goto L_003F8694; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_003F8698; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F8694; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 424u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8114u); c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00B2(c, 89u, depth + 1u); else { c.pc = 0x003C8C20u; return; } if (c.pc != 0x003F8114u) [[unlikely]] return; }
L_003F8114:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 124u)));
    c.f[5] = ld32((c.r[16].w[0] + 108u));
    c.f[2] = ld32((c.r[18].w[0] + 400u));
    c.f[1] = ld32((c.r[18].w[0] + 404u));
    c.f[4] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = ld32((c.r[18].w[0] + 408u));
    c.f[3] = ld32((c.r[16].w[0] + 116u));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[20] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[2] = ld32((c.r[18].w[0] + 384u));
    c.budget -= 13;
L_003F8148:
    c.f[1] = ld32((c.r[18].w[0] + 388u));
    c.f[0] = ld32((c.r[18].w[0] + 392u));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.r[19].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    c.f[25] = 0u;
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.f[24] = c.f[25];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[21] = ld32((c.r[3].w[0] + 64u));
    c.f[23] = c.f[25];
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[22] = c.f[25];  if (t) { goto L_003F8198; } }
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[25]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[20].w[0] + 40u), c.f[25]);  goto L_003F8300; }
L_003F8198:
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[6]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[20].w[0] + 40u));  goto L_003F81FC; }
    c.f[1] = fp::add(c.f[0], c.f[26]);
    st32((c.r[20].w[0] + 44u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[20].w[0] + 44u), 0u);  goto L_003F81DC; }
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[25] = ld32((c.r[20].w[0] + 48u));  goto L_003F81E4; }
    st32((c.r[20].w[0] + 44u), 0u);
    c.budget -= 1;
L_003F81DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003F839C; } }
L_003F81E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = ld32((c.r[20].w[0] + 52u));
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[22] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[24] = c.f[21];  if (t) { goto L_003F839C; } }
L_003F81FC:
    c.f[1] = fp::add(c.f[0], c.f[26]);
    st32((c.r[20].w[0] + 40u), c.f[1]);
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = ld8((c.r[18].w[0] + 1166u));  goto L_003F83A0; }
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);  goto L_003F82F4; }
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    st32((c.r[20].w[0] + 40u), c.f[6]);
    st32((c.r[20].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 192u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[16].w[0] + 120u));  goto L_003F8284; }
    c.f[5] = ld32((c.r[18].w[0] + 400u));
    c.f[2] = ld32((c.r[16].w[0] + 120u));
    c.f[4] = ld32((c.r[18].w[0] + 404u));
    c.f[1] = ld32((c.r[16].w[0] + 124u));
    c.f[3] = ld32((c.r[18].w[0] + 408u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003F8274; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F8274:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003F82CC; } }
L_003F8284:
    c.f[1] = ld32((c.r[16].w[0] + 124u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[5] = ld32((c.r[18].w[0] + 400u));
    c.f[4] = ld32((c.r[18].w[0] + 404u));
    c.f[3] = ld32((c.r[18].w[0] + 408u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003F82C0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F82C0:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 3;
L_003F82CC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003F82E4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.f[0]);  if (t) { goto L_003F82EC; } }
L_003F82E4:
    c.f[0] = c.r[3].w[0];
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.budget -= 2;
L_003F82EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F839C; } }
L_003F82F4:
    c.f[21] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F839C; } }
L_003F8300:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[20].w[0] + 44u), c.f[25]);  if (t) { goto L_003F839C; } }
    c.f[1] = ld32((c.r[16].w[0] + 216u));
    c.f[0] = ld32((c.r[20].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F839C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 192u), 0u);
    set32(c.r[4], c.r[20].w[0] + 8u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8350u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003F8350u) [[unlikely]] return; }
L_003F8350:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F839C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 188u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F839Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003F839Cu) [[unlikely]] return; }
L_003F839C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1166u));
    c.budget -= 1;
L_003F83A0:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F83B8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1052u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003F83B8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 44u));  goto L_003F8430; }
    c.f[2] = ld32((c.r[18].w[0] + 400u));
    c.f[5] = ld32((c.r[16].w[0] + 108u));
    c.f[1] = ld32((c.r[18].w[0] + 404u));
    c.f[4] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = ld32((c.r[18].w[0] + 408u));
    c.f[3] = ld32((c.r[16].w[0] + 116u));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[2] = ld32((c.r[18].w[0] + 384u));
    c.f[1] = ld32((c.r[18].w[0] + 388u));
    c.f[0] = ld32((c.r[18].w[0] + 392u));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.f[0] = ld32((c.r[28].w[0] - 25448u));
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 19;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003F8424; }
    st32((c.r[16].w[0] + 240u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = c.f[1];
    c.f[22] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 244u), 0u);  if (t) { goto L_003F847C; } }
L_003F8424:
    c.f[25] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[24] = c.f[21];  if (t) { goto L_003F847C; } }
L_003F8430:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[16].w[0] + 244u));  goto L_003F8480; }
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    c.budget -= 1;
L_003F8448:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[20].w[0] + 80u));  goto L_003F8464; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[24] = c.f[21];  if (t) { goto L_003F847C; } }
L_003F8464:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F847C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[24] = c.f[21];
    c.f[25] = c.r[3].w[0];
    c.budget -= 3;
L_003F847C:
    c.f[1] = ld32((c.r[16].w[0] + 244u));
    c.budget -= 1;
L_003F8480:
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[3]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[20].w[0] + 44u));  goto L_003F84C0; }
    c.f[0] = fp::sub(c.f[1], c.f[26]);
    c.f[22] = c.f[1];
    c.f[2] = ld32((c.r[16].w[0] + 200u));
    c.f[1] = ld32((c.r[20].w[0] + 92u));
    c.facc = fp::add(c.f[3], c.f[23]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.f[23] = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 244u), c.f[0]);  if (t) { goto L_003F84BC; } }
    st32((c.r[16].w[0] + 244u), c.f[3]);
    c.budget -= 1;
L_003F84BC:
    c.f[1] = ld32((c.r[20].w[0] + 44u));
    c.budget -= 1;
L_003F84C0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = ld8((c.r[20].w[0] + 56u));  goto L_003F85DC; }
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[1] = ld32((c.r[5].w[0] + 28u));  if (t) { goto L_003F85D8; } }
    c.f[0] = ld32((c.r[28].w[0] - 30152u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F85D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[25]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F85D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26388u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F8544; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F8560; } }
L_003F8544:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_003F8560:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.f[1] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_003F8574; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F8590; } }
L_003F8574:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_003F8590:
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[20].w[0] + 8u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.f[0] = ld32((c.r[20].w[0] + 88u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 160u), 0u);
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F85D8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003F85D8u) [[unlikely]] return; }
L_003F85D8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 56u));
    c.budget -= 1;
L_003F85DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F860C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003F860C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8608u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F6(c, 31u, depth + 1u); else { c.pc = 0x004D8710u; return; } if (c.pc != 0x003F8608u) [[unlikely]] return; }
L_003F8608:
    st8((c.r[20].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003F860C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[24]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8650; } }
    st32((c.r[29].w[0] + 148u), c.f[24]);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 152u), c.f[25]);
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], c.r[20].w[0] + 8u);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8650u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003F8650u) [[unlikely]] return; }
L_003F8650:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F8694; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[29].w[0] + 140u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st32((c.r[29].w[0] + 132u), c.f[22]);
    st32((c.r[29].w[0] + 128u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 136u), c.f[23]);
    set32(c.r[4], c.r[20].w[0] + 8u);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8694u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B2(c, 349u, depth + 1u); else { c.pc = 0x003CBDF0u; return; } if (c.pc != 0x003F8694u) [[unlikely]] return; }
L_003F8694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003F8698:
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003F86D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F86E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 266u, depth + 1u); else { c.pc = 0x0042E1C0u; return; } if (c.pc != 0x003F86E4u) [[unlikely]] return; }
L_003F86E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 23456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31584u));
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.f[12] = ld32((c.r[28].w[0] - 31588u));
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F873Cu); st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003F873Cu) [[unlikely]] return; }
L_003F873C:
    c.f[12] = ld32((c.r[28].w[0] - 31396u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8748u); st32((c.r[16].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003F8748u) [[unlikely]] return; }
L_003F8748:
    c.f[12] = ld32((c.r[28].w[0] - 31392u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8754u); st32((c.r[16].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003F8754u) [[unlikely]] return; }
L_003F8754:
    c.f[2] = ld32((c.r[28].w[0] - 32252u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32564u));
    st32((c.r[16].w[0] + 88u), c.f[2]);
    c.f[0] = ld32((c.r[28].w[0] - 32076u));
    st32((c.r[16].w[0] + 92u), c.f[1]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F8790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30364u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003F87AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F87BC; } }
L_003F87AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87B4u);  if (depth < kMaxDepth) unit_00CB(c, 272u, depth + 1u); else { c.pc = 0x0042E290u; return; } if (c.pc != 0x003F87B4u) [[unlikely]] return; }
L_003F87B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003F87BC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F87D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87F4u); set32(c.r[4], c.r[4].w[0] - 6960u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003F87F4u) [[unlikely]] return; }
L_003F87F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003F8804; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003F8814; } }
L_003F8804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F880Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 274u, depth + 1u); else { c.pc = 0x0042E2D0u; return; } if (c.pc != 0x003F880Cu) [[unlikely]] return; }
L_003F880C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003F8814:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F8830:
    set32(c.r[2], ld32((c.r[28].w[0] - 30156u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003F8840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30364u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003F885C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F8864; } }
L_003F885C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8864u);  if (depth < kMaxDepth) unit_00CB(c, 278u, depth + 1u); else { c.pc = 0x0042E340u; return; } if (c.pc != 0x003F8864u) [[unlikely]] return; }
L_003F8864:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F8870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30364u)));  c.pc = t; return; }
L_003F8880:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 96u), c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[29].w[0] + 92u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 68u)));  if (t) { goto L_003F88D0; } }
L_003F88C8:
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 2;
L_003F88D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 72u)));  goto L_003F88F0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F88C8u | kUnwind; return; } goto L_003F88C8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_003F88F0:
    c.r[3].d[0] = c.r[6].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_003F890C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F890Cu); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x003F890Cu) [[unlikely]] return; }
L_003F890C:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (t) { goto L_003F8944; } }
L_003F893C:
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 2;
L_003F8944:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 64u)));  goto L_003F8964; }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 64u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F893Cu | kUnwind; return; } goto L_003F893C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 1;
L_003F8964:
    c.r[3].d[0] = c.r[6].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 64u)));  if (t) { goto L_003F8980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8980u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x003F8980u) [[unlikely]] return; }
L_003F8980:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[29].w[0] + 80u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_003F89B8; } }
L_003F89B0:
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 2;
L_003F89B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_003F89D8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F89B0u | kUnwind; return; } goto L_003F89B0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_003F89D8:
    c.r[3].d[0] = c.r[6].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 56u)));  if (t) { goto L_003F89F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F89F4u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x003F89F4u) [[unlikely]] return; }
L_003F89F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F8A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_003F8A58; } }
L_003F8A28:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_003F8A4C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8A48u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F8A48u) [[unlikely]] return; }
L_003F8A48:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_003F8A4C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_003F8A58:
    set32(c.r[3], ld32((c.r[28].w[0] - 26388u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 13;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8A28u | kUnwind; return; } goto L_003F8A28; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8A98u); set32(c.r[6], c.r[28].w[0] - 30360u);  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x00114C70u; return; } if (c.pc != 0x003F8A98u) [[unlikely]] return; }
L_003F8A98:
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[28].w[0] - 30360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8AACu); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x00114C70u; return; } if (c.pc != 0x003F8AACu) [[unlikely]] return; }
L_003F8AAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[28].w[0] - 30360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8AC0u); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0005(c, 88u, depth + 1u); else { c.pc = 0x00114C70u; return; } if (c.pc != 0x003F8AC0u) [[unlikely]] return; }
L_003F8AC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26388u)));
    st32((c.r[3].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F8AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F8B38; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003F8B2C; } }
L_003F8B10:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8B28u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 52u, depth + 1u); else { c.pc = 0x003F8C50u; return; } if (c.pc != 0x003F8B28u) [[unlikely]] return; }
L_003F8B28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003F8B2C:
    c.r[3].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8B10u | kUnwind; return; } goto L_003F8B10; }
L_003F8B38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F8B50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003F8BB8; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003F8BAC; } }
L_003F8B88:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8BA8u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F8BA8u) [[unlikely]] return; }
L_003F8BA8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003F8BAC:
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8B88u | kUnwind; return; } goto L_003F8B88; }
L_003F8BB8:
    set32(c.r[18], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_003F8C28; }
    set32(c.r[17], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003F8C04; } }
L_003F8BD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[19].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[5].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8C00u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F8C00u) [[unlikely]] return; }
L_003F8C00:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003F8C04:
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8BD0u | kUnwind; return; } goto L_003F8BD0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 6;
L_003F8C28:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003F8C50:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 18;
    { const bool t = c.r[19].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F8E9C; } }
    set32(c.r[17], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CA4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 239u, depth + 1u); else { c.pc = 0x0044DEF0u; return; } if (c.pc != 0x003F8CA4u) [[unlikely]] return; }
L_003F8CA4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[28].w[0] - 31532u));  goto L_003F8CD4; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 617u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F8CD0; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 128u)));  if (t) { goto L_003F8CDC; } }
L_003F8CD0:
    c.f[1] = ld32((c.r[28].w[0] - 31532u));
    c.budget -= 1;
L_003F8CD4:
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 2;
L_003F8CDC:
    set32(c.r[16], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_003F8EA0; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8CF8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 80u, depth + 1u); else { c.pc = 0x004507E0u; return; } if (c.pc != 0x003F8CF8u) [[unlikely]] return; }
L_003F8CF8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[30].w[0] + 52u), c.r[16].w[0]);  goto L_003F8E9C; }
    st8((c.r[29].w[0] + 191u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 190u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 306u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 191u));  goto L_003F8D84; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D20u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 206u, depth + 1u); else { c.pc = 0x0046ACE0u; return; } if (c.pc != 0x003F8D20u) [[unlikely]] return; }
L_003F8D20:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[9], c.r[29].w[0] + 191u);
    set32(c.r[7], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D4Cu); set32(c.r[10], c.r[29].w[0] + 190u);  if (depth < kMaxDepth) unit_00BE(c, 66u, depth + 1u); else { c.pc = 0x003F8ED0u; return; } if (c.pc != 0x003F8D4Cu) [[unlikely]] return; }
L_003F8D4C:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D5Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 237u, depth + 1u); else { c.pc = 0x0044DE90u; return; } if (c.pc != 0x003F8D5Cu) [[unlikely]] return; }
L_003F8D5C:
    c.f[12] = ld32((c.r[28].w[0] - 32304u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D70u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 78u, depth + 1u); else { c.pc = 0x00450780u; return; } if (c.pc != 0x003F8D70u) [[unlikely]] return; }
L_003F8D70:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8D80u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00D3(c, 235u, depth + 1u); else { c.pc = 0x0044DE30u; return; } if (c.pc != 0x003F8D80u) [[unlikely]] return; }
L_003F8D80:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 191u));
    c.budget -= 1;
L_003F8D84:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 190u));  goto L_003F8E10; }
    set32(c.r[19], ld32((c.r[22].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; c.r[20].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F8DB8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8DA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 117u, depth + 1u); else { c.pc = 0x00465390u; return; } if (c.pc != 0x003F8DA4u) [[unlikely]] return; }
L_003F8DA4:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 306u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F8DB8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 448u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 2;
L_003F8DB8:
    set32(c.r[23], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003F8E00; } }
L_003F8DC4:
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[21].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_003F8E00; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 189u);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8DFCu); set32(c.r[10], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_00BE(c, 66u, depth + 1u); else { c.pc = 0x003F8ED0u; return; } if (c.pc != 0x003F8DFCu) [[unlikely]] return; }
L_003F8DFC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_003F8E00:
    c.r[3].d[0] = c.r[21].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8DC4u | kUnwind; return; } goto L_003F8DC4; }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 190u));
    c.budget -= 1;
L_003F8E10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F8E98; } }
    set32(c.r[19], ld32((c.r[22].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; c.r[20].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F8E44; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8E30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 122u, depth + 1u); else { c.pc = 0x004654E0u; return; } if (c.pc != 0x003F8E30u) [[unlikely]] return; }
L_003F8E30:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 306u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003F8E44; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 452u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 2;
L_003F8E44:
    set32(c.r[22], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003F8E8C; } }
L_003F8E50:
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[21].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_003F8E8C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[29].w[0] + 187u);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8E88u); set32(c.r[10], c.r[29].w[0] + 186u);  if (depth < kMaxDepth) unit_00BE(c, 66u, depth + 1u); else { c.pc = 0x003F8ED0u; return; } if (c.pc != 0x003F8E88u) [[unlikely]] return; }
L_003F8E88:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_003F8E8C:
    c.r[3].d[0] = c.r[21].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8E50u | kUnwind; return; } goto L_003F8E50; }
L_003F8E98:
    st32((c.r[30].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 1;
L_003F8E9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_003F8EA0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003F8ED0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 25;
    { const bool t = c.r[18].d[0] != 0ull; c.f[22] = c.f[12];  if (t) { goto L_003F8F54; } }
    set32(c.r[4], 0u + 8u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 6544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F48u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003F8F48u) [[unlikely]] return; }
L_003F8F48:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_003F914C; } }
L_003F8F54:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 4;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 328u)));  goto L_003F8F70; }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9148; } }
L_003F8F70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st32((c.r[29].w[0] + 240u), c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[29].w[0] + 244u), c.r[17].w[0]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F94u); st32((c.r[29].w[0] + 248u), 0u);  if (depth < kMaxDepth) unit_00D8(c, 211u, depth + 1u); else { c.pc = 0x00462410u; return; } if (c.pc != 0x003F8F94u) [[unlikely]] return; }
L_003F8F94:
    set32(c.r[2], ld32((c.r[22].w[0] + 128u)));
    c.f[24] = c.f[0];
    c.f[21] = ld32((c.r[2].w[0] + 80u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x003F8FA8u) [[unlikely]] return; }
L_003F8FA8:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_003F9010; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FC8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x003F8FC8u) [[unlikely]] return; }
L_003F8FC8:
    c.f[12] = ld32((c.r[28].w[0] - 31936u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x003F8FE0u) [[unlikely]] return; }
L_003F8FE0:
    c.f[23] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x003F8FECu) [[unlikely]] return; }
L_003F8FEC:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x003F8FF8u) [[unlikely]] return; }
L_003F8FF8:
    c.f[1] = fp::sub(c.f[21], c.f[23]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9008u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x003F9008u) [[unlikely]] return; }
L_003F9008:
    c.f[21] = fp::add(c.f[0], c.f[23]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 2;
L_003F9010:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9024u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 239u, depth + 1u); else { c.pc = 0x0044DEF0u; return; } if (c.pc != 0x003F9024u) [[unlikely]] return; }
L_003F9024:
    c.f[23] = fp::sub(c.f[21], c.f[24]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003F903C; } }
L_003F9030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9038u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x003F9038u) [[unlikely]] return; }
L_003F9038:
    c.f[23] = fp::add(c.f[23], c.f[0]);
    c.budget -= 1;
L_003F903C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9044u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x003F9044u) [[unlikely]] return; }
L_003F9044:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[3] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9030u | kUnwind; return; } goto L_003F9030; } }
    c.f[2] = ld32((c.r[18].w[0] + 20u));
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = fp::sub(c.f[23], c.f[2]);
    c.f[2] = fp::add(c.f[2], c.f[22]);
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[3], c.f[20]));
    c.f[1] = fp::add(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003F9094; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F9094:
    c.f[0] = 0u;
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F90AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F90AC:
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = ld32((c.r[18].w[0] + 12u));  if (t) { goto L_003F90C4; } }
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 2;
L_003F90C4:
    c.f[3] = fp::add(c.f[2], c.f[1]);
    set32(c.r[3], ld32((c.r[22].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[3].w[0] + 168u));
    c.f[1] = ld32((c.r[3].w[0] + 172u));
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 196u));
    fpu_div(c, 3u, c.f[3], c.f[4]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 208u), c.f[1]);
    c.f[1] = fp::max(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 208u), c.f[1]);
    c.f[0] = fp::min(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 220u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    st32((c.r[29].w[0] + 224u), c.r[17].w[0]);
    c.f[0] = c.f[4] ^ fp::kSign;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 212u), c.f[3]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9144u); set32(c.r[8], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00D4(c, 106u, depth + 1u); else { c.pc = 0x00450AA0u; return; } if (c.pc != 0x003F9144u) [[unlikely]] return; }
L_003F9144:
    c.f[0] = c.f[21];
    c.budget -= 1;
L_003F9148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_003F914C:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003F9190:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 6450u);
    c.budget -= 6;
    { set32(c.r[5], c.r[5].w[0] - 6461u);  goto L_003F91B0; }
L_003F91B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F91ECu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 202u, depth + 1u); else { c.pc = 0x004D1CE0u; return; } if (c.pc != 0x003F91ECu) [[unlikely]] return; }
L_003F91EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9208u); set32(c.r[6], c.r[6].w[0] - 6309u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003F9208u) [[unlikely]] return; }
L_003F9208:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 81u);  goto L_003F921C; }
    set32(c.r[17], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_003F921C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9224u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003F9224u) [[unlikely]] return; }
L_003F9224:
    set32(c.r[3], ld32((c.r[28].w[0] - 26388u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9244u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F9244u) [[unlikely]] return; }
L_003F9244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F924Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 230u, depth + 1u); else { c.pc = 0x003FA690u; return; } if (c.pc != 0x003F924Cu) [[unlikely]] return; }
L_003F924C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_003F9538; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));  goto L_003F94A0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26388u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[29].w[0] + 140u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 112u)));  if (t) { goto L_003F9298; } }
L_003F9290:
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 2;
L_003F9298:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 116u)));  goto L_003F92B8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 116u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9290u | kUnwind; return; } goto L_003F9290; }
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 1;
L_003F92B8:
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_003F92D0; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F92D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  if (t) { goto L_003F930C; } }
L_003F9304:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 2;
L_003F930C:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_003F932C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9304u | kUnwind; return; } goto L_003F9304; }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_003F932C:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 108u)));  if (t) { goto L_003F9380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9348u); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x003F9348u) [[unlikely]] return; }
L_003F9348:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));  goto L_003F9368; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9358u); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x003F9358u) [[unlikely]] return; }
L_003F9358:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003F93B4; } }
L_003F9368:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9378u); set32(c.r[4], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x003F9378u) [[unlikely]] return; }
L_003F9378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));  if (t) { goto L_003F93B8; } }
L_003F9380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9388u); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x003F9388u) [[unlikely]] return; }
L_003F9388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_003F93B4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + 20u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F93B4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003F93B4u) [[unlikely]] return; }
L_003F93B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    c.budget -= 1;
L_003F93B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_003F93F0; } }
L_003F93E8:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 2;
L_003F93F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  goto L_003F9410; }
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003F93E8u | kUnwind; return; } goto L_003F93E8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_003F9410:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_003F9464; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F942Cu); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_00BE(c, 226u, depth + 1u); else { c.pc = 0x003FA630u; return; } if (c.pc != 0x003F942Cu) [[unlikely]] return; }
L_003F942C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));  goto L_003F944C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F943Cu); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_00BE(c, 226u, depth + 1u); else { c.pc = 0x003FA630u; return; } if (c.pc != 0x003F943Cu) [[unlikely]] return; }
L_003F943C:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9530; } }
L_003F944C:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F945Cu); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x003F945Cu) [[unlikely]] return; }
L_003F945C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_003F9534; } }
L_003F9464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F946Cu); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_00BE(c, 226u, depth + 1u); else { c.pc = 0x003FA630u; return; } if (c.pc != 0x003F946Cu) [[unlikely]] return; }
L_003F946C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 152u), c.r[2].w[0]);  if (t) { goto L_003F9530; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 152u);
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9498u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003F9498u) [[unlikely]] return; }
L_003F9498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9530; } }
L_003F94A0:
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 172u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F94C0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003F94C0u) [[unlikely]] return; }
L_003F94C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F94C8u); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x003F94C8u) [[unlikely]] return; }
L_003F94C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_003F94FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 148u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + 20u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F94F4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003F94F4u) [[unlikely]] return; }
L_003F94F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F9530; } }
L_003F94FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9504u); set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  if (depth < kMaxDepth) unit_00BE(c, 226u, depth + 1u); else { c.pc = 0x003FA630u; return; } if (c.pc != 0x003F9504u) [[unlikely]] return; }
L_003F9504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_003F9530; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9530u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003F9530u) [[unlikely]] return; }
L_003F9530:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_003F9534:
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_003F9538:
    set32(c.r[16], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9548u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003F9548u) [[unlikely]] return; }
L_003F9548:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003F9570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9580u);  if (depth < kMaxDepth) unit_00BE(c, 38u, depth + 1u); else { c.pc = 0x003F8A10u; return; } if (c.pc != 0x003F9580u) [[unlikely]] return; }
L_003F9580:
    set32(c.r[4], ld32((c.r[28].w[0] - 26388u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F958Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BE(c, 151u, depth + 1u); else { c.pc = 0x003F9B40u; return; } if (c.pc != 0x003F958Cu) [[unlikely]] return; }
L_003F958C:
    st32((c.r[28].w[0] - 26388u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F95A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F95BCu) [[unlikely]] return; }
L_003F95BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 26388u), c.r[2].w[0]);  goto L_003F95D4; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 156u, depth + 1u); else { c.pc = 0x003F9C50u; return; } if (c.pc != 0x003F95D0u) [[unlikely]] return; }
L_003F95D0:
    st32((c.r[28].w[0] - 26388u), c.r[2].w[0]);
    c.budget -= 1;
L_003F95D4:
    set32(c.r[4], c.r[2].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95E0u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x003F95E0u) [[unlikely]] return; }
L_003F95E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95F0u); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x003F95F0u) [[unlikely]] return; }
L_003F95F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26388u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9608u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x003F9608u) [[unlikely]] return; }
L_003F9608:
    set32(c.r[3], ld32((c.r[28].w[0] - 26388u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 56u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26388u)));
    st32((c.r[3].w[0] + 52u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 24u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F964Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F964Cu) [[unlikely]] return; }
L_003F964C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F9688; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F966Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003F966Cu) [[unlikely]] return; }
L_003F966C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23728u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_003F9688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9690u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003F9690u) [[unlikely]] return; }
L_003F9690:
    set32(c.r[3], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[16], c.r[2].w[0] + 4u);
    set32(c.r[2], 0u + 39u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 24u);  goto L_003F96F8; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6568u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96C4u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003F96C4u) [[unlikely]] return; }
L_003F96C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 804u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96E8u); set32(c.r[4], c.r[16].w[0] + 808u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003F96E8u) [[unlikely]] return; }
L_003F96E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 804u), c.r[2].w[0]);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
L_003F96F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F9700u) [[unlikely]] return; }
L_003F9700:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F973C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9720u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003F9720u) [[unlikely]] return; }
L_003F9720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23696u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_003F973C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9744u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003F9744u) [[unlikely]] return; }
L_003F9744:
    set32(c.r[3], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[16], c.r[2].w[0] + 4u);
    set32(c.r[2], 0u + 39u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 24u);  goto L_003F97AC; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 24256u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9778u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003F9778u) [[unlikely]] return; }
L_003F9778:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 804u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F979Cu); set32(c.r[4], c.r[16].w[0] + 808u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003F979Cu) [[unlikely]] return; }
L_003F979C:
    set32(c.r[2], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 804u), c.r[2].w[0]);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
L_003F97AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F97B4u) [[unlikely]] return; }
L_003F97B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F97F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97D4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003F97D4u) [[unlikely]] return; }
L_003F97D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23664u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_003F97F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97F8u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003F97F8u) [[unlikely]] return; }
L_003F97F8:
    set32(c.r[3], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[16], c.r[2].w[0] + 4u);
    set32(c.r[2], 0u + 39u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 24u);  goto L_003F9860; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6960u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F982Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003F982Cu) [[unlikely]] return; }
L_003F982C:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 804u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9850u); set32(c.r[4], c.r[16].w[0] + 808u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003F9850u) [[unlikely]] return; }
L_003F9850:
    set32(c.r[2], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 804u), c.r[2].w[0]);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
L_003F9860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9868u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F9868u) [[unlikely]] return; }
L_003F9868:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F98A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9888u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003F9888u) [[unlikely]] return; }
L_003F9888:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23632u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_003F98A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F98ACu);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003F98ACu) [[unlikely]] return; }
L_003F98AC:
    set32(c.r[3], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[16], c.r[2].w[0] + 4u);
    set32(c.r[2], 0u + 39u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 24u);  goto L_003F9914; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6592u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F98E0u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003F98E0u) [[unlikely]] return; }
L_003F98E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 804u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9904u); set32(c.r[4], c.r[16].w[0] + 808u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003F9904u) [[unlikely]] return; }
L_003F9904:
    set32(c.r[2], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 804u), c.r[2].w[0]);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
L_003F9914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F991Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F991Cu) [[unlikely]] return; }
L_003F991C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F9958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F993Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003F993Cu) [[unlikely]] return; }
L_003F993C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23600u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_003F9958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9960u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003F9960u) [[unlikely]] return; }
L_003F9960:
    set32(c.r[3], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[16], c.r[2].w[0] + 4u);
    set32(c.r[2], 0u + 39u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 24u);  goto L_003F99C8; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 10848u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9994u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003F9994u) [[unlikely]] return; }
L_003F9994:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 804u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99B8u); set32(c.r[4], c.r[16].w[0] + 808u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003F99B8u) [[unlikely]] return; }
L_003F99B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 804u), c.r[2].w[0]);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
L_003F99C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F99D0u) [[unlikely]] return; }
L_003F99D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F9A0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003F99F0u) [[unlikely]] return; }
L_003F99F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23568u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_003F9A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A14u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003F9A14u) [[unlikely]] return; }
L_003F9A14:
    set32(c.r[3], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[16], c.r[2].w[0] + 4u);
    set32(c.r[2], 0u + 39u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], 0u + 24u);  goto L_003F9A7C; }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] - 24064u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A48u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003F9A48u) [[unlikely]] return; }
L_003F9A48:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 804u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A6Cu); set32(c.r[4], c.r[16].w[0] + 808u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003F9A6Cu) [[unlikely]] return; }
L_003F9A6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 804u), c.r[2].w[0]);
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
L_003F9A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003F9A84u) [[unlikely]] return; }
L_003F9A84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F9AC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AA4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003F9AA4u) [[unlikely]] return; }
L_003F9AA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 21584u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23536u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_003F9AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AC8u);  if (depth < kMaxDepth) unit_00B5(c, 164u, depth + 1u); else { c.pc = 0x003D5AE0u; return; } if (c.pc != 0x003F9AC8u) [[unlikely]] return; }
L_003F9AC8:
    set32(c.r[4], ld32((c.r[2].w[0] + 808u)));
    set32(c.r[3], 0u + 39u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[2].w[0] + 4u);  if (t) { goto L_003F9B28; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 6624u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AF8u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003F9AF8u) [[unlikely]] return; }
L_003F9AF8:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 804u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B1Cu); set32(c.r[4], c.r[16].w[0] + 808u);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D56C0u; return; } if (c.pc != 0x003F9B1Cu) [[unlikely]] return; }
L_003F9B1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 804u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 804u), c.r[3].w[0]);
    c.budget -= 3;
L_003F9B28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9B40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F9C34; } }
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_003F9BA0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9B9C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9B9C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9B9C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9B9C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9B9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B9Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003F9B9Cu) [[unlikely]] return; }
L_003F9B9C:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_003F9BA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_003F9BE0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9BDC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9BDC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9BDC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9BDC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9BDCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003F9BDCu) [[unlikely]] return; }
L_003F9BDC:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_003F9BE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003F9C20; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9C1C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9C1C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9C1C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9C1C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9C1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9C1Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003F9C1Cu) [[unlikely]] return; }
L_003F9C1C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003F9C20:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F9C38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9C34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F9C34u) [[unlikely]] return; }
L_003F9C34:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F9C38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9C50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[16], c.r[19].w[0] + 4u);  if (t) { goto L_003F9CB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9C88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003F9C88u) [[unlikely]] return; }
L_003F9C88:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003F9CA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9C9Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003F9C9Cu) [[unlikely]] return; }
L_003F9C9C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003F9CA0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_003F9CB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9CB0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003F9CB0u) [[unlikely]] return; }
L_003F9CB0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F9CB4:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[17], c.r[19].w[0] + 20u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_003F9D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9CD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003F9CD8u) [[unlikely]] return; }
L_003F9CD8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003F9CF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9CECu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003F9CECu) [[unlikely]] return; }
L_003F9CEC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003F9CF0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_003F9D04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9D00u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003F9D00u) [[unlikely]] return; }
L_003F9D00:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F9D04:
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[16], c.r[19].w[0] + 36u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_003F9D50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9D28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003F9D28u) [[unlikely]] return; }
L_003F9D28:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003F9D40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9D3Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003F9D3Cu) [[unlikely]] return; }
L_003F9D3C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003F9D40:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_003F9D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9D50u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003F9D50u) [[unlikely]] return; }
L_003F9D50:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003F9D54:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 56u), 0u);
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003F9D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F9E00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23536u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9DE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9DE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9DE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9DE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003F9DE8u) [[unlikely]] return; }
L_003F9DE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F9E04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F9E00u) [[unlikely]] return; }
L_003F9E00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F9E04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F9E90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23568u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9E78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9E78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003F9E78u) [[unlikely]] return; }
L_003F9E78:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F9E94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F9E90u) [[unlikely]] return; }
L_003F9E90:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F9E94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F9F20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23600u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9F08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9F08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003F9F08u) [[unlikely]] return; }
L_003F9F08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F9F24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F9F20u) [[unlikely]] return; }
L_003F9F20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F9F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F9FB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23632u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9F98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9F98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003F9F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003F9F98u) [[unlikely]] return; }
L_003F9F98:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003F9FB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9FB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003F9FB0u) [[unlikely]] return; }
L_003F9FB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003F9FB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FA040; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23664u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA028; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA028; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA028u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FA028u) [[unlikely]] return; }
L_003FA028:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FA044; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FA040u) [[unlikely]] return; }
L_003FA040:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FA044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FA060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FA0D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA0B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA0B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FA0B8u) [[unlikely]] return; }
L_003FA0B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FA0D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FA0D0u) [[unlikely]] return; }
L_003FA0D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FA0D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FA0F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FA160; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23728u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FA148u) [[unlikely]] return; }
L_003FA148:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FA164; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA160u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FA160u) [[unlikely]] return; }
L_003FA160:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FA164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FA180:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FA1A8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003FA1A0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003FA1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA1AC; } }
L_003FA1A8:
    set32(c.r[2], c.r[2].w[0] - 6291u);
    c.budget -= 1;
L_003FA1AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FA1C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6290u);  c.pc = t; return; }
L_003FA1D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] - 6269u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 6u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA200u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x003FA200u) [[unlikely]] return; }
L_003FA200:
    set32(c.r[4], 0u + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA20Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FA20Cu) [[unlikely]] return; }
L_003FA20C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_003FA22C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA224u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 274u, depth + 1u); else { c.pc = 0x004F20A0u; return; } if (c.pc != 0x003FA224u) [[unlikely]] return; }
L_003FA224:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_003FA22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA234u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FA234u) [[unlikely]] return; }
L_003FA234:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FA250:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FA278; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003FA270; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003FA270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA27C; } }
L_003FA278:
    set32(c.r[2], c.r[2].w[0] - 6291u);
    c.budget -= 1;
L_003FA27C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FA290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6267u);  c.pc = t; return; }
L_003FA2A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] - 6269u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 6u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x003FA2D0u) [[unlikely]] return; }
L_003FA2D0:
    set32(c.r[4], 0u + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FA2DCu) [[unlikely]] return; }
L_003FA2DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_003FA2FC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA2F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 323u, depth + 1u); else { c.pc = 0x003CB9F0u; return; } if (c.pc != 0x003FA2F4u) [[unlikely]] return; }
L_003FA2F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_003FA2FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA304u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FA304u) [[unlikely]] return; }
L_003FA304:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FA320:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FA348; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003FA340; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003FA340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA34C; } }
L_003FA348:
    set32(c.r[2], c.r[2].w[0] - 6291u);
    c.budget -= 1;
L_003FA34C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FA360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6267u);  c.pc = t; return; }
L_003FA370:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] - 6269u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 6u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x003FA3A0u) [[unlikely]] return; }
L_003FA3A0:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FA3ACu) [[unlikely]] return; }
L_003FA3AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_003FA3CC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 18u, depth + 1u); else { c.pc = 0x003DC7F0u; return; } if (c.pc != 0x003FA3C4u) [[unlikely]] return; }
L_003FA3C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_003FA3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA3D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FA3D4u) [[unlikely]] return; }
L_003FA3D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FA3F0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FA418; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003FA410; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003FA410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA41C; } }
L_003FA418:
    set32(c.r[2], c.r[2].w[0] - 6291u);
    c.budget -= 1;
L_003FA41C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FA430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6267u);  c.pc = t; return; }
L_003FA440:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] - 6269u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 6u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA470u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x003FA470u) [[unlikely]] return; }
L_003FA470:
    set32(c.r[4], 0u + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA47Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FA47Cu) [[unlikely]] return; }
L_003FA47C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_003FA49C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA494u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 100u, depth + 1u); else { c.pc = 0x00401700u; return; } if (c.pc != 0x003FA494u) [[unlikely]] return; }
L_003FA494:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_003FA49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA4A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FA4A4u) [[unlikely]] return; }
L_003FA4A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FA4C0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FA4E8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003FA4E0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003FA4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA4EC; } }
L_003FA4E8:
    set32(c.r[2], c.r[2].w[0] - 6291u);
    c.budget -= 1;
L_003FA4EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FA500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6267u);  c.pc = t; return; }
L_003FA510:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] - 6269u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], 0u + 6u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA540u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x003FA540u) [[unlikely]] return; }
L_003FA540:
    set32(c.r[4], 0u + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA54Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FA54Cu) [[unlikely]] return; }
L_003FA54C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_003FA56C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA564u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 17u, depth + 1u); else { c.pc = 0x003F86D0u; return; } if (c.pc != 0x003FA564u) [[unlikely]] return; }
L_003FA564:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_003FA56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA574u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FA574u) [[unlikely]] return; }
L_003FA574:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FA590:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FA5B8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003FA5B0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003FA5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA5BC; } }
L_003FA5B8:
    set32(c.r[2], c.r[2].w[0] - 6291u);
    c.budget -= 1;
L_003FA5BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FA5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6248u);  c.pc = t; return; }
L_003FA5E0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FA608; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003FA600; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003FA600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FA60C; } }
L_003FA608:
    set32(c.r[2], c.r[2].w[0] - 6291u);
    c.budget -= 1;
L_003FA60C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FA620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 6248u);  c.pc = t; return; }
L_003FA630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FA644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FA654; } }
L_003FA644:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA654u); set32(c.r[5], ld32((c.r[28].w[0] - 30164u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FA654u) [[unlikely]] return; }
L_003FA654:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FA660:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FA674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FA684; } }
L_003FA674:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA684u); set32(c.r[5], ld32((c.r[28].w[0] - 30476u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FA684u) [[unlikely]] return; }
L_003FA684:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FA690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FA6A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FA6B4; } }
L_003FA6A4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6B4u); set32(c.r[5], ld32((c.r[28].w[0] - 30120u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FA6B4u) [[unlikely]] return; }
L_003FA6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FA6C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] - 6664u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 6u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA6FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x003FA6FCu) [[unlikely]] return; }
L_003FA6FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA70Cu); set32(c.r[5], c.r[5].w[0] - 6680u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003FA70Cu) [[unlikely]] return; }
L_003FA70C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_003FA7F8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA734u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x003FA734u) [[unlikely]] return; }
L_003FA734:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  goto L_003FA75C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FA758; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA758u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x003FA758u) [[unlikely]] return; }
L_003FA758:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_003FA75C:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_003FA7B4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA774u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x003FA774u) [[unlikely]] return; }
L_003FA774:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_003FA79C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FA798; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA798u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x003FA798u) [[unlikely]] return; }
L_003FA798:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_003FA79C:
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7B0u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x003FA7B0u) [[unlikely]] return; }
L_003FA7B0:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_003FA7B4:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7C0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FA7C0u) [[unlikely]] return; }
L_003FA7C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_003FA7E8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7E0u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 200u, depth + 1u); else { c.pc = 0x0042DB70u; return; } if (c.pc != 0x003FA7E0u) [[unlikely]] return; }
L_003FA7E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_003FA7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FA7F0u) [[unlikely]] return; }
L_003FA7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FA804; } }
L_003FA7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA800u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FA800u) [[unlikely]] return; }
L_003FA800:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FA804:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003FA820:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] - 6640u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 6u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA85Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x003FA85Cu) [[unlikely]] return; }
L_003FA85C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA86Cu); set32(c.r[5], c.r[5].w[0] - 6656u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003FA86Cu) [[unlikely]] return; }
L_003FA86C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_003FA958; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA894u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x003FA894u) [[unlikely]] return; }
L_003FA894:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  goto L_003FA8BC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FA8B8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA8B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x003FA8B8u) [[unlikely]] return; }
L_003FA8B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_003FA8BC:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_003FA914; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA8D4u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x003FA8D4u) [[unlikely]] return; }
L_003FA8D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_003FA8FC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FA8F8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA8F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x003FA8F8u) [[unlikely]] return; }
L_003FA8F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_003FA8FC:
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA910u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x003FA910u) [[unlikely]] return; }
L_003FA910:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_003FA914:
    set32(c.r[4], 0u + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA920u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FA920u) [[unlikely]] return; }
L_003FA920:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_003FA948; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA940u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 56u, depth + 1u); else { c.pc = 0x003C8820u; return; } if (c.pc != 0x003FA940u) [[unlikely]] return; }
L_003FA940:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_003FA948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA950u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FA950u) [[unlikely]] return; }
L_003FA950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FA964; } }
L_003FA958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA960u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FA960u) [[unlikely]] return; }
L_003FA960:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FA964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003FA980:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[12], c.f[12]);  if (t) { goto L_003FAB0C; } }
L_003FA9C4:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 52u)));  if (t) { goto L_003FAA10; } }
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[20].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 15;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003FAB0C; }
L_003FAA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAA18u);  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x003FAA18u) [[unlikely]] return; }
L_003FAA18:
    c.f[12] = ld32((c.r[28].w[0] - 32372u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 124u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAA34u); set32(c.r[7], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0062(c, 118u, depth + 1u); else { c.pc = 0x00288E30u; return; } if (c.pc != 0x003FAA34u) [[unlikely]] return; }
L_003FAA34:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_003FAB08; }
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[17].w[0] + 308u));
    c.f[2] = ld32((c.r[17].w[0] + 312u));
    c.f[5] = ld32((c.r[17].w[0] + 316u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[4] = ld32((c.r[17].w[0] + 320u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 124u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[17].w[0] + 320u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_003FAAB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 120u));  goto L_003FAAB8; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003FAAB4:
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.budget -= 1;
L_003FAAB8:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003FAAF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_003FAAF8; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003FAAF4:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003FAAF8:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
L_003FAB08:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003FAB0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003FAB28; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA9C4u | kUnwind; return; } goto L_003FA9C4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003FAB28:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003FAB50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[12] = ld32((c.r[28].w[0] - 32372u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB78u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 118u, depth + 1u); else { c.pc = 0x00288E30u; return; } if (c.pc != 0x003FAB78u) [[unlikely]] return; }
L_003FAB78:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003FAC48; }
    c.f[2] = ld32((c.r[18].w[0] + 316u));
    c.f[1] = ld32((c.r[18].w[0] + 320u));
    c.f[3] = ld32((c.r[18].w[0] + 308u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[4] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 312u));
    c.f[2] = fp::sub(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 320u));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[4]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003FABF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[16].w[0]));  goto L_003FABF8; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003FABF4:
    c.f[1] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_003FABF8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.f[0] = 0u;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003FAC34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_003FAC38; }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003FAC34:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_003FAC38:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
L_003FAC48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FAC60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FACD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23760u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FACB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FACB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FACB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FACB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FACB8u) [[unlikely]] return; }
L_003FACB8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FACD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FACD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FACD0u) [[unlikely]] return; }
L_003FACD0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FACD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FACF0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FAD18; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003FAD10; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003FAD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FAD1C; } }
L_003FAD18:
    set32(c.r[2], c.r[2].w[0] - 4368u);
    c.budget -= 1;
L_003FAD1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FAD30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4176u);  c.pc = t; return; }
L_003FAD40:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[6].w[0] - 4080u);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 10u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD7Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x003FAD7Cu) [[unlikely]] return; }
L_003FAD7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAD8Cu); set32(c.r[5], c.r[5].w[0] - 4078u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003FAD8Cu) [[unlikely]] return; }
L_003FAD8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_003FADB0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FADA4u); set32(c.r[5], c.r[5].w[0] - 4073u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003FADA4u) [[unlikely]] return; }
L_003FADA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FADC0; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_003FADB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FADB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FADB8u) [[unlikely]] return; }
L_003FADB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FAF18; } }
L_003FADC0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FADCCu); set32(c.r[5], c.r[5].w[0] - 4078u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003FADCCu) [[unlikely]] return; }
L_003FADCC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FADD8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x003FADD8u) [[unlikely]] return; }
L_003FADD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FADE8u); set32(c.r[5], c.r[5].w[0] - 4073u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003FADE8u) [[unlikely]] return; }
L_003FADE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FADF4u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x003FADF4u) [[unlikely]] return; }
L_003FADF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE04u); set32(c.r[5], c.r[5].w[0] - 4068u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003FAE04u) [[unlikely]] return; }
L_003FAE04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_003FAE44; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE1Cu); set32(c.r[5], c.r[29].w[0] + 239u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x003FAE1Cu) [[unlikely]] return; }
L_003FAE1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = ld8((c.r[29].w[0] + 239u));  goto L_003FAE44; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FAE40; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x003FAE40u) [[unlikely]] return; }
L_003FAE40:
    c.r[17].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 1;
L_003FAE44:
    set32(c.r[4], 0u + 128u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE58u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FAE58u) [[unlikely]] return; }
L_003FAE58:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003FAEC8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_003FAE78; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_003FAE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE80u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x003FAE80u) [[unlikely]] return; }
L_003FAE80:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 112u);  if (t) { goto L_003FAE9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 168u)));  if (t) { goto L_003FAEA0; } }
L_003FAE9C:
    set32(c.r[5], c.r[29].w[0] + 161u);
    c.budget -= 1;
L_003FAEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAEA8u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003FAEA8u) [[unlikely]] return; }
L_003FAEA8:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAEC4u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 66u, depth + 1u); else { c.pc = 0x003FCA20u; return; } if (c.pc != 0x003FAEC4u) [[unlikely]] return; }
L_003FAEC4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003FAEC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FAEDC; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAEDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FAEDCu) [[unlikely]] return; }
L_003FAEDC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_003FAEF4; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAEF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003FAEF0u) [[unlikely]] return; }
L_003FAEF0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_003FAEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAEFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FAEFCu) [[unlikely]] return; }
L_003FAEFC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FAF08u) [[unlikely]] return; }
L_003FAF08:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x003FAF14u) [[unlikely]] return; }
L_003FAF14:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003FAF18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003FAF40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 4056u);
    set32(c.r[5], c.r[5].w[0] - 4029u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF6Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003FAF6Cu) [[unlikely]] return; }
L_003FAF6C:
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FAF7Cu) [[unlikely]] return; }
L_003FAF7C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 808u)));  goto L_003FAFBC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF9Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003FAF9Cu) [[unlikely]] return; }
L_003FAF9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 23760u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_003FAFBC:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003FB01C; }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 4056u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAFE8u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x003FAFE8u) [[unlikely]] return; }
L_003FAFE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB00Cu); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x003FB00Cu) [[unlikely]] return; }
L_003FB00C:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_003FB01C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FB030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FB068; } }
L_003FB048:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB05Cu); set32(c.r[4], ld32((c.r[2].w[0] - 4u)));  if (depth < kMaxDepth) unit_0089(c, 220u, depth + 1u); else { c.pc = 0x00327990u; return; } if (c.pc != 0x003FB05Cu) [[unlikely]] return; }
L_003FB05C:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 3;
L_003FB068:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB048u | kUnwind; return; } goto L_003FB048; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  if (t) { goto L_003FB0CC; } }
L_003FB07C:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB094u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FB094u) [[unlikely]] return; }
L_003FB094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB09Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FB09Cu) [[unlikely]] return; }
L_003FB09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB0A4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_008A(c, 196u, depth + 1u); else { c.pc = 0x0032BA60u; return; } if (c.pc != 0x003FB0A4u) [[unlikely]] return; }
L_003FB0A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB0BCu); set32(c.r[4], ld32((c.r[2].w[0] - 4u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FB0BCu) [[unlikely]] return; }
L_003FB0BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 4;
L_003FB0CC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 88u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB07Cu | kUnwind; return; } goto L_003FB07C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 104u)));  if (t) { goto L_003FB12C; } }
L_003FB0DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB0F4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FB0F4u) [[unlikely]] return; }
L_003FB0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB0FCu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FB0FCu) [[unlikely]] return; }
L_003FB0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB104u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0098(c, 240u, depth + 1u); else { c.pc = 0x00363B40u; return; } if (c.pc != 0x003FB104u) [[unlikely]] return; }
L_003FB104:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB11Cu); set32(c.r[4], ld32((c.r[2].w[0] - 4u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FB11Cu) [[unlikely]] return; }
L_003FB11C:
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 4;
L_003FB12C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 104u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB0DCu | kUnwind; return; } goto L_003FB0DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  if (t) { goto L_003FB184; } }
L_003FB13C:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB154u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FB154u) [[unlikely]] return; }
L_003FB154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB15Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_009D(c, 93u, depth + 1u); else { c.pc = 0x003755C0u; return; } if (c.pc != 0x003FB15Cu) [[unlikely]] return; }
L_003FB15C:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB174u); set32(c.r[4], ld32((c.r[2].w[0] - 4u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FB174u) [[unlikely]] return; }
L_003FB174:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
L_003FB184:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB13Cu | kUnwind; return; } goto L_003FB13C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FB1A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1D8u); set32(c.r[5], c.r[5].w[0] - 3993u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FB1D8u) [[unlikely]] return; }
L_003FB1D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003FB2FC; }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1ECu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FB1ECu) [[unlikely]] return; }
L_003FB1EC:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB208u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003FB208u) [[unlikely]] return; }
L_003FB208:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB230u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003FB230u) [[unlikely]] return; }
L_003FB230:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB248u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003FB248u) [[unlikely]] return; }
L_003FB248:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB270u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003FB270u) [[unlikely]] return; }
L_003FB270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB278u);  if (depth < kMaxDepth) unit_008A(c, 201u, depth + 1u); else { c.pc = 0x0032BAC0u; return; } if (c.pc != 0x003FB278u) [[unlikely]] return; }
L_003FB278:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[6], 0u + 12u);
    set32(c.r[10], 0u + 6u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[5], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[8], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2ACu); set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_008A(c, 194u, depth + 1u); else { c.pc = 0x0032BA30u; return; } if (c.pc != 0x003FB2ACu) [[unlikely]] return; }
L_003FB2AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2B8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_008A(c, 193u, depth + 1u); else { c.pc = 0x0032BA20u; return; } if (c.pc != 0x003FB2B8u) [[unlikely]] return; }
L_003FB2B8:
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[4], c.r[20].w[0] + 80u);
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 108u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2D8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003FB2D8u) [[unlikely]] return; }
L_003FB2D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 178u, depth + 1u); else { c.pc = 0x0032B650u; return; } if (c.pc != 0x003FB2F4u) [[unlikely]] return; }
L_003FB2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003FB694; } }
L_003FB2FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB308u); set32(c.r[5], c.r[5].w[0] - 3988u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FB308u) [[unlikely]] return; }
L_003FB308:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003FB400; }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB31Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FB31Cu) [[unlikely]] return; }
L_003FB31C:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB338u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003FB338u) [[unlikely]] return; }
L_003FB338:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB360u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003FB360u) [[unlikely]] return; }
L_003FB360:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB378u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003FB378u) [[unlikely]] return; }
L_003FB378:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3A0u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003FB3A0u) [[unlikely]] return; }
L_003FB3A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3C0u); set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0098(c, 244u, depth + 1u); else { c.pc = 0x00363BA0u; return; } if (c.pc != 0x003FB3C0u) [[unlikely]] return; }
L_003FB3C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[20].w[0] + 96u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 104u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3E8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003FB3E8u) [[unlikely]] return; }
L_003FB3E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 8u, depth + 1u); else { c.pc = 0x00364180u; return; } if (c.pc != 0x003FB3F8u) [[unlikely]] return; }
L_003FB3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB690; } }
L_003FB400:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB40Cu); set32(c.r[5], c.r[5].w[0] - 3981u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FB40Cu) [[unlikely]] return; }
L_003FB40C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003FB538; }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB420u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FB420u) [[unlikely]] return; }
L_003FB420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB428u); st32((c.r[29].w[0] + 100u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 98u, depth + 1u); else { c.pc = 0x003756D0u; return; } if (c.pc != 0x003FB428u) [[unlikely]] return; }
L_003FB428:
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = 0u;
    c.f[3] = c.r[3].w[0];
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 88u));
    set32(c.r[17], ld32((c.r[19].w[0] + 24u)));
    c.f[1] = ld32((c.r[19].w[0] + 64u));
    set32(c.r[16], ld32((c.r[19].w[0] + 28u)));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    st32((c.r[19].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 96u));
    c.f[1] = ld32((c.r[19].w[0] + 72u));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    st32((c.r[19].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 20;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 120u)));  goto L_003FB4F0; }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB484u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003FB484u) [[unlikely]] return; }
L_003FB484:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4A4u); set32(c.r[6], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003FB4A4u) [[unlikely]] return; }
L_003FB4A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = ld32((c.r[19].w[0] + 64u));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[19].w[0] + 72u));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.f[14] = ld32((c.r[19].w[0] + 68u));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.f[15] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.f[16] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4DCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009D(c, 94u, depth + 1u); else { c.pc = 0x003755D0u; return; } if (c.pc != 0x003FB4DCu) [[unlikely]] return; }
L_003FB4DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB4ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 10u, depth + 1u); else { c.pc = 0x003641E0u; return; } if (c.pc != 0x003FB4ECu) [[unlikely]] return; }
L_003FB4EC:
    set32(c.r[3], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 1;
L_003FB4F0:
    set32(c.r[4], c.r[20].w[0] + 112u);
    set32(c.r[2], ld32((c.r[20].w[0] + 124u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 100u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB50Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003FB50Cu) [[unlikely]] return; }
L_003FB50C:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB520u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 90u, depth + 1u); else { c.pc = 0x00375540u; return; } if (c.pc != 0x003FB520u) [[unlikely]] return; }
L_003FB520:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB530u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 11u, depth + 1u); else { c.pc = 0x003641F0u; return; } if (c.pc != 0x003FB530u) [[unlikely]] return; }
L_003FB530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB690; } }
L_003FB538:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB544u); set32(c.r[5], c.r[5].w[0] - 3969u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FB544u) [[unlikely]] return; }
L_003FB544:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003FB59C; }
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB55Cu); c.f[12] = c.f[0] & fp::kAbs;  if (depth < kMaxDepth) unit_009C(c, 19u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x003FB55Cu) [[unlikely]] return; }
L_003FB55C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB56Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 11u, depth + 1u); else { c.pc = 0x003641F0u; return; } if (c.pc != 0x003FB56Cu) [[unlikely]] return; }
L_003FB56C:
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003FB690; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB590u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 9u, depth + 1u); else { c.pc = 0x003641A0u; return; } if (c.pc != 0x003FB590u) [[unlikely]] return; }
L_003FB590:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB690; } }
L_003FB59C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5A8u); set32(c.r[5], c.r[5].w[0] - 3962u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FB5A8u) [[unlikely]] return; }
L_003FB5A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003FB5DC; }
    c.f[12] = ld32((c.r[19].w[0] + 64u));
    c.f[13] = ld32((c.r[19].w[0] + 68u));
    c.f[14] = ld32((c.r[19].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 63u, depth + 1u); else { c.pc = 0x00366A40u; return; } if (c.pc != 0x003FB5C4u) [[unlikely]] return; }
L_003FB5C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 11u, depth + 1u); else { c.pc = 0x003641F0u; return; } if (c.pc != 0x003FB5D4u) [[unlikely]] return; }
L_003FB5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB690; } }
L_003FB5DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5E8u); set32(c.r[5], c.r[5].w[0] - 3958u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FB5E8u) [[unlikely]] return; }
L_003FB5E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003FB644; }
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = ld32((c.r[19].w[0] + 60u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB604u); c.f[12] = c.f[0] & fp::kAbs;  if (depth < kMaxDepth) unit_009A(c, 61u, depth + 1u); else { c.pc = 0x00369DE0u; return; } if (c.pc != 0x003FB604u) [[unlikely]] return; }
L_003FB604:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB614u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 11u, depth + 1u); else { c.pc = 0x003641F0u; return; } if (c.pc != 0x003FB614u) [[unlikely]] return; }
L_003FB614:
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003FB690; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB638u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 9u, depth + 1u); else { c.pc = 0x003641A0u; return; } if (c.pc != 0x003FB638u) [[unlikely]] return; }
L_003FB638:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB690; } }
L_003FB644:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB650u); set32(c.r[5], c.r[5].w[0] - 3950u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FB650u) [[unlikely]] return; }
L_003FB650:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003FB680; }
    c.f[12] = ld32((c.r[19].w[0] + 56u));
    c.f[13] = ld32((c.r[19].w[0] + 60u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB668u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 102u, depth + 1u); else { c.pc = 0x003731C0u; return; } if (c.pc != 0x003FB668u) [[unlikely]] return; }
L_003FB668:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB678u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0099(c, 11u, depth + 1u); else { c.pc = 0x003641F0u; return; } if (c.pc != 0x003FB678u) [[unlikely]] return; }
L_003FB678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FB690; } }
L_003FB680:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB68Cu); set32(c.r[5], c.r[5].w[0] - 3941u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FB68Cu) [[unlikely]] return; }
L_003FB68C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FB690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003FB694:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FB6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003FB6C0:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 108u), c.f[31]);
    st32((c.r[29].w[0] + 104u), c.f[30]);
    st32((c.r[29].w[0] + 100u), c.f[29]);
    st32((c.r[29].w[0] + 96u), c.f[28]);
    st32((c.r[29].w[0] + 92u), c.f[27]);
    st32((c.r[29].w[0] + 88u), c.f[26]);
    st32((c.r[29].w[0] + 84u), c.f[25]);
    st32((c.r[29].w[0] + 80u), c.f[24]);
    st32((c.r[29].w[0] + 76u), c.f[23]);
    st32((c.r[29].w[0] + 72u), c.f[22]);
    st32((c.r[29].w[0] + 68u), c.f[21]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 324u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 28;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00BF(c, 22u, depth); } }
L_003FB730:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB754u); set32(c.r[5], c.r[2].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 311u, depth + 1u); else { c.pc = 0x003FB1A0u; return; } if (c.pc != 0x003FB754u) [[unlikely]] return; }
L_003FB754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 1052u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_00BF(c, 21u, depth); } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB76Cu); set32(c.r[5], c.r[2].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_00BE(c, 357u, depth + 1u); else { c.pc = 0x003FB6B0u; return; } if (c.pc != 0x003FB76Cu) [[unlikely]] return; }
L_003FB76C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 1040u), 0u);
    st32((c.r[29].w[0] + 1044u), 0u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 1048u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 88u));
    st32((c.r[29].w[0] + 1040u), c.f[2]);
    c.f[1] = ld32((c.r[2].w[0] + 92u));
    st32((c.r[29].w[0] + 1044u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    st32((c.r[29].w[0] + 1048u), c.f[0]);
    c.f[20] = ld32((c.r[2].w[0] + 76u));
    c.f[21] = ld32((c.r[2].w[0] + 80u));
    c.f[12] = ld32((c.r[2].w[0] + 84u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 25;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 656u);  goto L_003FB7F8; }
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[12]));
    c.f[0] = fp::sqrt(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[29].w[0] + 1052u)));  [[clang::musttail]] return unit_00BF(c, 3u, depth); }
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 1;
L_003FB7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB800u);  if (depth < kMaxDepth) unit_0009(c, 357u, depth + 1u); else { c.pc = 0x00127EA0u; return; } if (c.pc != 0x003FB800u) [[unlikely]] return; }
L_003FB800:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB80Cu); set32(c.r[4], c.r[29].w[0] + 784u);  if (depth < kMaxDepth) unit_00BF(c, 28u, depth + 1u); else { c.pc = 0x003FC3C0u; return; } if (c.pc != 0x003FB80Cu) [[unlikely]] return; }
L_003FB80C:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB818u); set32(c.r[4], c.r[29].w[0] + 720u);  if (depth < kMaxDepth) unit_00BF(c, 25u, depth + 1u); else { c.pc = 0x003FC300u; return; } if (c.pc != 0x003FB818u) [[unlikely]] return; }
L_003FB818:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[5], c.r[29].w[0] + 784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB828u); set32(c.r[6], c.r[29].w[0] + 720u);  if (depth < kMaxDepth) unit_0009(c, 356u, depth + 1u); else { c.pc = 0x00127C50u; return; } if (c.pc != 0x003FB828u) [[unlikely]] return; }
L_003FB828:
    c.f[12] = ld32((c.r[29].w[0] + 888u));
    set32(c.r[4], c.r[29].w[0] + 960u);
    c.f[4] = ld32((c.r[29].w[0] + 672u));
    c.f[18] = ld32((c.r[29].w[0] + 852u));
    st32((c.r[29].w[0] + 268u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 892u));
    c.f[17] = ld32((c.r[29].w[0] + 848u));
    c.f[3] = ld32((c.r[29].w[0] + 688u));
    st32((c.r[29].w[0] + 264u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 656u));
    c.f[16] = ld32((c.r[29].w[0] + 856u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[12]));
    c.f[2] = ld32((c.r[29].w[0] + 704u));
    c.f[15] = ld32((c.r[29].w[0] + 860u));
    c.f[8] = ld32((c.r[29].w[0] + 676u));
    c.f[7] = ld32((c.r[29].w[0] + 660u));
    st32((c.r[29].w[0] + 260u), c.f[12]);
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[3]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[15], c.f[2]));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[29].w[0] + 692u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[7]));
    c.f[5] = ld32((c.r[29].w[0] + 708u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[6]));
    c.f[20] = ld32((c.r[29].w[0] + 680u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[15], c.f[5]));
    c.f[11] = ld32((c.r[29].w[0] + 664u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[29].w[0] + 696u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[11]));
    c.f[9] = ld32((c.r[29].w[0] + 712u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[10]));
    c.f[28] = ld32((c.r[29].w[0] + 684u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[15], c.f[9]));
    c.f[26] = ld32((c.r[29].w[0] + 668u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[29].w[0] + 700u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[26]));
    c.f[22] = ld32((c.r[29].w[0] + 716u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 868u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[15], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 864u));
    c.f[16] = ld32((c.r[29].w[0] + 260u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 872u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[16]));
    c.f[19] = ld32((c.r[29].w[0] + 876u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 884u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[2]));
    c.facc = fp::mul(c.f[31], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[5]));
    c.facc = fp::mul(c.f[31], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[24]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 880u));
    c.f[29] = ld32((c.r[29].w[0] + 260u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 900u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[29]));
    c.f[29] = ld32((c.r[29].w[0] + 268u));
    c.f[25] = ld32((c.r[29].w[0] + 896u));
    c.f[23] = ld32((c.r[29].w[0] + 904u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 264u));
    c.f[21] = ld32((c.r[29].w[0] + 908u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    st32((c.r[29].w[0]), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.f[29] = ld32((c.r[29].w[0] + 268u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 264u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[29] = ld32((c.r[29].w[0] + 268u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 264u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    c.facc = fp::mul(c.f[27], c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[0]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.facc = fp::mul(c.f[27], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::mul(c.f[27], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::mul(c.f[27], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[26]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[22]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 120;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA08u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x003FBA08u) [[unlikely]] return; }
L_003FBA08:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA20u); set32(c.r[5], c.r[5].w[0] - 3981u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FBA20u) [[unlikely]] return; }
L_003FBA20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 400u);  goto L_003FBC98; }
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA34u); set32(c.r[5], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_00BF(c, 24u, depth + 1u); else { c.pc = 0x003FC2A0u; return; } if (c.pc != 0x003FBA34u) [[unlikely]] return; }
L_003FBA34:
    c.f[12] = ld32((c.r[29].w[0] + 568u));
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.f[4] = ld32((c.r[29].w[0] + 976u));
    c.f[18] = ld32((c.r[29].w[0] + 532u));
    st32((c.r[29].w[0] + 256u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 572u));
    c.f[17] = ld32((c.r[29].w[0] + 528u));
    c.f[3] = ld32((c.r[29].w[0] + 992u));
    st32((c.r[29].w[0] + 252u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 960u));
    c.f[16] = ld32((c.r[29].w[0] + 536u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[12]));
    c.f[2] = ld32((c.r[29].w[0] + 1008u));
    c.f[15] = ld32((c.r[29].w[0] + 540u));
    c.f[8] = ld32((c.r[29].w[0] + 980u));
    c.f[7] = ld32((c.r[29].w[0] + 964u));
    st32((c.r[29].w[0] + 248u), c.f[12]);
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[3]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[15], c.f[2]));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[29].w[0] + 996u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[7]));
    c.f[5] = ld32((c.r[29].w[0] + 1012u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[6]));
    c.f[20] = ld32((c.r[29].w[0] + 984u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[15], c.f[5]));
    c.f[11] = ld32((c.r[29].w[0] + 968u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[29].w[0] + 1000u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[11]));
    c.f[9] = ld32((c.r[29].w[0] + 1016u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[10]));
    c.f[28] = ld32((c.r[29].w[0] + 988u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[15], c.f[9]));
    c.f[26] = ld32((c.r[29].w[0] + 972u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[29].w[0] + 1004u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[26]));
    c.f[22] = ld32((c.r[29].w[0] + 1020u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 548u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[15], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 544u));
    c.f[16] = ld32((c.r[29].w[0] + 248u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 552u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[16]));
    c.f[19] = ld32((c.r[29].w[0] + 556u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 564u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[2]));
    c.facc = fp::mul(c.f[31], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[5]));
    c.facc = fp::mul(c.f[31], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[24]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    c.f[29] = ld32((c.r[29].w[0] + 248u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 580u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[29]));
    c.f[29] = ld32((c.r[29].w[0] + 256u));
    c.f[25] = ld32((c.r[29].w[0] + 576u));
    c.f[23] = ld32((c.r[29].w[0] + 584u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 252u));
    c.f[21] = ld32((c.r[29].w[0] + 588u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    st32((c.r[29].w[0]), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.f[29] = ld32((c.r[29].w[0] + 256u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 252u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[29] = ld32((c.r[29].w[0] + 256u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 252u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.facc = fp::mul(c.f[27], c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[0]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.facc = fp::mul(c.f[27], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::mul(c.f[27], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::mul(c.f[27], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[26]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[22]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 120;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC14u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x003FBC14u) [[unlikely]] return; }
L_003FBC14:
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    c.f[2] = ld32((c.r[29].w[0] + 592u));
    c.f[1] = ld32((c.r[29].w[0] + 596u));
    st32((c.r[29].w[0] + 968u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 612u));
    st32((c.r[29].w[0] + 960u), c.f[2]);
    st32((c.r[29].w[0] + 964u), c.f[1]);
    st32((c.r[29].w[0] + 980u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 604u));
    c.f[1] = ld32((c.r[29].w[0] + 608u));
    c.f[0] = ld32((c.r[29].w[0] + 624u));
    st32((c.r[29].w[0] + 972u), c.f[2]);
    st32((c.r[29].w[0] + 976u), c.f[1]);
    st32((c.r[29].w[0] + 992u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 616u));
    c.f[1] = ld32((c.r[29].w[0] + 620u));
    c.f[0] = ld32((c.r[29].w[0] + 636u));
    st32((c.r[29].w[0] + 984u), c.f[2]);
    st32((c.r[29].w[0] + 988u), c.f[1]);
    st32((c.r[29].w[0] + 1004u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 628u));
    c.f[1] = ld32((c.r[29].w[0] + 632u));
    c.f[0] = ld32((c.r[29].w[0] + 648u));
    st32((c.r[29].w[0] + 996u), c.f[2]);
    st32((c.r[29].w[0] + 1000u), c.f[1]);
    st32((c.r[29].w[0] + 1016u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 640u));
    c.f[1] = ld32((c.r[29].w[0] + 644u));
    c.f[0] = ld32((c.r[29].w[0] + 652u));
    st32((c.r[29].w[0] + 1008u), c.f[2]);
    st32((c.r[29].w[0] + 1012u), c.f[1]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1020u), c.f[0]);  if (t) { goto L_003FBF00; } }
L_003FBC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBCA0u); set32(c.r[5], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_00BF(c, 24u, depth + 1u); else { c.pc = 0x003FC2A0u; return; } if (c.pc != 0x003FBCA0u) [[unlikely]] return; }
L_003FBCA0:
    c.f[12] = ld32((c.r[29].w[0] + 1000u));
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.f[4] = ld32((c.r[29].w[0] + 416u));
    c.f[18] = ld32((c.r[29].w[0] + 964u));
    st32((c.r[29].w[0] + 244u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 1004u));
    c.f[15] = ld32((c.r[29].w[0] + 960u));
    c.f[3] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[29].w[0] + 240u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 400u));
    c.f[17] = ld32((c.r[29].w[0] + 968u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[12]));
    c.f[2] = ld32((c.r[29].w[0] + 448u));
    c.f[16] = ld32((c.r[29].w[0] + 972u));
    c.f[8] = ld32((c.r[29].w[0] + 420u));
    c.f[7] = ld32((c.r[29].w[0] + 404u));
    st32((c.r[29].w[0] + 236u), c.f[12]);
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[3]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[16], c.f[2]));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[29].w[0] + 436u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[7]));
    c.f[5] = ld32((c.r[29].w[0] + 452u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[6]));
    c.f[20] = ld32((c.r[29].w[0] + 424u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[16], c.f[5]));
    c.f[11] = ld32((c.r[29].w[0] + 408u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[29].w[0] + 440u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[11]));
    c.f[9] = ld32((c.r[29].w[0] + 456u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[10]));
    c.f[28] = ld32((c.r[29].w[0] + 428u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[16], c.f[9]));
    c.f[26] = ld32((c.r[29].w[0] + 412u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[29].w[0] + 444u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[26]));
    c.f[22] = ld32((c.r[29].w[0] + 460u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 980u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[16], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 976u));
    c.f[16] = ld32((c.r[29].w[0] + 236u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 984u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[16]));
    c.f[19] = ld32((c.r[29].w[0] + 988u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 996u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[2]));
    c.facc = fp::mul(c.f[31], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[5]));
    c.facc = fp::mul(c.f[31], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[24]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 992u));
    c.f[29] = ld32((c.r[29].w[0] + 236u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 1012u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[29]));
    c.f[29] = ld32((c.r[29].w[0] + 244u));
    c.f[25] = ld32((c.r[29].w[0] + 1008u));
    c.f[23] = ld32((c.r[29].w[0] + 1016u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 240u));
    c.f[21] = ld32((c.r[29].w[0] + 1020u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    st32((c.r[29].w[0]), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[8]);
    c.f[29] = ld32((c.r[29].w[0] + 244u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 240u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.facc = fp::mul(c.f[1], c.f[20]);
    c.f[29] = ld32((c.r[29].w[0] + 244u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 240u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[1], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.facc = fp::mul(c.f[27], c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[0]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.facc = fp::mul(c.f[27], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::mul(c.f[27], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::mul(c.f[27], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[26]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[22]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 120;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE80u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x003FBE80u) [[unlikely]] return; }
L_003FBE80:
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    c.f[2] = ld32((c.r[29].w[0] + 464u));
    c.f[1] = ld32((c.r[29].w[0] + 468u));
    st32((c.r[29].w[0] + 968u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    st32((c.r[29].w[0] + 960u), c.f[2]);
    st32((c.r[29].w[0] + 964u), c.f[1]);
    st32((c.r[29].w[0] + 980u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 476u));
    c.f[1] = ld32((c.r[29].w[0] + 480u));
    c.f[0] = ld32((c.r[29].w[0] + 496u));
    st32((c.r[29].w[0] + 972u), c.f[2]);
    st32((c.r[29].w[0] + 976u), c.f[1]);
    st32((c.r[29].w[0] + 992u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 488u));
    c.f[1] = ld32((c.r[29].w[0] + 492u));
    c.f[0] = ld32((c.r[29].w[0] + 508u));
    st32((c.r[29].w[0] + 984u), c.f[2]);
    st32((c.r[29].w[0] + 988u), c.f[1]);
    st32((c.r[29].w[0] + 1004u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 500u));
    c.f[1] = ld32((c.r[29].w[0] + 504u));
    c.f[0] = ld32((c.r[29].w[0] + 520u));
    st32((c.r[29].w[0] + 996u), c.f[2]);
    st32((c.r[29].w[0] + 1000u), c.f[1]);
    st32((c.r[29].w[0] + 1016u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 512u));
    c.f[1] = ld32((c.r[29].w[0] + 516u));
    c.f[0] = ld32((c.r[29].w[0] + 524u));
    st32((c.r[29].w[0] + 1008u), c.f[2]);
    st32((c.r[29].w[0] + 1012u), c.f[1]);
    st32((c.r[29].w[0] + 1020u), c.f[0]);
    c.budget -= 32;
L_003FBF00:
    c.f[2] = ld32((c.r[29].w[0] + 960u));
    set32(c.r[4], ld32((c.r[29].w[0] + 1052u)));
    c.f[1] = ld32((c.r[29].w[0] + 964u));
    c.f[0] = ld32((c.r[29].w[0] + 968u));
    st32((c.r[29].w[0] + 912u), c.f[2]);
    st32((c.r[29].w[0] + 928u), c.f[1]);
    st32((c.r[29].w[0] + 944u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 976u));
    c.f[1] = ld32((c.r[29].w[0] + 980u));
    c.f[0] = ld32((c.r[29].w[0] + 984u));
    st32((c.r[29].w[0] + 916u), c.f[2]);
    st32((c.r[29].w[0] + 932u), c.f[1]);
    st32((c.r[29].w[0] + 948u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 992u));
    c.f[1] = ld32((c.r[29].w[0] + 996u));
    c.f[0] = ld32((c.r[29].w[0] + 1000u));
    st32((c.r[29].w[0] + 920u), c.f[2]);
    st32((c.r[29].w[0] + 936u), c.f[1]);
    st32((c.r[29].w[0] + 952u), c.f[0]);
    st32((c.r[29].w[0] + 924u), 0u);
    c.f[12] = ld32((c.r[29].w[0] + 1008u));
    st32((c.r[29].w[0] + 940u), 0u);
    c.f[13] = ld32((c.r[29].w[0] + 1012u));
    c.f[14] = ld32((c.r[29].w[0] + 1016u));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF68u); st32((c.r[29].w[0] + 956u), 0u);  if (depth < kMaxDepth) unit_0089(c, 204u, depth + 1u); else { c.pc = 0x003276B0u; return; } if (c.pc != 0x003FBF68u) [[unlikely]] return; }
L_003FBF68:
    set32(c.r[4], ld32((c.r[29].w[0] + 1052u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF74u); set32(c.r[5], c.r[29].w[0] + 912u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x003275C0u; return; } if (c.pc != 0x003FBF74u) [[unlikely]] return; }
L_003FBF74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BF(c, 2u, depth); } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF88u); st32((c.r[29].w[0] + 1036u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003FBF88u) [[unlikely]] return; }
L_003FBF88:
    st32((c.r[29].w[0] + 1032u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF94u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x003FBF94u) [[unlikely]] return; }
L_003FBF94:
    set32(c.r[4], c.r[29].w[0] + 960u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBFA0u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00BF(c, 23u, depth + 1u); else { c.pc = 0x003FC220u; return; } if (c.pc != 0x003FBFA0u) [[unlikely]] return; }
L_003FBFA0:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBFACu); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x003FBFACu) [[unlikely]] return; }
L_003FBFAC:
    set32(c.r[5], c.r[29].w[0] + 336u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_003FBFB8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBFB8u | kUnwind; return; } goto L_003FBFB8; } }
    c.f[2] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[4], ld32((c.r[29].w[0] + 1032u)));
    c.f[1] = ld32((c.r[29].w[0] + 388u));
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    st32((c.r[16].w[0] + 96u), c.f[2]);
    st32((c.r[16].w[0] + 100u), c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 396u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC004u); st32((c.r[16].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003FC004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00BF(c, 2u, depth);
}

}
