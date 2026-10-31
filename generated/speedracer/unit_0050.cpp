#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0050[4096] = {
    1, 2, 0, 0, 3, 0, 4, 0, 0, 5, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0,
    0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0,
    0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0,
    123, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178,
    0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0,
    288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
};

void unit_0050(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00240000;
    case 2u: goto L_00240004;
    case 3u: goto L_00240010;
    case 4u: goto L_00240018;
    case 5u: goto L_00240024;
    case 6u: goto L_00240028;
    case 7u: goto L_0024002C;
    case 8u: goto L_00240090;
    case 9u: goto L_002400E0;
    case 10u: goto L_00240100;
    case 11u: goto L_00240110;
    case 12u: goto L_00240124;
    case 13u: goto L_00240150;
    case 14u: goto L_00240180;
    case 15u: goto L_0024019C;
    case 16u: goto L_002401C0;
    case 17u: goto L_002401D0;
    case 18u: goto L_002401EC;
    case 19u: goto L_002401F8;
    case 20u: goto L_0024020C;
    case 21u: goto L_0024021C;
    case 22u: goto L_00240230;
    case 23u: goto L_00240250;
    case 24u: goto L_0024026C;
    case 25u: goto L_00240310;
    case 26u: goto L_0024032C;
    case 27u: goto L_00240338;
    case 28u: goto L_00240350;
    case 29u: goto L_00240360;
    case 30u: goto L_00240370;
    case 31u: goto L_0024038C;
    case 32u: goto L_00240398;
    case 33u: goto L_00240450;
    case 34u: goto L_00240468;
    case 35u: goto L_00240478;
    case 36u: goto L_002404D0;
    case 37u: goto L_002404F8;
    case 38u: goto L_00240508;
    case 39u: goto L_00240558;
    case 40u: goto L_002405A0;
    case 41u: goto L_0024061C;
    case 42u: goto L_002406B4;
    case 43u: goto L_002406C8;
    case 44u: goto L_002406F0;
    case 45u: goto L_00240754;
    case 46u: goto L_00240800;
    case 47u: goto L_00240980;
    case 48u: goto L_002409A0;
    case 49u: goto L_002409B0;
    case 50u: goto L_002409C4;
    case 51u: goto L_00240A20;
    case 52u: goto L_00240A50;
    case 53u: goto L_00240A6C;
    case 54u: goto L_00240A90;
    case 55u: goto L_00240AA0;
    case 56u: goto L_00240ABC;
    case 57u: goto L_00240AC8;
    case 58u: goto L_00240ADC;
    case 59u: goto L_00240AEC;
    case 60u: goto L_00240B00;
    case 61u: goto L_00240B20;
    case 62u: goto L_00240B3C;
    case 63u: goto L_00240B80;
    case 64u: goto L_00240B9C;
    case 65u: goto L_00240BA8;
    case 66u: goto L_00240BC0;
    case 67u: goto L_00240BD0;
    case 68u: goto L_00240BE0;
    case 69u: goto L_00240BFC;
    case 70u: goto L_00240C08;
    case 71u: goto L_00240C20;
    case 72u: goto L_00240C38;
    case 73u: goto L_00240C48;
    case 74u: goto L_00240C80;
    case 75u: goto L_00240CA8;
    case 76u: goto L_00240CB8;
    case 77u: goto L_00240CE0;
    case 78u: goto L_00240D10;
    case 79u: goto L_00240D8C;
    case 80u: goto L_00240DCC;
    case 81u: goto L_00240DE0;
    case 82u: goto L_00240E10;
    case 83u: goto L_00240E70;
    case 84u: goto L_00240F08;
    case 85u: goto L_00240FE0;
    case 86u: goto L_00241000;
    case 87u: goto L_00241010;
    case 88u: goto L_00241024;
    case 89u: goto L_00241050;
    case 90u: goto L_00241060;
    case 91u: goto L_0024107C;
    case 92u: goto L_00241088;
    case 93u: goto L_0024109C;
    case 94u: goto L_002410AC;
    case 95u: goto L_002410C0;
    case 96u: goto L_002410D0;
    case 97u: goto L_002410E4;
    case 98u: goto L_002410FC;
    case 99u: goto L_00241110;
    case 100u: goto L_00241120;
    case 101u: goto L_00241134;
    case 102u: goto L_0024114C;
    case 103u: goto L_00241160;
    case 104u: goto L_00241170;
    case 105u: goto L_00241184;
    case 106u: goto L_00241194;
    case 107u: goto L_002411A8;
    case 108u: goto L_002411C0;
    case 109u: goto L_002411E8;
    case 110u: goto L_0024120C;
    case 111u: goto L_00241278;
    case 112u: goto L_00241360;
    case 113u: goto L_002413E0;
    case 114u: goto L_00241404;
    case 115u: goto L_00241410;
    case 116u: goto L_0024141C;
    case 117u: goto L_00241428;
    case 118u: goto L_00241444;
    case 119u: goto L_00241450;
    case 120u: goto L_0024145C;
    case 121u: goto L_00241468;
    case 122u: goto L_00241474;
    case 123u: goto L_00241480;
    case 124u: goto L_0024148C;
    case 125u: goto L_00241498;
    case 126u: goto L_002414A0;
    case 127u: goto L_002414C8;
    case 128u: goto L_002414D4;
    case 129u: goto L_002414E0;
    case 130u: goto L_002414EC;
    case 131u: goto L_002414F8;
    case 132u: goto L_00241528;
    case 133u: goto L_00241550;
    case 134u: goto L_00241570;
    case 135u: goto L_00241594;
    case 136u: goto L_002415C4;
    case 137u: goto L_00241600;
    case 138u: goto L_00241610;
    case 139u: goto L_0024163C;
    case 140u: goto L_00241660;
    case 141u: goto L_00241690;
    case 142u: goto L_002416A4;
    case 143u: goto L_002416B4;
    case 144u: goto L_002416D0;
    case 145u: goto L_002416F0;
    case 146u: goto L_00241714;
    case 147u: goto L_00241730;
    case 148u: goto L_00241750;
    case 149u: goto L_00241760;
    case 150u: goto L_0024177C;
    case 151u: goto L_00241790;
    case 152u: goto L_002417A0;
    case 153u: goto L_002417AC;
    case 154u: goto L_002417B8;
    case 155u: goto L_002417DC;
    case 156u: goto L_00241800;
    case 157u: goto L_00241804;
    case 158u: goto L_0024180C;
    case 159u: goto L_00241834;
    case 160u: goto L_00241864;
    case 161u: goto L_00241870;
    case 162u: goto L_002418B8;
    case 163u: goto L_002418CC;
    case 164u: goto L_002418E0;
    case 165u: goto L_002418EC;
    case 166u: goto L_0024190C;
    case 167u: goto L_0024191C;
    case 168u: goto L_00241940;
    case 169u: goto L_00241964;
    case 170u: goto L_00241988;
    case 171u: goto L_00241994;
    case 172u: goto L_002419A4;
    case 173u: goto L_002419C0;
    case 174u: goto L_002419CC;
    case 175u: goto L_002419D8;
    case 176u: goto L_002419E4;
    case 177u: goto L_002419F0;
    case 178u: goto L_002419FC;
    case 179u: goto L_00241A08;
    case 180u: goto L_00241A14;
    case 181u: goto L_00241A1C;
    case 182u: goto L_00241A38;
    case 183u: goto L_00241A58;
    case 184u: goto L_00241A68;
    case 185u: goto L_00241A84;
    case 186u: goto L_00241A98;
    case 187u: goto L_00241AA8;
    case 188u: goto L_00241AB4;
    case 189u: goto L_00241AC0;
    case 190u: goto L_00241AE4;
    case 191u: goto L_00241B08;
    case 192u: goto L_00241B14;
    case 193u: goto L_00241B38;
    case 194u: goto L_00241B60;
    case 195u: goto L_00241B9C;
    case 196u: goto L_00241BAC;
    case 197u: goto L_00241BC8;
    case 198u: goto L_00241BE4;
    case 199u: goto L_00241C00;
    case 200u: goto L_00241C28;
    case 201u: goto L_00241C38;
    case 202u: goto L_00241C54;
    case 203u: goto L_00241C64;
    case 204u: goto L_00241C80;
    case 205u: goto L_00241C94;
    case 206u: goto L_00241CA4;
    case 207u: goto L_00241CE0;
    case 208u: goto L_00241D08;
    case 209u: goto L_00241D38;
    case 210u: goto L_00241D5C;
    case 211u: goto L_00241D8C;
    case 212u: goto L_00241DE0;
    case 213u: goto L_00241E30;
    case 214u: goto L_00241E68;
    case 215u: goto L_00241E94;
    case 216u: goto L_00241EB4;
    case 217u: goto L_00241ED8;
    case 218u: goto L_00241F0C;
    case 219u: goto L_00241F2C;
    case 220u: goto L_00241F3C;
    case 221u: goto L_00241F58;
    case 222u: goto L_00241F6C;
    case 223u: goto L_00241F7C;
    case 224u: goto L_00242020;
    case 225u: goto L_00242064;
    case 226u: goto L_00242074;
    case 227u: goto L_002420A8;
    case 228u: goto L_002420E0;
    case 229u: goto L_00242118;
    case 230u: goto L_00242120;
    case 231u: goto L_00242150;
    case 232u: goto L_00242180;
    case 233u: goto L_00242194;
    case 234u: goto L_00242390;
    case 235u: goto L_002423F8;
    case 236u: goto L_00242424;
    case 237u: goto L_00242508;
    case 238u: goto L_002425C0;
    case 239u: goto L_00242678;
    case 240u: goto L_002426E4;
    case 241u: goto L_00242760;
    case 242u: goto L_002427BC;
    case 243u: goto L_002427DC;
    case 244u: goto L_002427E8;
    case 245u: goto L_00242820;
    case 246u: goto L_00242830;
    case 247u: goto L_0024284C;
    case 248u: goto L_00242864;
    case 249u: goto L_00242874;
    case 250u: goto L_002428D8;
    case 251u: goto L_00242910;
    case 252u: goto L_00242938;
    case 253u: goto L_002429A0;
    case 254u: goto L_002429F8;
    case 255u: goto L_00242A08;
    case 256u: goto L_00242A24;
    case 257u: goto L_00242A34;
    case 258u: goto L_00242A50;
    case 259u: goto L_00242A64;
    case 260u: goto L_00242A74;
    case 261u: goto L_00242AC4;
    case 262u: goto L_00242B80;
    case 263u: goto L_00242C50;
    case 264u: goto L_00242C60;
    case 265u: goto L_00242C74;
    case 266u: goto L_00242C84;
    case 267u: goto L_00242CA0;
    case 268u: goto L_00242CD0;
    case 269u: goto L_00242D18;
    case 270u: goto L_00242D68;
    case 271u: goto L_00242DAC;
    case 272u: goto L_00242DBC;
    case 273u: goto L_00242DD8;
    case 274u: goto L_00242DEC;
    case 275u: goto L_00242DFC;
    case 276u: goto L_00242ED0;
    case 277u: goto L_00242F14;
    case 278u: goto L_00242F20;
    case 279u: goto L_00242F3C;
    case 280u: goto L_00242F60;
    case 281u: goto L_00242F74;
    case 282u: goto L_00242FE0;
    case 283u: goto L_0024300C;
    case 284u: goto L_0024309C;
    case 285u: goto L_002430BC;
    case 286u: goto L_002430E0;
    case 287u: goto L_002430F0;
    case 288u: goto L_00243100;
    case 289u: goto L_00243110;
    case 290u: goto L_00243134;
    case 291u: goto L_00243150;
    case 292u: goto L_0024317C;
    case 293u: goto L_002431A0;
    case 294u: goto L_002431D0;
    case 295u: goto L_002431EC;
    case 296u: goto L_00243210;
    case 297u: goto L_00243220;
    case 298u: goto L_0024323C;
    case 299u: goto L_00243248;
    case 300u: goto L_0024325C;
    case 301u: goto L_0024326C;
    case 302u: goto L_00243280;
    case 303u: goto L_002432A0;
    case 304u: goto L_002432BC;
    case 305u: goto L_00243340;
    case 306u: goto L_0024335C;
    case 307u: goto L_00243368;
    case 308u: goto L_00243380;
    case 309u: goto L_00243390;
    case 310u: goto L_002433A0;
    case 311u: goto L_002433BC;
    case 312u: goto L_002433C8;
    case 313u: goto L_00243460;
    case 314u: goto L_00243478;
    case 315u: goto L_00243488;
    case 316u: goto L_002434D0;
    case 317u: goto L_002434F8;
    case 318u: goto L_00243508;
    case 319u: goto L_0024354C;
    case 320u: goto L_00243590;
    case 321u: goto L_0024360C;
    case 322u: goto L_00243688;
    case 323u: goto L_0024369C;
    case 324u: goto L_002436C0;
    case 325u: goto L_00243738;
    case 326u: goto L_002437D0;
    case 327u: goto L_00243920;
    case 328u: goto L_00243940;
    case 329u: goto L_00243950;
    case 330u: goto L_00243964;
    case 331u: goto L_002439B0;
    case 332u: goto L_002439E0;
    case 333u: goto L_002439FC;
    case 334u: goto L_00243A20;
    case 335u: goto L_00243A30;
    case 336u: goto L_00243A4C;
    case 337u: goto L_00243A58;
    case 338u: goto L_00243A6C;
    case 339u: goto L_00243A7C;
    case 340u: goto L_00243A90;
    case 341u: goto L_00243AB0;
    case 342u: goto L_00243ACC;
    case 343u: goto L_00243B70;
    case 344u: goto L_00243B8C;
    case 345u: goto L_00243B98;
    case 346u: goto L_00243BB0;
    case 347u: goto L_00243BC0;
    case 348u: goto L_00243BD0;
    case 349u: goto L_00243BEC;
    case 350u: goto L_00243BF8;
    case 351u: goto L_00243C10;
    case 352u: goto L_00243C28;
    case 353u: goto L_00243C38;
    case 354u: goto L_00243C90;
    case 355u: goto L_00243CB8;
    case 356u: goto L_00243CC8;
    case 357u: goto L_00243D14;
    case 358u: goto L_00243D50;
    case 359u: goto L_00243D90;
    case 360u: goto L_00243DA8;
    case 361u: goto L_00243DBC;
    case 362u: goto L_00243DE0;
    case 363u: goto L_00243E44;
    case 364u: goto L_00243ED8;
    case 365u: goto L_00243F04;
    case 366u: goto L_00243F24;
    case 367u: goto L_00243F5C;
    case 368u: goto L_00243F8C;
    case 369u: goto L_00243FF0;
    default: bad_entry(c, 0x00240000u); return;
    }
L_00240000:
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 1;
L_00240004:
    c.f[0] = 0u;
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.facc = fp::add(c.f[0], c.f[22]);
    c.budget -= 3;
L_00240010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));  if (t) { goto L_00240024; } }
L_00240018:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 3;
L_00240024:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00240028:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0024002C:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 13u));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023FF24u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 235u, depth); }
    fpu_div(c, 1u, c.f[22], c.f[21]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00240074; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 13592u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002400A4; } }
L_00240074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], 0u + 1u);  goto L_0024009C; }
    st8((c.r[21].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00240090:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002400A4; } }
L_0024009C:
    st8((c.r[21].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002400A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002400E0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00240100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00240110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240124u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 282u, depth + 1u); else { c.pc = 0x00242FE0u; return; } if (c.pc != 0x00240124u) [[unlikely]] return; }
L_00240124:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 13592u));
    set32(c.r[2], c.r[2].w[0] - 4384u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00240150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024019C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240180u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 276u, depth + 1u); else { c.pc = 0x00242ED0u; return; } if (c.pc != 0x00240180u) [[unlikely]] return; }
L_00240180:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002401A0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024019Cu); set32(c.r[5], 0u + 80u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0024019Cu) [[unlikely]] return; }
L_0024019C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002401A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002401C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 9960u);  c.pc = t; return; }
L_002401D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 90u, depth + 1u); else { c.pc = 0x00241060u; return; } if (c.pc != 0x002401ECu) [[unlikely]] return; }
L_002401EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401F8u); set32(c.r[4], ld32((c.r[2].w[0] + 9960u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002401F8u) [[unlikely]] return; }
L_002401F8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024020Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024020Cu) [[unlikely]] return; }
L_0024020C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024021Cu); set32(c.r[5], c.r[5].w[0] + 9968u);  if (depth < kMaxDepth) unit_0062(c, 152u, depth + 1u); else { c.pc = 0x002894E0u; return; } if (c.pc != 0x0024021Cu) [[unlikely]] return; }
L_0024021C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240230u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00240230u) [[unlikely]] return; }
L_00240230:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00240250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024026Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 108u, depth + 1u); else { c.pc = 0x002411C0u; return; } if (c.pc != 0x0024026Cu) [[unlikely]] return; }
L_0024026C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 48u));  goto L_0024027C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002402F0; } }
L_0024027C:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00240290; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002402B0; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002402B0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002402B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002402D0; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002402D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002402D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002402F0; } }
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002402F0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002402F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024032Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 113u, depth + 1u); else { c.pc = 0x002413E0u; return; } if (c.pc != 0x0024032Cu) [[unlikely]] return; }
L_0024032C:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240338u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 160u, depth + 1u); else { c.pc = 0x002895A0u; return; } if (c.pc != 0x00240338u) [[unlikely]] return; }
L_00240338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240350:
    c.budget -= 2;
    {  goto L_00241550; }
L_00240360:
    c.budget -= 2;
    {  goto L_00241600; }
L_00240370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024038Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 138u, depth + 1u); else { c.pc = 0x00241610u; return; } if (c.pc != 0x0024038Cu) [[unlikely]] return; }
L_0024038C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240398u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0062(c, 165u, depth + 1u); else { c.pc = 0x00289600u; return; } if (c.pc != 0x00240398u) [[unlikely]] return; }
L_00240398:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13648u));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002403B4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002403B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002403D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13652u));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002403D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002403D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002403FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13656u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002403FC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002403FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_00240424; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13660u));
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00240420; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240420:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_00240424:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00240438; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_00240438:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240468u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00240468u) [[unlikely]] return; }
L_00240468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002404B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240478u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 280u, depth + 1u); else { c.pc = 0x00242F60u; return; } if (c.pc != 0x00240478u) [[unlikely]] return; }
L_00240478:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 4208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13652u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13656u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13660u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_002404B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002404D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002404F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002404F8u) [[unlikely]] return; }
L_002404F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00240548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240508u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 280u, depth + 1u); else { c.pc = 0x00242F60u; return; } if (c.pc != 0x00240508u) [[unlikely]] return; }
L_00240508:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 4208u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13652u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13656u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13660u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_00240548:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240558u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 213u, depth + 1u); else { c.pc = 0x00241E30u; return; } if (c.pc != 0x00240558u) [[unlikely]] return; }
L_00240558:
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 64u));
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002405A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 14u));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_002406A4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002405EC; } }
    c.f[12] = ld32((c.r[18].w[0] + 32u));
    c.budget -= 1;
L_002405EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 10072u));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_00240608; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0024069C; } }
L_00240608:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024061Cu); set32(c.r[6], c.r[18].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024061Cu) [[unlikely]] return; }
L_0024061C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_0024064C; }
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_0024069C; } }
L_0024064C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13652u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13656u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13660u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.budget -= 20;
L_0024069C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_002406CC; } }
L_002406A4:
    c.budget -= 2;
    if (c.r[5].sd[0] <= 0) { st32((c.r[18].w[0] + 8u), c.f[20]);  goto L_002406D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002406B4u);  if (depth < kMaxDepth) unit_0050(c, 234u, depth + 1u); else { c.pc = 0x00242390u; return; } if (c.pc != 0x002406B4u) [[unlikely]] return; }
L_002406B4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002406C8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0050(c, 44u, depth + 1u); else { c.pc = 0x002406F0u; return; } if (c.pc != 0x002406C8u) [[unlikely]] return; }
L_002406C8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002406CC:
    st32((c.r[18].w[0] + 8u), c.f[20]);
    c.budget -= 1;
L_002406D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002406F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
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
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.f[21] = c.r[2].w[0];
    st32((c.r[4].w[0] + 48u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.f[20] = ld32((c.r[2].w[0] + 10072u));
    st32((c.r[4].w[0] + 56u), 0u);
    c.f[22] = c.f[12];
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), 0u);  if (t) { goto L_00240888; } }
L_00240754:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_00240884; }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00240880; } }
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[12] = c.f[22];
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.f[0]);  if (t) { goto L_002407D8; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002407DC; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002407C4; } }
    c.f[12] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 1;
L_002407C4:
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002407DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002407DC; } }
L_002407D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002407DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002407F0; }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = fp::sub(c.f[21], c.f[0]);  if (t) { goto L_00240880; } }
L_002407F0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00240800u); set32(c.r[6], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00240800u) [[unlikely]] return; }
L_00240800:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  goto L_00240874; }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.f[3] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[5] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[4] = ld32((c.r[29].w[0] + 124u));
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    c.f[1] = fp::mul(c.f[4], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 60u), c.f[0]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00240880; } }
L_00240874:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 3;
L_00240880:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00240884:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00240888:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 13u));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00240754u | kUnwind; return; } goto L_00240754; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 64u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[20].w[0] + 48u));  goto L_00240900; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 13652u));
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 13656u));
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13660u));
    st32((c.r[20].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_00240950; } }
L_00240900:
    set32(c.r[2], 0u + 1u);
    fpu_div(c, 0u, c.f[0], c.f[21]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    fpu_div(c, 0u, c.f[0], c.f[21]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    fpu_div(c, 0u, c.f[0], c.f[21]);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    fpu_div(c, 0u, c.f[0], c.f[21]);
    st32((c.r[20].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.budget -= 20;
L_00240950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00240980:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002409A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002409B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002409C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 282u, depth + 1u); else { c.pc = 0x00242FE0u; return; } if (c.pc != 0x002409C4u) [[unlikely]] return; }
L_002409C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 4208u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13648u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 13652u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 13656u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13660u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00240A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00240A6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 4032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A50u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 276u, depth + 1u); else { c.pc = 0x00242ED0u; return; } if (c.pc != 0x00240A50u) [[unlikely]] return; }
L_00240A50:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00240A70; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A6Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00240A6Cu) [[unlikely]] return; }
L_00240A6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00240A70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 10008u);  c.pc = t; return; }
L_00240AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240ABCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 90u, depth + 1u); else { c.pc = 0x00241060u; return; } if (c.pc != 0x00240ABCu) [[unlikely]] return; }
L_00240ABC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240AC8u); set32(c.r[4], ld32((c.r[2].w[0] + 10008u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00240AC8u) [[unlikely]] return; }
L_00240AC8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240ADCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00240ADCu) [[unlikely]] return; }
L_00240ADC:
    c.f[12] = ld32((c.r[17].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240AECu); set32(c.r[4], c.r[4].w[0] + 10016u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00240AECu) [[unlikely]] return; }
L_00240AEC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B00u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00240B00u) [[unlikely]] return; }
L_00240B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00240B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 108u, depth + 1u); else { c.pc = 0x002411C0u; return; } if (c.pc != 0x00240B3Cu) [[unlikely]] return; }
L_00240B3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 48u));  goto L_00240B4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00240B60; } }
L_00240B4C:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00240B60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240B60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 113u, depth + 1u); else { c.pc = 0x002413E0u; return; } if (c.pc != 0x00240B9Cu) [[unlikely]] return; }
L_00240B9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240BA8u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00240BA8u) [[unlikely]] return; }
L_00240BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240BC0:
    c.budget -= 2;
    {  goto L_00241550; }
L_00240BD0:
    c.budget -= 2;
    {  goto L_00241600; }
L_00240BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240BFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 138u, depth + 1u); else { c.pc = 0x00241610u; return; } if (c.pc != 0x00240BFCu) [[unlikely]] return; }
L_00240BFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C08u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00240C08u) [[unlikely]] return; }
L_00240C08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 52u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00240C38u) [[unlikely]] return; }
L_00240C38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00240C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 280u, depth + 1u); else { c.pc = 0x00242F60u; return; } if (c.pc != 0x00240C48u) [[unlikely]] return; }
L_00240C48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = ld32((c.r[2].w[0] + 13600u));
    set32(c.r[3], c.r[3].w[0] - 4032u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 6;
L_00240C60:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00240C80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 52u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240CA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00240CA8u) [[unlikely]] return; }
L_00240CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00240CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240CB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 280u, depth + 1u); else { c.pc = 0x00242F60u; return; } if (c.pc != 0x00240CB8u) [[unlikely]] return; }
L_00240CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = ld32((c.r[2].w[0] + 13600u));
    set32(c.r[3], c.r[3].w[0] - 4032u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 6;
L_00240CD0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240CE0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 213u, depth + 1u); else { c.pc = 0x00241E30u; return; } if (c.pc != 0x00240CE0u) [[unlikely]] return; }
L_00240CE0:
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00240D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 14u));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_00240DBC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240D5C; } }
    c.f[12] = ld32((c.r[18].w[0] + 32u));
    c.budget -= 1;
L_00240D5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 10072u));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_00240D78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00240DB4; } }
L_00240D78:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00240D8Cu); set32(c.r[6], c.r[18].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00240D8Cu) [[unlikely]] return; }
L_00240D8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00240DA4; }
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_00240DB4; } }
L_00240DA4:
    c.r[3].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 13600u));
    st32((c.r[18].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 4;
L_00240DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00240DE4; } }
L_00240DBC:
    c.budget -= 2;
    if (c.r[5].sd[0] <= 0) { st32((c.r[18].w[0] + 8u), c.f[20]);  goto L_00240DE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240DCCu);  if (depth < kMaxDepth) unit_0050(c, 234u, depth + 1u); else { c.pc = 0x00242390u; return; } if (c.pc != 0x00240DCCu) [[unlikely]] return; }
L_00240DCC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240DE0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0050(c, 82u, depth + 1u); else { c.pc = 0x00240E10u; return; } if (c.pc != 0x00240DE0u) [[unlikely]] return; }
L_00240DE0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00240DE4:
    st32((c.r[18].w[0] + 8u), c.f[20]);
    c.budget -= 1;
L_00240DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00240E10:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[21] = c.r[2].w[0];
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[20] = ld32((c.r[2].w[0] + 10072u));
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[12];  if (t) { goto L_00240F54; } }
L_00240E70:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_00240F50; }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00240F4C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[12] = c.f[22];  if (t) { goto L_00240EE4; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00240EE8; }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240ED0; } }
    c.f[12] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 1;
L_00240ED0:
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00240EE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00240EE8; } }
L_00240EE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240EE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00240EF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = fp::sub(c.f[21], c.f[1]);  if (t) { goto L_00240F4C; } }
L_00240EF8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00240F08u); set32(c.r[6], c.r[29].w[0] + 140u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00240F08u) [[unlikely]] return; }
L_00240F08:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 20u)));  goto L_00240F40; }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = 0u;
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = ld32((c.r[29].w[0] + 140u));
    c.facc = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 48u), c.f[0]);  if (t) { goto L_00240F4C; } }
L_00240F40:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 3;
L_00240F4C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00240F50:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00240F54:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 13u));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00240E70u | kUnwind; return; } goto L_00240E70; }
    c.f[0] = ld32((c.r[21].w[0] + 48u));
    fpu_div(c, 0u, c.f[0], c.f[21]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[21].w[0] + 48u), c.f[0]);  if (t) { goto L_00240F9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 13600u));
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 48u), c.f[0]);  if (t) { goto L_00240FA8; } }
L_00240F9C:
    c.f[0] = ld32((c.r[21].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 3;
L_00240FA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00240FE0:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00241000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00241010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241024u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 282u, depth + 1u); else { c.pc = 0x00242FE0u; return; } if (c.pc != 0x00241024u) [[unlikely]] return; }
L_00241024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = ld32((c.r[2].w[0] + 13600u));
    set32(c.r[3], c.r[3].w[0] - 4032u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00241050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 10056u);  c.pc = t; return; }
L_00241060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024107Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 212u, depth + 1u); else { c.pc = 0x00261BF0u; return; } if (c.pc != 0x0024107Cu) [[unlikely]] return; }
L_0024107C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241088u); set32(c.r[4], ld32((c.r[2].w[0] + 10056u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00241088u) [[unlikely]] return; }
L_00241088:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024109Cu); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024109Cu) [[unlikely]] return; }
L_0024109C:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002410ACu); set32(c.r[4], c.r[4].w[0] + 10080u);  if (depth < kMaxDepth) unit_0088(c, 249u, depth + 1u); else { c.pc = 0x00321D40u; return; } if (c.pc != 0x002410ACu) [[unlikely]] return; }
L_002410AC:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002410C0u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002410C0u) [[unlikely]] return; }
L_002410C0:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 30708u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002410D0u); set32(c.r[4], c.r[4].w[0] + 10094u);  if (depth < kMaxDepth) unit_0088(c, 249u, depth + 1u); else { c.pc = 0x00321D40u; return; } if (c.pc != 0x002410D0u) [[unlikely]] return; }
L_002410D0:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002410E4u); set32(c.r[6], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002410E4u) [[unlikely]] return; }
L_002410E4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 10111u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002410FCu); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x002410FCu) [[unlikely]] return; }
L_002410FC:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241110u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00241110u) [[unlikely]] return; }
L_00241110:
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241120u); set32(c.r[4], c.r[4].w[0] + 10129u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00241120u) [[unlikely]] return; }
L_00241120:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241134u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00241134u) [[unlikely]] return; }
L_00241134:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 10148u);
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024114Cu); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x0024114Cu) [[unlikely]] return; }
L_0024114C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241160u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00241160u) [[unlikely]] return; }
L_00241160:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 14u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241170u); set32(c.r[4], c.r[4].w[0] + 10172u);  if (depth < kMaxDepth) unit_0088(c, 249u, depth + 1u); else { c.pc = 0x00321D40u; return; } if (c.pc != 0x00241170u) [[unlikely]] return; }
L_00241170:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241184u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00241184u) [[unlikely]] return; }
L_00241184:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 15u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241194u); set32(c.r[4], c.r[4].w[0] + 10188u);  if (depth < kMaxDepth) unit_0088(c, 249u, depth + 1u); else { c.pc = 0x00321D40u; return; } if (c.pc != 0x00241194u) [[unlikely]] return; }
L_00241194:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411A8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002411A8u) [[unlikely]] return; }
L_002411A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002411C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 216u, depth + 1u); else { c.pc = 0x00261C40u; return; } if (c.pc != 0x002411E8u) [[unlikely]] return; }
L_002411E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[20].w[0] + 13u));  goto L_002411F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002413B8; } }
L_002411F8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 13u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_002412EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002413B8; } }
L_0024120C:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00241240; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002412D8; }
L_00241240:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00241260; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00241260; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002412D8; } }
L_00241260:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[16].w[0] + 4u));  goto L_0024128C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00241278u); set32(c.r[5], ld32((c.r[17].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00241278u) [[unlikely]] return; }
L_00241278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241288; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002412D8; } }
L_00241288:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 1;
L_0024128C:
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002412D8; }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002412D4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002412D4; } }
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002412D8; }
L_002412D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002412D8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_002412E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002413B8; } }
L_002412E8:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002412EC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 13u));
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024120Cu | kUnwind; return; } goto L_0024120C; }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 12u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 12u));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002413B8; }
    c.f[1] = ld32((c.r[20].w[0] + 28u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024138C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 14u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 14u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024138C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 15u));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 15u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024138C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 24u)));  goto L_0024136C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00241360u); set32(c.r[5], ld32((c.r[19].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00241360u) [[unlikely]] return; }
L_00241360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024138C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_0024136C:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0024138C; } }
    c.f[1] = ld32((c.r[20].w[0] + 32u));
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 16u)));  goto L_00241398; }
L_0024138C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002413B8; } }
L_00241398:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002413B8; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 17u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 17u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002413B8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002413B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002413E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241404u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 217u, depth + 1u); else { c.pc = 0x00261C50u; return; } if (c.pc != 0x00241404u) [[unlikely]] return; }
L_00241404:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241410u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x00241410u) [[unlikely]] return; }
L_00241410:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024141Cu); set32(c.r[5], c.r[18].w[0] + 13u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x0024141Cu) [[unlikely]] return; }
L_0024141C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241428u); set32(c.r[5], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00241428u) [[unlikely]] return; }
L_00241428:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0024152C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241444u); set32(c.r[5], c.r[18].w[0] + 14u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x00241444u) [[unlikely]] return; }
L_00241444:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241450u); set32(c.r[5], c.r[18].w[0] + 15u);  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x00241450u) [[unlikely]] return; }
L_00241450:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024145Cu); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_0050(c, 286u, depth + 1u); else { c.pc = 0x002430E0u; return; } if (c.pc != 0x0024145Cu) [[unlikely]] return; }
L_0024145C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241468u); set32(c.r[5], c.r[18].w[0] + 17u);  if (depth < kMaxDepth) unit_0050(c, 286u, depth + 1u); else { c.pc = 0x002430E0u; return; } if (c.pc != 0x00241468u) [[unlikely]] return; }
L_00241468:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241474u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00241474u) [[unlikely]] return; }
L_00241474:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241480u); set32(c.r[5], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00241480u) [[unlikely]] return; }
L_00241480:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024148Cu); set32(c.r[5], c.r[18].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0024148Cu) [[unlikely]] return; }
L_0024148C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241498u); set32(c.r[5], c.r[18].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00241498u) [[unlikely]] return; }
L_00241498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00241500; } }
L_002414A0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002414C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002414C8u) [[unlikely]] return; }
L_002414C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414D4u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002414D4u) [[unlikely]] return; }
L_002414D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414E0u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002414E0u) [[unlikely]] return; }
L_002414E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414ECu); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0050(c, 286u, depth + 1u); else { c.pc = 0x002430E0u; return; } if (c.pc != 0x002414ECu) [[unlikely]] return; }
L_002414EC:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002414F8u) [[unlikely]] return; }
L_002414F8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_00241500:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 13u));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002414A0u | kUnwind; return; } goto L_002414A0; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00241528u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00241528u) [[unlikely]] return; }
L_00241528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0024152C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00241550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241570u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 218u, depth + 1u); else { c.pc = 0x00261C60u; return; } if (c.pc != 0x00241570u) [[unlikely]] return; }
L_00241570:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 12u));  goto L_00241580; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002415E4; } }
L_00241580:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_002415E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002415CC; } }
L_00241594:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_002415C8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002415C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002415C4u) [[unlikely]] return; }
L_002415C4:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002415C8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002415CC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 13u));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241594u | kUnwind; return; } goto L_00241594; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002415E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00241600:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0058(c, 219u, depth); }
L_00241610:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024163Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 220u, depth + 1u); else { c.pc = 0x00261C80u; return; } if (c.pc != 0x0024163Cu) [[unlikely]] return; }
L_0024163C:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[2].d[0] = c.r[2].d[0] | 112ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_00241670; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241660u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00241660u) [[unlikely]] return; }
L_00241660:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 251ull;
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
L_00241670:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 110ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002416AC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241690u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x00241690u) [[unlikely]] return; }
L_00241690:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 140u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 138u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002416A4u); st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002416A4u) [[unlikely]] return; }
L_002416A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[17].w[0] + 13u));  if (t) { goto L_002416B8; } }
L_002416AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002416B4u); set32(c.r[5], c.r[17].w[0] + 13u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002416B4u) [[unlikely]] return; }
L_002416B4:
    c.r[18].d[0] = ld8((c.r[17].w[0] + 13u));
    c.budget -= 1;
L_002416B8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002416D0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002416D0u) [[unlikely]] return; }
L_002416D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 7168u);
    set32(c.r[6], c.r[6].w[0] + 7008u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002416F0u); set32(c.r[7], 0u + 24u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002416F0u) [[unlikely]] return; }
L_002416F0:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[1].d[0] | 112ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0024199C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00241814; } }
L_00241714:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241730u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x00241730u) [[unlikely]] return; }
L_00241730:
    set32(c.r[20], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[18].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002417A4; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_00241780; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241750u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00241750u) [[unlikely]] return; }
L_00241750:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241760u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00241760u) [[unlikely]] return; }
L_00241760:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024177C; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024177Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024177Cu) [[unlikely]] return; }
L_0024177C:
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_00241780:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002417A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241790u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00241790u) [[unlikely]] return; }
L_00241790:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002417A0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002417A0u) [[unlikely]] return; }
L_002417A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002417A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002417ACu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002417ACu) [[unlikely]] return; }
L_002417AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002417B8u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002417B8u) [[unlikely]] return; }
L_002417B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 110ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002417F8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002417DCu); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0050(c, 288u, depth + 1u); else { c.pc = 0x00243100u; return; } if (c.pc != 0x002417DCu) [[unlikely]] return; }
L_002417DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_00241800; }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00241800; } }
L_002417F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241800u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0050(c, 287u, depth + 1u); else { c.pc = 0x002430F0u; return; } if (c.pc != 0x00241800u) [[unlikely]] return; }
L_00241800:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_00241804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024180Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0024180Cu) [[unlikely]] return; }
L_0024180C:
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_00241814:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[3].d[0] = c.r[21].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[21].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241714u | kUnwind; return; } goto L_00241714; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241834u); set32(c.r[5], c.r[29].w[0] + 143u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00241834u) [[unlikely]] return; }
L_00241834:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 143u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));  goto L_00241850; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00241858; } }
L_00241850:
    c.r[2].d[0] = c.r[2].d[0] & 254ull;
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00241858:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241864u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00241864u) [[unlikely]] return; }
L_00241864:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241870u); set32(c.r[5], c.r[29].w[0] + 142u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00241870u) [[unlikely]] return; }
L_00241870:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 142u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));  goto L_0024188C; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00241894; } }
L_0024188C:
    c.r[2].d[0] = c.r[2].d[0] & 253ull;
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00241894:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 110ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002418D8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418B8u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002418B8u) [[unlikely]] return; }
L_002418B8:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 136u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 134u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418CCu); st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002418CCu) [[unlikely]] return; }
L_002418CC:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 134u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002418EC; } }
L_002418D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418E0u); set32(c.r[5], c.r[17].w[0] + 14u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002418E0u) [[unlikely]] return; }
L_002418E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418ECu); set32(c.r[5], c.r[17].w[0] + 15u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002418ECu) [[unlikely]] return; }
L_002418EC:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[2].d[0] = c.r[2].d[0] | 108ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_00241920; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024190Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x0024190Cu) [[unlikely]] return; }
L_0024190C:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024191Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0024191Cu) [[unlikely]] return; }
L_0024191C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00241920:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 110ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00241980; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241940u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0050(c, 288u, depth + 1u); else { c.pc = 0x00243100u; return; } if (c.pc != 0x00241940u) [[unlikely]] return; }
L_00241940:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_00241958; }
    set32(c.r[2], 0u - 128u);
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00241958:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241964u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0050(c, 288u, depth + 1u); else { c.pc = 0x00243100u; return; } if (c.pc != 0x00241964u) [[unlikely]] return; }
L_00241964:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[4].w[0]));  goto L_00241B3C; }
    set32(c.r[3], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00241B3C; } }
L_00241980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241988u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0050(c, 287u, depth + 1u); else { c.pc = 0x002430F0u; return; } if (c.pc != 0x00241988u) [[unlikely]] return; }
L_00241988:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241994u); set32(c.r[5], c.r[17].w[0] + 17u);  if (depth < kMaxDepth) unit_0050(c, 287u, depth + 1u); else { c.pc = 0x002430F0u; return; } if (c.pc != 0x00241994u) [[unlikely]] return; }
L_00241994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00241B40; } }
L_0024199C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419A4u); set32(c.r[5], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002419A4u) [[unlikely]] return; }
L_002419A4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241B3C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419C0u); set32(c.r[5], c.r[17].w[0] + 14u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002419C0u) [[unlikely]] return; }
L_002419C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419CCu); set32(c.r[5], c.r[17].w[0] + 15u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002419CCu) [[unlikely]] return; }
L_002419CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419D8u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0050(c, 287u, depth + 1u); else { c.pc = 0x002430F0u; return; } if (c.pc != 0x002419D8u) [[unlikely]] return; }
L_002419D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419E4u); set32(c.r[5], c.r[17].w[0] + 17u);  if (depth < kMaxDepth) unit_0050(c, 287u, depth + 1u); else { c.pc = 0x002430F0u; return; } if (c.pc != 0x002419E4u) [[unlikely]] return; }
L_002419E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419F0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002419F0u) [[unlikely]] return; }
L_002419F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419FCu); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002419FCu) [[unlikely]] return; }
L_002419FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A08u); set32(c.r[5], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00241A08u) [[unlikely]] return; }
L_00241A08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A14u); set32(c.r[5], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00241A14u) [[unlikely]] return; }
L_00241A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00241B1C; } }
L_00241A1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A38u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x00241A38u) [[unlikely]] return; }
L_00241A38:
    set32(c.r[20], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[18].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00241AAC; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_00241A88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00241A58u) [[unlikely]] return; }
L_00241A58:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A68u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00241A68u) [[unlikely]] return; }
L_00241A68:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241A84; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A84u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00241A84u) [[unlikely]] return; }
L_00241A84:
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_00241A88:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00241AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00241A98u) [[unlikely]] return; }
L_00241A98:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241AA8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00241AA8u) [[unlikely]] return; }
L_00241AA8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00241AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241AB4u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00241AB4u) [[unlikely]] return; }
L_00241AB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241AC0u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00241AC0u) [[unlikely]] return; }
L_00241AC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 110ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00241B00; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241AE4u); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_0050(c, 288u, depth + 1u); else { c.pc = 0x00243100u; return; } if (c.pc != 0x00241AE4u) [[unlikely]] return; }
L_00241AE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_00241B08; }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00241B08; } }
L_00241B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B08u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0050(c, 287u, depth + 1u); else { c.pc = 0x002430F0u; return; } if (c.pc != 0x00241B08u) [[unlikely]] return; }
L_00241B08:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00241B14u) [[unlikely]] return; }
L_00241B14:
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_00241B1C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[3].d[0] = c.r[21].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[21].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241A1Cu | kUnwind; return; } goto L_00241A1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x00241B38u) [[unlikely]] return; }
L_00241B38:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_00241B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00241B40:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00241B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00241BE4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_00241BCC; }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00241BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00241B9Cu) [[unlikely]] return; }
L_00241B9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241BACu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00241BACu) [[unlikely]] return; }
L_00241BAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241BC8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00241BC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00241BC8u) [[unlikely]] return; }
L_00241BC8:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_00241BCC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00241BE8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241BE4u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00241BE4u) [[unlikely]] return; }
L_00241BE4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00241BE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00241C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00241C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00241C28u) [[unlikely]] return; }
L_00241C28:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C38u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00241C38u) [[unlikely]] return; }
L_00241C38:
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_00241CA8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00241C84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00241C54u) [[unlikely]] return; }
L_00241C54:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C64u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00241C64u) [[unlikely]] return; }
L_00241C64:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241C80; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00241C80u) [[unlikely]] return; }
L_00241C80:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00241C84:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_00241CA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00241C94u) [[unlikely]] return; }
L_00241C94:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241CA4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00241CA4u) [[unlikely]] return; }
L_00241CA4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00241CA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 10072u));
    st32((c.r[16].w[0] + 8u), 0u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00241CE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB580u; return; } if (c.pc != 0x00241D08u) [[unlikely]] return; }
L_00241D08:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[20].w[0], c.r[3].w[0]);  if (t) { goto L_00241D20; } }
    breakpoint(c, 0x00241D1Cu);
    c.budget -= 1;
L_00241D20:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_00241D48; } }
L_00241D38:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_00241D48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00241D50; } }
L_00241D48:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241D38u | kUnwind; return; } goto L_00241D38; }
L_00241D50:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00241D94; } }
L_00241D5C:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 1u);  goto L_00241D90; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D8Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00241D8Cu) [[unlikely]] return; }
L_00241D8C:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00241D90:
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00241D94:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 13u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241D5Cu | kUnwind; return; } goto L_00241D5C; }
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00241E10; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_00241DC8; } }
    breakpoint(c, 0x00241DC4u);
    c.budget -= 1;
L_00241DC8:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_00241DF4; } }
L_00241DE0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_00241DF4; }
    set32(c.r[18], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00241E00; } }
L_00241DF4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241DE0u | kUnwind; return; } goto L_00241DE0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00241E00:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[18].d[0] = c.r[5].d[0] + 0ull;  goto L_00241E08; }
L_00241E08:
    st32((c.r[17].w[0] + 24u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 2;
L_00241E10:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00241E30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241E68u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 221u, depth + 1u); else { c.pc = 0x00261C90u; return; } if (c.pc != 0x00241E68u) [[unlikely]] return; }
L_00241E68:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 13u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].d[0] = ld8((c.r[17].w[0] + 13u));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241E94u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00241E94u) [[unlikely]] return; }
L_00241E94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 7168u);
    set32(c.r[6], c.r[6].w[0] + 7008u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241EB4u); set32(c.r[7], 0u + 24u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00241EB4u) [[unlikely]] return; }
L_00241EB4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_00241FEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00241FAC; } }
L_00241ED8:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[20], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00241F7C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00241F0Cu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00241F0Cu) [[unlikely]] return; }
L_00241F0C:
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[21].d[0] == c.r[18].d[0]) { c.f[0] = ld32((c.r[20].w[0] + 4u));  goto L_00241F80; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[18].w[0]);  goto L_00241F5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241F2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00241F2Cu) [[unlikely]] return; }
L_00241F2C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241F3Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00241F3Cu) [[unlikely]] return; }
L_00241F3C:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241F58; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00241F58u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00241F58u) [[unlikely]] return; }
L_00241F58:
    st32((c.r[19].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_00241F5C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00241F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241F6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00241F6Cu) [[unlikely]] return; }
L_00241F6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241F7Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00241F7Cu) [[unlikely]] return; }
L_00241F7C:
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.budget -= 1;
L_00241F80:
    set32(c.r[3], c.r[22].w[0] + 1u);
    c.r[22].d[0] = c.r[3].d[0] & 255ull;
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 12u)));
    st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.budget -= 11;
L_00241FAC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[4].d[0] = c.r[22].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[22].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241ED8u | kUnwind; return; } goto L_00241ED8; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 14u));
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 15u));
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 17u)));
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 11;
L_00241FEC:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00242020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 14u));
    c.f[21] = c.f[12];
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = c.f[13];  if (t) { goto L_0024206C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00242064u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00242064u) [[unlikely]] return; }
L_00242064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002420C8; } }
L_0024206C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002420B0; } }
L_00242074:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 1u);  goto L_002420AC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002420A8u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002420A8u) [[unlikely]] return; }
L_002420A8:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002420AC:
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002420B0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242074u | kUnwind; return; } goto L_00242074; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002420C8:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002420E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 14u));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_00242158; }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00242118u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00242118u) [[unlikely]] return; }
L_00242118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00242170; } }
L_00242120:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 1u);  goto L_00242154; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00242150u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00242150u) [[unlikely]] return; }
L_00242150:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00242154:
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00242158:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 13u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242120u | kUnwind; return; } goto L_00242120; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00242170:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00242180:
    c.r[9].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_002421C8; } }
L_00242194:
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.budget -= 8;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], c.r[10].w[0] + 1u);  goto L_002421C4; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = c.r[7].d[0] + 0ull;  goto L_002421D8; }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], c.r[10].w[0] + 1u);
    c.budget -= 2;
L_002421C4:
    c.r[10].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_002421C8:
    c.r[6].d[0] = c.r[10].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { c.r[8].d[0] = c.r[10].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242194u | kUnwind; return; } goto L_00242194; }
L_002421D8:
    c.f[3] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 16u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));  goto L_00242220; }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024221C; } }
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_00242388; } }
L_0024221C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_00242220:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 12u)));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;  goto L_00242278; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[6].w[0];
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[2]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::mul(c.f[2], c.f[1]);  goto L_00242254; }
    st32((c.r[5].w[0] + 8u), c.f[4]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), 0u);  if (t) { goto L_00242388; } }
L_00242254:
    c.f[0] = fp::sub(c.f[4], c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[4], c.f[0]);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002422F8; } }
L_00242278:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.f[0] = fp::add(c.f[1], c.f[5]);  goto L_002422D8; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[6].w[0];
    fpu_compare(c, fp::key(c.f[4]) == fp::key(c.f[3]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::sub(c.f[4], c.f[3]);  goto L_002422A4; }
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[4]);  if (t) { goto L_00242388; } }
L_002422A4:
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[5]));
    fpu_div(c, 1u, c.f[4], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_002422F8; } }
L_002422D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[6].w[0];
    fpu_div(c, 0u, c.f[4], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_002422F8:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[6].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { c.f[2] = ld32((c.r[4].w[0] + 28u));  goto L_00242334; }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[5].w[0] + 8u), 0u);  goto L_00242328; }
    st32((c.r[5].w[0] + 8u), c.f[4]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), 0u);  if (t) { goto L_0024232C; } }
L_00242328:
    st32((c.r[3].w[0] + 8u), c.f[4]);
    c.budget -= 1;
L_0024232C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242388; } }
L_00242334:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242388; } }
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00242360; } }
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00242360:
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0024237C; } }
    st32((c.r[3].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_0024237C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00242388; } }
    st32((c.r[3].w[0] + 8u), c.f[4]);
    c.budget -= 1;
L_00242388:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00242390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00242754; }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] & 251ull;
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 14u));
    c.budget -= 7;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_002423E8; }
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 15u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[6].w[0]);  if (t) { goto L_00242750; } }
L_002423E8:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[4].w[0] + 36u));  goto L_00242400; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002423F8u);  if (depth < kMaxDepth) unit_0050(c, 232u, depth + 1u); else { c.pc = 0x00242180u; return; } if (c.pc != 0x002423F8u) [[unlikely]] return; }
L_002423F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242750; } }
L_00242400:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = ld32((c.r[4].w[0] + 44u));  goto L_002424BC; }
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), 0u);  if (t) { goto L_002424A4; } }
L_00242424:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[7].w[0] + 1u);  goto L_002424A0; }
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 12u)));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.f[1] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_00242484; } }
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024249C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), c.f[1]);  if (t) { goto L_0024249C; } }
L_00242484:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 17u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0024249C; } }
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.budget -= 3;
L_0024249C:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_002424A0:
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002424A4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[7].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242424u | kUnwind; return; } goto L_00242424; }
    c.f[3] = ld32((c.r[4].w[0] + 44u));
    c.budget -= 1;
L_002424BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[5] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.facc = fp::mul(c.f[5], c.f[0]);
    c.f[4] = 0u;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242500; } }
    fpu_div(c, 4u, c.f[2], c.f[0]);
    c.budget -= 6;
L_00242500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00242580; } }
L_00242508:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[7].w[0] + 1u);  goto L_0024257C; }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 17u)));  goto L_00242558; }
    c.f[2] = ld32((c.r[4].w[0] + 44u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_00242578; } }
L_00242558:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { st32((c.r[6].w[0] + 8u), 0u);  goto L_00242578; }
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 16u));
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 6;
L_00242578:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0024257C:
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00242580:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[7].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242508u | kUnwind; return; } goto L_00242508; }
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = 0u;
    c.f[3] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0024262C; }
    c.f[3] = c.f[2];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00242614; } }
L_002425C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[7].w[0] + 1u);  goto L_00242610; }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024260C; } }
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[5].w[0] + 8u));  goto L_00242608; }
    st32((c.r[5].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 2;
L_00242608:
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 1;
L_0024260C:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00242610:
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00242614:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[7].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002425C0u | kUnwind; return; } goto L_002425C0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0024262C:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));  goto L_002426C4; }
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024266C; } }
    fpu_div(c, 2u, c.f[0], c.f[3]);
    c.budget -= 6;
L_0024266C:
    c.f[1] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002426AC; } }
L_00242678:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[7].w[0] + 1u);  goto L_002426A8; }
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.budget -= 3;
L_002426A8:
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002426AC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[7].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242678u | kUnwind; return; } goto L_00242678; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 1;
L_002426C4:
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242750; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.f[1] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0024271C; } }
L_002426E4:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[5].w[0] + 8u);  if (t) { goto L_00242710; } }
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = c.f[0];
    c.budget -= 2;
L_00242710:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
L_0024271C:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13u));
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[7].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002426E4u | kUnwind; return; } goto L_002426E4; }
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 8;
L_00242750:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00242754:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00242760:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30708u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00242798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002428E4; } }
L_00242798:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 13u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002427BCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002427BCu) [[unlikely]] return; }
L_002427BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 7168u);
    set32(c.r[6], c.r[6].w[0] + 7008u);
    set32(c.r[7], 0u + 24u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002427DCu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002427DCu) [[unlikely]] return; }
L_002427DC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002428A8; } }
L_002427E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[22], c.r[3].w[0] << 3);
    set32(c.r[21], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[22].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 10;
    if (c.r[20].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[21].w[0] + 4u));  goto L_00242878; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], ld32((c.r[21].w[0])));  goto L_00242850; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242820u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00242820u) [[unlikely]] return; }
L_00242820:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242830u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00242830u) [[unlikely]] return; }
L_00242830:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024284C; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024284Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024284Cu) [[unlikely]] return; }
L_0024284C:
    set32(c.r[20], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_00242850:
    set32(c.r[2], c.r[16].w[0] + c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[2].w[0]), c.r[20].w[0]);  if (t) { goto L_00242874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242864u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00242864u) [[unlikely]] return; }
L_00242864:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242874u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00242874u) [[unlikely]] return; }
L_00242874:
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.budget -= 1;
L_00242878:
    set32(c.r[3], c.r[16].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 12u)));
    st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 20u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.budget -= 12;
L_002428A8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 13u));
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002427E8u | kUnwind; return; } goto L_002427E8; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 7008u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002428D8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002428D8u) [[unlikely]] return; }
L_002428D8:
    st8((c.r[19].w[0] + 13u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 3;
L_002428E4:
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
L_00242910:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 14u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[7].d[0] = ld8((c.r[4].w[0] + 13u));  goto L_00242928; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 15u));  if (t) { goto L_00242994; } }
L_00242928:
    c.f[1] = 0u;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0024296C; } }
L_00242938:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[8].w[0] + 1u);  goto L_00242968; }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = c.f[0];
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.budget -= 3;
L_00242968:
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0024296C:
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = c.r[8].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242938u | kUnwind; return; } goto L_00242938; }
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_00242994; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242994; } }
L_00242994:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002429A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 20;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[17].w[0]);  if (t) { goto L_00242A08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002429F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002429F8u) [[unlikely]] return; }
L_002429F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A08u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00242A08u) [[unlikely]] return; }
L_00242A08:
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 12u)));  if (t) { goto L_00242A74; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00242A54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00242A24u) [[unlikely]] return; }
L_00242A24:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A34u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00242A34u) [[unlikely]] return; }
L_00242A34:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242A50; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00242A50u) [[unlikely]] return; }
L_00242A50:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00242A54:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_00242A74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00242A64u) [[unlikely]] return; }
L_00242A64:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A74u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00242A74u) [[unlikely]] return; }
L_00242A74:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.f[0] = ld32((c.r[2].w[0] + 10072u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[21].d[0] << 56;
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 16u)));
    c.budget -= 12;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u - 128u);  goto L_00242AB4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 17u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[19].w[0] + 14u));  goto L_00242B44; }
    set32(c.r[2], 0u - 128u);
    c.budget -= 1;
L_00242AB4:
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[19].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00242B2C; } }
L_00242AC4:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00242B28; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 17u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00242B24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  goto L_00242B18; }
    st8((c.r[19].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00242B24; } }
L_00242B18:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00242B24; } }
    st8((c.r[19].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00242B24:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00242B28:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00242B2C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 13u));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242AC4u | kUnwind; return; } goto L_00242AC4; }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 14u));
    c.budget -= 1;
L_00242B44:
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[19].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[4].d[0]) { c.r[2].d[0] = ld8((c.r[19].w[0] + 14u));  goto L_00242C04; }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 13u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_00242BAC; }
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st8((c.r[19].w[0] + 15u), static_cast<std::uint8_t>(0u));  goto L_00242BC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 15u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00242BC0; } }
L_00242B80:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_00242BA8; }
    st8((c.r[19].w[0] + 15u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00242BA8:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00242BAC:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 13u));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[5].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242B80u | kUnwind; return; } goto L_00242B80; }
L_00242BC0:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 15u));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 15u));
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 32u), c.f[0]);  if (t) { goto L_00242C20; } }
L_00242C04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32644u));  goto L_00242C24; }
    set32(c.r[2], 0u + 255u);
    st8((c.r[19].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[19].w[0] + 24u), 0u);
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.budget -= 5;
L_00242C20:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 1;
L_00242C24:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[19].w[0] + 36u), c.f[0]);
    st32((c.r[19].w[0] + 40u), c.f[0]);
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_00242C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C50u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00242C50u) [[unlikely]] return; }
L_00242C50:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C60u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00242C60u) [[unlikely]] return; }
L_00242C60:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00242CA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00242C74u) [[unlikely]] return; }
L_00242C74:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C84u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00242C84u) [[unlikely]] return; }
L_00242C84:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242CA0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00242CA0u) [[unlikely]] return; }
L_00242CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00242CA4:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00242CD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 13u));
    c.f[21] = c.f[12];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[13];  if (t) { goto L_00242D40; } }
L_00242D18:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242D50; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_00242D40:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00242D18u | kUnwind; return; } goto L_00242D18; }
L_00242D50:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[6].d[0]) { c.r[4].d[0] = c.r[18].d[0] & 255ull;  goto L_00242D7C; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D68u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00242D68u) [[unlikely]] return; }
L_00242D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 255u);  if (t) { goto L_00242EA0; } }
L_00242D78:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 1;
L_00242D7C:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 8;
    if (c.r[17].d[0] == c.r[19].d[0]) { st32((c.r[16].w[0] + 4u), c.f[21]);  goto L_00242E00; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[19].w[0]);  goto L_00242DDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242DACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00242DACu) [[unlikely]] return; }
L_00242DAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242DBCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00242DBCu) [[unlikely]] return; }
L_00242DBC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242DD8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00242DD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00242DD8u) [[unlikely]] return; }
L_00242DD8:
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00242DDC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00242DFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242DECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00242DECu) [[unlikely]] return; }
L_00242DEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242DFCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00242DFCu) [[unlikely]] return; }
L_00242DFC:
    st32((c.r[16].w[0] + 4u), c.f[21]);
    c.budget -= 1;
L_00242E00:
    c.r[3].d[0] = c.r[21].d[0] << 56;
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st32((c.r[16].w[0] + 16u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 17u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[20].w[0] + 14u));  goto L_00242E4C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00242E3C; } }
    st8((c.r[20].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 16u), static_cast<std::uint8_t>(c.r[21].w[0]));  if (t) { goto L_00242E48; } }
L_00242E3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00242E48; } }
    st8((c.r[20].w[0] + 17u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.budget -= 1;
L_00242E48:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 14u));
    c.budget -= 1;
L_00242E4C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[20].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 255u);  goto L_00242E70; }
    st8((c.r[20].w[0] + 15u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 24u), c.r[19].w[0]);  if (t) { goto L_00242E80; } }
L_00242E70:
    st8((c.r[20].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[20].w[0] + 24u), 0u);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.budget -= 4;
L_00242E80:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[20].w[0] + 36u), c.f[0]);
    st32((c.r[20].w[0] + 40u), c.f[0]);
    st32((c.r[20].w[0] + 44u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 12u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[20].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00242EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00242ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00242F3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] - 3856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 7008u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F14u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00242F14u) [[unlikely]] return; }
L_00242F14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 243u, depth + 1u); else { c.pc = 0x00261E00u; return; } if (c.pc != 0x00242F20u) [[unlikely]] return; }
L_00242F20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00242F40; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F3Cu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00242F3Cu) [[unlikely]] return; }
L_00242F3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00242F40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00242F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 246u, depth + 1u); else { c.pc = 0x00261E70u; return; } if (c.pc != 0x00242F74u) [[unlikely]] return; }
L_00242F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] - 3856u);
    set32(c.r[3], 0u - 128u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00242FE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024300Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0058(c, 246u, depth + 1u); else { c.pc = 0x00261E70u; return; } if (c.pc != 0x0024300Cu) [[unlikely]] return; }
L_0024300C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] - 3856u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 128u);
    st8((c.r[18].w[0] + 13u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[18].w[0] + 14u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 28u), c.f[20]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.budget -= 20;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 44u), c.f[0]);  if (t) { goto L_0024306C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00243078; } }
L_0024306C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 254ull;
    st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00243078:
    c.r[16].d[0] = ld8((c.r[18].w[0] + 13u));
    c.budget -= 3;
    if (c.r[16].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002430C4; }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024309Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0024309Cu) [[unlikely]] return; }
L_0024309C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 7168u);
    set32(c.r[6], c.r[6].w[0] + 7008u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002430BCu); set32(c.r[7], 0u + 24u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002430BCu) [[unlikely]] return; }
L_002430BC:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002430C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002430E0:
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_00243110; }
L_002430F0:
    set32(c.r[4], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00223280u | kUnwind; return; } [[clang::musttail]] return unit_0048(c, 315u, depth); }
L_00243100:
    set32(c.r[4], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_00243150; }
L_00243110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00243134u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00243134u) [[unlikely]] return; }
L_00243134:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024317Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024317Cu) [[unlikely]] return; }
L_0024317C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002431A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002431EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431D0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 276u, depth + 1u); else { c.pc = 0x00242ED0u; return; } if (c.pc != 0x002431D0u) [[unlikely]] return; }
L_002431D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002431F0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431ECu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002431ECu) [[unlikely]] return; }
L_002431EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002431F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243210:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 10224u);  c.pc = t; return; }
L_00243220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024323Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 90u, depth + 1u); else { c.pc = 0x00241060u; return; } if (c.pc != 0x0024323Cu) [[unlikely]] return; }
L_0024323C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243248u); set32(c.r[4], ld32((c.r[2].w[0] + 10224u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00243248u) [[unlikely]] return; }
L_00243248:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024325Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0024325Cu) [[unlikely]] return; }
L_0024325C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024326Cu); set32(c.r[5], c.r[5].w[0] + 10240u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x0024326Cu) [[unlikely]] return; }
L_0024326C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243280u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00243280u) [[unlikely]] return; }
L_00243280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002432A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002432BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 108u, depth + 1u); else { c.pc = 0x002411C0u; return; } if (c.pc != 0x002432BCu) [[unlikely]] return; }
L_002432BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 48u));  goto L_002432CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00243320; } }
L_002432CC:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002432E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002432E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243300; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00243300; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243320; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00243320; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024335Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 113u, depth + 1u); else { c.pc = 0x002413E0u; return; } if (c.pc != 0x0024335Cu) [[unlikely]] return; }
L_0024335C:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243368u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x00243368u) [[unlikely]] return; }
L_00243368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243380:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241550u | kUnwind; return; } goto L_00241550; }
L_00243390:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241600u | kUnwind; return; } goto L_00241600; }
L_002433A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002433BCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 138u, depth + 1u); else { c.pc = 0x00241610u; return; } if (c.pc != 0x002433BCu) [[unlikely]] return; }
L_002433BC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002433C8u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x002433C8u) [[unlikely]] return; }
L_002433C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13632u));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002433E4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002433E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00243408; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13636u));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00243408; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243408:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_00243430; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13640u));
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_0024342C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024342C:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_00243430:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00243444; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_00243444:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243478u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00243478u) [[unlikely]] return; }
L_00243478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002434BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 280u, depth + 1u); else { c.pc = 0x00242F60u; return; } if (c.pc != 0x00243488u) [[unlikely]] return; }
L_00243488:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 3680u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13636u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
L_002434BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002434D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002434F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002434F8u) [[unlikely]] return; }
L_002434F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024353C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243508u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 280u, depth + 1u); else { c.pc = 0x00242F60u; return; } if (c.pc != 0x00243508u) [[unlikely]] return; }
L_00243508:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 3680u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13636u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
L_0024353C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024354Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 213u, depth + 1u); else { c.pc = 0x00241E30u; return; } if (c.pc != 0x0024354Cu) [[unlikely]] return; }
L_0024354C:
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 60u));
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 14u));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_00243678; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002435DC; } }
    c.f[12] = ld32((c.r[18].w[0] + 32u));
    c.budget -= 1;
L_002435DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 10072u));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_002435F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00243670; } }
L_002435F8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024360Cu); set32(c.r[6], c.r[18].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024360Cu) [[unlikely]] return; }
L_0024360C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00243634; }
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_00243670; } }
L_00243634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13636u));
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13640u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 15;
L_00243670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_002436A0; } }
L_00243678:
    c.budget -= 2;
    if (c.r[5].sd[0] <= 0) { st32((c.r[18].w[0] + 8u), c.f[20]);  goto L_002436A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243688u);  if (depth < kMaxDepth) unit_0050(c, 234u, depth + 1u); else { c.pc = 0x00242390u; return; } if (c.pc != 0x00243688u) [[unlikely]] return; }
L_00243688:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024369Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0050(c, 324u, depth + 1u); else { c.pc = 0x002436C0u; return; } if (c.pc != 0x0024369Cu) [[unlikely]] return; }
L_0024369C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002436A0:
    st32((c.r[18].w[0] + 8u), c.f[20]);
    c.budget -= 1;
L_002436A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002436C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.f[22] = c.f[12];
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[5].w[0] + 31028u));
    c.f[21] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    c.f[20] = ld32((c.r[2].w[0] + 10072u));
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.f[0]);  if (t) { goto L_00243844; } }
L_00243738:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_00243840; }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024383C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[12] = c.f[22];  if (t) { goto L_002437AC; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_002437B0; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243798; } }
    c.f[12] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 1;
L_00243798:
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002437B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002437B0; } }
L_002437AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002437B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002437C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = fp::sub(c.f[21], c.f[1]);  if (t) { goto L_0024383C; } }
L_002437C0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002437D0u); set32(c.r[6], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002437D0u) [[unlikely]] return; }
L_002437D0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  goto L_00243830; }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[4] = ld32((c.r[3].w[0] + 8u));
    c.f[3] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0024383C; } }
L_00243830:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 3;
L_0024383C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00243840:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00243844:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 13u));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00243738u | kUnwind; return; } goto L_00243738; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 60u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_002438A8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 13636u));
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13640u));
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.f[0]);  if (t) { goto L_002438F4; } }
L_002438A8:
    set32(c.r[2], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[0], c.f[21]);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 19;
L_002438F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00243920:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00243940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00243950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243964u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 282u, depth + 1u); else { c.pc = 0x00242FE0u; return; } if (c.pc != 0x00243964u) [[unlikely]] return; }
L_00243964:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 3680u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 13636u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13640u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002439B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002439FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002439E0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0050(c, 276u, depth + 1u); else { c.pc = 0x00242ED0u; return; } if (c.pc != 0x002439E0u) [[unlikely]] return; }
L_002439E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00243A00; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002439FCu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002439FCu) [[unlikely]] return; }
L_002439FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00243A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243A20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 10288u);  c.pc = t; return; }
L_00243A30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A4Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 90u, depth + 1u); else { c.pc = 0x00241060u; return; } if (c.pc != 0x00243A4Cu) [[unlikely]] return; }
L_00243A4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A58u); set32(c.r[4], ld32((c.r[2].w[0] + 10288u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00243A58u) [[unlikely]] return; }
L_00243A58:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A6Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00243A6Cu) [[unlikely]] return; }
L_00243A6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A7Cu); set32(c.r[5], c.r[5].w[0] + 10304u);  if (depth < kMaxDepth) unit_0072(c, 189u, depth + 1u); else { c.pc = 0x002C93B0u; return; } if (c.pc != 0x00243A7Cu) [[unlikely]] return; }
L_00243A7C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A90u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00243A90u) [[unlikely]] return; }
L_00243A90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243ACCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 108u, depth + 1u); else { c.pc = 0x002411C0u; return; } if (c.pc != 0x00243ACCu) [[unlikely]] return; }
L_00243ACC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 48u));  goto L_00243ADC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00243B54; } }
L_00243ADC:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00243AF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243B10; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00243B10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243B30; } }
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00243B30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243B30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00243B54; }
    c.f[1] = ld32((c.r[17].w[0] + 60u));
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00243B50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243B50:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00243B54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 113u, depth + 1u); else { c.pc = 0x002413E0u; return; } if (c.pc != 0x00243B8Cu) [[unlikely]] return; }
L_00243B8C:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B98u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 197u, depth + 1u); else { c.pc = 0x002C9470u; return; } if (c.pc != 0x00243B98u) [[unlikely]] return; }
L_00243B98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243BB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241550u | kUnwind; return; } goto L_00241550; }
L_00243BC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00241600u | kUnwind; return; } goto L_00241600; }
L_00243BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 138u, depth + 1u); else { c.pc = 0x00241610u; return; } if (c.pc != 0x00243BECu) [[unlikely]] return; }
L_00243BEC:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 202u, depth + 1u); else { c.pc = 0x002C9590u; return; } if (c.pc != 0x00243BF8u) [[unlikely]] return; }
L_00243BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00243C28u) [[unlikely]] return; }
L_00243C28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00243C74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 280u, depth + 1u); else { c.pc = 0x00242F60u; return; } if (c.pc != 0x00243C38u) [[unlikely]] return; }
L_00243C38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 3504u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13616u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13620u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13624u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13628u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 15;
L_00243C74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00243C90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CB8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00243CB8u) [[unlikely]] return; }
L_00243CB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00243D04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 280u, depth + 1u); else { c.pc = 0x00242F60u; return; } if (c.pc != 0x00243CC8u) [[unlikely]] return; }
L_00243CC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 3504u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13616u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13620u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13624u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13628u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 15;
L_00243D04:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D14u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 213u, depth + 1u); else { c.pc = 0x00241E30u; return; } if (c.pc != 0x00243D14u) [[unlikely]] return; }
L_00243D14:
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243D50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[4].w[0] + 14u));
    c.budget -= 14;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_00243D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D90u);  if (depth < kMaxDepth) unit_0051(c, 5u, depth + 1u); else { c.pc = 0x002440D0u; return; } if (c.pc != 0x00243D90u) [[unlikely]] return; }
L_00243D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00243DC0; } }
L_00243D98:
    c.budget -= 2;
    if (c.r[7].sd[0] <= 0) { st32((c.r[18].w[0] + 8u), c.f[20]);  goto L_00243DC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DA8u);  if (depth < kMaxDepth) unit_0050(c, 234u, depth + 1u); else { c.pc = 0x00242390u; return; } if (c.pc != 0x00243DA8u) [[unlikely]] return; }
L_00243DA8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DBCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0050(c, 362u, depth + 1u); else { c.pc = 0x00243DE0u; return; } if (c.pc != 0x00243DBCu) [[unlikely]] return; }
L_00243DBC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00243DC0:
    st32((c.r[18].w[0] + 8u), c.f[20]);
    c.budget -= 1;
L_00243DC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00243DE0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 48u), 0u);
    c.f[20] = ld32((c.r[2].w[0] + 10072u));
    st32((c.r[4].w[0] + 52u), 0u);
    c.f[22] = c.f[12];
    st32((c.r[4].w[0] + 56u), 0u);
    c.f[21] = 0u;
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), 0u);  if (t) { [[clang::musttail]] return unit_0051(c, 4u, depth); } }
L_00243E44:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  [[clang::musttail]] return unit_0051(c, 3u, depth); }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_0051(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.f[12] = c.f[22];  if (t) { goto L_00243EB8; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_00243EBC; }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243EA4; } }
    c.f[12] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 1;
L_00243EA4:
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[20]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00243EBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00243EBC; } }
L_00243EB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 2u, depth); } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00243ED8u); set32(c.r[6], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00243ED8u) [[unlikely]] return; }
L_00243ED8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 2u, depth); } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[21].w[0] + 20u)));  goto L_00243F48; }
    set32(c.r[4], c.r[21].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F04u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_005F(c, 115u, depth + 1u); else { c.pc = 0x0027E2A0u; return; } if (c.pc != 0x00243F04u) [[unlikely]] return; }
L_00243F04:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00243F44; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F24u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0072(c, 229u, depth + 1u); else { c.pc = 0x002C9EE0u; return; } if (c.pc != 0x00243F24u) [[unlikely]] return; }
L_00243F24:
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.budget -= 8;
L_00243F44:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.budget -= 1;
L_00243F48:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F5Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_005F(c, 117u, depth + 1u); else { c.pc = 0x0027E2F0u; return; } if (c.pc != 0x00243F5Cu) [[unlikely]] return; }
L_00243F5C:
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F8Cu); st32((c.r[29].w[0] + 188u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 117u, depth + 1u); else { c.pc = 0x0027E2F0u; return; } if (c.pc != 0x00243F8Cu) [[unlikely]] return; }
L_00243F8C:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[21].w[0] + 48u);
    st32((c.r[21].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[21].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[21].w[0] + 56u), c.f[0]);
    c.f[6] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[21].w[0] + 60u), c.f[6]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[3] = ld32((c.r[21].w[0] + 52u));
    c.f[6] = fp::add(c.f[0], c.f[6]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[5] = ld32((c.r[21].w[0] + 56u));
    c.f[4] = ld32((c.r[29].w[0] + 184u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[21].w[0] + 48u), c.f[0]);
    c.f[4] = fp::add(c.f[4], c.f[5]);
    st32((c.r[21].w[0] + 52u), c.f[2]);
    st32((c.r[21].w[0] + 56u), c.f[4]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243FF0u); st32((c.r[21].w[0] + 60u), c.f[6]);  if (depth < kMaxDepth) unit_0072(c, 207u, depth + 1u); else { c.pc = 0x002C95F0u; return; } if (c.pc != 0x00243FF0u) [[unlikely]] return; }
L_00243FF0:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 4;
    [[clang::musttail]] return unit_0051(c, 1u, depth);
}

}
