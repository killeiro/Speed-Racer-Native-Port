#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005B[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0,
    12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109,
    0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221,
    0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0,
    0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314,
    0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
};

void unit_005B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0026C000;
    case 2u: goto L_0026C004;
    case 3u: goto L_0026C010;
    case 4u: goto L_0026C03C;
    case 5u: goto L_0026C094;
    case 6u: goto L_0026C104;
    case 7u: goto L_0026C224;
    case 8u: goto L_0026C240;
    case 9u: goto L_0026C25C;
    case 10u: goto L_0026C268;
    case 11u: goto L_0026C274;
    case 12u: goto L_0026C280;
    case 13u: goto L_0026C28C;
    case 14u: goto L_0026C298;
    case 15u: goto L_0026C2AC;
    case 16u: goto L_0026C2C0;
    case 17u: goto L_0026C2E0;
    case 18u: goto L_0026C2FC;
    case 19u: goto L_0026C324;
    case 20u: goto L_0026C340;
    case 21u: goto L_0026C360;
    case 22u: goto L_0026C384;
    case 23u: goto L_0026C38C;
    case 24u: goto L_0026C3AC;
    case 25u: goto L_0026C3BC;
    case 26u: goto L_0026C3D8;
    case 27u: goto L_0026C3EC;
    case 28u: goto L_0026C3FC;
    case 29u: goto L_0026C408;
    case 30u: goto L_0026C428;
    case 31u: goto L_0026C438;
    case 32u: goto L_0026C454;
    case 33u: goto L_0026C468;
    case 34u: goto L_0026C478;
    case 35u: goto L_0026C49C;
    case 36u: goto L_0026C4E4;
    case 37u: goto L_0026C510;
    case 38u: goto L_0026C52C;
    case 39u: goto L_0026C538;
    case 40u: goto L_0026C544;
    case 41u: goto L_0026C550;
    case 42u: goto L_0026C55C;
    case 43u: goto L_0026C568;
    case 44u: goto L_0026C570;
    case 45u: goto L_0026C578;
    case 46u: goto L_0026C590;
    case 47u: goto L_0026C5A4;
    case 48u: goto L_0026C5BC;
    case 49u: goto L_0026C5D0;
    case 50u: goto L_0026C5EC;
    case 51u: goto L_0026C608;
    case 52u: goto L_0026C624;
    case 53u: goto L_0026C640;
    case 54u: goto L_0026C66C;
    case 55u: goto L_0026C690;
    case 56u: goto L_0026C6B0;
    case 57u: goto L_0026C6C0;
    case 58u: goto L_0026C6DC;
    case 59u: goto L_0026C6F0;
    case 60u: goto L_0026C700;
    case 61u: goto L_0026C71C;
    case 62u: goto L_0026C73C;
    case 63u: goto L_0026C74C;
    case 64u: goto L_0026C768;
    case 65u: goto L_0026C77C;
    case 66u: goto L_0026C78C;
    case 67u: goto L_0026C800;
    case 68u: goto L_0026C810;
    case 69u: goto L_0026C8CC;
    case 70u: goto L_0026C8E0;
    case 71u: goto L_0026C910;
    case 72u: goto L_0026C950;
    case 73u: goto L_0026C978;
    case 74u: goto L_0026C994;
    case 75u: goto L_0026C9A8;
    case 76u: goto L_0026C9D0;
    case 77u: goto L_0026C9FC;
    case 78u: goto L_0026CA18;
    case 79u: goto L_0026CA38;
    case 80u: goto L_0026CA48;
    case 81u: goto L_0026CA64;
    case 82u: goto L_0026CA78;
    case 83u: goto L_0026CA88;
    case 84u: goto L_0026CAA0;
    case 85u: goto L_0026CAB0;
    case 86u: goto L_0026CACC;
    case 87u: goto L_0026CAF0;
    case 88u: goto L_0026CB0C;
    case 89u: goto L_0026CB20;
    case 90u: goto L_0026CB64;
    case 91u: goto L_0026CB7C;
    case 92u: goto L_0026CB94;
    case 93u: goto L_0026CBA4;
    case 94u: goto L_0026CC30;
    case 95u: goto L_0026CC40;
    case 96u: goto L_0026CC7C;
    case 97u: goto L_0026CCE8;
    case 98u: goto L_0026CD60;
    case 99u: goto L_0026CDBC;
    case 100u: goto L_0026CE14;
    case 101u: goto L_0026CE80;
    case 102u: goto L_0026CF38;
    case 103u: goto L_0026CF68;
    case 104u: goto L_0026D0A4;
    case 105u: goto L_0026D0E0;
    case 106u: goto L_0026D238;
    case 107u: goto L_0026D25C;
    case 108u: goto L_0026D270;
    case 109u: goto L_0026D27C;
    case 110u: goto L_0026D284;
    case 111u: goto L_0026D290;
    case 112u: goto L_0026D434;
    case 113u: goto L_0026D464;
    case 114u: goto L_0026D474;
    case 115u: goto L_0026D480;
    case 116u: goto L_0026D4A4;
    case 117u: goto L_0026D500;
    case 118u: goto L_0026D52C;
    case 119u: goto L_0026D5C4;
    case 120u: goto L_0026D690;
    case 121u: goto L_0026D69C;
    case 122u: goto L_0026D728;
    case 123u: goto L_0026D77C;
    case 124u: goto L_0026D7A0;
    case 125u: goto L_0026D7F8;
    case 126u: goto L_0026D808;
    case 127u: goto L_0026D878;
    case 128u: goto L_0026D8F0;
    case 129u: goto L_0026D900;
    case 130u: goto L_0026DA54;
    case 131u: goto L_0026DA6C;
    case 132u: goto L_0026DAA0;
    case 133u: goto L_0026DAAC;
    case 134u: goto L_0026DB0C;
    case 135u: goto L_0026DB90;
    case 136u: goto L_0026DBB4;
    case 137u: goto L_0026DBE0;
    case 138u: goto L_0026DC2C;
    case 139u: goto L_0026DC3C;
    case 140u: goto L_0026DC50;
    case 141u: goto L_0026DC64;
    case 142u: goto L_0026DCD0;
    case 143u: goto L_0026DD20;
    case 144u: goto L_0026DD70;
    case 145u: goto L_0026DDA0;
    case 146u: goto L_0026DDF0;
    case 147u: goto L_0026DE40;
    case 148u: goto L_0026DE50;
    case 149u: goto L_0026DE98;
    case 150u: goto L_0026DEA8;
    case 151u: goto L_0026DEC4;
    case 152u: goto L_0026DED8;
    case 153u: goto L_0026DEE8;
    case 154u: goto L_0026DF04;
    case 155u: goto L_0026DF14;
    case 156u: goto L_0026DF30;
    case 157u: goto L_0026DF44;
    case 158u: goto L_0026DF54;
    case 159u: goto L_0026DF60;
    case 160u: goto L_0026DF80;
    case 161u: goto L_0026DF90;
    case 162u: goto L_0026DFAC;
    case 163u: goto L_0026DFCC;
    case 164u: goto L_0026DFDC;
    case 165u: goto L_0026DFF8;
    case 166u: goto L_0026E004;
    case 167u: goto L_0026E020;
    case 168u: goto L_0026E040;
    case 169u: goto L_0026E064;
    case 170u: goto L_0026E080;
    case 171u: goto L_0026E090;
    case 172u: goto L_0026E0A0;
    case 173u: goto L_0026E0B0;
    case 174u: goto L_0026E12C;
    case 175u: goto L_0026E1B0;
    case 176u: goto L_0026E1C0;
    case 177u: goto L_0026E210;
    case 178u: goto L_0026E230;
    case 179u: goto L_0026E264;
    case 180u: goto L_0026E290;
    case 181u: goto L_0026E2A0;
    case 182u: goto L_0026E2B4;
    case 183u: goto L_0026E2C0;
    case 184u: goto L_0026E2D4;
    case 185u: goto L_0026E2F0;
    case 186u: goto L_0026E300;
    case 187u: goto L_0026E310;
    case 188u: goto L_0026E320;
    case 189u: goto L_0026E334;
    case 190u: goto L_0026E360;
    case 191u: goto L_0026E374;
    case 192u: goto L_0026E3A0;
    case 193u: goto L_0026E3B0;
    case 194u: goto L_0026E3D0;
    case 195u: goto L_0026E3FC;
    case 196u: goto L_0026E410;
    case 197u: goto L_0026E418;
    case 198u: goto L_0026E430;
    case 199u: goto L_0026E454;
    case 200u: goto L_0026E464;
    case 201u: goto L_0026E470;
    case 202u: goto L_0026E4B0;
    case 203u: goto L_0026E4BC;
    case 204u: goto L_0026E4D0;
    case 205u: goto L_0026E4E8;
    case 206u: goto L_0026E4F4;
    case 207u: goto L_0026E508;
    case 208u: goto L_0026E520;
    case 209u: goto L_0026E534;
    case 210u: goto L_0026E560;
    case 211u: goto L_0026E5A8;
    case 212u: goto L_0026E5B8;
    case 213u: goto L_0026E5D4;
    case 214u: goto L_0026E5E0;
    case 215u: goto L_0026E5FC;
    case 216u: goto L_0026E620;
    case 217u: goto L_0026E630;
    case 218u: goto L_0026E64C;
    case 219u: goto L_0026E658;
    case 220u: goto L_0026E66C;
    case 221u: goto L_0026E67C;
    case 222u: goto L_0026E690;
    case 223u: goto L_0026E6A0;
    case 224u: goto L_0026E6B4;
    case 225u: goto L_0026E6D0;
    case 226u: goto L_0026E6EC;
    case 227u: goto L_0026E7A4;
    case 228u: goto L_0026E7D0;
    case 229u: goto L_0026E7EC;
    case 230u: goto L_0026E7F8;
    case 231u: goto L_0026E80C;
    case 232u: goto L_0026E820;
    case 233u: goto L_0026E83C;
    case 234u: goto L_0026E864;
    case 235u: goto L_0026E880;
    case 236u: goto L_0026E890;
    case 237u: goto L_0026E8B0;
    case 238u: goto L_0026E8BC;
    case 239u: goto L_0026E8C4;
    case 240u: goto L_0026E8E4;
    case 241u: goto L_0026E8F4;
    case 242u: goto L_0026E910;
    case 243u: goto L_0026E924;
    case 244u: goto L_0026E934;
    case 245u: goto L_0026E950;
    case 246u: goto L_0026E96C;
    case 247u: goto L_0026E97C;
    case 248u: goto L_0026E9C0;
    case 249u: goto L_0026E9D0;
    case 250u: goto L_0026E9F0;
    case 251u: goto L_0026EA1C;
    case 252u: goto L_0026EA2C;
    case 253u: goto L_0026EA70;
    case 254u: goto L_0026EA80;
    case 255u: goto L_0026EA94;
    case 256u: goto L_0026EACC;
    case 257u: goto L_0026EADC;
    case 258u: goto L_0026EAF8;
    case 259u: goto L_0026EB0C;
    case 260u: goto L_0026EB1C;
    case 261u: goto L_0026EB50;
    case 262u: goto L_0026EC48;
    case 263u: goto L_0026ED00;
    case 264u: goto L_0026ED2C;
    case 265u: goto L_0026ED48;
    case 266u: goto L_0026ED68;
    case 267u: goto L_0026ED78;
    case 268u: goto L_0026ED94;
    case 269u: goto L_0026EDA8;
    case 270u: goto L_0026EDB8;
    case 271u: goto L_0026EDD0;
    case 272u: goto L_0026EDE0;
    case 273u: goto L_0026EDFC;
    case 274u: goto L_0026EE20;
    case 275u: goto L_0026EE3C;
    case 276u: goto L_0026EE50;
    case 277u: goto L_0026EE94;
    case 278u: goto L_0026EEA4;
    case 279u: goto L_0026EEC0;
    case 280u: goto L_0026EED4;
    case 281u: goto L_0026EEE4;
    case 282u: goto L_0026EF10;
    case 283u: goto L_0026EF64;
    case 284u: goto L_0026EF74;
    case 285u: goto L_0026EF90;
    case 286u: goto L_0026EFA4;
    case 287u: goto L_0026EFB4;
    case 288u: goto L_0026F02C;
    case 289u: goto L_0026F0D0;
    case 290u: goto L_0026F0E0;
    case 291u: goto L_0026F0FC;
    case 292u: goto L_0026F110;
    case 293u: goto L_0026F120;
    case 294u: goto L_0026F150;
    case 295u: goto L_0026F1D0;
    case 296u: goto L_0026F1F0;
    case 297u: goto L_0026F210;
    case 298u: goto L_0026F220;
    case 299u: goto L_0026F240;
    case 300u: goto L_0026F260;
    case 301u: goto L_0026F270;
    case 302u: goto L_0026F280;
    case 303u: goto L_0026F2B0;
    case 304u: goto L_0026F2E8;
    case 305u: goto L_0026F2F8;
    case 306u: goto L_0026F320;
    case 307u: goto L_0026F33C;
    case 308u: goto L_0026F37C;
    case 309u: goto L_0026F38C;
    case 310u: goto L_0026F3B0;
    case 311u: goto L_0026F3C0;
    case 312u: goto L_0026F3DC;
    case 313u: goto L_0026F3E8;
    case 314u: goto L_0026F3FC;
    case 315u: goto L_0026F40C;
    case 316u: goto L_0026F420;
    case 317u: goto L_0026F440;
    case 318u: goto L_0026F464;
    case 319u: goto L_0026F4C4;
    case 320u: goto L_0026F4DC;
    case 321u: goto L_0026F520;
    case 322u: goto L_0026F53C;
    case 323u: goto L_0026F548;
    case 324u: goto L_0026F560;
    case 325u: goto L_0026F588;
    case 326u: goto L_0026F5A0;
    case 327u: goto L_0026F5B0;
    case 328u: goto L_0026F5C0;
    case 329u: goto L_0026F5E4;
    case 330u: goto L_0026F5F0;
    case 331u: goto L_0026F608;
    case 332u: goto L_0026F644;
    case 333u: goto L_0026F670;
    case 334u: goto L_0026F6A0;
    case 335u: goto L_0026F700;
    case 336u: goto L_0026F718;
    case 337u: goto L_0026F728;
    case 338u: goto L_0026F760;
    case 339u: goto L_0026F79C;
    case 340u: goto L_0026F7B0;
    case 341u: goto L_0026F7C0;
    case 342u: goto L_0026F7D4;
    case 343u: goto L_0026F7E8;
    case 344u: goto L_0026F808;
    case 345u: goto L_0026F840;
    case 346u: goto L_0026F878;
    case 347u: goto L_0026F8CC;
    case 348u: goto L_0026F8DC;
    case 349u: goto L_0026F8F0;
    case 350u: goto L_0026F900;
    case 351u: goto L_0026F91C;
    case 352u: goto L_0026F950;
    case 353u: goto L_0026F97C;
    case 354u: goto L_0026F9A0;
    case 355u: goto L_0026F9F0;
    case 356u: goto L_0026FA44;
    case 357u: goto L_0026FA50;
    case 358u: goto L_0026FA6C;
    case 359u: goto L_0026FA90;
    case 360u: goto L_0026FAAC;
    case 361u: goto L_0026FAB8;
    case 362u: goto L_0026FAD0;
    case 363u: goto L_0026FAE0;
    case 364u: goto L_0026FAFC;
    case 365u: goto L_0026FB08;
    case 366u: goto L_0026FB20;
    case 367u: goto L_0026FB30;
    case 368u: goto L_0026FBA0;
    case 369u: goto L_0026FBB4;
    case 370u: goto L_0026FDB0;
    case 371u: goto L_0026FDCC;
    case 372u: goto L_0026FE50;
    case 373u: goto L_0026FECC;
    case 374u: goto L_0026FF10;
    case 375u: goto L_0026FF7C;
    case 376u: goto L_0026FFF4;
    default: bad_entry(c, 0x0026C000u); return;
    }
L_0026C000:
    c.budget -= 1;
L_0026C004:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026C224; }
L_0026C010:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026C024; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026C044; } }
L_0026C024:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_0026C054; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C03Cu); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C03Cu) [[unlikely]] return; }
L_0026C03C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026C050; } }
L_0026C044:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C224; } }
L_0026C050:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0026C054:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026C068; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026C224; }
L_0026C068:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026C07C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026C09C; } }
L_0026C07C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  goto L_0026C0AC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C094u); set32(c.r[5], ld32((c.r[16].w[0] + 28u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C094u) [[unlikely]] return; }
L_0026C094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026C0A8; } }
L_0026C09C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C224; } }
L_0026C0A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_0026C0AC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026C0C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026C224; }
L_0026C0C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026C0E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C0E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026C224; } }
L_0026C0E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 36u));  goto L_0026C118; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026C0F8; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0026C0F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C104u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0026C104u) [[unlikely]] return; }
L_0026C104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026C114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C224; } }
L_0026C114:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 1;
L_0026C118:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026C224; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026C220; } }
    c.r[5].d[0] = c.r[2].d[0] & 2ull;
    c.r[4].d[0] = c.r[3].d[0] & 2ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026C220; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026C220; } }
    c.r[5].d[0] = c.r[2].d[0] & 4ull;
    c.r[4].d[0] = c.r[3].d[0] & 4ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026C220; } }
    c.r[5].d[0] = c.r[2].d[0] & 8ull;
    c.r[4].d[0] = c.r[3].d[0] & 8ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026C220; } }
    c.r[5].d[0] = c.r[2].d[0] & 16ull;
    c.r[4].d[0] = c.r[3].d[0] & 16ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026C220; } }
    c.r[5].d[0] = c.r[2].d[0] & 32ull;
    c.r[4].d[0] = c.r[3].d[0] & 32ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026C220; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026C220; } }
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026C220; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026C220; } }
    c.r[4].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0026C224; }
L_0026C220:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026C224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026C240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C25Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 258u, depth + 1u); else { c.pc = 0x002620A0u; return; } if (c.pc != 0x0026C25Cu) [[unlikely]] return; }
L_0026C25C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C268u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0026C268u) [[unlikely]] return; }
L_0026C268:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C274u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_005B(c, 175u, depth + 1u); else { c.pc = 0x0026E1B0u; return; } if (c.pc != 0x0026C274u) [[unlikely]] return; }
L_0026C274:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C280u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0026C280u) [[unlikely]] return; }
L_0026C280:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C28Cu); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0026C28Cu) [[unlikely]] return; }
L_0026C28C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C298u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003F(c, 92u, depth + 1u); else { c.pc = 0x001FD320u; return; } if (c.pc != 0x0026C298u) [[unlikely]] return; }
L_0026C298:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C2ACu) [[unlikely]] return; }
L_0026C2AC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C2C0u) [[unlikely]] return; }
L_0026C2C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026C2E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C2FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 259u, depth + 1u); else { c.pc = 0x002620B0u; return; } if (c.pc != 0x0026C2FCu) [[unlikely]] return; }
L_0026C2FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0026C30C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026C344; } }
L_0026C30C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_0026C328; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C324u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C324u) [[unlikely]] return; }
L_0026C324:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0026C328:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026C344; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C340u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C340u) [[unlikely]] return; }
L_0026C340:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026C344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026C360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C384u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 260u, depth + 1u); else { c.pc = 0x002620C0u; return; } if (c.pc != 0x0026C384u) [[unlikely]] return; }
L_0026C384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C38Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0026C38Cu) [[unlikely]] return; }
L_0026C38C:
    set32(c.r[17], ld32((c.r[19].w[0] + 24u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0026C400; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 24u), c.r[16].w[0]);  goto L_0026C3DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026C3ACu) [[unlikely]] return; }
L_0026C3AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3BCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026C3BCu) [[unlikely]] return; }
L_0026C3BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026C3D8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C3D8u) [[unlikely]] return; }
L_0026C3D8:
    st32((c.r[19].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_0026C3DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026C3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026C3ECu) [[unlikely]] return; }
L_0026C3EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3FCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026C3FCu) [[unlikely]] return; }
L_0026C3FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0026C400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C408u);  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0026C408u) [[unlikely]] return; }
L_0026C408:
    set32(c.r[17], ld32((c.r[19].w[0] + 28u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));  goto L_0026C47C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 28u), c.r[16].w[0]);  goto L_0026C458; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C428u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026C428u) [[unlikely]] return; }
L_0026C428:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C438u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026C438u) [[unlikely]] return; }
L_0026C438:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026C454; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C454u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C454u) [[unlikely]] return; }
L_0026C454:
    st32((c.r[19].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_0026C458:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026C478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C468u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026C468u) [[unlikely]] return; }
L_0026C468:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C478u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026C478u) [[unlikely]] return; }
L_0026C478:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));
    c.budget -= 1;
L_0026C47C:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 24u)));  goto L_0026C4A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C49Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 135u, depth + 1u); else { c.pc = 0x0026DB90u; return; } if (c.pc != 0x0026C49Cu) [[unlikely]] return; }
L_0026C49C:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_0026C4A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026C4B8; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0026C4C0; } }
L_0026C4B8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026C4C0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0026C4EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13400u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C4E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C4E4u) [[unlikely]] return; }
L_0026C4E4:
    st32((c.r[19].w[0] + 52u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0026C4EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026C510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C52Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 261u, depth + 1u); else { c.pc = 0x002620D0u; return; } if (c.pc != 0x0026C52Cu) [[unlikely]] return; }
L_0026C52C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C538u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0026C538u) [[unlikely]] return; }
L_0026C538:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C544u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_005B(c, 176u, depth + 1u); else { c.pc = 0x0026E1C0u; return; } if (c.pc != 0x0026C544u) [[unlikely]] return; }
L_0026C544:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C550u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0026C550u) [[unlikely]] return; }
L_0026C550:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C55Cu); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0026C55Cu) [[unlikely]] return; }
L_0026C55C:
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 93u, depth + 1u); else { c.pc = 0x001FD330u; return; } if (c.pc != 0x0026C568u) [[unlikely]] return; }
L_0026C568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C570u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0026C570u) [[unlikely]] return; }
L_0026C570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C578u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0026C578u) [[unlikely]] return; }
L_0026C578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026C590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026C5A4u) [[unlikely]] return; }
L_0026C5A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0026C5C0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 168u, depth + 1u); else { c.pc = 0x0026E040u; return; } if (c.pc != 0x0026C5BCu) [[unlikely]] return; }
L_0026C5BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026C5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026C5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C5ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB580u; return; } if (c.pc != 0x0026C5ECu) [[unlikely]] return; }
L_0026C5EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_0026C60C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C608u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C608u) [[unlikely]] return; }
L_0026C608:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0026C60C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0026C628; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C624u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C624u) [[unlikely]] return; }
L_0026C624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026C628:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026C640:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C66Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x002620E0u; return; } if (c.pc != 0x0026C66Cu) [[unlikely]] return; }
L_0026C66C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  goto L_0026C704; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C690u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C690u) [[unlikely]] return; }
L_0026C690:
    set32(c.r[19], ld32((c.r[16].w[0] + 24u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[18].d[0];  if (t) { goto L_0026C700; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), c.r[18].w[0]);  goto L_0026C6E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026C6B0u) [[unlikely]] return; }
L_0026C6B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6C0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026C6C0u) [[unlikely]] return; }
L_0026C6C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026C6DC; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C6DCu) [[unlikely]] return; }
L_0026C6DC:
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    c.budget -= 1;
L_0026C6E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026C700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C6F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026C6F0u) [[unlikely]] return; }
L_0026C6F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C700u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026C700u) [[unlikely]] return; }
L_0026C700:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0026C704:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));  goto L_0026C790; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C71Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C71Cu) [[unlikely]] return; }
L_0026C71C:
    set32(c.r[19], ld32((c.r[16].w[0] + 28u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[18].d[0];  if (t) { goto L_0026C78C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), c.r[18].w[0]);  goto L_0026C76C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C73Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026C73Cu) [[unlikely]] return; }
L_0026C73C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C74Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026C74Cu) [[unlikely]] return; }
L_0026C74C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026C768; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C768u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026C768u) [[unlikely]] return; }
L_0026C768:
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 1;
L_0026C76C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026C78C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C77Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026C77Cu) [[unlikely]] return; }
L_0026C77C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C78Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026C78Cu) [[unlikely]] return; }
L_0026C78C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 1;
L_0026C790:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0026C7AC; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0026C7B4; } }
L_0026C7AC:
    c.r[2].d[0] = c.r[2].d[0] & 65531ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026C7B4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0026C7D4; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0026C7DC; } }
L_0026C7D4:
    c.r[2].d[0] = c.r[2].d[0] & 65527ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026C7DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C800u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 71u, depth + 1u); else { c.pc = 0x0026C910u; return; } if (c.pc != 0x0026C800u) [[unlikely]] return; }
L_0026C800:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));  goto L_0026C814; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C810u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 135u, depth + 1u); else { c.pc = 0x0026DB90u; return; } if (c.pc != 0x0026C810u) [[unlikely]] return; }
L_0026C810:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.budget -= 1;
L_0026C814:
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0026C830; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C838; } }
L_0026C830:
    c.r[3].d[0] = c.r[3].d[0] & 65503ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026C838:
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 48u)));
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0026C870; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C878; } }
L_0026C870:
    c.r[3].d[0] = c.r[3].d[0] & 65471ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026C878:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0026C898; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C8A0; } }
L_0026C898:
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026C8A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 36u));  goto L_0026C8E4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026C8BC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0026C8BC:
    set32(c.r[18], c.r[2].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0026C8CCu) [[unlikely]] return; }
L_0026C8CC:
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C8E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0026C8E0u) [[unlikely]] return; }
L_0026C8E0:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 1;
L_0026C8E4:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026C910:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = c.r[6].d[0] & 65535ull;  goto L_0026C928; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026C93C; } }
L_0026C928:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0026C93C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026C950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C978u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026C978u) [[unlikely]] return; }
L_0026C978:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0026C99C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C994u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 168u, depth + 1u); else { c.pc = 0x0026E040u; return; } if (c.pc != 0x0026C994u) [[unlikely]] return; }
L_0026C994:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0026C99C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 53u, depth + 1u); else { c.pc = 0x0026C640u; return; } if (c.pc != 0x0026C9A8u) [[unlikely]] return; }
L_0026C9A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026C9D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9FCu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 223u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x0026C9FCu) [[unlikely]] return; }
L_0026C9FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026CACC; } }
    c.f[12] = c.f[21];
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA18u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0057(c, 48u, depth + 1u); else { c.pc = 0x0025C5C0u; return; } if (c.pc != 0x0026CA18u) [[unlikely]] return; }
L_0026CA18:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { st32((c.r[17].w[0] + 20u), 0u);  goto L_0026CA8C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  goto L_0026CA68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026CA38u) [[unlikely]] return; }
L_0026CA38:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA48u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026CA48u) [[unlikely]] return; }
L_0026CA48:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026CA64; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA64u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CA64u) [[unlikely]] return; }
L_0026CA64:
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_0026CA68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026CA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026CA78u) [[unlikely]] return; }
L_0026CA78:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA88u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026CA88u) [[unlikely]] return; }
L_0026CA88:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_0026CA8C:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0026CAD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CAA0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026CAA0u) [[unlikely]] return; }
L_0026CAA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CAB0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026CAB0u) [[unlikely]] return; }
L_0026CAB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026CACC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CACCu) [[unlikely]] return; }
L_0026CACC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026CAD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026CAF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0026CB10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CB0Cu);  if (depth < kMaxDepth) unit_0057(c, 62u, depth + 1u); else { c.pc = 0x0025C7B0u; return; } if (c.pc != 0x0026CB0Cu) [[unlikely]] return; }
L_0026CB0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026CB10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026CB20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CB64u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CB64u) [[unlikely]] return; }
L_0026CB64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32640u));  goto L_0026CBE8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CB7Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 263u, depth + 1u); else { c.pc = 0x002620F0u; return; } if (c.pc != 0x0026CB7Cu) [[unlikely]] return; }
L_0026CB7C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CB94u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CB94u) [[unlikely]] return; }
L_0026CB94:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CBA4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0058(c, 263u, depth + 1u); else { c.pc = 0x002620F0u; return; } if (c.pc != 0x0026CBA4u) [[unlikely]] return; }
L_0026CBA4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026CBE4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026CBE4; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[2].w[0]));  goto L_0026CBD0; }
    st32((c.r[18].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.budget -= 2;
L_0026CBD0:
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026CBE4; } }
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 1;
L_0026CBE4:
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 1;
L_0026CBE8:
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0026CC18; }
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026CC14; } }
    st32((c.r[18].w[0]), 0u);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 2;
L_0026CC14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0026CC18:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026CC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0026CC40:
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
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.f[20] = 0u;
    c.budget -= 15;
L_0026CC7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 4512u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = fp::mul(c.f[21], c.f[0]);  if (t) { goto L_0026CCB0; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0026CCB8; } }
L_0026CCB0:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026CCB8:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CCE8u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026CCE8u) [[unlikely]] return; }
L_0026CCE8:
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 4480u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0]));
    c.facc = fp::add(c.f[0], c.f[20]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CC7Cu | kUnwind; return; } goto L_0026CC7C; } }
    c.f[0] = fp::mul(c.f[20], c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026CD60:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[6], c.r[6].w[0] + 15184u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 23;
L_0026CDBC:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CDBCu | kUnwind; return; } goto L_0026CDBC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[23].d[0] = 0ull + 0ull;  goto L_0026CDF8; }
    set32(c.r[21], ld32((c.r[3].w[0] + 16u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 20u));
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[23], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0026CE00; } }
L_0026CDF8:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026CE00:
    c.r[1].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[20].w[0] + 12u));  goto L_0026CE38; }
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_0026CE14:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[17].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CE14u | kUnwind; return; } goto L_0026CE14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_0026D4C4; } }
L_0026CE38:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] & 255ull;  goto L_0026D20C; }
    c.r[22].d[0] = c.r[4].d[0] & 255ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[19].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 456u);
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[30], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[29].w[0] + 424u);
    set32(c.r[10], c.r[29].w[0] + 476u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE80u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026CE80u) [[unlikely]] return; }
L_0026CE80:
    c.f[3] = ld32((c.r[20].w[0] + 44u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 464u));  goto L_0026D1A0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::sub(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026D028; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026CED8; } }
    set32(c.r[3], c.r[23].w[0] - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_0026CED8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026CED8; } }
L_0026CED8:
    set32(c.r[3], c.r[23].w[0] - 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026D19C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.f[0] = fp::sub(c.f[2], c.f[20]);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 408u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], c.r[29].w[0] + 424u);
    set32(c.r[10], c.r[29].w[0] + 476u);
    c.f[1] = fp::add(c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF38u); c.f[20] = fp::sub(c.f[2], c.f[21]);  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026CF38u) [[unlikely]] return; }
L_0026CF38:
    mmi::mult(c, 0, c.r[18].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[18].w[0] + 1u);
    mmi::mult(c, 1, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.f[12] = ld32((c.r[20].w[0] + 44u));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 408u);
    set32(c.r[8], c.r[29].w[0] + 392u);
    set32(c.r[9], c.r[29].w[0] + 424u);
    set32(c.r[10], c.r[29].w[0] + 472u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CF68u); set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026CF68u) [[unlikely]] return; }
L_0026CF68:
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 400u));
    c.f[6] = ld32((c.r[29].w[0] + 448u));
    c.f[8] = fp::mul(c.f[21], c.f[1]);
    c.facc = fp::mul(c.f[20], c.f[5]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[21], c.f[6]));
    c.f[2] = ld32((c.r[29].w[0] + 396u));
    c.f[3] = ld32((c.r[29].w[0] + 444u));
    c.f[1] = ld32((c.r[29].w[0] + 392u));
    c.facc = fp::mul(c.f[20], c.f[2]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    c.f[4] = 0u;
    c.facc = fp::add(c.f[4], c.f[8]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 448u), c.f[7]);
    st32((c.r[29].w[0] + 444u), c.f[6]);
    st32((c.r[29].w[0] + 440u), c.f[4]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    fpu_rsqrt(c, 8u, c.f[0], c.f[8]);
    c.f[5] = fp::mul(c.f[4], c.f[8]);
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    c.f[4] = fp::mul(c.f[6], c.f[8]);
    c.f[3] = ld32((c.r[29].w[0] + 476u));
    c.facc = fp::mul(c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 460u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    c.f[3] = fp::mul(c.f[7], c.f[8]);
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 476u), c.f[0]);
    st32((c.r[29].w[0] + 440u), c.f[5]);
    st32((c.r[29].w[0] + 444u), c.f[4]);
    st32((c.r[29].w[0] + 448u), c.f[3]);
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[3]));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 424u), c.f[6]);
    st32((c.r[29].w[0] + 428u), c.f[1]);
    c.budget -= 48;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 432u), c.f[0]);  if (t) { goto L_0026D19C; } }
L_0026D028:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026D19C; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026D054; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], c.r[23].w[0] - 1u);  goto L_0026D054; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D054; } }
L_0026D054:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0026D19C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 408u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], c.r[29].w[0] + 424u);
    set32(c.r[10], c.r[29].w[0] + 476u);
    c.f[1] = fp::sub(c.f[3], c.f[20]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.f[12] = c.f[3];
    c.f[0] = c.r[2].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0A4u); c.f[21] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026D0A4u) [[unlikely]] return; }
L_0026D0A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 408u);
    set32(c.r[2], c.r[19].w[0] - 1u);
    set32(c.r[8], c.r[29].w[0] + 392u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[9], c.r[29].w[0] + 424u);
    c.f[1] = ld32((c.r[20].w[0] + 44u));
    set32(c.r[10], c.r[29].w[0] + 472u);
    mmi::mult(c, 1, c.r[19].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0E0u); set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026D0E0u) [[unlikely]] return; }
L_0026D0E0:
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 400u));
    c.f[6] = ld32((c.r[29].w[0] + 448u));
    c.f[8] = fp::mul(c.f[21], c.f[1]);
    c.facc = fp::mul(c.f[20], c.f[5]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[21], c.f[6]));
    c.f[2] = ld32((c.r[29].w[0] + 396u));
    c.f[3] = ld32((c.r[29].w[0] + 444u));
    c.f[1] = ld32((c.r[29].w[0] + 392u));
    c.facc = fp::mul(c.f[20], c.f[2]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    c.f[4] = 0u;
    c.facc = fp::add(c.f[4], c.f[8]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 448u), c.f[7]);
    st32((c.r[29].w[0] + 444u), c.f[6]);
    st32((c.r[29].w[0] + 440u), c.f[4]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    fpu_rsqrt(c, 8u, c.f[0], c.f[8]);
    c.f[5] = fp::mul(c.f[4], c.f[8]);
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    c.f[4] = fp::mul(c.f[6], c.f[8]);
    c.f[3] = ld32((c.r[29].w[0] + 476u));
    c.facc = fp::mul(c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 460u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    c.f[3] = fp::mul(c.f[7], c.f[8]);
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 476u), c.f[0]);
    st32((c.r[29].w[0] + 440u), c.f[5]);
    st32((c.r[29].w[0] + 444u), c.f[4]);
    st32((c.r[29].w[0] + 448u), c.f[3]);
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[3]));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 424u), c.f[6]);
    st32((c.r[29].w[0] + 428u), c.f[1]);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.budget -= 47;
L_0026D19C:
    c.f[0] = ld32((c.r[29].w[0] + 464u));
    c.budget -= 1;
L_0026D1A0:
    st32((c.r[29].w[0] + 300u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 460u));
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 456u));
    st32((c.r[29].w[0] + 332u), 0u);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 448u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 288u), c.f[2]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 312u), c.f[1]);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 444u));
    c.f[1] = ld32((c.r[29].w[0] + 428u));
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 304u), c.f[3]);
    st32((c.r[29].w[0] + 308u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 328u), c.f[0]);  if (t) { goto L_0026D2E0; } }
L_0026D20C:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[29].w[0] + 456u);
    c.f[12] = c.f[20];
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], c.r[29].w[0] + 424u);
    set32(c.r[10], c.r[29].w[0] + 476u);
    mmi::mult(c, 1, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D238u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026D238u) [[unlikely]] return; }
L_0026D238:
    c.f[2] = ld32((c.r[29].w[0] + 456u));
    set32(c.r[4], c.r[29].w[0] + 360u);
    c.f[1] = ld32((c.r[29].w[0] + 460u));
    st32((c.r[29].w[0] + 300u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D25Cu); st32((c.r[29].w[0] + 296u), c.f[0]);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x0026D25Cu) [[unlikely]] return; }
L_0026D25C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 344u);
    set32(c.r[5], c.r[5].w[0] + 31072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D270u); set32(c.r[6], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x0026D270u) [[unlikely]] return; }
L_0026D270:
    set32(c.r[4], c.r[29].w[0] + 360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D27Cu); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x0026D27Cu) [[unlikely]] return; }
L_0026D27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D284u); set32(c.r[4], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x0026D284u) [[unlikely]] return; }
L_0026D284:
    set32(c.r[4], c.r[29].w[0] + 376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D290u); set32(c.r[5], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x0026D290u) [[unlikely]] return; }
L_0026D290:
    c.f[5] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[4] = ld32((c.r[29].w[0] + 380u));
    c.f[3] = ld32((c.r[29].w[0] + 384u));
    c.f[2] = ld32((c.r[29].w[0] + 460u));
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 304u), c.f[5]);
    st32((c.r[29].w[0] + 308u), c.f[4]);
    st32((c.r[29].w[0] + 312u), c.f[3]);
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[3]));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 332u), 0u);
    st32((c.r[29].w[0] + 320u), c.f[6]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.budget -= 20;
L_0026D2E0:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));  goto L_0026D344; }
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[29].w[0] + 300u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 292u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 288u), c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 296u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    c.budget -= 21;
L_0026D344:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[2] = ld32((c.r[29].w[0] + 328u));  goto L_0026D3A8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[2] = ld32((c.r[29].w[0] + 312u));  goto L_0026D364; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[20].w[0] + 12u));  if (t) { goto L_0026D3EC; } }
L_0026D364:
    st32((c.r[29].w[0] + 300u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.f[5] = ld32((c.r[29].w[0] + 288u));
    c.f[4] = ld32((c.r[29].w[0] + 292u));
    c.f[3] = ld32((c.r[29].w[0] + 296u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 312u), c.f[3]);
    st32((c.r[29].w[0] + 296u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    st32((c.r[29].w[0] + 304u), c.f[5]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 308u), c.f[4]);  if (t) { goto L_0026D3E8; } }
L_0026D3A8:
    st32((c.r[29].w[0] + 300u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    st32((c.r[29].w[0] + 332u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.f[5] = ld32((c.r[29].w[0] + 288u));
    c.f[4] = ld32((c.r[29].w[0] + 292u));
    c.f[3] = ld32((c.r[29].w[0] + 296u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 328u), c.f[3]);
    st32((c.r[29].w[0] + 296u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    st32((c.r[29].w[0] + 320u), c.f[5]);
    st32((c.r[29].w[0] + 324u), c.f[4]);
    c.budget -= 16;
L_0026D3E8:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 12u));
    c.budget -= 1;
L_0026D3EC:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 288u);  goto L_0026D4A0; }
    c.f[3] = ld32((c.r[20].w[0] + 56u));
    c.f[2] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = ld32((c.r[20].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::mul(c.f[3], c.f[2]);  if (t) { goto L_0026D440; } }
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D434u);  if (depth < kMaxDepth) unit_00AB(c, 372u, depth + 1u); else { c.pc = 0x003AEE10u; return; } if (c.pc != 0x0026D434u) [[unlikely]] return; }
L_0026D434:
    c.f[1] = ld32((c.r[28].w[0] - 30684u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 3;
L_0026D440:
    c.f[13] = ld32((c.r[29].w[0] + 456u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[14] = ld32((c.r[29].w[0] + 460u));
    st32((c.r[29].w[0] + 252u), 0u);
    c.f[15] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 268u), 0u);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D464u); st32((c.r[29].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_005F(c, 80u, depth + 1u); else { c.pc = 0x0027D8C0u; return; } if (c.pc != 0x0026D464u) [[unlikely]] return; }
L_0026D464:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D474u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x0026D474u) [[unlikely]] return; }
L_0026D474:
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_0026D480:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D480u | kUnwind; return; } goto L_0026D480; } }
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 1;
L_0026D4A0:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0026D4A4:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[17].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D4A4u | kUnwind; return; } goto L_0026D4A4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0026D4C4:
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_0026D500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026D538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D52Cu);  if (depth < kMaxDepth) unit_005B(c, 120u, depth + 1u); else { c.pc = 0x0026D690u; return; } if (c.pc != 0x0026D52Cu) [[unlikely]] return; }
L_0026D52C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0026D674; } }
L_0026D538:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_0026D554; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 20u));
    set32(c.r[10], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0026D55C; } }
L_0026D554:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026D55C:
    c.f[0] = ld32((c.r[10].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[9].d[0] = c.r[4].d[0] & 255ull;  goto L_0026D580; }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_0026D674; } }
L_0026D580:
    set32(c.r[8], c.r[5].w[0] - 1u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[12], ld32((c.r[17].w[0] + 16u)));  goto L_0026D5B4; }
    set32(c.r[4], c.r[5].w[0] - 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0026D674; } }
L_0026D5B4:
    set32(c.r[4], c.r[5].w[0] - 2u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_0026D638; } }
L_0026D5C4:
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026D5E4; } }
    st32((c.r[17].w[0] + 16u), c.r[12].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[12].w[0] + 1u);  if (t) { goto L_0026D644; } }
L_0026D5E4:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026D618; } }
    set32(c.r[5], c.r[12].w[0] + 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026D618; } }
    st32((c.r[17].w[0] + 16u), c.r[12].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026D644; } }
L_0026D618:
    c.budget -= 2;
    if (c.r[12].d[0] != c.r[4].d[0]) { set32(c.r[12], c.r[12].w[0] + 1u);  goto L_0026D638; }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_0026D634; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0026D638; } }
L_0026D634:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_0026D638:
    c.r[3].d[0] = c.r[12].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[12].w[0], c.r[9].w[0]); c.r[3].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D5C4u | kUnwind; return; } goto L_0026D5C4; }
L_0026D644:
    mmi::mult(c, 1, c.r[11].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[12].w[0], c.r[9].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[10].w[0] + c.r[4].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[12], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    st32((c.r[16].w[0]), c.r[12].w[0]);
    st32((c.r[6].w[0]), c.r[11].w[0]);
    c.budget -= 12;
L_0026D674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026D690:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.budget -= 3;
L_0026D69C:
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026D6E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0026D6E4; } }
L_0026D6E0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026D6E4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026D70C; } }
    st32((c.r[19].w[0]), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.f[0]);  if (t) { goto L_0026D8B8; } }
L_0026D70C:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0026D73C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D728u);  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x0026D728u) [[unlikely]] return; }
L_0026D728:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
L_0026D73C:
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026D768; } }
    set32(c.r[4], c.r[16].w[0] - 2u);
    set32(c.r[3], c.r[16].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.f[13]);  if (t) { goto L_0026D8B8; } }
L_0026D768:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[20].w[0] + 36u));  goto L_0026D784; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D77Cu);  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x0026D77Cu) [[unlikely]] return; }
L_0026D77C:
    c.f[12] = c.f[0];
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.budget -= 2;
L_0026D784:
    set32(c.r[4], c.r[16].w[0] - 1u);
    c.f[20] = 0u;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    c.f[2] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[20];  if (t) { goto L_0026D7E4; } }
L_0026D7A0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0026D7E0; }
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[20] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 22u, c.f[20], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D7F0; } }
L_0026D7E0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0026D7E4:
    c.r[3].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D7A0u | kUnwind; return; } goto L_0026D7A0; }
L_0026D7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0026D8A0; } }
L_0026D7F8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D808u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_005B(c, 95u, depth + 1u); else { c.pc = 0x0026CC40u; return; } if (c.pc != 0x0026D808u) [[unlikely]] return; }
L_0026D808:
    c.f[21] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = c.f[21] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32584u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_0026D8B0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0026D83C; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0026D844; } }
L_0026D83C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026D844:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.f[12] = c.f[22];
    mmi::mult(c, 1, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D878u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D878u) [[unlikely]] return; }
L_0026D878:
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    fpu_div(c, 0u, c.f[21], c.f[0]);
    c.f[22] = fp::sub(c.f[22], c.f[0]);
    c.budget -= 10;
L_0026D8A0:
    c.r[3].d[0] = c.r[22].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D7F8u | kUnwind; return; } goto L_0026D7F8; }
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0026D8B0:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    st32((c.r[21].w[0]), c.f[22]);
    c.budget -= 2;
L_0026D8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0026D8F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0026D900:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026D9F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026D964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = ld32((c.r[2].w[0] + 13636u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026D964; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0026D964:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026D988; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026D988; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0026D988:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), c.f[2]);  goto L_0026D9A8; }
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.f[0]);  if (t) { goto L_0026DB74; } }
L_0026D9A8:
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026DB74; }
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DB74; } }
L_0026D9F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026DA14; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0026DA20; } }
L_0026DA14:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0026DA20:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_0026DA30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026DB74; } }
L_0026DA30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026DA3C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0026DA3C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.f[12] = c.f[20];  goto L_0026DA4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026DB74; } }
L_0026DA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA54u); set32(c.r[7], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0057(c, 258u, depth + 1u); else { c.pc = 0x0025DF30u; return; } if (c.pc != 0x0026DA54u) [[unlikely]] return; }
L_0026DA54:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 140u);
    set32(c.r[6], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA6Cu); set32(c.r[7], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_005B(c, 117u, depth + 1u); else { c.pc = 0x0026D500u; return; } if (c.pc != 0x0026DA6Cu) [[unlikely]] return; }
L_0026DA6C:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_0026DAB0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DAA0u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_005B(c, 98u, depth + 1u); else { c.pc = 0x0026CD60u; return; } if (c.pc != 0x0026DAA0u) [[unlikely]] return; }
L_0026DAA0:
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DAACu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0072(c, 209u, depth + 1u); else { c.pc = 0x002C96B0u; return; } if (c.pc != 0x0026DAACu) [[unlikely]] return; }
L_0026DAAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0026DAB0:
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0026DAD4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0026DADC; } }
L_0026DAD4:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026DADC:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[29].w[0] + 120u);
    mmi::mult(c, 1, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13544u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB0Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DB0Cu) [[unlikely]] return; }
L_0026DB0C:
    c.f[2] = ld32((c.r[29].w[0] + 124u));
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[17].w[0] + 80u), c.f[0]);
    st32((c.r[17].w[0] + 84u), c.f[2]);
    st32((c.r[17].w[0] + 88u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 16;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 92u), c.f[20]);  goto L_0026DB70; }
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    st32((c.r[17].w[0] + 92u), c.f[20]);
    c.budget -= 9;
L_0026DB70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026DB74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0026DB90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026DBC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DBB4u);  if (depth < kMaxDepth) unit_005B(c, 137u, depth + 1u); else { c.pc = 0x0026DBE0u; return; } if (c.pc != 0x0026DBB4u) [[unlikely]] return; }
L_0026DBB4:
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0026DBC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026DBE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026DCAC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0026DC20; }
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0026DC20:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0026DC2Cu) [[unlikely]] return; }
L_0026DC2C:
    set32(c.r[16], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0026DC3Cu) [[unlikely]] return; }
L_0026DC3C:
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0026DC8C; } }
L_0026DC50:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC64u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 95u, depth + 1u); else { c.pc = 0x0026CC40u; return; } if (c.pc != 0x0026DC64u) [[unlikely]] return; }
L_0026DC64:
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 10;
L_0026DC8C:
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DC50u | kUnwind; return; } goto L_0026DC50; }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] - 4u));
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.budget -= 4;
L_0026DCAC:
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026DCD0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026DCF4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DCEC; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 1;
L_0026DCEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DD0C; } }
L_0026DCF4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DD0C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DD0C; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 1;
L_0026DD0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DD20:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026DD44; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DD3C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0026DD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DD5C; } }
L_0026DD44:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DD5C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DD5C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0026DD5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DD70:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026DD84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026DD94; } }
L_0026DD84:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 6u);  goto L_0026DD94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026DD94; } }
L_0026DD94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DDA0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026DDC4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DDBC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0026DDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DDDC; } }
L_0026DDC4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DDDC; }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DDDC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0026DDDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DDF0:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026DE14; }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DE0C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0026DE0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DE2C; } }
L_0026DE14:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DE2C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026DE2C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0026DE2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026DE40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_0026DE50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026E020; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 4064u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 28u)));  goto L_0026DEEC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0026DEC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026DE98u) [[unlikely]] return; }
L_0026DE98:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEA8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026DEA8u) [[unlikely]] return; }
L_0026DEA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DEC4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DEC4u) [[unlikely]] return; }
L_0026DEC4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026DEC8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_0026DEE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DED8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026DED8u) [[unlikely]] return; }
L_0026DED8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEE8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026DEE8u) [[unlikely]] return; }
L_0026DEE8:
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_0026DEEC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  goto L_0026DF58; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0026DF34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF04u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026DF04u) [[unlikely]] return; }
L_0026DF04:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF14u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026DF14u) [[unlikely]] return; }
L_0026DF14:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DF30; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF30u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DF30u) [[unlikely]] return; }
L_0026DF30:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026DF34:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_0026DF54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026DF44u) [[unlikely]] return; }
L_0026DF44:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF54u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026DF54u) [[unlikely]] return; }
L_0026DF54:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_0026DF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0026DF60u) [[unlikely]] return; }
L_0026DF60:
    set32(c.r[2], c.r[17].w[0] + 28u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 24u);  goto L_0026DFB0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026DFAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026DF80u) [[unlikely]] return; }
L_0026DF80:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF90u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026DF90u) [[unlikely]] return; }
L_0026DF90:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DFAC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DFACu) [[unlikely]] return; }
L_0026DFAC:
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_0026DFB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026DFFC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026DFF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026DFCCu) [[unlikely]] return; }
L_0026DFCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFDCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026DFDCu) [[unlikely]] return; }
L_0026DFDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DFF8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DFF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DFF8u) [[unlikely]] return; }
L_0026DFF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026DFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E004u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 274u, depth + 1u); else { c.pc = 0x002622E0u; return; } if (c.pc != 0x0026E004u) [[unlikely]] return; }
L_0026E004:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0026E024; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E020u); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0026E020u) [[unlikely]] return; }
L_0026E020:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026E024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E064u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0026E064u) [[unlikely]] return; }
L_0026E064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 4064u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 24u), c.r[17].w[0]);  if (t) { goto L_0026E090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E080u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026E080u) [[unlikely]] return; }
L_0026E080:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E090u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026E090u) [[unlikely]] return; }
L_0026E090:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 28u), c.r[16].w[0]);  if (t) { goto L_0026E0B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026E0A0u) [[unlikely]] return; }
L_0026E0A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0B0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026E0B0u) [[unlikely]] return; }
L_0026E0B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13616u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[5].w[0] + 13620u));
    set32(c.r[6], 0u + 16u);
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[9].w[0] + 13624u));
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 13628u));
    st32((c.r[18].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 13632u));
    st32((c.r[18].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13636u));
    st32((c.r[18].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    st32((c.r[18].w[0] + 88u), c.f[0]);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 65531ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E12Cu); st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005B(c, 71u, depth + 1u); else { c.pc = 0x0026C910u; return; } if (c.pc != 0x0026E12Cu) [[unlikely]] return; }
L_0026E12C:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.r[5].d[0] = c.r[5].d[0] & 65503ull;
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 40u), 0u);
    st32((c.r[18].w[0] + 44u), 0u);
    st32((c.r[18].w[0] + 56u), c.r[4].w[0]);
    st16((c.r[18].w[0] + 48u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[4].d[0] & 65471ull;
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 32u), 0u);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 92u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E1B0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_0026E1D0; }
L_0026E1C0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_0026E230; }
L_0026E1D0:
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
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E210u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E210u) [[unlikely]] return; }
L_0026E210:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E230:
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
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E264u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E264u) [[unlikely]] return; }
L_0026E264:
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
L_0026E290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14184u);  c.pc = t; return; }
L_0026E2A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2B4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 254u, depth + 1u); else { c.pc = 0x00272B50u; return; } if (c.pc != 0x0026E2B4u) [[unlikely]] return; }
L_0026E2B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2C0u); set32(c.r[4], ld32((c.r[2].w[0] + 14184u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0026E2C0u) [[unlikely]] return; }
L_0026E2C0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E2D4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0026E2D4u) [[unlikely]] return; }
L_0026E2D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E2F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005C(c, 259u, depth); }
L_0026E300:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005C(c, 262u, depth); }
L_0026E310:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005C(c, 265u, depth); }
L_0026E320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E334u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 268u, depth + 1u); else { c.pc = 0x00272D10u; return; } if (c.pc != 0x0026E334u) [[unlikely]] return; }
L_0026E334:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[3].d[0] = c.r[3].d[0] | 104ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E374u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 270u, depth + 1u); else { c.pc = 0x00272D50u; return; } if (c.pc != 0x0026E374u) [[unlikely]] return; }
L_0026E374:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[3].d[0] = c.r[3].d[0] | 104ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E3A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_005C(c, 281u, depth); }
L_0026E3B0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0026C000u < 16384u) { entry = entries_005B[(t - 0x0026C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0026E3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3FCu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026E3FCu) [[unlikely]] return; }
L_0026E3FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0026E41C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 3;
L_0026E410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E418u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 329u, depth + 1u); else { c.pc = 0x00243950u; return; } if (c.pc != 0x0026E418u) [[unlikely]] return; }
L_0026E418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0026E41C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026E454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0026E49C; } }
L_0026E454:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E464u) [[unlikely]] return; }
L_0026E464:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 14224u);  if (t) { goto L_0026E480; } }
L_0026E470:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0026E480; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0026E48C; } }
L_0026E480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E470u | kUnwind; return; } goto L_0026E470; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026E48C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0026E49C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E49C; } }
L_0026E49C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4B0u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E4B0u) [[unlikely]] return; }
L_0026E4B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4BCu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_005B(c, 276u, depth + 1u); else { c.pc = 0x0026EE50u; return; } if (c.pc != 0x0026E4BCu) [[unlikely]] return; }
L_0026E4BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4E8u); set32(c.r[5], c.r[29].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E4E8u) [[unlikely]] return; }
L_0026E4E8:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026E4F4u) [[unlikely]] return; }
L_0026E4F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0026E50C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E508u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_005B(c, 302u, depth + 1u); else { c.pc = 0x0026F280u; return; } if (c.pc != 0x0026E508u) [[unlikely]] return; }
L_0026E508:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026E50C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E534u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 305u, depth + 1u); else { c.pc = 0x002730C0u; return; } if (c.pc != 0x0026E534u) [[unlikely]] return; }
L_0026E534:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 4256u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026E560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026E5FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] + 4432u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0026E5D4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026E5D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026E5A8u) [[unlikely]] return; }
L_0026E5A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5B8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026E5B8u) [[unlikely]] return; }
L_0026E5B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E5D4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E5D4u) [[unlikely]] return; }
L_0026E5D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026E5D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 274u, depth + 1u); else { c.pc = 0x002622E0u; return; } if (c.pc != 0x0026E5E0u) [[unlikely]] return; }
L_0026E5E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0026E600; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5FCu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0026E5FCu) [[unlikely]] return; }
L_0026E5FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026E600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14224u);  c.pc = t; return; }
L_0026E630:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E64Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 253u, depth + 1u); else { c.pc = 0x00262040u; return; } if (c.pc != 0x0026E64Cu) [[unlikely]] return; }
L_0026E64C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E658u); set32(c.r[4], ld32((c.r[2].w[0] + 14224u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0026E658u) [[unlikely]] return; }
L_0026E658:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E66Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0026E66Cu) [[unlikely]] return; }
L_0026E66C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E67Cu); set32(c.r[5], c.r[5].w[0] + 14240u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x0026E67Cu) [[unlikely]] return; }
L_0026E67C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E690u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0026E690u) [[unlikely]] return; }
L_0026E690:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6A0u); set32(c.r[4], c.r[4].w[0] + 14255u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x0026E6A0u) [[unlikely]] return; }
L_0026E6A0:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6B4u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0026E6B4u) [[unlikely]] return; }
L_0026E6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E6D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 257u, depth + 1u); else { c.pc = 0x00262090u; return; } if (c.pc != 0x0026E6ECu) [[unlikely]] return; }
L_0026E6EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 12u));  goto L_0026E6FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026E7BC; } }
L_0026E6FC:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026E710; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026E710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026E730; } }
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026E730; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026E730:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0026E754; }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026E750; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026E750:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0026E754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0026E764; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026E7BC; } }
L_0026E764:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026E778; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026E7BC; }
L_0026E778:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026E78C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E7AC; } }
L_0026E78C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026E7BC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E7A4u); set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E7A4u) [[unlikely]] return; }
L_0026E7A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E7B8; } }
L_0026E7AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E7BC; } }
L_0026E7B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026E7BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E7ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 258u, depth + 1u); else { c.pc = 0x002620A0u; return; } if (c.pc != 0x0026E7ECu) [[unlikely]] return; }
L_0026E7EC:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E7F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x0026E7F8u) [[unlikely]] return; }
L_0026E7F8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E80Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E80Cu) [[unlikely]] return; }
L_0026E80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E83Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 259u, depth + 1u); else { c.pc = 0x002620B0u; return; } if (c.pc != 0x0026E83Cu) [[unlikely]] return; }
L_0026E83C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0026E84C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026E868; } }
L_0026E84C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026E868; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E864u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E864u) [[unlikely]] return; }
L_0026E864:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026E868:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E880:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002620C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 260u, depth); }
L_0026E890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8B0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 261u, depth + 1u); else { c.pc = 0x002620D0u; return; } if (c.pc != 0x0026E8B0u) [[unlikely]] return; }
L_0026E8B0:
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x0026E8BCu) [[unlikely]] return; }
L_0026E8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x0026E8C4u) [[unlikely]] return; }
L_0026E8C4:
    set32(c.r[17], ld32((c.r[18].w[0] + 24u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0026E938; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 24u), c.r[16].w[0]);  goto L_0026E914; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026E8E4u) [[unlikely]] return; }
L_0026E8E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E8F4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026E8F4u) [[unlikely]] return; }
L_0026E8F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026E910; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E910u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E910u) [[unlikely]] return; }
L_0026E910:
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_0026E914:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026E934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E924u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026E924u) [[unlikely]] return; }
L_0026E924:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E934u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026E934u) [[unlikely]] return; }
L_0026E934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0026E938:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026E950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E96Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026E96Cu) [[unlikely]] return; }
L_0026E96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026E9D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E97Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0026E97Cu) [[unlikely]] return; }
L_0026E97C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 4432u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13636u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_0026E9D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026E9C0u) [[unlikely]] return; }
L_0026E9C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E9D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026E9D0u) [[unlikely]] return; }
L_0026E9D0:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_0026E9D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026E9F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA1Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026EA1Cu) [[unlikely]] return; }
L_0026EA1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0026EA2Cu) [[unlikely]] return; }
L_0026EA2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 4432u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13636u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_0026EA80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026EA70u) [[unlikely]] return; }
L_0026EA70:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA80u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026EA80u) [[unlikely]] return; }
L_0026EA80:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_0026EA84:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EA94u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x002620E0u; return; } if (c.pc != 0x0026EA94u) [[unlikely]] return; }
L_0026EA94:
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 10;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 28u)));  goto L_0026EB20; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 24u)));  goto L_0026EAFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EACCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026EACCu) [[unlikely]] return; }
L_0026EACC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EADCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026EADCu) [[unlikely]] return; }
L_0026EADC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026EAF8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EAF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EAF8u) [[unlikely]] return; }
L_0026EAF8:
    set32(c.r[16], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_0026EAFC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[16].w[0]);  if (t) { goto L_0026EB1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026EB0Cu) [[unlikely]] return; }
L_0026EB0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EB1Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026EB1Cu) [[unlikely]] return; }
L_0026EB1C:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 1;
L_0026EB20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026EB50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026EC04; } }
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026EBB0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026EBB0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026EBD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[2].w[0] + 13636u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026EBD4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026EBD4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] ^ 1ull;  goto L_0026ECE4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0026EBF8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026EBF8:
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026ECE4; } }
L_0026EC04:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_0026EC24; }
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0026EC30; } }
L_0026EC24:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0026EC30:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0026EC60; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[8], c.r[17].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EC48u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_005B(c, 374u, depth + 1u); else { c.pc = 0x0026FF10u; return; } if (c.pc != 0x0026EC48u) [[unlikely]] return; }
L_0026EC48:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 6;
L_0026EC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026EC98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[2].w[0] + 13636u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026EC98; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0026EC98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026ECBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026ECBC; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0026ECBC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), c.f[2]);  goto L_0026ECCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026ECE4; } }
L_0026ECCC:
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 6;
L_0026ECE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026ED00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED2Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 223u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x0026ED2Cu) [[unlikely]] return; }
L_0026ED2C:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026EDFC; } }
    c.f[12] = c.f[21];
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED48u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_005B(c, 338u, depth + 1u); else { c.pc = 0x0026F760u; return; } if (c.pc != 0x0026ED48u) [[unlikely]] return; }
L_0026ED48:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { st32((c.r[17].w[0] + 28u), 0u);  goto L_0026EDBC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), c.r[16].w[0]);  goto L_0026ED98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026ED68u) [[unlikely]] return; }
L_0026ED68:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED78u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026ED78u) [[unlikely]] return; }
L_0026ED78:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026ED94; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ED94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026ED94u) [[unlikely]] return; }
L_0026ED94:
    st32((c.r[17].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 1;
L_0026ED98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026EDB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026EDA8u) [[unlikely]] return; }
L_0026EDA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDB8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026EDB8u) [[unlikely]] return; }
L_0026EDB8:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_0026EDBC:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0026EE00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDD0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026EDD0u) [[unlikely]] return; }
L_0026EDD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDE0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026EDE0u) [[unlikely]] return; }
L_0026EDE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026EDFC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EDFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EDFCu) [[unlikely]] return; }
L_0026EDFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026EE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026EE20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0026EE40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE3Cu);  if (depth < kMaxDepth) unit_005B(c, 352u, depth + 1u); else { c.pc = 0x0026F950u; return; } if (c.pc != 0x0026EE3Cu) [[unlikely]] return; }
L_0026EE3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026EE40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026EE50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[5].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 56u), c.f[0]);  if (t) { goto L_0026EEE4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0026EEC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EE94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026EE94u) [[unlikely]] return; }
L_0026EE94:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEA4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026EEA4u) [[unlikely]] return; }
L_0026EEA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026EEC0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EEC0u) [[unlikely]] return; }
L_0026EEC0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026EEC4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 24u), 0u);  if (t) { goto L_0026EEE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EED4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026EED4u) [[unlikely]] return; }
L_0026EED4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EEE4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026EEE4u) [[unlikely]] return; }
L_0026EEE4:
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[16].w[0] + 12u), c.f[2]);
    st32((c.r[16].w[0] + 16u), c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026EF10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026F12C; } }
    set32(c.r[11], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[10], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_0026EFDC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026EFB4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0026EF94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026EF64u) [[unlikely]] return; }
L_0026EF64:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF74u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026EF74u) [[unlikely]] return; }
L_0026EF74:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026EF90; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EF90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026EF90u) [[unlikely]] return; }
L_0026EF90:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026EF94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_0026EFB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EFA4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026EFA4u) [[unlikely]] return; }
L_0026EFA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026EFB4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026EFB4u) [[unlikely]] return; }
L_0026EFB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13632u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13636u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13640u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.f[0]);  if (t) { goto L_0026F12C; } }
L_0026EFDC:
    c.f[20] = ld32((c.r[10].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    c.f[21] = ld32((c.r[10].w[0] + 8u));
    c.f[22] = ld32((c.r[10].w[0] + 12u));
    c.budget -= 6;
    { const bool t = c.r[11].d[0] != c.r[3].d[0]; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0026EFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0026F0B0; } }
L_0026EFFC:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[12], 0u + 1u);  goto L_0026F014; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0026F0B0; } }
    set32(c.r[12], 0u + 1u);
    c.budget -= 1;
L_0026F014:
    c.r[9].d[0] = c.r[4].d[0] & 255ull;
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[6].d[0] = c.r[12].d[0] + 0ull;
    c.r[5].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_0026F094; } }
L_0026F02C:
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], c.r[10].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], c.r[8].w[0] + 4u);  if (t) { goto L_0026F048; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F048:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026F064; } }
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026F064; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F064:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_0026F084; }
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026F080; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F080:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_0026F084:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[12], c.r[12].w[0] + 1u);  goto L_0026F094; }
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 2;
L_0026F094:
    c.r[3].d[0] = 0ull < c.r[13].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026F0B0; } }
    c.r[3].d[0] = c.r[12].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[12].w[0], c.r[9].w[0]); c.r[7].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F02Cu | kUnwind; return; } goto L_0026F02C; }
L_0026F0B0:
    c.budget -= 2;
    if (c.r[13].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0026F130; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.f[20]);  goto L_0026F124; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0026F100; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F0D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026F0D0u) [[unlikely]] return; }
L_0026F0D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F0E0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026F0E0u) [[unlikely]] return; }
L_0026F0E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026F0FC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F0FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F0FCu) [[unlikely]] return; }
L_0026F0FC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F100:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_0026F120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F110u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026F110u) [[unlikely]] return; }
L_0026F110:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F120u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026F120u) [[unlikely]] return; }
L_0026F120:
    st32((c.r[17].w[0] + 12u), c.f[20]);
    c.budget -= 1;
L_0026F124:
    st32((c.r[17].w[0] + 16u), c.f[21]);
    st32((c.r[17].w[0] + 20u), c.f[22]);
    c.budget -= 2;
L_0026F12C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0026F130:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026F150:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0026F164; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026F1C8; } }
L_0026F164:
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026F17C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F17C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026F1A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13636u));
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026F1A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F1A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_0026F1C8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026F1C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026F1C4:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_0026F1C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F1D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026F1E0; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 1;
L_0026F1E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F1F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026F200; }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_0026F200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0026F220:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026F230; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_0026F230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F240:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026F250; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0026F250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0026F270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0026F280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2B0u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0026F2B0u) [[unlikely]] return; }
L_0026F2B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4432u);
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[17].w[0] + 16u), c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_0026F2F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026F2E8u) [[unlikely]] return; }
L_0026F2E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026F2F8u) [[unlikely]] return; }
L_0026F2F8:
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026F320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F33Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0026F33Cu) [[unlikely]] return; }
L_0026F33C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 4432u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13636u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 24u), c.r[16].w[0]);  if (t) { goto L_0026F38C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F37Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026F37Cu) [[unlikely]] return; }
L_0026F37C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F38Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026F38Cu) [[unlikely]] return; }
L_0026F38C:
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F3B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14296u);  c.pc = t; return; }
L_0026F3C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x0026F3DCu) [[unlikely]] return; }
L_0026F3DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3E8u); set32(c.r[4], ld32((c.r[2].w[0] + 14296u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0026F3E8u) [[unlikely]] return; }
L_0026F3E8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3FCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0026F3FCu) [[unlikely]] return; }
L_0026F3FC:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F40Cu); set32(c.r[4], c.r[4].w[0] + 14304u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x0026F40Cu) [[unlikely]] return; }
L_0026F40C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F420u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0026F420u) [[unlikely]] return; }
L_0026F420:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026F440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F464u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x0026F464u) [[unlikely]] return; }
L_0026F464:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0026F474; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026F500; } }
L_0026F474:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026F500; }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0026F4A0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 20u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 20u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0026F4AC; }
L_0026F4A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F500; } }
L_0026F4AC:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13976u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0026F4EC; } }
L_0026F4C4:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4DCu); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F4DCu) [[unlikely]] return; }
L_0026F4DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0026F4EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026F500; } }
L_0026F4EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[19].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F4C4u | kUnwind; return; } goto L_0026F4C4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026F500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026F520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F53Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x0026F53Cu) [[unlikely]] return; }
L_0026F53C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F548u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x0026F548u) [[unlikely]] return; }
L_0026F548:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0026F58C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F560u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0041(c, 95u, depth + 1u); else { c.pc = 0x00205090u; return; } if (c.pc != 0x0026F560u) [[unlikely]] return; }
L_0026F560:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14120u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F588u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F588u) [[unlikely]] return; }
L_0026F588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026F58C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F5A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_0026F5B0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_0026F5C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5E4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x0026F5E4u) [[unlikely]] return; }
L_0026F5E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F5F0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x0026F5F0u) [[unlikely]] return; }
L_0026F5F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0026F6E4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F608u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0041(c, 96u, depth + 1u); else { c.pc = 0x002050A0u; return; } if (c.pc != 0x0026F608u) [[unlikely]] return; }
L_0026F608:
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14966u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13256u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F644u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F644u) [[unlikely]] return; }
L_0026F644:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] + 14840u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F670u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F670u) [[unlikely]] return; }
L_0026F670:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 88u)));  if (t) { goto L_0026F6A0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F6A0u) [[unlikely]] return; }
L_0026F6A0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_0026F6B4; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0026F6C4; }
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 1;
L_0026F6B4:
    st32((c.r[19].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026F6E0; } }
L_0026F6C4:
    set32(c.r[3], c.r[3].w[0] + 14966u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 7;
L_0026F6E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0026F6E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026F700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 24u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F718u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026F718u) [[unlikely]] return; }
L_0026F718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026F744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F728u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x0026F728u) [[unlikely]] return; }
L_0026F728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 4624u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_0026F744:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026F760:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F79Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_006E(c, 432u, depth + 1u); else { c.pc = 0x002BB390u; return; } if (c.pc != 0x0026F79Cu) [[unlikely]] return; }
L_0026F79C:
    set32(c.r[17], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[17].w[0]);  if (t) { goto L_0026F7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026F7B0u) [[unlikely]] return; }
L_0026F7B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7C0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026F7C0u) [[unlikely]] return; }
L_0026F7C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0026F80C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026F7D4u) [[unlikely]] return; }
L_0026F7D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7E8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026F7E8u) [[unlikely]] return; }
L_0026F7E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F808; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F808u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F808u) [[unlikely]] return; }
L_0026F808:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0026F80C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 124u)));  goto L_0026F8BC; }
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[13] = c.f[20];
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], c.r[29].w[0] + 120u);
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F840u); set32(c.r[9], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_004E(c, 271u, depth + 1u); else { c.pc = 0x0023ABD0u; return; } if (c.pc != 0x0026F840u) [[unlikely]] return; }
L_0026F840:
    set32(c.r[19], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_0026F878; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F878u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F878u) [[unlikely]] return; }
L_0026F878:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_0026F88C; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0026F89C; }
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_0026F88C:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026F8B8; } }
L_0026F89C:
    set32(c.r[2], c.r[2].w[0] + 14966u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.budget -= 7;
L_0026F8B8:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_0026F8BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_0026F8DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026F8CCu) [[unlikely]] return; }
L_0026F8CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8DCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026F8DCu) [[unlikely]] return; }
L_0026F8DC:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0026F920; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026F8F0u) [[unlikely]] return; }
L_0026F8F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F900u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026F900u) [[unlikely]] return; }
L_0026F900:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F91C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F91Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026F91Cu) [[unlikely]] return; }
L_0026F91C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0026F920:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026F950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], c.r[16].w[0] + 8u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F97Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 266u, depth + 1u); else { c.pc = 0x0023AA50u; return; } if (c.pc != 0x0026F97Cu) [[unlikely]] return; }
L_0026F97C:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026F9A0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[4].w[0] + 8u), 0u);  goto L_0026F9B4; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0026F9C4; }
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 1;
L_0026F9B4:
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026F9E0; } }
L_0026F9C4:
    set32(c.r[3], c.r[3].w[0] + 14966u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    c.budget -= 7;
L_0026F9E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F9F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026FA6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 4624u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026FA48; }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FA44u) [[unlikely]] return; }
L_0026FA44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026FA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x0026FA50u) [[unlikely]] return; }
L_0026FA50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0026FA70; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA6Cu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0026FA6Cu) [[unlikely]] return; }
L_0026FA6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026FA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 289u, depth + 1u); else { c.pc = 0x0023B020u; return; } if (c.pc != 0x0026FAACu) [[unlikely]] return; }
L_0026FAAC:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x0026FAB8u) [[unlikely]] return; }
L_0026FAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026FAE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 290u, depth + 1u); else { c.pc = 0x0023B030u; return; } if (c.pc != 0x0026FAFCu) [[unlikely]] return; }
L_0026FAFC:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x0026FB08u) [[unlikely]] return; }
L_0026FB08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FB20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0026FB30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[3], c.r[6].w[0] << 2);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] + 13832u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.f[20] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13688u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 28;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBA0u); set32(c.r[6], c.r[29].w[0] + 160u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FBA0u) [[unlikely]] return; }
L_0026FBA0:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[22].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBB4u); set32(c.r[6], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FBB4u) [[unlikely]] return; }
L_0026FBB4:
    c.f[4] = ld32((c.r[29].w[0] + 160u));
    c.f[3] = ld32((c.r[29].w[0] + 164u));
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = fp::sqrt(c.f[0]);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 7u, c.f[1], c.f[5]);
    c.f[1] = fp::mul(c.f[7], c.f[4]);
    st32((c.r[19].w[0]), c.f[1]);
    c.f[1] = fp::mul(c.f[7], c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[1]);
    c.f[1] = fp::mul(c.f[7], c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 164u));
    c.f[5] = ld32((c.r[29].w[0] + 152u));
    c.f[4] = ld32((c.r[29].w[0] + 168u));
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.facc = fp::mul(c.f[6], c.f[5]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[1], c.f[5]));
    c.facc = fp::mul(c.f[1], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[6], c.f[2]));
    c.facc = fp::mul(c.f[8], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[1] = fp::mul(c.f[7], c.f[1]);
    c.f[1] = fp::mul(c.f[7], c.f[1]);
    st32((c.r[16].w[0]), c.f[1]);
    c.f[2] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 41;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0]), 0u);  goto L_0026FCA4; }
    c.f[6] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[5] = ld32((c.r[29].w[0] + 164u));
    c.f[3] = ld32((c.r[29].w[0] + 148u));
    c.f[4] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.facc = fp::mul(c.f[6], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[3]));
    c.f[7] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[7], c.f[6]));
    st32((c.r[18].w[0]), c.f[1]);
    c.facc = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[7], c.f[5]));
    c.facc = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[7], c.f[4]));
    st32((c.r[18].w[0] + 4u), c.f[1]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.f[0]);  if (t) { goto L_0026FCFC; } }
L_0026FCA4:
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[19].w[0] + 4u));  goto L_0026FCD4; }
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[3] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[18].w[0] + 8u), c.f[0]);  goto L_0026FCEC; }
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.budget -= 1;
L_0026FCD4:
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), 0u);  if (t) { goto L_0026FCFC; } }
L_0026FCEC:
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[18].w[0] + 4u), c.f[0]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 4;
L_0026FCFC:
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 1u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[5] = ld32((c.r[19].w[0] + 4u));
    c.f[4] = ld32((c.r[18].w[0] + 8u));
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[0], c.f[4]));
    c.facc = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[1]));
    st32((c.r[17].w[0]), c.f[6]);
    st32((c.r[17].w[0] + 4u), c.f[3]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 43;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0026FDB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FDCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 288u, depth + 1u); else { c.pc = 0x0023B000u; return; } if (c.pc != 0x0026FDCCu) [[unlikely]] return; }
L_0026FDCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 4u));  goto L_0026FDDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026FE30; } }
L_0026FDDC:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026FDF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026FDF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026FE10; } }
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026FE10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026FE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026FE30; } }
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_0026FE30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026FE30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FE50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0026FED4; } }
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[8], c.r[7].w[0] - 1u);  goto L_0026FE8C; }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_0026FEF8; } }
L_0026FE8C:
    c.r[3].d[0] = c.r[9].d[0] & 255ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[8], c.r[29].w[0] + 28u);  goto L_0026FEC4; }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_0026FEF8; } }
L_0026FEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FECCu); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_005B(c, 374u, depth + 1u); else { c.pc = 0x0026FF10u; return; } if (c.pc != 0x0026FECCu) [[unlikely]] return; }
L_0026FECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0026FEFC; } }
L_0026FED4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[3].w[0] + 15056u));
    st32((c.r[4].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[5].w[0] + 15060u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 15064u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 9;
L_0026FEF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026FEFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026FF10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026FF44; } }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { [[clang::musttail]] return unit_005C(c, 2u, depth); } }
L_0026FF44:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[7].w[0] - 1u);  if (t) { goto L_0026FF6C; } }
    st32((c.r[8].w[0]), 0u);
    c.f[1] = ld32((c.r[5].w[0]));
    c.budget -= 2;
L_0026FF6C:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.f[0] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 1u);  if (t) { goto L_0026FFA4; } }
L_0026FF7C:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_0026FFB4; }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.f[1] = c.f[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0026FFA4:
    c.r[1].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[9].w[0]); c.r[2].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FF7Cu | kUnwind; return; } goto L_0026FF7C; }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 1;
L_0026FFB4:
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13544u);
    mmi::mult(c, 1, c.r[7].w[0], c.r[9].w[0]);
    c.r[7].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[4].w[0], c.r[9].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = fp::sub(c.f[12], c.f[1]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFF4u); set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FFF4u) [[unlikely]] return; }
L_0026FFF4:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    c.budget -= 3;
    [[clang::musttail]] return unit_005C(c, 1u, depth);
}

}
