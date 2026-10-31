#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004B[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 15,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0,
    37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45,
    0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0,
    81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 87,
    0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0,
    153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0,
    0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 177,
    0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 284, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0,
    0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0,
    0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0,
    356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0,
    364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0,
    0, 379, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 390, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0,
};

void unit_004B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0022C000;
    case 2u: goto L_0022C044;
    case 3u: goto L_0022C04C;
    case 4u: goto L_0022C058;
    case 5u: goto L_0022C070;
    case 6u: goto L_0022C084;
    case 7u: goto L_0022C094;
    case 8u: goto L_0022C0A0;
    case 9u: goto L_0022C0B4;
    case 10u: goto L_0022C0C4;
    case 11u: goto L_0022C0D0;
    case 12u: goto L_0022C0D8;
    case 13u: goto L_0022C0E4;
    case 14u: goto L_0022C0F4;
    case 15u: goto L_0022C0FC;
    case 16u: goto L_0022C104;
    case 17u: goto L_0022C130;
    case 18u: goto L_0022C148;
    case 19u: goto L_0022C154;
    case 20u: goto L_0022C19C;
    case 21u: goto L_0022C1CC;
    case 22u: goto L_0022C200;
    case 23u: goto L_0022C220;
    case 24u: goto L_0022C270;
    case 25u: goto L_0022C280;
    case 26u: goto L_0022C290;
    case 27u: goto L_0022C304;
    case 28u: goto L_0022C330;
    case 29u: goto L_0022C354;
    case 30u: goto L_0022C3F8;
    case 31u: goto L_0022C40C;
    case 32u: goto L_0022C458;
    case 33u: goto L_0022C490;
    case 34u: goto L_0022C4D8;
    case 35u: goto L_0022C4E4;
    case 36u: goto L_0022C4EC;
    case 37u: goto L_0022C500;
    case 38u: goto L_0022C508;
    case 39u: goto L_0022C51C;
    case 40u: goto L_0022C528;
    case 41u: goto L_0022C530;
    case 42u: goto L_0022C53C;
    case 43u: goto L_0022C548;
    case 44u: goto L_0022C570;
    case 45u: goto L_0022C57C;
    case 46u: goto L_0022C584;
    case 47u: goto L_0022C590;
    case 48u: goto L_0022C59C;
    case 49u: goto L_0022C5A8;
    case 50u: goto L_0022C5B4;
    case 51u: goto L_0022C5C0;
    case 52u: goto L_0022C5CC;
    case 53u: goto L_0022C610;
    case 54u: goto L_0022C61C;
    case 55u: goto L_0022C624;
    case 56u: goto L_0022C630;
    case 57u: goto L_0022C63C;
    case 58u: goto L_0022C648;
    case 59u: goto L_0022C654;
    case 60u: goto L_0022C660;
    case 61u: goto L_0022C66C;
    case 62u: goto L_0022C698;
    case 63u: goto L_0022C6D0;
    case 64u: goto L_0022C718;
    case 65u: goto L_0022C724;
    case 66u: goto L_0022C72C;
    case 67u: goto L_0022C740;
    case 68u: goto L_0022C748;
    case 69u: goto L_0022C75C;
    case 70u: goto L_0022C768;
    case 71u: goto L_0022C770;
    case 72u: goto L_0022C77C;
    case 73u: goto L_0022C788;
    case 74u: goto L_0022C7B0;
    case 75u: goto L_0022C7BC;
    case 76u: goto L_0022C7C4;
    case 77u: goto L_0022C7D0;
    case 78u: goto L_0022C7DC;
    case 79u: goto L_0022C7E8;
    case 80u: goto L_0022C7F4;
    case 81u: goto L_0022C800;
    case 82u: goto L_0022C80C;
    case 83u: goto L_0022C850;
    case 84u: goto L_0022C85C;
    case 85u: goto L_0022C864;
    case 86u: goto L_0022C870;
    case 87u: goto L_0022C87C;
    case 88u: goto L_0022C888;
    case 89u: goto L_0022C894;
    case 90u: goto L_0022C8A0;
    case 91u: goto L_0022C8AC;
    case 92u: goto L_0022C8D8;
    case 93u: goto L_0022C910;
    case 94u: goto L_0022C984;
    case 95u: goto L_0022C98C;
    case 96u: goto L_0022C998;
    case 97u: goto L_0022C9E8;
    case 98u: goto L_0022CA78;
    case 99u: goto L_0022CA8C;
    case 100u: goto L_0022CA94;
    case 101u: goto L_0022CAF0;
    case 102u: goto L_0022CB70;
    case 103u: goto L_0022CBB8;
    case 104u: goto L_0022CBC4;
    case 105u: goto L_0022CBD0;
    case 106u: goto L_0022CBDC;
    case 107u: goto L_0022CBF8;
    case 108u: goto L_0022CC0C;
    case 109u: goto L_0022CC1C;
    case 110u: goto L_0022CC28;
    case 111u: goto L_0022CC38;
    case 112u: goto L_0022CC44;
    case 113u: goto L_0022CC50;
    case 114u: goto L_0022CC70;
    case 115u: goto L_0022CC8C;
    case 116u: goto L_0022CC98;
    case 117u: goto L_0022CCB8;
    case 118u: goto L_0022CCD0;
    case 119u: goto L_0022CCDC;
    case 120u: goto L_0022CCE8;
    case 121u: goto L_0022CCF4;
    case 122u: goto L_0022CD00;
    case 123u: goto L_0022CD10;
    case 124u: goto L_0022CD38;
    case 125u: goto L_0022CD64;
    case 126u: goto L_0022CD88;
    case 127u: goto L_0022CDA0;
    case 128u: goto L_0022CDAC;
    case 129u: goto L_0022CE24;
    case 130u: goto L_0022CE30;
    case 131u: goto L_0022CE4C;
    case 132u: goto L_0022CE5C;
    case 133u: goto L_0022CE64;
    case 134u: goto L_0022CE80;
    case 135u: goto L_0022CE94;
    case 136u: goto L_0022CEB4;
    case 137u: goto L_0022CEBC;
    case 138u: goto L_0022CEE8;
    case 139u: goto L_0022CEF8;
    case 140u: goto L_0022CF0C;
    case 141u: goto L_0022CF24;
    case 142u: goto L_0022CF4C;
    case 143u: goto L_0022CF64;
    case 144u: goto L_0022D008;
    case 145u: goto L_0022D010;
    case 146u: goto L_0022D018;
    case 147u: goto L_0022D020;
    case 148u: goto L_0022D02C;
    case 149u: goto L_0022D040;
    case 150u: goto L_0022D04C;
    case 151u: goto L_0022D060;
    case 152u: goto L_0022D06C;
    case 153u: goto L_0022D080;
    case 154u: goto L_0022D08C;
    case 155u: goto L_0022D0A0;
    case 156u: goto L_0022D0B4;
    case 157u: goto L_0022D0C0;
    case 158u: goto L_0022D0CC;
    case 159u: goto L_0022D0E4;
    case 160u: goto L_0022D0F8;
    case 161u: goto L_0022D104;
    case 162u: goto L_0022D110;
    case 163u: goto L_0022D120;
    case 164u: goto L_0022D144;
    case 165u: goto L_0022D14C;
    case 166u: goto L_0022D158;
    case 167u: goto L_0022D170;
    case 168u: goto L_0022D184;
    case 169u: goto L_0022D194;
    case 170u: goto L_0022D1A0;
    case 171u: goto L_0022D1B4;
    case 172u: goto L_0022D1C4;
    case 173u: goto L_0022D1D0;
    case 174u: goto L_0022D1D8;
    case 175u: goto L_0022D1E4;
    case 176u: goto L_0022D1F4;
    case 177u: goto L_0022D1FC;
    case 178u: goto L_0022D204;
    case 179u: goto L_0022D220;
    case 180u: goto L_0022D22C;
    case 181u: goto L_0022D244;
    case 182u: goto L_0022D24C;
    case 183u: goto L_0022D298;
    case 184u: goto L_0022D2AC;
    case 185u: goto L_0022D2D4;
    case 186u: goto L_0022D2F8;
    case 187u: goto L_0022D30C;
    case 188u: goto L_0022D314;
    case 189u: goto L_0022D34C;
    case 190u: goto L_0022D380;
    case 191u: goto L_0022D3CC;
    case 192u: goto L_0022D400;
    case 193u: goto L_0022D42C;
    case 194u: goto L_0022D43C;
    case 195u: goto L_0022D468;
    case 196u: goto L_0022D470;
    case 197u: goto L_0022D500;
    case 198u: goto L_0022D550;
    case 199u: goto L_0022D58C;
    case 200u: goto L_0022D5A8;
    case 201u: goto L_0022D5B8;
    case 202u: goto L_0022D5CC;
    case 203u: goto L_0022D600;
    case 204u: goto L_0022D6DC;
    case 205u: goto L_0022D714;
    case 206u: goto L_0022D730;
    case 207u: goto L_0022D7A4;
    case 208u: goto L_0022D7BC;
    case 209u: goto L_0022D7D8;
    case 210u: goto L_0022D814;
    case 211u: goto L_0022D82C;
    case 212u: goto L_0022D848;
    case 213u: goto L_0022D898;
    case 214u: goto L_0022D8C0;
    case 215u: goto L_0022D910;
    case 216u: goto L_0022DA00;
    case 217u: goto L_0022DA34;
    case 218u: goto L_0022DA40;
    case 219u: goto L_0022DA50;
    case 220u: goto L_0022DA80;
    case 221u: goto L_0022DA90;
    case 222u: goto L_0022DAD8;
    case 223u: goto L_0022DB90;
    case 224u: goto L_0022DBB0;
    case 225u: goto L_0022DC48;
    case 226u: goto L_0022DC90;
    case 227u: goto L_0022DC98;
    case 228u: goto L_0022DD58;
    case 229u: goto L_0022DD7C;
    case 230u: goto L_0022DD84;
    case 231u: goto L_0022E0C0;
    case 232u: goto L_0022E0E8;
    case 233u: goto L_0022E130;
    case 234u: goto L_0022E294;
    case 235u: goto L_0022E2C0;
    case 236u: goto L_0022E3C0;
    case 237u: goto L_0022E3FC;
    case 238u: goto L_0022E41C;
    case 239u: goto L_0022E428;
    case 240u: goto L_0022E4C0;
    case 241u: goto L_0022E4F4;
    case 242u: goto L_0022E550;
    case 243u: goto L_0022E5F0;
    case 244u: goto L_0022E6A0;
    case 245u: goto L_0022E740;
    case 246u: goto L_0022E7C0;
    case 247u: goto L_0022E7D0;
    case 248u: goto L_0022E7E0;
    case 249u: goto L_0022E7F0;
    case 250u: goto L_0022E800;
    case 251u: goto L_0022E880;
    case 252u: goto L_0022E8A0;
    case 253u: goto L_0022E8AC;
    case 254u: goto L_0022E944;
    case 255u: goto L_0022EB18;
    case 256u: goto L_0022ED60;
    case 257u: goto L_0022EDB0;
    case 258u: goto L_0022EDD0;
    case 259u: goto L_0022EDFC;
    case 260u: goto L_0022EE24;
    case 261u: goto L_0022EE68;
    case 262u: goto L_0022EEA0;
    case 263u: goto L_0022EEF0;
    case 264u: goto L_0022EF30;
    case 265u: goto L_0022EF7C;
    case 266u: goto L_0022EFA0;
    case 267u: goto L_0022F020;
    case 268u: goto L_0022F040;
    case 269u: goto L_0022F058;
    case 270u: goto L_0022F060;
    case 271u: goto L_0022F068;
    case 272u: goto L_0022F08C;
    case 273u: goto L_0022F0C4;
    case 274u: goto L_0022F0D0;
    case 275u: goto L_0022F0D8;
    case 276u: goto L_0022F0E0;
    case 277u: goto L_0022F0F0;
    case 278u: goto L_0022F128;
    case 279u: goto L_0022F140;
    case 280u: goto L_0022F148;
    case 281u: goto L_0022F150;
    case 282u: goto L_0022F180;
    case 283u: goto L_0022F188;
    case 284u: goto L_0022F204;
    case 285u: goto L_0022F20C;
    case 286u: goto L_0022F214;
    case 287u: goto L_0022F230;
    case 288u: goto L_0022F280;
    case 289u: goto L_0022F2B0;
    case 290u: goto L_0022F2D0;
    case 291u: goto L_0022F350;
    case 292u: goto L_0022F364;
    case 293u: goto L_0022F36C;
    case 294u: goto L_0022F3B4;
    case 295u: goto L_0022F3D4;
    case 296u: goto L_0022F3E0;
    case 297u: goto L_0022F478;
    case 298u: goto L_0022F570;
    case 299u: goto L_0022F5E8;
    case 300u: goto L_0022F620;
    case 301u: goto L_0022F6C0;
    case 302u: goto L_0022F6D0;
    case 303u: goto L_0022F6E0;
    case 304u: goto L_0022F78C;
    case 305u: goto L_0022F808;
    case 306u: goto L_0022F828;
    case 307u: goto L_0022F840;
    case 308u: goto L_0022F880;
    case 309u: goto L_0022F8E0;
    case 310u: goto L_0022F8EC;
    case 311u: goto L_0022F8F8;
    case 312u: goto L_0022F904;
    case 313u: goto L_0022F920;
    case 314u: goto L_0022F934;
    case 315u: goto L_0022F944;
    case 316u: goto L_0022F950;
    case 317u: goto L_0022F960;
    case 318u: goto L_0022F96C;
    case 319u: goto L_0022F978;
    case 320u: goto L_0022F998;
    case 321u: goto L_0022F9B4;
    case 322u: goto L_0022F9C0;
    case 323u: goto L_0022F9E0;
    case 324u: goto L_0022F9F8;
    case 325u: goto L_0022FA04;
    case 326u: goto L_0022FA10;
    case 327u: goto L_0022FA1C;
    case 328u: goto L_0022FA28;
    case 329u: goto L_0022FA38;
    case 330u: goto L_0022FA60;
    case 331u: goto L_0022FA8C;
    case 332u: goto L_0022FAB0;
    case 333u: goto L_0022FAC8;
    case 334u: goto L_0022FAD4;
    case 335u: goto L_0022FB4C;
    case 336u: goto L_0022FB58;
    case 337u: goto L_0022FB74;
    case 338u: goto L_0022FB84;
    case 339u: goto L_0022FB8C;
    case 340u: goto L_0022FBA8;
    case 341u: goto L_0022FBBC;
    case 342u: goto L_0022FBDC;
    case 343u: goto L_0022FBE4;
    case 344u: goto L_0022FC10;
    case 345u: goto L_0022FC20;
    case 346u: goto L_0022FC34;
    case 347u: goto L_0022FC4C;
    case 348u: goto L_0022FC74;
    case 349u: goto L_0022FC8C;
    case 350u: goto L_0022FD3C;
    case 351u: goto L_0022FD44;
    case 352u: goto L_0022FD4C;
    case 353u: goto L_0022FD54;
    case 354u: goto L_0022FD60;
    case 355u: goto L_0022FD74;
    case 356u: goto L_0022FD80;
    case 357u: goto L_0022FD94;
    case 358u: goto L_0022FDA0;
    case 359u: goto L_0022FDB4;
    case 360u: goto L_0022FDC0;
    case 361u: goto L_0022FDD4;
    case 362u: goto L_0022FDE8;
    case 363u: goto L_0022FDF4;
    case 364u: goto L_0022FE00;
    case 365u: goto L_0022FE18;
    case 366u: goto L_0022FE2C;
    case 367u: goto L_0022FE38;
    case 368u: goto L_0022FE44;
    case 369u: goto L_0022FE54;
    case 370u: goto L_0022FE78;
    case 371u: goto L_0022FE80;
    case 372u: goto L_0022FE8C;
    case 373u: goto L_0022FEA4;
    case 374u: goto L_0022FEB8;
    case 375u: goto L_0022FEC8;
    case 376u: goto L_0022FED4;
    case 377u: goto L_0022FEE8;
    case 378u: goto L_0022FEF8;
    case 379u: goto L_0022FF04;
    case 380u: goto L_0022FF0C;
    case 381u: goto L_0022FF18;
    case 382u: goto L_0022FF28;
    case 383u: goto L_0022FF30;
    case 384u: goto L_0022FF38;
    case 385u: goto L_0022FF64;
    case 386u: goto L_0022FF70;
    case 387u: goto L_0022FF88;
    case 388u: goto L_0022FFA0;
    case 389u: goto L_0022FFA8;
    case 390u: goto L_0022FFB4;
    case 391u: goto L_0022FFC0;
    case 392u: goto L_0022FFC8;
    case 393u: goto L_0022FFF0;
    case 394u: goto L_0022FFF8;
    default: bad_entry(c, 0x0022C000u); return;
    }
L_0022C000:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 6u);  goto L_0022C00C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0022C00C:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 344u));
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = ld8((c.r[21].w[0] + 884u));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.r[5].d[0] = c.r[3].d[0] << 3;
    c.r[3].d[0] = c.r[3].d[0] << 4;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 6;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C044u); st64((c.r[21].w[0] + 272u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0048(c, 53u, depth + 1u); else { c.pc = 0x00220650u; return; } if (c.pc != 0x0022C044u) [[unlikely]] return; }
L_0022C044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C04Cu); set32(c.r[4], c.r[21].w[0] + 2288u);  if (depth < kMaxDepth) unit_0049(c, 140u, depth + 1u); else { c.pc = 0x002263C0u; return; } if (c.pc != 0x0022C04Cu) [[unlikely]] return; }
L_0022C04C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C058u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x002263B0u; return; } if (c.pc != 0x0022C058u) [[unlikely]] return; }
L_0022C058:
    set32(c.r[3], ld32((c.r[21].w[0] + 832u)));
    set32(c.r[4], c.r[21].w[0] + 152u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C070u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 231u, depth + 1u); else { c.pc = 0x001B7980u; return; } if (c.pc != 0x0022C070u) [[unlikely]] return; }
L_0022C070:
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[21].w[0] + 152u);  goto L_0022C098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C084u); set32(c.r[4], c.r[21].w[0] + 2288u);  if (depth < kMaxDepth) unit_0049(c, 138u, depth + 1u); else { c.pc = 0x002263A0u; return; } if (c.pc != 0x0022C084u) [[unlikely]] return; }
L_0022C084:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C094u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 136u, depth + 1u); else { c.pc = 0x00226350u; return; } if (c.pc != 0x0022C094u) [[unlikely]] return; }
L_0022C094:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 1;
L_0022C098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0A0u);  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x0022C0A0u) [[unlikely]] return; }
L_0022C0A0:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 872u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[21].w[0] + 832u)));  goto L_0022C0B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0B4u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 135u, depth + 1u); else { c.pc = 0x00226340u; return; } if (c.pc != 0x0022C0B4u) [[unlikely]] return; }
L_0022C0B4:
    set32(c.r[6], ld32((c.r[21].w[0] + 832u)));
    c.budget -= 1;
L_0022C0B8:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0C4u); set32(c.r[5], c.r[21].w[0] + 624u);  if (depth < kMaxDepth) unit_0049(c, 136u, depth + 1u); else { c.pc = 0x00226350u; return; } if (c.pc != 0x0022C0C4u) [[unlikely]] return; }
L_0022C0C4:
    set32(c.r[5], ld32((c.r[21].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0D0u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x0022C0D0u) [[unlikely]] return; }
L_0022C0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0D8u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 134u, depth + 1u); else { c.pc = 0x00226330u; return; } if (c.pc != 0x0022C0D8u) [[unlikely]] return; }
L_0022C0D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0E4u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x002263B0u; return; } if (c.pc != 0x0022C0E4u) [[unlikely]] return; }
L_0022C0E4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0F4u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 136u, depth + 1u); else { c.pc = 0x00226350u; return; } if (c.pc != 0x0022C0F4u) [[unlikely]] return; }
L_0022C0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C0FCu); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 133u, depth + 1u); else { c.pc = 0x002262F0u; return; } if (c.pc != 0x0022C0FCu) [[unlikely]] return; }
L_0022C0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C104u);  if (depth < kMaxDepth) unit_0049(c, 132u, depth + 1u); else { c.pc = 0x002262E0u; return; } if (c.pc != 0x0022C104u) [[unlikely]] return; }
L_0022C104:
    st32((c.r[21].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[23], c.r[17].w[0] + 6u);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[30], ld32((c.r[16].w[0] + 84u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[21].w[0] + 296u)));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);  if (t) { goto L_0022C1C4; } }
L_0022C130:
    c.r[1].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[20].d[0] + 0ull;  goto L_0022C13C; }
L_0022C13C:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C148u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 275u, depth + 1u); else { c.pc = 0x00227210u; return; } if (c.pc != 0x0022C148u) [[unlikely]] return; }
L_0022C148:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C154u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 361u, depth + 1u); else { c.pc = 0x0022B980u; return; } if (c.pc != 0x0022C154u) [[unlikely]] return; }
L_0022C154:
    set32(c.r[3], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0022C17C; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[19].w[0] << 4);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0022C180; } }
L_0022C17C:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022C180:
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[30].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[21].w[0] + 272u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C19Cu); c.r[10].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 327u, depth + 1u); else { c.pc = 0x00223670u; return; } if (c.pc != 0x0022C19Cu) [[unlikely]] return; }
L_0022C19C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[19], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; set32(c.r[20], c.r[20].w[0] - c.r[16].w[0]);  if (t) { goto L_0022C1BC; } }
    set32(c.r[17], ld32((c.r[21].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0022C1C4; } }
L_0022C1BC:
    set32(c.r[3], ld32((c.r[21].w[0] + 300u)));
    set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0022C1C4:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 324u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C130u | kUnwind; return; } goto L_0022C130; }
L_0022C1CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0022C200:
    set32(c.r[6], ld32((c.r[4].w[0] + 1340u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1344u)));
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_0022C220:
    set32(c.r[5], ld32((c.r[4].w[0] + 2252u)));
    set32(c.r[3], 0u + 1024u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 296u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 1);
    st32((c.r[4].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] - 3u);
    set32(c.r[5], ld32((c.r[4].w[0] + 288u)));
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);  if (t) { goto L_0022C254; } }
    breakpoint(c, 0x0022C250u);
    c.budget -= 1;
L_0022C254:
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[5].d[0] & 3ull;
    st32((c.r[4].w[0] + 324u), c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 324u), c.r[3].w[0]);  c.pc = t; return; }
L_0022C270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_0022C280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_0022C290:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[3], c.r[7].w[0] << 1);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[3].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 346u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[22].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C304u); st8((c.r[29].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0048(c, 293u, depth + 1u); else { c.pc = 0x00222DB0u; return; } if (c.pc != 0x0022C304u) [[unlikely]] return; }
L_0022C304:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 52u));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.r[19].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0022C440; } }
L_0022C330:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[30].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 1042ull;
    st64((c.r[21].w[0] + 280u), c.r[2].d[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 324u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_0022C3C8; } }
L_0022C354:
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[21].w[0] + 346u));  goto L_0022C390; }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 5;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_0022C3C8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 60u)));
    c.r[19].d[0] = ld16((c.r[23].w[0]));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[23], c.r[23].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022C3C8; } }
L_0022C390:
    set32(c.r[3], c.r[4].w[0] - c.r[16].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[3].w[0]);  if (t) { goto L_0022C3E4; } }
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_0022C3E4; } }
L_0022C3C8:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_0022C3E8; }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C354u | kUnwind; return; } goto L_0022C354; }
L_0022C3E4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0022C3E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C3F8u); set32(c.r[7], c.r[21].w[0] + 272u);  if (depth < kMaxDepth) unit_0048(c, 328u, depth + 1u); else { c.pc = 0x002238C0u; return; } if (c.pc != 0x0022C3F8u) [[unlikely]] return; }
L_0022C3F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C40Cu); set32(c.r[5], c.r[16].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0048(c, 194u, depth + 1u); else { c.pc = 0x00221630u; return; } if (c.pc != 0x0022C40Cu) [[unlikely]] return; }
L_0022C40C:
    set32(c.r[2], ld32((c.r[21].w[0] + 308u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 312u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 304u)));  goto L_0022C434; }
    set32(c.r[2], ld32((c.r[21].w[0] + 296u)));
    st32((c.r[21].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 308u), 0u);  if (t) { goto L_0022C440; } }
L_0022C434:
    set32(c.r[2], ld32((c.r[21].w[0] + 300u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[21].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0022C440:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[30].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C330u | kUnwind; return; } goto L_0022C330; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C458u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 325u, depth + 1u); else { c.pc = 0x002233E0u; return; } if (c.pc != 0x0022C458u) [[unlikely]] return; }
L_0022C458:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0022C490:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 82u));
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022C698; } }
    set32(c.r[4], c.r[17].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C4D8u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0049(c, 20u, depth + 1u); else { c.pc = 0x002249E0u; return; } if (c.pc != 0x0022C4D8u) [[unlikely]] return; }
L_0022C4D8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C4E4u); set32(c.r[18], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 359u, depth + 1u); else { c.pc = 0x00227E10u; return; } if (c.pc != 0x0022C4E4u) [[unlikely]] return; }
L_0022C4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C4ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 358u, depth + 1u); else { c.pc = 0x00227E00u; return; } if (c.pc != 0x0022C4ECu) [[unlikely]] return; }
L_0022C4EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C500u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 357u, depth + 1u); else { c.pc = 0x00227DD0u; return; } if (c.pc != 0x0022C500u) [[unlikely]] return; }
L_0022C500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C508u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 356u, depth + 1u); else { c.pc = 0x00227DC0u; return; } if (c.pc != 0x0022C508u) [[unlikely]] return; }
L_0022C508:
    c.f[24] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C51Cu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 355u, depth + 1u); else { c.pc = 0x00227D50u; return; } if (c.pc != 0x0022C51Cu) [[unlikely]] return; }
L_0022C51C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C528u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0049(c, 354u, depth + 1u); else { c.pc = 0x00227D20u; return; } if (c.pc != 0x0022C528u) [[unlikely]] return; }
L_0022C528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C530u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 353u, depth + 1u); else { c.pc = 0x00227D10u; return; } if (c.pc != 0x0022C530u) [[unlikely]] return; }
L_0022C530:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C53Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 352u, depth + 1u); else { c.pc = 0x00227D00u; return; } if (c.pc != 0x0022C53Cu) [[unlikely]] return; }
L_0022C53C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C548u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C548u) [[unlikely]] return; }
L_0022C548:
    c.f[22] = c.f[0];
    c.f[23] = c.f[24] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[23]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0022C564; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0022C684; } }
L_0022C564:
    set32(c.r[5], c.r[17].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C570u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 355u, depth + 1u); else { c.pc = 0x00227D50u; return; } if (c.pc != 0x0022C570u) [[unlikely]] return; }
L_0022C570:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C57Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0049(c, 354u, depth + 1u); else { c.pc = 0x00227D20u; return; } if (c.pc != 0x0022C57Cu) [[unlikely]] return; }
L_0022C57C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C584u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 353u, depth + 1u); else { c.pc = 0x00227D10u; return; } if (c.pc != 0x0022C584u) [[unlikely]] return; }
L_0022C584:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C590u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 352u, depth + 1u); else { c.pc = 0x00227D00u; return; } if (c.pc != 0x0022C590u) [[unlikely]] return; }
L_0022C590:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C59Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C59Cu) [[unlikely]] return; }
L_0022C59C:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C5A8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 350u, depth + 1u); else { c.pc = 0x00227CE0u; return; } if (c.pc != 0x0022C5A8u) [[unlikely]] return; }
L_0022C5A8:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C5B4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 349u, depth + 1u); else { c.pc = 0x00227CD0u; return; } if (c.pc != 0x0022C5B4u) [[unlikely]] return; }
L_0022C5B4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C5C0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C5C0u) [[unlikely]] return; }
L_0022C5C0:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C5CCu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C5CCu) [[unlikely]] return; }
L_0022C5CC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0022C684; } }
L_0022C5E0:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022C5F0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022C5F0:
    st8((c.r[17].w[0] + 346u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 346u));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0022C684; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C610u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 355u, depth + 1u); else { c.pc = 0x00227D50u; return; } if (c.pc != 0x0022C610u) [[unlikely]] return; }
L_0022C610:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C61Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0049(c, 354u, depth + 1u); else { c.pc = 0x00227D20u; return; } if (c.pc != 0x0022C61Cu) [[unlikely]] return; }
L_0022C61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C624u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 353u, depth + 1u); else { c.pc = 0x00227D10u; return; } if (c.pc != 0x0022C624u) [[unlikely]] return; }
L_0022C624:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C630u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 352u, depth + 1u); else { c.pc = 0x00227D00u; return; } if (c.pc != 0x0022C630u) [[unlikely]] return; }
L_0022C630:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C63Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C63Cu) [[unlikely]] return; }
L_0022C63C:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C648u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 350u, depth + 1u); else { c.pc = 0x00227CE0u; return; } if (c.pc != 0x0022C648u) [[unlikely]] return; }
L_0022C648:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C654u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 349u, depth + 1u); else { c.pc = 0x00227CD0u; return; } if (c.pc != 0x0022C654u) [[unlikely]] return; }
L_0022C654:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C660u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C660u) [[unlikely]] return; }
L_0022C660:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C66Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C66Cu) [[unlikely]] return; }
L_0022C66C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022C67C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022C67C:
    st8((c.r[17].w[0] + 346u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022C684:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0022C69C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C698u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 101u, depth + 1u); else { c.pc = 0x0022CAF0u; return; } if (c.pc != 0x0022C698u) [[unlikely]] return; }
L_0022C698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0022C69C:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0022C6D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[5].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 82u));
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022C8D8; } }
    set32(c.r[4], c.r[17].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C718u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0049(c, 20u, depth + 1u); else { c.pc = 0x002249E0u; return; } if (c.pc != 0x0022C718u) [[unlikely]] return; }
L_0022C718:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C724u); set32(c.r[18], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0049(c, 359u, depth + 1u); else { c.pc = 0x00227E10u; return; } if (c.pc != 0x0022C724u) [[unlikely]] return; }
L_0022C724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C72Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 358u, depth + 1u); else { c.pc = 0x00227E00u; return; } if (c.pc != 0x0022C72Cu) [[unlikely]] return; }
L_0022C72C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C740u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 357u, depth + 1u); else { c.pc = 0x00227DD0u; return; } if (c.pc != 0x0022C740u) [[unlikely]] return; }
L_0022C740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C748u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 356u, depth + 1u); else { c.pc = 0x00227DC0u; return; } if (c.pc != 0x0022C748u) [[unlikely]] return; }
L_0022C748:
    c.f[24] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C75Cu); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 355u, depth + 1u); else { c.pc = 0x00227D50u; return; } if (c.pc != 0x0022C75Cu) [[unlikely]] return; }
L_0022C75C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C768u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0049(c, 354u, depth + 1u); else { c.pc = 0x00227D20u; return; } if (c.pc != 0x0022C768u) [[unlikely]] return; }
L_0022C768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C770u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 353u, depth + 1u); else { c.pc = 0x00227D10u; return; } if (c.pc != 0x0022C770u) [[unlikely]] return; }
L_0022C770:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C77Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 352u, depth + 1u); else { c.pc = 0x00227D00u; return; } if (c.pc != 0x0022C77Cu) [[unlikely]] return; }
L_0022C77C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C788u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C788u) [[unlikely]] return; }
L_0022C788:
    c.f[22] = c.f[0];
    c.f[23] = c.f[24] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[23]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0022C7A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0022C8C4; } }
L_0022C7A4:
    set32(c.r[5], c.r[17].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7B0u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 355u, depth + 1u); else { c.pc = 0x00227D50u; return; } if (c.pc != 0x0022C7B0u) [[unlikely]] return; }
L_0022C7B0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7BCu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0049(c, 354u, depth + 1u); else { c.pc = 0x00227D20u; return; } if (c.pc != 0x0022C7BCu) [[unlikely]] return; }
L_0022C7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7C4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 353u, depth + 1u); else { c.pc = 0x00227D10u; return; } if (c.pc != 0x0022C7C4u) [[unlikely]] return; }
L_0022C7C4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7D0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 352u, depth + 1u); else { c.pc = 0x00227D00u; return; } if (c.pc != 0x0022C7D0u) [[unlikely]] return; }
L_0022C7D0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7DCu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C7DCu) [[unlikely]] return; }
L_0022C7DC:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7E8u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 350u, depth + 1u); else { c.pc = 0x00227CE0u; return; } if (c.pc != 0x0022C7E8u) [[unlikely]] return; }
L_0022C7E8:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C7F4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 349u, depth + 1u); else { c.pc = 0x00227CD0u; return; } if (c.pc != 0x0022C7F4u) [[unlikely]] return; }
L_0022C7F4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C800u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C800u) [[unlikely]] return; }
L_0022C800:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C80Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C80Cu) [[unlikely]] return; }
L_0022C80C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0022C820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0022C8C4; } }
L_0022C820:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022C830; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022C830:
    st8((c.r[17].w[0] + 346u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 346u));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0022C8C4; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C850u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0049(c, 355u, depth + 1u); else { c.pc = 0x00227D50u; return; } if (c.pc != 0x0022C850u) [[unlikely]] return; }
L_0022C850:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C85Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0049(c, 354u, depth + 1u); else { c.pc = 0x00227D20u; return; } if (c.pc != 0x0022C85Cu) [[unlikely]] return; }
L_0022C85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C864u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 353u, depth + 1u); else { c.pc = 0x00227D10u; return; } if (c.pc != 0x0022C864u) [[unlikely]] return; }
L_0022C864:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C870u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 352u, depth + 1u); else { c.pc = 0x00227D00u; return; } if (c.pc != 0x0022C870u) [[unlikely]] return; }
L_0022C870:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C87Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C87Cu) [[unlikely]] return; }
L_0022C87C:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C888u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 350u, depth + 1u); else { c.pc = 0x00227CE0u; return; } if (c.pc != 0x0022C888u) [[unlikely]] return; }
L_0022C888:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C894u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0049(c, 349u, depth + 1u); else { c.pc = 0x00227CD0u; return; } if (c.pc != 0x0022C894u) [[unlikely]] return; }
L_0022C894:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C8A0u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C8A0u) [[unlikely]] return; }
L_0022C8A0:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C8ACu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 351u, depth + 1u); else { c.pc = 0x00227CF0u; return; } if (c.pc != 0x0022C8ACu) [[unlikely]] return; }
L_0022C8AC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0022C8BC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022C8BC:
    st8((c.r[17].w[0] + 346u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0022C8C4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0022C8DC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C8D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 101u, depth + 1u); else { c.pc = 0x0022CAF0u; return; } if (c.pc != 0x0022C8D8u) [[unlikely]] return; }
L_0022C8D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0022C8DC:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0022C910:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2256u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 880u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[22], c.r[3].w[0] - 32u);
    c.r[4].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.r[6].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[17], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] << 6);
    c.budget -= 27;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_0022CAC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0022CAB8; } }
L_0022C984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C98Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0049(c, 275u, depth + 1u); else { c.pc = 0x00227210u; return; } if (c.pc != 0x0022C98Cu) [[unlikely]] return; }
L_0022C98C:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022C998u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_004A(c, 361u, depth + 1u); else { c.pc = 0x0022B980u; return; } if (c.pc != 0x0022C998u) [[unlikely]] return; }
L_0022C998:
    c.r[3].d[0] = c.r[19].d[0] & 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x03000000u);
    set32(c.r[5], c.r[3].w[0] << 4);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    set32(c.r[6], c.r[22].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[3].d[0] << 32;
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[5], c.r[5], c.r[23]);
    st128((c.r[2].w[0]) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.r[7].d[0] = c.r[2].d[0] | 4ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C040000u);
    c.r[5].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 20;
L_0022C9E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.budget -= 9;
    if (c.r[2].d[0] != c.r[9].d[0]) { set32(c.r[2], c.r[3].w[0] << 2);  goto L_0022CA14; }
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_0022CA14:
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::pcpyld(c.r[2], c.r[2], c.r[6]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C9E8u | kUnwind; return; } goto L_0022C9E8; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 346u));
    set32(c.r[6], c.r[19].w[0] << 5);
    set32(c.r[3], ld32((c.r[21].w[0] + 252u)));
    set32(c.r[4], c.r[21].w[0] + 152u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 275u, depth + 1u); else { c.pc = 0x00227210u; return; } if (c.pc != 0x0022CA78u) [[unlikely]] return; }
L_0022CA78:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA8Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0048(c, 39u, depth + 1u); else { c.pc = 0x00220490u; return; } if (c.pc != 0x0022CA8Cu) [[unlikely]] return; }
L_0022CA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CA94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x00227200u; return; } if (c.pc != 0x0022CA94u) [[unlikely]] return; }
L_0022CA94:
    set32(c.r[4], ld32((c.r[21].w[0] + 172u)));
    set32(c.r[20], c.r[20].w[0] + 44u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[21].w[0] + 172u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 9;
L_0022CAB8:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[21].w[0] + 152u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022C984u | kUnwind; return; } goto L_0022C984; }
L_0022CAC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0022CAF0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[2], c.r[5].w[0] + 32u);
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
    st32((c.r[4].w[0] + 248u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 832u), 0u);
    set32(c.r[20], ld32((c.r[5].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 52u));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 64u));
    c.r[22].d[0] = c.r[3].d[0] & 4095ull;
    c.r[3].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[20].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_0022CB74; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CB70u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004A(c, 166u, depth + 1u); else { c.pc = 0x00229B80u; return; } if (c.pc != 0x0022CB70u) [[unlikely]] return; }
L_0022CB70:
    st32((c.r[21].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 1;
L_0022CB74:
    set32(c.r[3], ld32((c.r[21].w[0] + 880u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 252u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 346u));
    set32(c.r[2], ld32((c.r[21].w[0] + 252u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[21].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[21].w[0] + 268u), c.f[0]);
    st8((c.r[21].w[0] + 872u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 873u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 874u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBB8u); set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (depth < kMaxDepth) unit_0049(c, 348u, depth + 1u); else { c.pc = 0x00227CC0u; return; } if (c.pc != 0x0022CBB8u) [[unlikely]] return; }
L_0022CBB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 347u, depth + 1u); else { c.pc = 0x00227CA0u; return; } if (c.pc != 0x0022CBC4u) [[unlikely]] return; }
L_0022CBC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBD0u); st32((c.r[21].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 346u, depth + 1u); else { c.pc = 0x00227C80u; return; } if (c.pc != 0x0022CBD0u) [[unlikely]] return; }
L_0022CBD0:
    st32((c.r[21].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBDCu); set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (depth < kMaxDepth) unit_0049(c, 345u, depth + 1u); else { c.pc = 0x00227C70u; return; } if (c.pc != 0x0022CBDCu) [[unlikely]] return; }
L_0022CBDC:
    set32(c.r[3], ld32((c.r[21].w[0] + 332u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022CC14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CBF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 344u, depth + 1u); else { c.pc = 0x00227C60u; return; } if (c.pc != 0x0022CBF8u) [[unlikely]] return; }
L_0022CBF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[21].w[0] + 912u);
    c.f[12] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC0Cu); set32(c.r[5], c.r[5].w[0] + 18088u);  if (depth < kMaxDepth) unit_0049(c, 343u, depth + 1u); else { c.pc = 0x00227C40u; return; } if (c.pc != 0x0022CC0Cu) [[unlikely]] return; }
L_0022CC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (t) { goto L_0022CC3C; } }
L_0022CC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC1Cu);  if (depth < kMaxDepth) unit_0049(c, 342u, depth + 1u); else { c.pc = 0x00227C30u; return; } if (c.pc != 0x0022CC1Cu) [[unlikely]] return; }
L_0022CC1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 344u, depth + 1u); else { c.pc = 0x00227C60u; return; } if (c.pc != 0x0022CC28u) [[unlikely]] return; }
L_0022CC28:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC38u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 343u, depth + 1u); else { c.pc = 0x00227C40u; return; } if (c.pc != 0x0022CC38u) [[unlikely]] return; }
L_0022CC38:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_0022CC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC44u);  if (depth < kMaxDepth) unit_0049(c, 341u, depth + 1u); else { c.pc = 0x00227C20u; return; } if (c.pc != 0x0022CC44u) [[unlikely]] return; }
L_0022CC44:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC50u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 340u, depth + 1u); else { c.pc = 0x00227C00u; return; } if (c.pc != 0x0022CC50u) [[unlikely]] return; }
L_0022CC50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    st8((c.r[21].w[0] + 344u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 344u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 5u);  goto L_0022CD40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC70u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 339u, depth + 1u); else { c.pc = 0x00227BE0u; return; } if (c.pc != 0x0022CC70u) [[unlikely]] return; }
L_0022CC70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0022CC84; }
    st32((c.r[21].w[0] + 336u), 0u);
    st32((c.r[21].w[0] + 332u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_0022CC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC8Cu);  if (depth < kMaxDepth) unit_0049(c, 338u, depth + 1u); else { c.pc = 0x00227BD0u; return; } if (c.pc != 0x0022CC8Cu) [[unlikely]] return; }
L_0022CC8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CC98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 337u, depth + 1u); else { c.pc = 0x00227BC0u; return; } if (c.pc != 0x0022CC98u) [[unlikely]] return; }
L_0022CC98:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 860u)));
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022CCC8; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0022CCC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CCB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 336u, depth + 1u); else { c.pc = 0x00227BB0u; return; } if (c.pc != 0x0022CCB8u) [[unlikely]] return; }
L_0022CCB8:
    set32(c.r[3], ld32((c.r[21].w[0] + 864u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  goto L_0022CD5C; }
L_0022CCC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022CCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CCD0u);  if (depth < kMaxDepth) unit_0049(c, 335u, depth + 1u); else { c.pc = 0x00227BA0u; return; } if (c.pc != 0x0022CCD0u) [[unlikely]] return; }
L_0022CCD0:
    st32((c.r[21].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CCDCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 339u, depth + 1u); else { c.pc = 0x00227BE0u; return; } if (c.pc != 0x0022CCDCu) [[unlikely]] return; }
L_0022CCDC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CCE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 334u, depth + 1u); else { c.pc = 0x00227B80u; return; } if (c.pc != 0x0022CCE8u) [[unlikely]] return; }
L_0022CCE8:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CCF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 333u, depth + 1u); else { c.pc = 0x00227B60u; return; } if (c.pc != 0x0022CCF4u) [[unlikely]] return; }
L_0022CCF4:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CD00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 332u, depth + 1u); else { c.pc = 0x00227B50u; return; } if (c.pc != 0x0022CD00u) [[unlikely]] return; }
L_0022CD00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CD10u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (depth < kMaxDepth) unit_0049(c, 331u, depth + 1u); else { c.pc = 0x00227B40u; return; } if (c.pc != 0x0022CD10u) [[unlikely]] return; }
L_0022CD10:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[8]);
    c.r[10].d[0] = c.r[2].d[0] << 48;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CD38u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 360u, depth + 1u); else { c.pc = 0x00227E20u; return; } if (c.pc != 0x0022CD38u) [[unlikely]] return; }
L_0022CD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 860u), c.r[19].w[0]);  if (t) { goto L_0022CD58; } }
L_0022CD40:
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 340u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 260u), 0u);
    st32((c.r[21].w[0] + 860u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 864u), 0u);
    st8((c.r[21].w[0] + 872u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0022CD58:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_0022CD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CD64u);  if (depth < kMaxDepth) unit_0049(c, 330u, depth + 1u); else { c.pc = 0x00227B30u; return; } if (c.pc != 0x0022CD64u) [[unlikely]] return; }
L_0022CD64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 848u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  goto L_0022CE28; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[21].w[0] + 873u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CD88u); st32((c.r[21].w[0] + 848u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0049(c, 329u, depth + 1u); else { c.pc = 0x00227B20u; return; } if (c.pc != 0x0022CD88u) [[unlikely]] return; }
L_0022CD88:
    st8((c.r[21].w[0] + 345u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 345u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022CE24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CDA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 328u, depth + 1u); else { c.pc = 0x00227B10u; return; } if (c.pc != 0x0022CDA0u) [[unlikely]] return; }
L_0022CDA0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CDACu); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0049(c, 327u, depth + 1u); else { c.pc = 0x00227AF0u; return; } if (c.pc != 0x0022CDACu) [[unlikely]] return; }
L_0022CDAC:
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[3] = c.r[2].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[6], 0u + 61u);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[2], c.f[2]);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE24u); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0049(c, 326u, depth + 1u); else { c.pc = 0x00227AD0u; return; } if (c.pc != 0x0022CE24u) [[unlikely]] return; }
L_0022CE24:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_0022CE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE30u);  if (depth < kMaxDepth) unit_0049(c, 325u, depth + 1u); else { c.pc = 0x00227AC0u; return; } if (c.pc != 0x0022CE30u) [[unlikely]] return; }
L_0022CE30:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 852u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  goto L_0022CE54; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE4Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 190u, depth + 1u); else { c.pc = 0x0022A150u; return; } if (c.pc != 0x0022CE4Cu) [[unlikely]] return; }
L_0022CE4C:
    st32((c.r[21].w[0] + 856u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 2;
L_0022CE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE5Cu);  if (depth < kMaxDepth) unit_0049(c, 324u, depth + 1u); else { c.pc = 0x00227AB0u; return; } if (c.pc != 0x0022CE5Cu) [[unlikely]] return; }
L_0022CE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 323u, depth + 1u); else { c.pc = 0x00227AA0u; return; } if (c.pc != 0x0022CE64u) [[unlikely]] return; }
L_0022CE64:
    st8((c.r[21].w[0] + 885u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 885u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  goto L_0022CE8C; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE80u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 188u, depth + 1u); else { c.pc = 0x0022A010u; return; } if (c.pc != 0x0022CE80u) [[unlikely]] return; }
L_0022CE80:
    st8((c.r[21].w[0] + 348u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 347u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022CF38; } }
L_0022CE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CE94u);  if (depth < kMaxDepth) unit_0049(c, 322u, depth + 1u); else { c.pc = 0x00227A90u; return; } if (c.pc != 0x0022CE94u) [[unlikely]] return; }
L_0022CE94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 856u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 16u)));  goto L_0022CEFC; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CEB4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 189u, depth + 1u); else { c.pc = 0x0022A070u; return; } if (c.pc != 0x0022CEB4u) [[unlikely]] return; }
L_0022CEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CEBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 321u, depth + 1u); else { c.pc = 0x00227A80u; return; } if (c.pc != 0x0022CEBCu) [[unlikely]] return; }
L_0022CEBC:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 884u));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[21].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[21].w[0] + 884u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 884u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022CEF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CEE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 319u, depth + 1u); else { c.pc = 0x00227A40u; return; } if (c.pc != 0x0022CEE8u) [[unlikely]] return; }
L_0022CEE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CEF8u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0049(c, 326u, depth + 1u); else { c.pc = 0x00227AD0u; return; } if (c.pc != 0x0022CEF8u) [[unlikely]] return; }
L_0022CEF8:
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 1;
L_0022CEFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0022CF18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CF0Cu);  if (depth < kMaxDepth) unit_0049(c, 318u, depth + 1u); else { c.pc = 0x00227A30u; return; } if (c.pc != 0x0022CF0Cu) [[unlikely]] return; }
L_0022CF0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0022CF1C; }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0022CF18:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0022CF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CF24u); st8((c.r[21].w[0] + 347u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0049(c, 317u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x0022CF24u) [[unlikely]] return; }
L_0022CF24:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[21].w[0] + 347u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[21].w[0] + 348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0022CF38:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 2832u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[21].w[0] + 352u), 0u);  goto L_0022CF68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CF4Cu); set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (depth < kMaxDepth) unit_0049(c, 316u, depth + 1u); else { c.pc = 0x00227A10u; return; } if (c.pc != 0x0022CF4Cu) [[unlikely]] return; }
L_0022CF4C:
    set32(c.r[3], ld32((c.r[21].w[0] + 868u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0022CF64; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022CF64u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 187u, depth + 1u); else { c.pc = 0x00229FD0u; return; } if (c.pc != 0x0022CF64u) [[unlikely]] return; }
L_0022CF64:
    st32((c.r[21].w[0] + 352u), 0u);
    c.budget -= 1;
L_0022CF68:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[21].w[0] + 2592u);
    set32(c.r[3], ld32((c.r[21].w[0] + 252u)));
    c.r[8].d[0] = ld8((c.r[21].w[0] + 344u));
    set32(c.r[7], ld32((c.r[5].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 21u));
    c.r[10].d[0] = ld16((c.r[7].w[0] + 28u));
    c.r[5].d[0] = ld8((c.r[21].w[0] + 345u));
    c.r[7].d[0] = c.r[3].d[0] & 17ull;
    c.r[9].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld8((c.r[21].w[0] + 884u));
    c.r[7].d[0] = c.r[5].d[0] << 5;
    c.r[5].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[8].d[0] = c.r[10].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[9].d[0] = c.r[8].d[0] << 3;
    c.r[8].d[0] = c.r[5].d[0] << 4;
    c.r[9].d[0] = c.r[9].d[0] | 4ull;
    c.r[5].d[0] = c.r[3].d[0] << 6;
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[3].d[0] = ld8((c.r[21].w[0] + 885u));
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 7;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[21].w[0] + 272u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[21].w[0] + 272u));
    set32(c.r[5], ld32((c.r[21].w[0] + 832u)));
    mmi::pcpyld(c.r[7], c.r[2], c.r[3]);
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 4);
    st32((c.r[21].w[0] + 832u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st128((c.r[2].w[0] + 624u) & ~15u, c.r[7]);
    c.r[5].d[0] = ld8((c.r[21].w[0] + 346u));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D008u); set32(c.r[6], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 310u, depth + 1u); else { c.pc = 0x00227970u; return; } if (c.pc != 0x0022D008u) [[unlikely]] return; }
L_0022D008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D010u); set32(c.r[4], c.r[21].w[0] + 2288u);  if (depth < kMaxDepth) unit_0049(c, 309u, depth + 1u); else { c.pc = 0x00227960u; return; } if (c.pc != 0x0022D010u) [[unlikely]] return; }
L_0022D010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D018u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 308u, depth + 1u); else { c.pc = 0x00227950u; return; } if (c.pc != 0x0022D018u) [[unlikely]] return; }
L_0022D018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D020u); set32(c.r[4], ld32((c.r[21].w[0] + 252u)));  if (depth < kMaxDepth) unit_0049(c, 307u, depth + 1u); else { c.pc = 0x00227940u; return; } if (c.pc != 0x0022D020u) [[unlikely]] return; }
L_0022D020:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D02Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 306u, depth + 1u); else { c.pc = 0x00227930u; return; } if (c.pc != 0x0022D02Cu) [[unlikely]] return; }
L_0022D02C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022D044; }
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D040u); set32(c.r[5], 0u + 982u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022D040u) [[unlikely]] return; }
L_0022D040:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022D044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D04Cu);  if (depth < kMaxDepth) unit_0049(c, 305u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x0022D04Cu) [[unlikely]] return; }
L_0022D04C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022D064; }
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D060u); set32(c.r[5], 0u + 1002u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022D060u) [[unlikely]] return; }
L_0022D060:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022D064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D06Cu);  if (depth < kMaxDepth) unit_0049(c, 304u, depth + 1u); else { c.pc = 0x00227910u; return; } if (c.pc != 0x0022D06Cu) [[unlikely]] return; }
L_0022D06C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022D084; }
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D080u); set32(c.r[5], 0u + 1022u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022D080u) [[unlikely]] return; }
L_0022D080:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022D084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D08Cu);  if (depth < kMaxDepth) unit_0049(c, 303u, depth + 1u); else { c.pc = 0x00227900u; return; } if (c.pc != 0x0022D08Cu) [[unlikely]] return; }
L_0022D08C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 260u)));  goto L_0022D0A4; }
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0A0u); set32(c.r[5], 0u + 1042u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022D0A0u) [[unlikely]] return; }
L_0022D0A0:
    set32(c.r[5], ld32((c.r[21].w[0] + 260u)));
    c.budget -= 1;
L_0022D0A4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0022D0C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0B4u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 21u, depth + 1u); else { c.pc = 0x00224A90u; return; } if (c.pc != 0x0022D0B4u) [[unlikely]] return; }
L_0022D0B4:
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0C0u); set32(c.r[5], 0u + 877u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022D0C0u) [[unlikely]] return; }
L_0022D0C0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0022D0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0CCu);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227660u; return; } if (c.pc != 0x0022D0CCu) [[unlikely]] return; }
L_0022D0CC:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 346u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0022D118; }
    set32(c.r[4], c.r[21].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0E4u); set32(c.r[5], 0u + 75u);  if (depth < kMaxDepth) unit_0049(c, 293u, depth + 1u); else { c.pc = 0x00227650u; return; } if (c.pc != 0x0022D0E4u) [[unlikely]] return; }
L_0022D0E4:
    c.r[5].d[0] = ld8((c.r[21].w[0] + 344u));
    set32(c.r[4], c.r[21].w[0] + 2592u);
    set32(c.r[6], ld32((c.r[21].w[0] + 352u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D0F8u); set32(c.r[7], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0048(c, 41u, depth + 1u); else { c.pc = 0x002204F0u; return; } if (c.pc != 0x0022D0F8u) [[unlikely]] return; }
L_0022D0F8:
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D104u); set32(c.r[5], 0u + 1282u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022D104u) [[unlikely]] return; }
L_0022D104:
    c.r[5].d[0] = ld64((c.r[21].w[0] + 272u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D110u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 17u, depth + 1u); else { c.pc = 0x002248B0u; return; } if (c.pc != 0x0022D110u) [[unlikely]] return; }
L_0022D110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 2252u)));  if (t) { goto L_0022D124; } }
L_0022D118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D120u);  if (depth < kMaxDepth) unit_0049(c, 285u, depth + 1u); else { c.pc = 0x00227410u; return; } if (c.pc != 0x0022D120u) [[unlikely]] return; }
L_0022D120:
    set32(c.r[5], ld32((c.r[21].w[0] + 2252u)));
    c.budget -= 1;
L_0022D124:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    set32(c.r[2], ld32((c.r[21].w[0] + 2256u)));
    set32(c.r[4], c.r[21].w[0] + 2288u);
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D144u); st32((c.r[21].w[0] + 940u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 53u, depth + 1u); else { c.pc = 0x00220650u; return; } if (c.pc != 0x0022D144u) [[unlikely]] return; }
L_0022D144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D14Cu); set32(c.r[4], c.r[21].w[0] + 2288u);  if (depth < kMaxDepth) unit_0049(c, 140u, depth + 1u); else { c.pc = 0x002263C0u; return; } if (c.pc != 0x0022D14Cu) [[unlikely]] return; }
L_0022D14C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D158u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x002263B0u; return; } if (c.pc != 0x0022D158u) [[unlikely]] return; }
L_0022D158:
    set32(c.r[3], ld32((c.r[21].w[0] + 832u)));
    set32(c.r[4], c.r[21].w[0] + 152u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D170u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 231u, depth + 1u); else { c.pc = 0x001B7980u; return; } if (c.pc != 0x0022D170u) [[unlikely]] return; }
L_0022D170:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[21].w[0] + 152u);  goto L_0022D198; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D184u); set32(c.r[4], c.r[21].w[0] + 2288u);  if (depth < kMaxDepth) unit_0049(c, 138u, depth + 1u); else { c.pc = 0x002263A0u; return; } if (c.pc != 0x0022D184u) [[unlikely]] return; }
L_0022D184:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D194u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 136u, depth + 1u); else { c.pc = 0x00226350u; return; } if (c.pc != 0x0022D194u) [[unlikely]] return; }
L_0022D194:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 1;
L_0022D198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1A0u);  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x0022D1A0u) [[unlikely]] return; }
L_0022D1A0:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 872u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[21].w[0] + 832u)));  goto L_0022D1B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1B4u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 135u, depth + 1u); else { c.pc = 0x00226340u; return; } if (c.pc != 0x0022D1B4u) [[unlikely]] return; }
L_0022D1B4:
    set32(c.r[6], ld32((c.r[21].w[0] + 832u)));
    c.budget -= 1;
L_0022D1B8:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1C4u); set32(c.r[5], c.r[21].w[0] + 624u);  if (depth < kMaxDepth) unit_0049(c, 136u, depth + 1u); else { c.pc = 0x00226350u; return; } if (c.pc != 0x0022D1C4u) [[unlikely]] return; }
L_0022D1C4:
    set32(c.r[5], ld32((c.r[21].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1D0u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x0022D1D0u) [[unlikely]] return; }
L_0022D1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1D8u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 134u, depth + 1u); else { c.pc = 0x00226330u; return; } if (c.pc != 0x0022D1D8u) [[unlikely]] return; }
L_0022D1D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1E4u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x002263B0u; return; } if (c.pc != 0x0022D1E4u) [[unlikely]] return; }
L_0022D1E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1F4u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 136u, depth + 1u); else { c.pc = 0x00226350u; return; } if (c.pc != 0x0022D1F4u) [[unlikely]] return; }
L_0022D1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D1FCu); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 133u, depth + 1u); else { c.pc = 0x002262F0u; return; } if (c.pc != 0x0022D1FCu) [[unlikely]] return; }
L_0022D1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D204u);  if (depth < kMaxDepth) unit_0049(c, 132u, depth + 1u); else { c.pc = 0x002262E0u; return; } if (c.pc != 0x0022D204u) [[unlikely]] return; }
L_0022D204:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[21].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_0022D24C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D220u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 214u, depth + 1u); else { c.pc = 0x0022D8C0u; return; } if (c.pc != 0x0022D220u) [[unlikely]] return; }
L_0022D220:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D22Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002273A0u; return; } if (c.pc != 0x0022D22Cu) [[unlikely]] return; }
L_0022D22C:
    set32(c.r[7], ld32((c.r[21].w[0] + 252u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D244u); set32(c.r[8], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_004B(c, 203u, depth + 1u); else { c.pc = 0x0022D600u; return; } if (c.pc != 0x0022D244u) [[unlikely]] return; }
L_0022D244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D24Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 279u, depth + 1u); else { c.pc = 0x00227300u; return; } if (c.pc != 0x0022D24Cu) [[unlikely]] return; }
L_0022D24C:
    set32(c.r[4], ld32((c.r[21].w[0] + 2256u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 2252u)));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 347u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_0022D264; } }
    set32(c.r[18], c.r[18].w[0] + 5u);
    c.budget -= 1;
L_0022D264:
    c.r[17].d[0] = ld8((c.r[21].w[0] + 346u));
    set32(c.r[16], ld32((c.r[21].w[0] + 252u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 252u)));  goto L_0022D2B0; }
    set32(c.r[4], c.r[21].w[0] + 272u);
    set32(c.r[5], c.r[16].w[0] + 21u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D298u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 215u, depth + 1u); else { c.pc = 0x0022D910u; return; } if (c.pc != 0x0022D298u) [[unlikely]] return; }
L_0022D298:
    set32(c.r[7], ld32((c.r[21].w[0] + 324u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D2ACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 285u, depth + 1u); else { c.pc = 0x00222B80u; return; } if (c.pc != 0x0022D2ACu) [[unlikely]] return; }
L_0022D2AC:
    set32(c.r[5], ld32((c.r[21].w[0] + 252u)));
    c.budget -= 1;
L_0022D2B0:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 346u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 22u));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[21].w[0] + 346u));  goto L_0022D2D8; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D2D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 190u, depth + 1u); else { c.pc = 0x0022D380u; return; } if (c.pc != 0x0022D2D4u) [[unlikely]] return; }
L_0022D2D4:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 346u));
    c.budget -= 1;
L_0022D2D8:
    set32(c.r[4], c.r[21].w[0] + 152u);
    set32(c.r[2], ld32((c.r[21].w[0] + 252u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D2F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 275u, depth + 1u); else { c.pc = 0x00227210u; return; } if (c.pc != 0x0022D2F8u) [[unlikely]] return; }
L_0022D2F8:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D30Cu); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0048(c, 39u, depth + 1u); else { c.pc = 0x00220490u; return; } if (c.pc != 0x0022D30Cu) [[unlikely]] return; }
L_0022D30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D314u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x00227200u; return; } if (c.pc != 0x0022D314u) [[unlikely]] return; }
L_0022D314:
    set32(c.r[4], ld32((c.r[21].w[0] + 172u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[21].w[0] + 172u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[21].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] + 168u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 348u));
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_0022D350; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D34Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004A(c, 250u, depth + 1u); else { c.pc = 0x0022A980u; return; } if (c.pc != 0x0022D34Cu) [[unlikely]] return; }
L_0022D34C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_0022D350:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_0022D380:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 346u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 21u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D3CCu); set32(c.r[4], c.r[17].w[0] + 272u);  if (depth < kMaxDepth) unit_004B(c, 215u, depth + 1u); else { c.pc = 0x0022D910u; return; } if (c.pc != 0x0022D3CCu) [[unlikely]] return; }
L_0022D3CC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 346u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; st8((c.r[3].w[0] + 22u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0022D458; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 164u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D400u); set32(c.r[8], c.r[29].w[0] + 168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022D400u) [[unlikely]] return; }
L_0022D400:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_0022D420; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[3], c.r[3].w[0] + 7992u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_0022D424; } }
L_0022D420:
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 1;
L_0022D424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0022D440; } }
L_0022D42C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D43Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 26u, depth + 1u); else { c.pc = 0x0022C290u; return; } if (c.pc != 0x0022D43Cu) [[unlikely]] return; }
L_0022D43C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0022D440:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D42Cu | kUnwind; return; } goto L_0022D42C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0022D528; } }
L_0022D458:
    set32(c.r[19], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0022D514; } }
L_0022D468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0022D504; } }
L_0022D470:
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 34u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[29].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0022D4C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 7992u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0] + 30u));
    st16((c.r[29].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 164u));
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_0022D4E8; } }
L_0022D4C4:
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld16((c.r[29].w[0] + 164u));
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 9;
L_0022D4E8:
    set32(c.r[2], c.r[20].w[0] << 5);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D500u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 26u, depth + 1u); else { c.pc = 0x0022C290u; return; } if (c.pc != 0x0022D500u) [[unlikely]] return; }
L_0022D500:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0022D504:
    c.r[3].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D470u | kUnwind; return; } goto L_0022D470; }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0022D514:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D468u | kUnwind; return; } goto L_0022D468; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0022D528:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0022D550:
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[20].w[0] + 21u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D58Cu); c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 215u, depth + 1u); else { c.pc = 0x0022D910u; return; } if (c.pc != 0x0022D58Cu) [[unlikely]] return; }
L_0022D58C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 8u)));  goto L_0022D5B0; }
    set32(c.r[7], ld32((c.r[21].w[0] + 52u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D5A8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 285u, depth + 1u); else { c.pc = 0x00222B80u; return; } if (c.pc != 0x0022D5A8u) [[unlikely]] return; }
L_0022D5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0022D5E0; } }
L_0022D5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0022D5D0; } }
L_0022D5B8:
    set32(c.r[2], c.r[17].w[0] << 5);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D5CCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 285u, depth + 1u); else { c.pc = 0x00222B80u; return; } if (c.pc != 0x0022D5CCu) [[unlikely]] return; }
L_0022D5CC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0022D5D0:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], ld32((c.r[21].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022D5B8u | kUnwind; return; } goto L_0022D5B8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0022D5E0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022D600:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[4], c.r[17].w[0] + 21u);
    set32(c.r[5], ld32((c.r[6].w[0] + 56u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; c.r[9].d[0] = c.r[3].d[0] & 4095ull;  if (t) { goto L_0022D6AC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & 34ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 68ull;  goto L_0022D664; }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  goto L_0022D6B0; }
    c.r[2].d[0] = c.r[3].d[0] & 68ull;
    c.budget -= 1;
L_0022D664:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[3].d[0] & 17ull;  goto L_0022D67C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022D6AC; } }
    c.r[2].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 1;
L_0022D67C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 50u));  goto L_0022D698; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 50u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0022D6AC; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 50u));
    c.budget -= 1;
L_0022D698:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = c.r[9].d[0] & 32ull;  goto L_0022D6E4; }
L_0022D6AC:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 1;
L_0022D6B0:
    c.r[10].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld16((c.r[19].w[0] + 50u));
    set32(c.r[7], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] & 136ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 63ull;
    c.r[9].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D6DCu); c.r[8].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0048(c, 301u, depth + 1u); else { c.pc = 0x00223000u; return; } if (c.pc != 0x0022D6DCu) [[unlikely]] return; }
L_0022D6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], 0u + 16u);  if (t) { goto L_0022D6F4; } }
L_0022D6E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 50u));  goto L_0022D6F8; }
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022D6F4:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 50u));
    c.budget -= 1;
L_0022D6F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = ld16((c.r[19].w[0] + 12u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D714u); c.r[6].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0048(c, 207u, depth + 1u); else { c.pc = 0x00221D10u; return; } if (c.pc != 0x0022D714u) [[unlikely]] return; }
L_0022D714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022D730:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 880u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0022D8A0; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st16((c.r[18].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[2], ld32((c.r[19].w[0] + 2812u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  goto L_0022D7E4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 2804u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D7A4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0022D7A4u) [[unlikely]] return; }
L_0022D7A4:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D7BCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0022D7BCu) [[unlikely]] return; }
L_0022D7BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D7D8u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0022D7D8u) [[unlikely]] return; }
L_0022D7D8:
    st32((c.r[19].w[0] + 2804u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 2812u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
L_0022D7E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));  goto L_0022D864; }
    set32(c.r[2], ld32((c.r[19].w[0] + 2816u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));  goto L_0022D854; }
    set32(c.r[4], ld32((c.r[19].w[0] + 2808u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D814u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0022D814u) [[unlikely]] return; }
L_0022D814:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D82Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0022D82Cu) [[unlikely]] return; }
L_0022D82C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D848u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0022D848u) [[unlikely]] return; }
L_0022D848:
    st32((c.r[19].w[0] + 2808u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 2816u), c.r[16].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));
    c.budget -= 3;
L_0022D854:
    set32(c.r[9], ld32((c.r[19].w[0] + 2808u)));
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0022D870; } }
L_0022D864:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0022D870:
    set32(c.r[2], 0u + 12u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[7].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[8], ld32((c.r[19].w[0] + 2804u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022D898u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005F(c, 118u, depth + 1u); else { c.pc = 0x0027E310u; return; } if (c.pc != 0x0022D898u) [[unlikely]] return; }
L_0022D898:
    set32(c.r[3], ld32((c.r[19].w[0] + 880u)));
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_0022D8A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0022D8C0:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[3], ld32((c.r[6].w[0] + 36u)));  goto L_0022D8DC; }
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_0022D8F4; } }
L_0022D8DC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 2808u)));  goto L_0022D8E8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022D8E8:
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2804u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0022D8F4:
    set32(c.r[3], ld32((c.r[6].w[0] + 40u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 44u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 16u), 0u);  c.pc = t; return; }
L_0022D910:
    c.r[8].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], 0u + 1024u);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[8].d[0] & 34ull;
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[3].w[0] + 3u);
    c.r[3].d[0] = c.r[8].d[0] & 68ull;
    c.r[5].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[8].d[0] & 136ull;
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0022D990; } }
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[7].w[0] + 3u);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] - 75u);
    set32(c.r[5], c.r[5].w[0] >> 1);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] - 3u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_0022D978; } }
    breakpoint(c, 0x0022D974u);
    c.budget -= 1;
L_0022D978:
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_0022D9C8; } }
L_0022D990:
    set32(c.r[5], 0u + 3u);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);  if (t) { goto L_0022D9A8; } }
    breakpoint(c, 0x0022D9A4u);
    c.budget -= 1;
L_0022D9A8:
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; mmi::divu(c, 0, c.r[3].w[0], c.r[7].w[0]);  if (t) { goto L_0022D9C0; } }
    breakpoint(c, 0x0022D9BCu);
    c.budget -= 1;
L_0022D9C0:
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_0022D9C8:
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[5], 0u + 255u);
    set32(c.r[3], 0u - 4u);
    mmi::pminw(c.r[5], c.r[6], c.r[5]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_0022DA00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 352u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 476u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022DA28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 902u);  if (t) { goto L_0022DA2C; } }
L_0022DA28:
    set32(c.r[5], 0u + 852u);
    c.budget -= 1;
L_0022DA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA34u); set32(c.r[4], c.r[16].w[0] + 2288u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022DA34u) [[unlikely]] return; }
L_0022DA34:
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA40u); set32(c.r[4], c.r[16].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 23u, depth + 1u); else { c.pc = 0x00224B00u; return; } if (c.pc != 0x0022DA40u) [[unlikely]] return; }
L_0022DA40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022DA50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 2888u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0022DA90; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 420u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022DA80u) [[unlikely]] return; }
L_0022DA80:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 424u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DA90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022DA90u) [[unlikely]] return; }
L_0022DA90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 28540u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 28536u)));  goto L_0022DAE4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[13] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 10000u);
    set32(c.r[4], c.r[4].w[0] + 8112u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[17] = fp::cvt_s_w(c.f[0]);
    c.f[12] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[16] = c.r[3].w[0];
    c.f[14] = c.f[13];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DAD8u); c.f[15] = c.f[12];  if (depth < kMaxDepth) unit_0068(c, 419u, depth + 1u); else { c.pc = 0x002A3740u; return; } if (c.pc != 0x0022DAD8u) [[unlikely]] return; }
L_0022DAD8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 28540u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 28536u)));
    c.budget -= 3;
L_0022DAE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022DB18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 8144u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 8148u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 8152u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 8156u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 28536u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
L_0022DB18:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0022DB2C; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] + 8144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
L_0022DB2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[8], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 348u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DB90u); set32(c.r[9], c.r[9].w[0] + 8112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0022DB90u) [[unlikely]] return; }
L_0022DB90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022DBB0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2632u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0022DC50; } }
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 360u);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 376u);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[4], c.r[18].w[0] + 912u);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 364u), c.f[1]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 360u), c.f[0]);
    st32((c.r[29].w[0] + 368u), c.f[2]);
    c.f[2] = ld32((c.r[8].w[0] + 8u));
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[8].w[0]));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 380u), c.f[1]);
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DC48u); st32((c.r[29].w[0] + 384u), c.f[2]);  if (depth < kMaxDepth) unit_0049(c, 34u, depth + 1u); else { c.pc = 0x002250E0u; return; } if (c.pc != 0x0022DC48u) [[unlikely]] return; }
L_0022DC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_0022DC94; } }
L_0022DC50:
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 344u);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[4], c.r[18].w[0] + 912u);
    c.f[2] = c.f[2] ^ fp::kSign;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 348u), c.f[1]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DC90u); st32((c.r[29].w[0] + 352u), c.f[2]);  if (depth < kMaxDepth) unit_0049(c, 34u, depth + 1u); else { c.pc = 0x002250E0u; return; } if (c.pc != 0x0022DC90u) [[unlikely]] return; }
L_0022DC90:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_0022DC94:
    set32(c.r[3], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_0022DC98:
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DC98u | kUnwind; return; } goto L_0022DC98; } }
    c.f[0] = ld32((c.r[18].w[0] + 1680u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[18].w[0] + 432u);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1696u));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1712u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1728u));
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1684u));
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1700u));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1716u));
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1732u));
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1688u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1704u));
    st32((c.r[29].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1720u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1736u));
    st32((c.r[29].w[0] + 316u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1692u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1708u));
    st32((c.r[29].w[0] + 324u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1724u));
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 1740u));
    st32((c.r[29].w[0] + 332u), c.f[0]);
    c.f[12] = ld32((c.r[18].w[0] + 1664u));
    c.f[13] = ld32((c.r[18].w[0] + 1668u));
    st32((c.r[29].w[0] + 392u), c.f[12]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DD58u); st32((c.r[29].w[0] + 396u), c.f[13]);  if (depth < kMaxDepth) unit_004B(c, 233u, depth + 1u); else { c.pc = 0x0022E130u; return; } if (c.pc != 0x0022DD58u) [[unlikely]] return; }
L_0022DD58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[20] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022DD7Cu); set32(c.r[7], c.r[18].w[0] + 368u);  if (depth < kMaxDepth) unit_004B(c, 233u, depth + 1u); else { c.pc = 0x0022E130u; return; } if (c.pc != 0x0022DD7Cu) [[unlikely]] return; }
L_0022DD7C:
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 2;
L_0022DD84:
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022DD84u | kUnwind; return; } goto L_0022DD84; } }
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[8], c.r[29].w[0] + 272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 200u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 204u), c.f[1]);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 192u));
    c.f[0] = 0u;
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    st8((c.r[29].w[0] + 144u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st32((c.r[29].w[0] + 192u), 0u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 200u), c.f[20]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[12]);
    st32((c.r[29].w[0] + 204u), c.f[1]);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 192u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[4]);
    st8((c.r[29].w[0] + 112u), static_cast<std::uint8_t>(c.r[5].w[0]));
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[4]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[8]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[7]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[12]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.f[3] = ld32((c.r[29].w[0] + 160u));
    c.f[2] = ld32((c.r[29].w[0] + 164u));
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[29].w[0] + 224u), c.f[3]);
    st32((c.r[29].w[0] + 228u), c.f[2]);
    st32((c.r[29].w[0] + 232u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 236u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[3] = ld32((c.r[29].w[0] + 224u));
    c.f[2] = ld32((c.r[29].w[0] + 240u));
    st32((c.r[18].w[0] + 496u), c.f[1]);
    st32((c.r[18].w[0] + 500u), c.f[3]);
    st32((c.r[18].w[0] + 504u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    c.f[3] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[18].w[0] + 508u), c.f[1]);
    st32((c.r[18].w[0] + 512u), c.f[3]);
    st32((c.r[18].w[0] + 516u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 244u));
    c.f[3] = ld32((c.r[29].w[0] + 260u));
    c.f[2] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[18].w[0] + 520u), c.f[1]);
    st32((c.r[18].w[0] + 524u), c.f[3]);
    st32((c.r[18].w[0] + 528u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[3] = ld32((c.r[29].w[0] + 248u));
    c.f[2] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[18].w[0] + 532u), c.f[1]);
    st32((c.r[18].w[0] + 536u), c.f[3]);
    st32((c.r[18].w[0] + 540u), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 220u));
    c.f[3] = ld32((c.r[29].w[0] + 236u));
    c.f[2] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[18].w[0] + 544u), c.f[1]);
    st32((c.r[18].w[0] + 548u), c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 268u));
    st32((c.r[18].w[0] + 552u), c.f[2]);
    st32((c.r[18].w[0] + 556u), c.f[1]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 113u));
    c.budget -= 92;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[18].w[0] + 2264u));  goto L_0022DFF8; }
    c.f[10] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = ld32((c.r[18].w[0] + 2264u));
    c.f[8] = ld32((c.r[16].w[0] + 12u));
    c.f[9] = fp::sub(c.f[2], c.f[10]);
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[18].w[0] + 2268u));
    c.f[6] = fp::cvt_s_w(c.f[3]);
    c.f[7] = fp::sub(c.f[4], c.f[8]);
    c.f[5] = fp::cvt_s_w(c.f[2]);
    c.f[4] = ld32((c.r[18].w[0] + 120u));
    c.facc = fp::add(c.f[0], c.f[10]);
    c.f[3] = ld32((c.r[18].w[0] + 116u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[9]));
    c.facc = fp::add(c.f[0], c.f[10]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[3], c.f[9]));
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.f[2] = ld32((c.r[18].w[0] + 124u));
    c.facc = fp::add(c.f[0], c.f[8]);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.facc = fp::add(c.f[0], c.f[8]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    set32(c.r[3], c.f[4]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.r[4].d[0] = c.r[3].d[0] << 16;
    set32(c.r[3], c.f[3]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[7]));
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.budget -= 58;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_0022E0A0; } }
L_0022DFF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[18].w[0] + 2268u));
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.f[5] = fp::cvt_s_w(c.f[2]);
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    set32(c.r[3], c.f[3]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.r[4].d[0] = c.r[3].d[0] << 16;
    set32(c.r[3], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[19].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 42;
L_0022E0A0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 24u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 8u));  goto L_0022E0B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30736u), c.f[20]);  if (t) { goto L_0022E0D0; } }
L_0022E0B4:
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E0C0u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 372u, depth + 1u); else { c.pc = 0x003AEE10u; return; } if (c.pc != 0x0022E0C0u) [[unlikely]] return; }
L_0022E0C0:
    c.f[1] = ld32((c.r[28].w[0] - 32548u));
    fpu_rsqrt(c, 0u, c.f[1], c.f[0]);
    st32((c.r[28].w[0] - 30736u), c.f[0]);
    c.budget -= 4;
L_0022E0D0:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 2704u));
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[16].w[0]));  goto L_0022E0EC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E0E8u); st64((c.r[18].w[0] + 2704u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_004B(c, 236u, depth + 1u); else { c.pc = 0x0022E3C0u; return; } if (c.pc != 0x0022E0E8u) [[unlikely]] return; }
L_0022E0E8:
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 1;
L_0022E0EC:
    st32((c.r[18].w[0] + 2576u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 2580u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[18].w[0] + 2584u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0] + 2588u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0022E130:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[4] = c.r[3].w[0];
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 24u));
    c.f[3] = fp::add(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.f[1], c.f[5]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[1] = fp::mul(c.f[12], c.f[1]);
    c.f[8] = fp::sub(c.f[3], c.f[1]);
    c.f[7] = fp::add(c.f[3], c.f[1]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::mul(c.f[13], c.f[0]);
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull; c.f[5] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_0022E1E0; } }
    c.f[0] = c.f[8] ^ fp::kSign;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.f[6] ^ fp::kSign;
    st32((c.r[29].w[0] + 112u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 140u), c.f[7]);
    st32((c.r[29].w[0] + 148u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 172u), c.f[5]);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), 0u);  if (t) { goto L_0022E28C; } }
L_0022E1E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.f[3] = 0u;
    c.facc = fp::add(c.f[3], c.f[4]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[8], c.f[8]));
    c.f[0] = fp::sqrt(c.f[0]);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    fpu_div(c, 1u, c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[8], c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.facc = fp::add(c.f[3], c.f[4]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[0] = fp::sqrt(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    c.f[2] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[7], c.f[1]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.facc = fp::add(c.f[3], c.f[4]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[0] = fp::sqrt(c.f[0]);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 156u), 0u);
    fpu_div(c, 1u, c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[6], c.f[1]);
    c.facc = fp::add(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.f[0] = fp::sqrt(c.f[0]);
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    fpu_div(c, 1u, c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[5], c.f[1]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 43;
L_0022E28C:
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 2;
L_0022E294:
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E294u | kUnwind; return; } goto L_0022E294; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[29].w[0]);  if (t) { goto L_0022E328; } }
L_0022E2C0:
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[4].w[0] + 112u);
    ld128((c.r[3].w[0]) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc(c.vu0, 15u, 12u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[12]);
    set32(c.r[3], c.r[4].w[0] + 48u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[4]);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 26;
L_0022E328:
    c.r[3].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[9].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022E2C0u | kUnwind; return; } goto L_0022E2C0; }
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[7].w[0] + 4u), c.f[2]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[7].w[0] + 16u), c.f[2]);
    st32((c.r[7].w[0] + 20u), c.f[1]);
    st32((c.r[7].w[0] + 24u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[7].w[0] + 28u), c.f[2]);
    st32((c.r[7].w[0] + 32u), c.f[1]);
    st32((c.r[7].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[7].w[0] + 40u), c.f[2]);
    st32((c.r[7].w[0] + 44u), c.f[1]);
    st32((c.r[7].w[0] + 48u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 76u));
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[7].w[0] + 52u), c.f[2]);
    st32((c.r[7].w[0] + 56u), c.f[1]);
    st32((c.r[7].w[0] + 60u), c.f[0]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0022E3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022E49C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 160u)));  goto L_0022E438; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E3FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0022E3FCu) [[unlikely]] return; }
L_0022E3FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 160u)));  goto L_0022E430; }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E41Cu); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x0022E41Cu) [[unlikely]] return; }
L_0022E41C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E428u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x0022E428u) [[unlikely]] return; }
L_0022E428:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 2;
L_0022E430:
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 2;
L_0022E438:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_0022E45C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_0022E45C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    st128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 16;
L_0022E49C:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[4], c.r[16].w[0] + 152u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E4C0u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x0022E4C0u) [[unlikely]] return; }
L_0022E4C0:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 2704u));
    set32(c.r[2], 0u + 64u);
    mmi::pcpyld(c.r[6], c.r[2], c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[4], c.r[16].w[0] + 152u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E4F4u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x0022E4F4u) [[unlikely]] return; }
L_0022E4F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_0022E510; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_0022E510:
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022E550:
    c.f[3] = ld32((c.r[4].w[0] + 920u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[2] = ld32((c.r[4].w[0] + 924u));
    c.f[1] = ld32((c.r[4].w[0] + 928u));
    c.f[3] = fp::mul(c.f[12], c.f[3]);
    c.f[2] = fp::mul(c.f[12], c.f[2]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[1] = fp::mul(c.f[12], c.f[1]);
    set32(c.r[3], c.f[3]);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[3], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.f[0] = c.r[2].w[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    set32(c.r[3], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 932u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  c.pc = t; return; }
L_0022E5F0:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 568u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[28].w[0] - 32544u));
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[5].w[0]), c.f[1]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 568u));
    c.r[3].d[0] = c.r[3].d[0] >> 8;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 568u));
    c.r[3].d[0] = c.r[3].d[0] >> 16;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 568u));
    c.r[3].d[0] = c.r[3].d[0] >> 24;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_0022E6A0:
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[4] = c.r[3].w[0];
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], c.f[3]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.r[6].d[0] = c.r[3].d[0] << 8;
    set32(c.r[3], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    set32(c.r[3], c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 24;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 568u), c.r[3].d[0]);  c.pc = t; return; }
L_0022E740:
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].d[0] = 0ull | 32768ull;
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[5], c.f[2]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.r[6].d[0] = c.r[5].d[0] << 8;
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 568u), c.r[3].d[0]);  c.pc = t; return; }
L_0022E7C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0022E7D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E7E0:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022E800:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 15;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0] + 92u), 0u);  if (t) { goto L_0022E854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[18], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), c.f[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 6;
L_0022E854:
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 172u)));  goto L_0022E924; }
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 160u)));  goto L_0022E8BC; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E880u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0022E880u) [[unlikely]] return; }
L_0022E880:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 160u)));  goto L_0022E8B4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E8A0u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x0022E8A0u) [[unlikely]] return; }
L_0022E8A0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E8ACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x0022E8ACu) [[unlikely]] return; }
L_0022E8AC:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 2;
L_0022E8B4:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    c.budget -= 2;
L_0022E8BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_0022E8E0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_0022E8E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[2]);
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    st128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[19].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[19].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[19].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 17;
L_0022E924:
    set32(c.r[4], c.r[19].w[0] + 152u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022E944u); st32((c.r[19].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x0022E944u) [[unlikely]] return; }
L_0022E944:
    c.f[2] = ld32((c.r[19].w[0] + 2264u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[19].w[0] + 2268u));
    c.f[1] = c.r[2].w[0];
    c.f[5] = fp::cvt_s_w(c.f[2]);
    c.r[2].d[0] = ld64((c.r[19].w[0] + 2704u));
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[3] = ld32((c.r[18].w[0] + 4u));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    set32(c.r[3], c.f[3]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.r[4].d[0] = c.r[3].d[0] << 16;
    set32(c.r[3], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 46;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] & 4ull;  goto L_0022EA24; }
    set32(c.r[2], 0u + 64u);
    mmi::pcpyld(c.r[4], c.r[2], c.r[16]);
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].d[0] & 4ull;
    c.budget -= 10;
L_0022EA24:
    c.r[4].d[0] = ld32((c.r[19].w[0] + 892u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = ld32((c.r[19].w[0] + 888u));
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] << 24;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[2], 0u + 78u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    mmi::pcpyld(c.r[5], c.r[2], c.r[3]);
    set32(c.r[4], ld32((c.r[19].w[0] + 172u)));
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[19].w[0] + 172u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 852u), 0u);  if (t) { goto L_0022EA80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (t) { goto L_0022EA88; } }
L_0022EA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = c.r[2].d[0] | 8193ull;
    c.budget -= 2;
L_0022EA88:
    st32((c.r[19].w[0] + 856u), 0u);
    set32(c.r[2], 0u + 71u);
    mmi::pcpyld(c.r[6], c.r[2], c.r[3]);
    set32(c.r[4], ld32((c.r[19].w[0] + 172u)));
    set32(c.r[2], 0u + 6u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[19].w[0] + 172u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 168u), c.r[3].w[0]);
    mmi::pcpyld(c.r[5], c.r[5], c.r[2]);
    set32(c.r[4], ld32((c.r[19].w[0] + 172u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[19].w[0] + 172u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 168u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[19].w[0] + 568u));
    mmi::pcpyld(c.r[4], c.r[2], c.r[3]);
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 592u));
    c.budget -= 33;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[18].w[0] + 12u));  goto L_0022EB88; }
    set32(c.r[4], c.r[19].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EB18u); c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x0022EB18u) [[unlikely]] return; }
L_0022EB18:
    set32(c.r[6], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    set32(c.r[4], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_0022EB34; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_0022EB34:
    set32(c.r[7], ld32((c.r[19].w[0] + 2772u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[4].d[0] = c.r[7].d[0] << 32;  goto L_0022EB5C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[7].d[0] << 32;
    c.budget -= 3;
L_0022EB5C:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0]) & ~15u, c.r[3]);  if (t) { goto L_0022ED9C; } }
L_0022EB88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 2268u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0022EBA8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022EBC4; } }
L_0022EBA8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022EBC4:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 2740u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 2264u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; c.r[5].d[0] = c.r[3].d[0] << 16;  if (t) { goto L_0022EC00; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022EC1C; } }
L_0022EC00:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0022EC1C:
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 2736u)));
    set32(c.r[2], 0u + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[4], c.r[2], c.r[3]);
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 168u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[2], ld32((c.r[19].w[0] + 2268u)));
    c.budget -= 26;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0022EC90; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022ECAC; } }
L_0022EC90:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_0022ECAC:
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 2740u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 2264u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; c.r[5].d[0] = c.r[3].d[0] << 16;  if (t) { goto L_0022ECE8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0022ED04; } }
L_0022ECE8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0022ED04:
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[3], ld32((c.r[19].w[0] + 2736u)));
    set32(c.r[2], 0u + 4u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    mmi::pcpyld(c.r[6], c.r[2], c.r[3]);
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    set32(c.r[4], c.r[19].w[0] + 152u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[19].w[0] + 172u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[2], ld32((c.r[19].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ED60u); st32((c.r[19].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x0022ED60u) [[unlikely]] return; }
L_0022ED60:
    set32(c.r[5], ld32((c.r[19].w[0] + 176u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));  if (t) { goto L_0022ED7C; } }
    set32(c.r[3], c.r[4].w[0] + 15u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 2;
L_0022ED7C:
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.budget -= 8;
L_0022ED9C:
    c.r[3].d[0] = ld64((c.r[19].w[0] + 2704u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0022EDB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EDB0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 236u, depth + 1u); else { c.pc = 0x0022E3C0u; return; } if (c.pc != 0x0022EDB0u) [[unlikely]] return; }
L_0022EDB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0022EDB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0022EDD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 2628u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] - 1u);  if (t) { goto L_0022EE54; } }
L_0022EDFC:
    set32(c.r[16], c.r[17].w[0] << 3);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);  if (t) { goto L_0022EE18; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 876u)));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0022EE54; }
L_0022EE18:
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EE24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x0022EE24u) [[unlikely]] return; }
L_0022EE24:
    set32(c.r[3], ld32((c.r[19].w[0] + 2628u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 2620u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 2628u), c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 12;
L_0022EE54:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[3], ld32((c.r[19].w[0] + 2620u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EDFCu | kUnwind; return; } goto L_0022EDFC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 2616u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] - 1u);  if (t) { goto L_0022EEC8; } }
L_0022EE68:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0022EE88; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 876u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0022EEC8; }
L_0022EE88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 12704u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EEA0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x0022EEA0u) [[unlikely]] return; }
L_0022EEA0:
    set32(c.r[3], ld32((c.r[19].w[0] + 2616u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 2616u), c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[19].w[0] + 2608u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 10;
L_0022EEC8:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[3], ld32((c.r[19].w[0] + 2608u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0022EE68u | kUnwind; return; } goto L_0022EE68; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022EEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], ld32((c.r[2].w[0] - 24528u)));
    set32(c.r[3], 0u + 389u);
    st32((c.r[2].w[0] - 8176u), c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] + 48u);
    st32((c.r[2].w[0] - 24528u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 24576u), c.r[3].w[0]);
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0] + 15376u), c.r[3].w[0]);
    set_interrupts(c, true);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0022EF30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2792u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0022EF7C; } }
    set32(c.r[3], mfc0(c, 9u, 0u));
    set32(c.r[2], ld32((c.r[4].w[0] + 2780u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[4].w[0] + 2788u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2633u));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[4].w[0] + 2800u)));  goto L_0022EF74; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 2792u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 2800u)));
    c.budget -= 3;
L_0022EF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022EF7Cu);  if (depth < kMaxDepth) unit_00A6(c, 156u, depth + 1u); else { c.pc = 0x00398E50u; return; } if (c.pc != 0x0022EF7Cu) [[unlikely]] return; }
L_0022EF7C:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022EFA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 27612u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 2792u)));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[5].w[0] + 2796u)));  goto L_0022F00C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 24576u)));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022F008; } }
    set32(c.r[2], cfc2(c, 29u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022F008; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 2732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 2640u));
    st64((c.r[2].w[0] + 112u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 2648u));
    st64((c.r[2].w[0] + 144u), c.r[3].d[0]);
    st32((c.r[5].w[0] + 2792u), 0u);
    c.budget -= 10;
L_0022F008:
    set32(c.r[4], ld32((c.r[5].w[0] + 2796u)));
    c.budget -= 1;
L_0022F00C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0022F020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F020u);  if (depth < kMaxDepth) unit_00A6(c, 283u, depth + 1u); else { c.pc = 0x00399CE8u; return; } if (c.pc != 0x0022F020u) [[unlikely]] return; }
L_0022F020:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022F040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F058u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x0022F058u) [[unlikely]] return; }
L_0022F058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F060u);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220790u; return; } if (c.pc != 0x0022F060u) [[unlikely]] return; }
L_0022F060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F068u);  if (depth < kMaxDepth) unit_0048(c, 61u, depth + 1u); else { c.pc = 0x00220760u; return; } if (c.pc != 0x0022F068u) [[unlikely]] return; }
L_0022F068:
    set32(c.r[2], cfc2(c, 29u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F068u | kUnwind; return; } goto L_0022F068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F08Cu); set32(c.r[4], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_004D(c, 169u, depth + 1u); else { c.pc = 0x00236E70u; return; } if (c.pc != 0x0022F08Cu) [[unlikely]] return; }
L_0022F08C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 204u)));
    st32((c.r[16].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F0C4u); st32((c.r[16].w[0] + 2792u), 0u);  if (depth < kMaxDepth) unit_0048(c, 269u, depth + 1u); else { c.pc = 0x00222990u; return; } if (c.pc != 0x0022F0C4u) [[unlikely]] return; }
L_0022F0C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F0D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_004B(c, 258u, depth + 1u); else { c.pc = 0x0022EDD0u; return; } if (c.pc != 0x0022F0D0u) [[unlikely]] return; }
L_0022F0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F0D8u); set32(c.r[4], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_0048(c, 108u, depth + 1u); else { c.pc = 0x00220B20u; return; } if (c.pc != 0x0022F0D8u) [[unlikely]] return; }
L_0022F0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F0E0u); set32(c.r[4], c.r[16].w[0] + 204u);  if (depth < kMaxDepth) unit_0048(c, 108u, depth + 1u); else { c.pc = 0x00220B20u; return; } if (c.pc != 0x0022F0E0u) [[unlikely]] return; }
L_0022F0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022F0F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 592u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022F110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022F2B8; } }
L_0022F110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F128u); st128((c.r[2].w[0]) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x0022F128u) [[unlikely]] return; }
L_0022F128:
    set32(c.r[3], mfc0(c, 9u, 0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 2780u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 2784u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F140u); set32(c.r[4], ld32((c.r[16].w[0] + 2800u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x0022F140u) [[unlikely]] return; }
L_0022F140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F148u);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220790u; return; } if (c.pc != 0x0022F148u) [[unlikely]] return; }
L_0022F148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F150u);  if (depth < kMaxDepth) unit_0048(c, 61u, depth + 1u); else { c.pc = 0x00220760u; return; } if (c.pc != 0x0022F150u) [[unlikely]] return; }
L_0022F150:
    set32(c.r[2], cfc2(c, 29u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022F150u | kUnwind; return; } goto L_0022F150; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2633u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 2732u)));  goto L_0022F194; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F180u);  if (depth < kMaxDepth) unit_00A6(c, 134u, depth + 1u); else { c.pc = 0x00398D10u; return; } if (c.pc != 0x0022F180u) [[unlikely]] return; }
L_0022F180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F188u); st32((c.r[16].w[0] + 2796u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 138u, depth + 1u); else { c.pc = 0x00398D40u; return; } if (c.pc != 0x0022F188u) [[unlikely]] return; }
L_0022F188:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2796u), c.r[2].w[0]);  if (t) { goto L_0022F1B4; } }
L_0022F194:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 2640u));
    st64((c.r[2].w[0] + 112u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 2648u));
    st64((c.r[2].w[0] + 144u), c.r[3].d[0]);
    c.budget -= 8;
L_0022F1B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 2776u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0022F1CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2732u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st32((c.r[16].w[0] + 2732u), c.r[2].w[0]);
    c.budget -= 3;
L_0022F1CC:
    set32(c.r[3], mfc0(c, 9u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[16].w[0] + 2780u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 152u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 232u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] - 48u);
    st32((c.r[2].w[0] - 24528u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F204u); st32((c.r[16].w[0] + 2792u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_004D(c, 170u, depth + 1u); else { c.pc = 0x00236EB0u; return; } if (c.pc != 0x0022F204u) [[unlikely]] return; }
L_0022F204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F20Cu); set32(c.r[4], ld32((c.r[16].w[0] + 576u)));  if (depth < kMaxDepth) unit_004D(c, 218u, depth + 1u); else { c.pc = 0x00237FD0u; return; } if (c.pc != 0x0022F20Cu) [[unlikely]] return; }
L_0022F20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F214u);  if (depth < kMaxDepth) unit_0048(c, 269u, depth + 1u); else { c.pc = 0x00222990u; return; } if (c.pc != 0x0022F214u) [[unlikely]] return; }
L_0022F214:
    set32(c.r[3], ld32((c.r[16].w[0] + 880u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 880u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F230u); st32((c.r[16].w[0] + 876u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_004B(c, 258u, depth + 1u); else { c.pc = 0x0022EDD0u; return; } if (c.pc != 0x0022F230u) [[unlikely]] return; }
L_0022F230:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 232u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 204u)));
    st32((c.r[16].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2280u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F280u); st32((c.r[16].w[0] + 2280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004B(c, 290u, depth + 1u); else { c.pc = 0x0022F2D0u; return; } if (c.pc != 0x0022F280u) [[unlikely]] return; }
L_0022F280:
    set32(c.r[3], ld32((c.r[16].w[0] + 840u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 836u)));  goto L_0022F2A0; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 104u));
    c.r[2].d[0] = c.r[2].d[0] & 254ull;
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 840u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 836u)));
    c.budget -= 5;
L_0022F2A0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0022F2B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F2B0u);  if (depth < kMaxDepth) unit_004C(c, 226u, depth + 1u); else { c.pc = 0x00233060u; return; } if (c.pc != 0x0022F2B0u) [[unlikely]] return; }
L_0022F2B0:
    st32((c.r[16].w[0] + 836u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0022F2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022F2D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], mfc0(c, 9u, 0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 28544u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0022F300; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_0022F308; } }
L_0022F300:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_0022F308:
    set32(c.r[2], ld32((c.r[16].w[0] + 2840u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 28544u), c.r[4].w[0]);  if (t) { goto L_0022F330; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] + 4096u));
    c.r[2].d[0] = c.r[2].d[0] >> 13;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0022F334; } }
L_0022F330:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0022F334:
    st8((c.r[16].w[0] + 2768u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 2776u)));
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 168u)));  goto L_0022F38C; }
    set32(c.r[4], c.r[16].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F350u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0049(c, 275u, depth + 1u); else { c.pc = 0x00227210u; return; } if (c.pc != 0x0022F350u) [[unlikely]] return; }
L_0022F350:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F364u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_0048(c, 39u, depth + 1u); else { c.pc = 0x00220490u; return; } if (c.pc != 0x0022F364u) [[unlikely]] return; }
L_0022F364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F36Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 274u, depth + 1u); else { c.pc = 0x00227200u; return; } if (c.pc != 0x0022F36Cu) [[unlikely]] return; }
L_0022F36C:
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 8;
L_0022F38C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 172u)));  goto L_0022F458; }
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 160u)));  goto L_0022F3F0; }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0022F3B4u) [[unlikely]] return; }
L_0022F3B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 160u)));  goto L_0022F3E8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3D4u); set32(c.r[4], c.r[2].w[0] << 7);  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x0022F3D4u) [[unlikely]] return; }
L_0022F3D4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F3E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x0022F3E0u) [[unlikely]] return; }
L_0022F3E0:
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 2;
L_0022F3E8:
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    c.budget -= 2;
L_0022F3F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 32;  goto L_0022F414; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.budget -= 3;
L_0022F414:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    mmi::pcpyld(c.r[4], c.r[0], c.r[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    st128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 17;
L_0022F458:
    set32(c.r[4], c.r[16].w[0] + 152u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F478u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x0022F478u) [[unlikely]] return; }
L_0022F478:
    set32(c.r[3], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[2], 0u + 76u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[16].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 2732u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 2672u));
    mmi::pcpyld(c.r[5], c.r[2], c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[2], 0u + 24u);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2768u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld64((c.r[3].w[0] + 2688u));
    mmi::pcpyld(c.r[5], c.r[2], c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[2], 0u + 68u);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 560u));
    mmi::pcpyld(c.r[6], c.r[2], c.r[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[2], 0u + 69u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    mmi::pcpyld(c.r[5], c.r[2], c.r[5]);
    set32(c.r[4], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[2], 0u + 64u);
    set32(c.r[3], c.r[4].w[0] + 16u);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 2704u));
    mmi::pcpyld(c.r[6], c.r[2], c.r[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[4], c.r[16].w[0] + 152u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x11000000u);
    set32(c.r[2], c.r[3].w[0] + 16u);
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.r[6]);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 62;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F570u); st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x0022F570u) [[unlikely]] return; }
L_0022F570:
    set32(c.r[5], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));  if (t) { goto L_0022F58C; } }
    set32(c.r[2], c.r[3].w[0] + 15u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0022F58C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] - 31872u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].d[0] = c.r[6].d[0] << 32;  goto L_0022F5B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
L_0022F5B8:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F5E8u); set32(c.r[4], c.r[16].w[0] + 2592u);  if (depth < kMaxDepth) unit_0048(c, 52u, depth + 1u); else { c.pc = 0x00220620u; return; } if (c.pc != 0x0022F5E8u) [[unlikely]] return; }
L_0022F5E8:
    st32((c.r[16].w[0] + 848u), 0u);
    st32((c.r[16].w[0] + 852u), 0u);
    st32((c.r[16].w[0] + 856u), 0u);
    st8((c.r[16].w[0] + 345u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 860u), 0u);
    st32((c.r[16].w[0] + 864u), 0u);
    st32((c.r[16].w[0] + 868u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0022F620:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  goto L_0022F63C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 25024u);  if (t) { goto L_0022F6B0; } }
L_0022F63C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0022F668; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0022F65C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 8288u);  if (t) { goto L_0022F660; } }
L_0022F65C:
    set32(c.r[2], c.r[2].w[0] + 8208u);
    c.budget -= 1;
L_0022F660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F6B0; } }
L_0022F668:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], 0u + 6u);  goto L_0022F690; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0022F684; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 24944u);  if (t) { goto L_0022F688; } }
L_0022F684:
    set32(c.r[2], c.r[2].w[0] + 24864u);
    c.budget -= 1;
L_0022F688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022F6B0; } }
L_0022F690:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0022F6B0; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0022F6AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 25024u);  if (t) { goto L_0022F6B0; } }
L_0022F6AC:
    set32(c.r[2], c.r[2].w[0] + 25104u);
    c.budget -= 1;
L_0022F6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0022F6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 621u);  c.pc = t; return; }
L_0022F6D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0022F6E0:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 212u)));
    st32((c.r[29].w[0] + 316u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 216u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 832u), 0u);
    set32(c.r[19], ld32((c.r[5].w[0] + 220u)));
    set32(c.r[18], ld32((c.r[5].w[0] + 224u)));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    c.budget -= 26;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_0022F774; } }
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[19].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[19].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_0022F7E8; } }
L_0022F774:
    set32(c.r[20], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[4], 0u + 32u);  goto L_0022F7C0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F78Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 206u, depth + 1u); else { c.pc = 0x0022D730u; return; } if (c.pc != 0x0022F78Cu) [[unlikely]] return; }
L_0022F78C:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 52u));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] & 4095ull;
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    st8((c.r[19].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_0022F7E8; } }
L_0022F7C0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[21].w[0] + 2260u), c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    st8((c.r[20].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[21].w[0] + 252u), c.r[2].w[0]);
    c.budget -= 10;
L_0022F7E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 252u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 880u)));  goto L_0022F810; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F808u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004A(c, 166u, depth + 1u); else { c.pc = 0x00229B80u; return; } if (c.pc != 0x0022F808u) [[unlikely]] return; }
L_0022F808:
    st32((c.r[21].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 880u)));
    c.budget -= 2;
L_0022F810:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 252u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 316u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F828u); st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_004C(c, 23u, depth + 1u); else { c.pc = 0x002302A0u; return; } if (c.pc != 0x0022F828u) [[unlikely]] return; }
L_0022F828:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[29].w[0] + 272u), 0u);
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), 0u);  if (t) { [[clang::musttail]] return unit_004C(c, 18u, depth); } }
L_0022F840:
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 224u)));  [[clang::musttail]] return unit_004C(c, 17u, depth); }
    st32((c.r[21].w[0] + 248u), c.r[5].w[0]);
    set32(c.r[4], c.r[21].w[0] + 912u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F880u); st8((c.r[21].w[0] + 346u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0049(c, 20u, depth + 1u); else { c.pc = 0x002249E0u; return; } if (c.pc != 0x0022F880u) [[unlikely]] return; }
L_0022F880:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 240u));
    c.r[3].d[0] = ld8((c.r[21].w[0] + 346u));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_0022F8A4; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 256u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[21].w[0] + 346u));  goto L_0022FD30; }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0022F8A4:
    st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 240u));
    set32(c.r[3], ld32((c.r[21].w[0] + 252u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[21].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[21].w[0] + 268u), c.f[0]);
    st8((c.r[21].w[0] + 872u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 873u), static_cast<std::uint8_t>(0u));
    st8((c.r[21].w[0] + 874u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F8E0u); set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (depth < kMaxDepth) unit_0049(c, 348u, depth + 1u); else { c.pc = 0x00227CC0u; return; } if (c.pc != 0x0022F8E0u) [[unlikely]] return; }
L_0022F8E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F8ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 347u, depth + 1u); else { c.pc = 0x00227CA0u; return; } if (c.pc != 0x0022F8ECu) [[unlikely]] return; }
L_0022F8EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F8F8u); st32((c.r[21].w[0] + 332u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0049(c, 346u, depth + 1u); else { c.pc = 0x00227C80u; return; } if (c.pc != 0x0022F8F8u) [[unlikely]] return; }
L_0022F8F8:
    st32((c.r[21].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F904u); set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (depth < kMaxDepth) unit_0049(c, 345u, depth + 1u); else { c.pc = 0x00227C70u; return; } if (c.pc != 0x0022F904u) [[unlikely]] return; }
L_0022F904:
    set32(c.r[3], ld32((c.r[21].w[0] + 332u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022F93C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F920u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 344u, depth + 1u); else { c.pc = 0x00227C60u; return; } if (c.pc != 0x0022F920u) [[unlikely]] return; }
L_0022F920:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[21].w[0] + 912u);
    c.f[12] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F934u); set32(c.r[5], c.r[5].w[0] + 18088u);  if (depth < kMaxDepth) unit_0049(c, 343u, depth + 1u); else { c.pc = 0x00227C40u; return; } if (c.pc != 0x0022F934u) [[unlikely]] return; }
L_0022F934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (t) { goto L_0022F964; } }
L_0022F93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F944u);  if (depth < kMaxDepth) unit_0049(c, 342u, depth + 1u); else { c.pc = 0x00227C30u; return; } if (c.pc != 0x0022F944u) [[unlikely]] return; }
L_0022F944:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F950u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 344u, depth + 1u); else { c.pc = 0x00227C60u; return; } if (c.pc != 0x0022F950u) [[unlikely]] return; }
L_0022F950:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F960u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0049(c, 343u, depth + 1u); else { c.pc = 0x00227C40u; return; } if (c.pc != 0x0022F960u) [[unlikely]] return; }
L_0022F960:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_0022F964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F96Cu);  if (depth < kMaxDepth) unit_0049(c, 341u, depth + 1u); else { c.pc = 0x00227C20u; return; } if (c.pc != 0x0022F96Cu) [[unlikely]] return; }
L_0022F96C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F978u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 340u, depth + 1u); else { c.pc = 0x00227C00u; return; } if (c.pc != 0x0022F978u) [[unlikely]] return; }
L_0022F978:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[23].d[0] ? 1ull : 0ull;
    st8((c.r[21].w[0] + 344u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 344u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], 0u + 5u);  goto L_0022FA68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F998u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 339u, depth + 1u); else { c.pc = 0x00227BE0u; return; } if (c.pc != 0x0022F998u) [[unlikely]] return; }
L_0022F998:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022F9AC; }
    st32((c.r[21].w[0] + 336u), 0u);
    st32((c.r[21].w[0] + 332u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_0022F9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F9B4u);  if (depth < kMaxDepth) unit_0049(c, 338u, depth + 1u); else { c.pc = 0x00227BD0u; return; } if (c.pc != 0x0022F9B4u) [[unlikely]] return; }
L_0022F9B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F9C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 337u, depth + 1u); else { c.pc = 0x00227BC0u; return; } if (c.pc != 0x0022F9C0u) [[unlikely]] return; }
L_0022F9C0:
    c.r[30].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 860u)));
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022F9F0; }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_0022F9EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F9E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 336u, depth + 1u); else { c.pc = 0x00227BB0u; return; } if (c.pc != 0x0022F9E0u) [[unlikely]] return; }
L_0022F9E0:
    set32(c.r[3], ld32((c.r[21].w[0] + 864u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  goto L_0022FA84; }
L_0022F9EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022F9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022F9F8u);  if (depth < kMaxDepth) unit_0049(c, 335u, depth + 1u); else { c.pc = 0x00227BA0u; return; } if (c.pc != 0x0022F9F8u) [[unlikely]] return; }
L_0022F9F8:
    st32((c.r[21].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 339u, depth + 1u); else { c.pc = 0x00227BE0u; return; } if (c.pc != 0x0022FA04u) [[unlikely]] return; }
L_0022FA04:
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 334u, depth + 1u); else { c.pc = 0x00227B80u; return; } if (c.pc != 0x0022FA10u) [[unlikely]] return; }
L_0022FA10:
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 333u, depth + 1u); else { c.pc = 0x00227B60u; return; } if (c.pc != 0x0022FA1Cu) [[unlikely]] return; }
L_0022FA1C:
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 332u, depth + 1u); else { c.pc = 0x00227B50u; return; } if (c.pc != 0x0022FA28u) [[unlikely]] return; }
L_0022FA28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA38u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_0049(c, 331u, depth + 1u); else { c.pc = 0x00227B40u; return; } if (c.pc != 0x0022FA38u) [[unlikely]] return; }
L_0022FA38:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[6]);
    c.r[10].d[0] = c.r[2].d[0] << 48;
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[7]);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[8]);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[11].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA60u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 360u, depth + 1u); else { c.pc = 0x00227E20u; return; } if (c.pc != 0x0022FA60u) [[unlikely]] return; }
L_0022FA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 860u), c.r[17].w[0]);  if (t) { goto L_0022FA80; } }
L_0022FA68:
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0] + 340u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 260u), 0u);
    st32((c.r[21].w[0] + 860u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 864u), 0u);
    st8((c.r[21].w[0] + 872u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0022FA80:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_0022FA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FA8Cu);  if (depth < kMaxDepth) unit_0049(c, 330u, depth + 1u); else { c.pc = 0x00227B30u; return; } if (c.pc != 0x0022FA8Cu) [[unlikely]] return; }
L_0022FA8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 848u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  goto L_0022FB50; }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[21].w[0] + 873u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAB0u); st32((c.r[21].w[0] + 848u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0049(c, 329u, depth + 1u); else { c.pc = 0x00227B20u; return; } if (c.pc != 0x0022FAB0u) [[unlikely]] return; }
L_0022FAB0:
    st8((c.r[21].w[0] + 345u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 345u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022FB4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 328u, depth + 1u); else { c.pc = 0x00227B10u; return; } if (c.pc != 0x0022FAC8u) [[unlikely]] return; }
L_0022FAC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FAD4u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0049(c, 327u, depth + 1u); else { c.pc = 0x00227AF0u; return; } if (c.pc != 0x0022FAD4u) [[unlikely]] return; }
L_0022FAD4:
    c.f[2] = ld32((c.r[29].w[0] + 432u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[3] = c.r[2].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 436u));
    set32(c.r[6], 0u + 61u);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    set32(c.r[2], c.f[2]);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB4Cu); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0049(c, 326u, depth + 1u); else { c.pc = 0x00227AD0u; return; } if (c.pc != 0x0022FB4Cu) [[unlikely]] return; }
L_0022FB4C:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 1;
L_0022FB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB58u);  if (depth < kMaxDepth) unit_0049(c, 325u, depth + 1u); else { c.pc = 0x00227AC0u; return; } if (c.pc != 0x0022FB58u) [[unlikely]] return; }
L_0022FB58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 852u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  goto L_0022FB7C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 190u, depth + 1u); else { c.pc = 0x0022A150u; return; } if (c.pc != 0x0022FB74u) [[unlikely]] return; }
L_0022FB74:
    st32((c.r[21].w[0] + 856u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 2;
L_0022FB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB84u);  if (depth < kMaxDepth) unit_0049(c, 324u, depth + 1u); else { c.pc = 0x00227AB0u; return; } if (c.pc != 0x0022FB84u) [[unlikely]] return; }
L_0022FB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FB8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 323u, depth + 1u); else { c.pc = 0x00227AA0u; return; } if (c.pc != 0x0022FB8Cu) [[unlikely]] return; }
L_0022FB8C:
    st8((c.r[21].w[0] + 885u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 885u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  goto L_0022FBB4; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FBA8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 188u, depth + 1u); else { c.pc = 0x0022A010u; return; } if (c.pc != 0x0022FBA8u) [[unlikely]] return; }
L_0022FBA8:
    st8((c.r[21].w[0] + 348u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 347u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022FC60; } }
L_0022FBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FBBCu);  if (depth < kMaxDepth) unit_0049(c, 322u, depth + 1u); else { c.pc = 0x00227A90u; return; } if (c.pc != 0x0022FBBCu) [[unlikely]] return; }
L_0022FBBC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 856u)));
    c.budget -= 4;
    if (c.r[23].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 16u)));  goto L_0022FC24; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FBDCu); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 189u, depth + 1u); else { c.pc = 0x0022A070u; return; } if (c.pc != 0x0022FBDCu) [[unlikely]] return; }
L_0022FBDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FBE4u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 321u, depth + 1u); else { c.pc = 0x00227A80u; return; } if (c.pc != 0x0022FBE4u) [[unlikely]] return; }
L_0022FBE4:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 884u));
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[21].w[0] + 874u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[21].w[0] + 884u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 884u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022FC20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC10u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 319u, depth + 1u); else { c.pc = 0x00227A40u; return; } if (c.pc != 0x0022FC10u) [[unlikely]] return; }
L_0022FC10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC20u); set32(c.r[6], 0u + 66u);  if (depth < kMaxDepth) unit_0049(c, 326u, depth + 1u); else { c.pc = 0x00227AD0u; return; } if (c.pc != 0x0022FC20u) [[unlikely]] return; }
L_0022FC20:
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 1;
L_0022FC24:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0022FC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC34u);  if (depth < kMaxDepth) unit_0049(c, 318u, depth + 1u); else { c.pc = 0x00227A30u; return; } if (c.pc != 0x0022FC34u) [[unlikely]] return; }
L_0022FC34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0022FC44; }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0022FC40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0022FC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC4Cu); st8((c.r[21].w[0] + 347u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0049(c, 317u, depth + 1u); else { c.pc = 0x00227A20u; return; } if (c.pc != 0x0022FC4Cu) [[unlikely]] return; }
L_0022FC4C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[21].w[0] + 347u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[21].w[0] + 348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0022FC60:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 2832u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 256u));  goto L_0022FC90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC74u); set32(c.r[4], ld32((c.r[21].w[0] + 12u)));  if (depth < kMaxDepth) unit_0049(c, 316u, depth + 1u); else { c.pc = 0x00227A10u; return; } if (c.pc != 0x0022FC74u) [[unlikely]] return; }
L_0022FC74:
    set32(c.r[3], ld32((c.r[21].w[0] + 868u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0022FC8C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FC8Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 187u, depth + 1u); else { c.pc = 0x00229FD0u; return; } if (c.pc != 0x0022FC8Cu) [[unlikely]] return; }
L_0022FC8C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 256u));
    c.budget -= 1;
L_0022FC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 352u), 0u);  if (t) { goto L_0022FD2C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[21].w[0] + 252u)));
    c.r[6].d[0] = ld8((c.r[21].w[0] + 344u));
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 21u));
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = ld16((c.r[5].w[0] + 28u));
    c.r[4].d[0] = ld8((c.r[21].w[0] + 345u));
    c.r[5].d[0] = c.r[3].d[0] & 17ull;
    c.r[7].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld8((c.r[21].w[0] + 884u));
    c.r[5].d[0] = c.r[4].d[0] << 5;
    c.r[4].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[8].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[7].d[0] = c.r[6].d[0] << 3;
    c.r[6].d[0] = c.r[4].d[0] << 4;
    c.r[7].d[0] = c.r[7].d[0] | 4ull;
    c.r[4].d[0] = c.r[3].d[0] << 6;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[3].d[0] = ld8((c.r[21].w[0] + 885u));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 7;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[21].w[0] + 272u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[21].w[0] + 272u));
    set32(c.r[4], ld32((c.r[21].w[0] + 832u)));
    mmi::pcpyld(c.r[5], c.r[2], c.r[3]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 4);
    st32((c.r[21].w[0] + 832u), c.r[3].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st128((c.r[2].w[0] + 624u) & ~15u, c.r[5]);
    c.budget -= 37;
L_0022FD2C:
    c.r[5].d[0] = ld8((c.r[21].w[0] + 346u));
    c.budget -= 1;
L_0022FD30:
    set32(c.r[4], c.r[21].w[0] + 2592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD3Cu); set32(c.r[6], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 310u, depth + 1u); else { c.pc = 0x00227970u; return; } if (c.pc != 0x0022FD3Cu) [[unlikely]] return; }
L_0022FD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD44u); set32(c.r[4], c.r[21].w[0] + 2288u);  if (depth < kMaxDepth) unit_0049(c, 309u, depth + 1u); else { c.pc = 0x00227960u; return; } if (c.pc != 0x0022FD44u) [[unlikely]] return; }
L_0022FD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD4Cu); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 308u, depth + 1u); else { c.pc = 0x00227950u; return; } if (c.pc != 0x0022FD4Cu) [[unlikely]] return; }
L_0022FD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD54u); set32(c.r[4], ld32((c.r[21].w[0] + 252u)));  if (depth < kMaxDepth) unit_0049(c, 307u, depth + 1u); else { c.pc = 0x00227940u; return; } if (c.pc != 0x0022FD54u) [[unlikely]] return; }
L_0022FD54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 306u, depth + 1u); else { c.pc = 0x00227930u; return; } if (c.pc != 0x0022FD60u) [[unlikely]] return; }
L_0022FD60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022FD78; }
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD74u); set32(c.r[5], 0u + 982u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022FD74u) [[unlikely]] return; }
L_0022FD74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022FD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD80u);  if (depth < kMaxDepth) unit_0049(c, 305u, depth + 1u); else { c.pc = 0x00227920u; return; } if (c.pc != 0x0022FD80u) [[unlikely]] return; }
L_0022FD80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022FD98; }
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FD94u); set32(c.r[5], 0u + 1002u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022FD94u) [[unlikely]] return; }
L_0022FD94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022FD98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDA0u);  if (depth < kMaxDepth) unit_0049(c, 304u, depth + 1u); else { c.pc = 0x00227910u; return; } if (c.pc != 0x0022FDA0u) [[unlikely]] return; }
L_0022FDA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0022FDB8; }
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDB4u); set32(c.r[5], 0u + 1022u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022FDB4u) [[unlikely]] return; }
L_0022FDB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022FDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDC0u);  if (depth < kMaxDepth) unit_0049(c, 303u, depth + 1u); else { c.pc = 0x00227900u; return; } if (c.pc != 0x0022FDC0u) [[unlikely]] return; }
L_0022FDC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 260u)));  goto L_0022FDD8; }
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDD4u); set32(c.r[5], 0u + 1042u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022FDD4u) [[unlikely]] return; }
L_0022FDD4:
    set32(c.r[5], ld32((c.r[21].w[0] + 260u)));
    c.budget -= 1;
L_0022FDD8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0022FDF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDE8u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 21u, depth + 1u); else { c.pc = 0x00224A90u; return; } if (c.pc != 0x0022FDE8u) [[unlikely]] return; }
L_0022FDE8:
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FDF4u); set32(c.r[5], 0u + 877u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022FDF4u) [[unlikely]] return; }
L_0022FDF4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_0022FDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE00u);  if (depth < kMaxDepth) unit_0049(c, 294u, depth + 1u); else { c.pc = 0x00227660u; return; } if (c.pc != 0x0022FE00u) [[unlikely]] return; }
L_0022FE00:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 346u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0022FE4C; }
    set32(c.r[4], c.r[21].w[0] + 912u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE18u); set32(c.r[5], 0u + 75u);  if (depth < kMaxDepth) unit_0049(c, 293u, depth + 1u); else { c.pc = 0x00227650u; return; } if (c.pc != 0x0022FE18u) [[unlikely]] return; }
L_0022FE18:
    c.r[5].d[0] = ld8((c.r[21].w[0] + 344u));
    set32(c.r[4], c.r[21].w[0] + 2592u);
    set32(c.r[6], ld32((c.r[21].w[0] + 352u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE2Cu); set32(c.r[7], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0048(c, 41u, depth + 1u); else { c.pc = 0x002204F0u; return; } if (c.pc != 0x0022FE2Cu) [[unlikely]] return; }
L_0022FE2C:
    set32(c.r[4], c.r[21].w[0] + 2288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE38u); set32(c.r[5], 0u + 1282u);  if (depth < kMaxDepth) unit_0048(c, 54u, depth + 1u); else { c.pc = 0x00220670u; return; } if (c.pc != 0x0022FE38u) [[unlikely]] return; }
L_0022FE38:
    c.r[5].d[0] = ld64((c.r[21].w[0] + 272u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE44u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 17u, depth + 1u); else { c.pc = 0x002248B0u; return; } if (c.pc != 0x0022FE44u) [[unlikely]] return; }
L_0022FE44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 2252u)));  if (t) { goto L_0022FE58; } }
L_0022FE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE54u);  if (depth < kMaxDepth) unit_0049(c, 285u, depth + 1u); else { c.pc = 0x00227410u; return; } if (c.pc != 0x0022FE54u) [[unlikely]] return; }
L_0022FE54:
    set32(c.r[5], ld32((c.r[21].w[0] + 2252u)));
    c.budget -= 1;
L_0022FE58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x6C000000u);
    set32(c.r[2], ld32((c.r[21].w[0] + 2256u)));
    set32(c.r[4], c.r[21].w[0] + 2288u);
    set32(c.r[5], c.r[5].w[0] << 16);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE78u); st32((c.r[21].w[0] + 940u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 53u, depth + 1u); else { c.pc = 0x00220650u; return; } if (c.pc != 0x0022FE78u) [[unlikely]] return; }
L_0022FE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE80u); set32(c.r[4], c.r[21].w[0] + 2288u);  if (depth < kMaxDepth) unit_0049(c, 140u, depth + 1u); else { c.pc = 0x002263C0u; return; } if (c.pc != 0x0022FE80u) [[unlikely]] return; }
L_0022FE80:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FE8Cu); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x002263B0u; return; } if (c.pc != 0x0022FE8Cu) [[unlikely]] return; }
L_0022FE8C:
    set32(c.r[3], ld32((c.r[21].w[0] + 832u)));
    set32(c.r[4], c.r[21].w[0] + 152u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEA4u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_002D(c, 231u, depth + 1u); else { c.pc = 0x001B7980u; return; } if (c.pc != 0x0022FEA4u) [[unlikely]] return; }
L_0022FEA4:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[21].w[0] + 152u);  goto L_0022FECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEB8u); set32(c.r[4], c.r[21].w[0] + 2288u);  if (depth < kMaxDepth) unit_0049(c, 138u, depth + 1u); else { c.pc = 0x002263A0u; return; } if (c.pc != 0x0022FEB8u) [[unlikely]] return; }
L_0022FEB8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEC8u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 136u, depth + 1u); else { c.pc = 0x00226350u; return; } if (c.pc != 0x0022FEC8u) [[unlikely]] return; }
L_0022FEC8:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 1;
L_0022FECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FED4u);  if (depth < kMaxDepth) unit_004D(c, 180u, depth + 1u); else { c.pc = 0x00237200u; return; } if (c.pc != 0x0022FED4u) [[unlikely]] return; }
L_0022FED4:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 872u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[21].w[0] + 832u)));  goto L_0022FEEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEE8u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 135u, depth + 1u); else { c.pc = 0x00226340u; return; } if (c.pc != 0x0022FEE8u) [[unlikely]] return; }
L_0022FEE8:
    set32(c.r[6], ld32((c.r[21].w[0] + 832u)));
    c.budget -= 1;
L_0022FEEC:
    set32(c.r[4], c.r[21].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FEF8u); set32(c.r[5], c.r[21].w[0] + 624u);  if (depth < kMaxDepth) unit_0049(c, 136u, depth + 1u); else { c.pc = 0x00226350u; return; } if (c.pc != 0x0022FEF8u) [[unlikely]] return; }
L_0022FEF8:
    set32(c.r[5], ld32((c.r[21].w[0] + 244u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF04u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_004D(c, 179u, depth + 1u); else { c.pc = 0x00237180u; return; } if (c.pc != 0x0022FF04u) [[unlikely]] return; }
L_0022FF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF0Cu); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 134u, depth + 1u); else { c.pc = 0x00226330u; return; } if (c.pc != 0x0022FF0Cu) [[unlikely]] return; }
L_0022FF0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF18u); set32(c.r[4], c.r[21].w[0] + 912u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x002263B0u; return; } if (c.pc != 0x0022FF18u) [[unlikely]] return; }
L_0022FF18:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF28u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 136u, depth + 1u); else { c.pc = 0x00226350u; return; } if (c.pc != 0x0022FF28u) [[unlikely]] return; }
L_0022FF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF30u); set32(c.r[4], c.r[21].w[0] + 152u);  if (depth < kMaxDepth) unit_0049(c, 133u, depth + 1u); else { c.pc = 0x002262F0u; return; } if (c.pc != 0x0022FF30u) [[unlikely]] return; }
L_0022FF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF38u);  if (depth < kMaxDepth) unit_0049(c, 132u, depth + 1u); else { c.pc = 0x002262E0u; return; } if (c.pc != 0x0022FF38u) [[unlikely]] return; }
L_0022FF38:
    st32((c.r[21].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 2256u)));  [[clang::musttail]] return unit_004C(c, 5u, depth); }
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0022FF90; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF64u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 214u, depth + 1u); else { c.pc = 0x0022D8C0u; return; } if (c.pc != 0x0022FF64u) [[unlikely]] return; }
L_0022FF64:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF70u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 283u, depth + 1u); else { c.pc = 0x002273A0u; return; } if (c.pc != 0x0022FF70u) [[unlikely]] return; }
L_0022FF70:
    set32(c.r[7], ld32((c.r[21].w[0] + 252u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 368u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FF88u); set32(c.r[8], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_004B(c, 203u, depth + 1u); else { c.pc = 0x0022D600u; return; } if (c.pc != 0x0022FF88u) [[unlikely]] return; }
L_0022FF88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_004C(c, 3u, depth); } }
L_0022FF90:
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 214u, depth + 1u); else { c.pc = 0x0022D8C0u; return; } if (c.pc != 0x0022FFA0u) [[unlikely]] return; }
L_0022FFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFA8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 282u, depth + 1u); else { c.pc = 0x00227390u; return; } if (c.pc != 0x0022FFA8u) [[unlikely]] return; }
L_0022FFA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 281u, depth + 1u); else { c.pc = 0x00227380u; return; } if (c.pc != 0x0022FFB4u) [[unlikely]] return; }
L_0022FFB4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_004C(c, 1u, depth); } }
L_0022FFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x00227310u; return; } if (c.pc != 0x0022FFC8u) [[unlikely]] return; }
L_0022FFC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] << 5);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 368u);
    set32(c.r[8], c.r[29].w[0] + 336u);
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 252u)));
    c.budget -= 10;
L_0022FFF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022FFF8u); set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_004B(c, 203u, depth + 1u); else { c.pc = 0x0022D600u; return; } if (c.pc != 0x0022FFF8u) [[unlikely]] return; }
L_0022FFF8:
    set32(c.r[16], c.r[16].w[0] + 44u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
    [[clang::musttail]] return unit_004C(c, 1u, depth);
}

}
