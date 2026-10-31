#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D9[4096] = {
    1, 2, 0, 3, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 12, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65,
    0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0,
    0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253,
    0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0,
    275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 306,
    0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 365,
    0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00D9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00464000;
    case 2u: goto L_00464004;
    case 3u: goto L_0046400C;
    case 4u: goto L_00464010;
    case 5u: goto L_00464020;
    case 6u: goto L_0046402C;
    case 7u: goto L_00464038;
    case 8u: goto L_00464040;
    case 9u: goto L_00464050;
    case 10u: goto L_00464054;
    case 11u: goto L_00464070;
    case 12u: goto L_00464084;
    case 13u: goto L_00464090;
    case 14u: goto L_0046409C;
    case 15u: goto L_004640A4;
    case 16u: goto L_004640B4;
    case 17u: goto L_004640C0;
    case 18u: goto L_004640CC;
    case 19u: goto L_004640D4;
    case 20u: goto L_004640E4;
    case 21u: goto L_004640E8;
    case 22u: goto L_00464124;
    case 23u: goto L_00464134;
    case 24u: goto L_00464150;
    case 25u: goto L_00464164;
    case 26u: goto L_00464170;
    case 27u: goto L_00464180;
    case 28u: goto L_004641C0;
    case 29u: goto L_004641D0;
    case 30u: goto L_004641E0;
    case 31u: goto L_00464210;
    case 32u: goto L_0046426C;
    case 33u: goto L_00464274;
    case 34u: goto L_00464280;
    case 35u: goto L_0046429C;
    case 36u: goto L_004642E4;
    case 37u: goto L_00464320;
    case 38u: goto L_00464330;
    case 39u: goto L_00464360;
    case 40u: goto L_004643B0;
    case 41u: goto L_004643C8;
    case 42u: goto L_004643E0;
    case 43u: goto L_0046440C;
    case 44u: goto L_00464480;
    case 45u: goto L_004644A4;
    case 46u: goto L_004644C0;
    case 47u: goto L_004644E4;
    case 48u: goto L_004644FC;
    case 49u: goto L_00464520;
    case 50u: goto L_00464530;
    case 51u: goto L_00464554;
    case 52u: goto L_00464560;
    case 53u: goto L_00464570;
    case 54u: goto L_00464580;
    case 55u: goto L_004645B8;
    case 56u: goto L_004645D0;
    case 57u: goto L_00464608;
    case 58u: goto L_00464638;
    case 59u: goto L_00464650;
    case 60u: goto L_0046467C;
    case 61u: goto L_00464690;
    case 62u: goto L_004646E0;
    case 63u: goto L_004646E8;
    case 64u: goto L_004646F4;
    case 65u: goto L_004646FC;
    case 66u: goto L_00464708;
    case 67u: goto L_0046471C;
    case 68u: goto L_00464730;
    case 69u: goto L_00464740;
    case 70u: goto L_00464760;
    case 71u: goto L_00464780;
    case 72u: goto L_004647D8;
    case 73u: goto L_004647FC;
    case 74u: goto L_00464808;
    case 75u: goto L_00464820;
    case 76u: goto L_00464830;
    case 77u: goto L_00464850;
    case 78u: goto L_0046489C;
    case 79u: goto L_004648EC;
    case 80u: goto L_00464900;
    case 81u: goto L_00464984;
    case 82u: goto L_004649A4;
    case 83u: goto L_004649F0;
    case 84u: goto L_00464A10;
    case 85u: goto L_00464AA0;
    case 86u: goto L_00464AD8;
    case 87u: goto L_00464AE8;
    case 88u: goto L_00464B64;
    case 89u: goto L_00464B8C;
    case 90u: goto L_00464BB0;
    case 91u: goto L_00464BE8;
    case 92u: goto L_00464BF8;
    case 93u: goto L_00464C98;
    case 94u: goto L_00464CBC;
    case 95u: goto L_00464CE0;
    case 96u: goto L_00464D38;
    case 97u: goto L_00464D50;
    case 98u: goto L_00464DF0;
    case 99u: goto L_00464E30;
    case 100u: goto L_00464EA0;
    case 101u: goto L_00464EE8;
    case 102u: goto L_00464EFC;
    case 103u: goto L_00464F10;
    case 104u: goto L_00464F24;
    case 105u: goto L_00464F90;
    case 106u: goto L_00465000;
    case 107u: goto L_00465048;
    case 108u: goto L_0046505C;
    case 109u: goto L_00465070;
    case 110u: goto L_00465084;
    case 111u: goto L_004650F0;
    case 112u: goto L_00465104;
    case 113u: goto L_00465120;
    case 114u: goto L_0046521C;
    case 115u: goto L_00465238;
    case 116u: goto L_00465324;
    case 117u: goto L_00465390;
    case 118u: goto L_004653C4;
    case 119u: goto L_004653CC;
    case 120u: goto L_0046542C;
    case 121u: goto L_00465460;
    case 122u: goto L_004654E0;
    case 123u: goto L_00465514;
    case 124u: goto L_0046551C;
    case 125u: goto L_0046557C;
    case 126u: goto L_004655B0;
    case 127u: goto L_00465630;
    case 128u: goto L_0046563C;
    case 129u: goto L_004656C4;
    case 130u: goto L_00465750;
    case 131u: goto L_00465760;
    case 132u: goto L_004657A0;
    case 133u: goto L_004657E4;
    case 134u: goto L_00465818;
    case 135u: goto L_004658D0;
    case 136u: goto L_00465914;
    case 137u: goto L_00465948;
    case 138u: goto L_00465A00;
    case 139u: goto L_00465A2C;
    case 140u: goto L_00465A60;
    case 141u: goto L_00465AC0;
    case 142u: goto L_00465AEC;
    case 143u: goto L_00465B20;
    case 144u: goto L_00465B80;
    case 145u: goto L_00465BD0;
    case 146u: goto L_00465BE8;
    case 147u: goto L_00465C10;
    case 148u: goto L_00465C20;
    case 149u: goto L_00465C3C;
    case 150u: goto L_00465C48;
    case 151u: goto L_00465C64;
    case 152u: goto L_00465C70;
    case 153u: goto L_00465C88;
    case 154u: goto L_00465D00;
    case 155u: goto L_00465D10;
    case 156u: goto L_00465D88;
    case 157u: goto L_00465DA0;
    case 158u: goto L_00465DC8;
    case 159u: goto L_00465DD8;
    case 160u: goto L_00465DF4;
    case 161u: goto L_00465E00;
    case 162u: goto L_00465E14;
    case 163u: goto L_00465E1C;
    case 164u: goto L_00465E2C;
    case 165u: goto L_00465EA4;
    case 166u: goto L_00465EB0;
    case 167u: goto L_00465EF8;
    case 168u: goto L_00465F00;
    case 169u: goto L_00465F20;
    case 170u: goto L_00465F2C;
    case 171u: goto L_00465F68;
    case 172u: goto L_00465F78;
    case 173u: goto L_00465F94;
    case 174u: goto L_00465FB4;
    case 175u: goto L_00465FC0;
    case 176u: goto L_00465FF8;
    case 177u: goto L_00466034;
    case 178u: goto L_00466040;
    case 179u: goto L_0046607C;
    case 180u: goto L_0046609C;
    case 181u: goto L_004660A8;
    case 182u: goto L_004660E4;
    case 183u: goto L_004660F4;
    case 184u: goto L_004660FC;
    case 185u: goto L_0046611C;
    case 186u: goto L_00466128;
    case 187u: goto L_00466164;
    case 188u: goto L_00466174;
    case 189u: goto L_00466194;
    case 190u: goto L_004661A4;
    case 191u: goto L_004661C0;
    case 192u: goto L_004661D4;
    case 193u: goto L_004661E4;
    case 194u: goto L_00466230;
    case 195u: goto L_00466278;
    case 196u: goto L_004662B4;
    case 197u: goto L_004662E0;
    case 198u: goto L_004662F4;
    case 199u: goto L_00466304;
    case 200u: goto L_00466320;
    case 201u: goto L_00466334;
    case 202u: goto L_00466344;
    case 203u: goto L_00466360;
    case 204u: goto L_00466380;
    case 205u: goto L_004663D8;
    case 206u: goto L_004663E8;
    case 207u: goto L_004663FC;
    case 208u: goto L_0046643C;
    case 209u: goto L_0046644C;
    case 210u: goto L_00466464;
    case 211u: goto L_0046646C;
    case 212u: goto L_0046647C;
    case 213u: goto L_004664A8;
    case 214u: goto L_004664C8;
    case 215u: goto L_004664E4;
    case 216u: goto L_004664F8;
    case 217u: goto L_00466508;
    case 218u: goto L_00466524;
    case 219u: goto L_00466560;
    case 220u: goto L_004665A4;
    case 221u: goto L_004665B0;
    case 222u: goto L_004665C0;
    case 223u: goto L_004665E4;
    case 224u: goto L_004665F4;
    case 225u: goto L_00466610;
    case 226u: goto L_00466620;
    case 227u: goto L_00466660;
    case 228u: goto L_004666A8;
    case 229u: goto L_004666B4;
    case 230u: goto L_004666EC;
    case 231u: goto L_004666FC;
    case 232u: goto L_00466730;
    case 233u: goto L_00466740;
    case 234u: goto L_0046677C;
    case 235u: goto L_00466788;
    case 236u: goto L_004667A4;
    case 237u: goto L_004667B4;
    case 238u: goto L_004667D0;
    case 239u: goto L_004667E4;
    case 240u: goto L_004667F4;
    case 241u: goto L_00466808;
    case 242u: goto L_00466818;
    case 243u: goto L_00466834;
    case 244u: goto L_00466880;
    case 245u: goto L_00466890;
    case 246u: goto L_004668AC;
    case 247u: goto L_004668E0;
    case 248u: goto L_00466984;
    case 249u: goto L_0046699C;
    case 250u: goto L_004669C4;
    case 251u: goto L_004669D4;
    case 252u: goto L_004669F0;
    case 253u: goto L_004669FC;
    case 254u: goto L_00466A10;
    case 255u: goto L_00466A18;
    case 256u: goto L_00466A28;
    case 257u: goto L_00466A60;
    case 258u: goto L_00466A78;
    case 259u: goto L_00466ABC;
    case 260u: goto L_00466AE8;
    case 261u: goto L_00466AF4;
    case 262u: goto L_00466B3C;
    case 263u: goto L_00466B48;
    case 264u: goto L_00466B58;
    case 265u: goto L_00466B70;
    case 266u: goto L_00466B80;
    case 267u: goto L_00466BB8;
    case 268u: goto L_00466BC8;
    case 269u: goto L_00466BF4;
    case 270u: goto L_00466C04;
    case 271u: goto L_00466C24;
    case 272u: goto L_00466C40;
    case 273u: goto L_00466C58;
    case 274u: goto L_00466C6C;
    case 275u: goto L_00466C80;
    case 276u: goto L_00466C90;
    case 277u: goto L_00466C9C;
    case 278u: goto L_00466CA8;
    case 279u: goto L_00466D08;
    case 280u: goto L_00466D84;
    case 281u: goto L_00466D98;
    case 282u: goto L_00466DA4;
    case 283u: goto L_00466DB8;
    case 284u: goto L_00466DC8;
    case 285u: goto L_00466DDC;
    case 286u: goto L_00466DE8;
    case 287u: goto L_00466DFC;
    case 288u: goto L_00466E24;
    case 289u: goto L_00466E30;
    case 290u: goto L_00466E3C;
    case 291u: goto L_00466E48;
    case 292u: goto L_00466E54;
    case 293u: goto L_00466E88;
    case 294u: goto L_00466F14;
    case 295u: goto L_00466F30;
    case 296u: goto L_00466F80;
    case 297u: goto L_00466F88;
    case 298u: goto L_00466F98;
    case 299u: goto L_00466FA4;
    case 300u: goto L_00466FAC;
    case 301u: goto L_00466FBC;
    case 302u: goto L_00466FD0;
    case 303u: goto L_00466FD8;
    case 304u: goto L_00466FE8;
    case 305u: goto L_00466FF4;
    case 306u: goto L_00466FFC;
    case 307u: goto L_0046700C;
    case 308u: goto L_00467018;
    case 309u: goto L_00467034;
    case 310u: goto L_00467094;
    case 311u: goto L_004670B0;
    case 312u: goto L_004670F8;
    case 313u: goto L_00467114;
    case 314u: goto L_00467138;
    case 315u: goto L_00467154;
    case 316u: goto L_0046717C;
    case 317u: goto L_004671C0;
    case 318u: goto L_004671EC;
    case 319u: goto L_004671F8;
    case 320u: goto L_00467238;
    case 321u: goto L_00467270;
    case 322u: goto L_00467284;
    case 323u: goto L_004672A0;
    case 324u: goto L_004672C0;
    case 325u: goto L_004672EC;
    case 326u: goto L_0046734C;
    case 327u: goto L_004673A8;
    case 328u: goto L_0046743C;
    case 329u: goto L_00467454;
    case 330u: goto L_00467480;
    case 331u: goto L_00467490;
    case 332u: goto L_004674B4;
    case 333u: goto L_004674C4;
    case 334u: goto L_004674E4;
    case 335u: goto L_0046751C;
    case 336u: goto L_00467554;
    case 337u: goto L_00467570;
    case 338u: goto L_00467578;
    case 339u: goto L_004675A0;
    case 340u: goto L_004675B4;
    case 341u: goto L_004675C4;
    case 342u: goto L_004675D8;
    case 343u: goto L_004675E8;
    case 344u: goto L_00467604;
    case 345u: goto L_004676B0;
    case 346u: goto L_004676DC;
    case 347u: goto L_0046781C;
    case 348u: goto L_00467834;
    case 349u: goto L_0046785C;
    case 350u: goto L_004678F4;
    case 351u: goto L_004679C0;
    case 352u: goto L_004679D8;
    case 353u: goto L_00467A04;
    case 354u: goto L_00467A14;
    case 355u: goto L_00467A40;
    case 356u: goto L_00467A50;
    case 357u: goto L_00467A70;
    case 358u: goto L_00467AAC;
    case 359u: goto L_00467AC8;
    case 360u: goto L_00467B04;
    case 361u: goto L_00467B20;
    case 362u: goto L_00467B28;
    case 363u: goto L_00467B58;
    case 364u: goto L_00467B6C;
    case 365u: goto L_00467B7C;
    case 366u: goto L_00467B90;
    case 367u: goto L_00467BA0;
    case 368u: goto L_00467BBC;
    case 369u: goto L_00467C28;
    case 370u: goto L_00467CB0;
    case 371u: goto L_00467D64;
    case 372u: goto L_00467DF8;
    case 373u: goto L_00467EC4;
    case 374u: goto L_00467F28;
    case 375u: goto L_00467F40;
    case 376u: goto L_00467F6C;
    case 377u: goto L_00467F7C;
    case 378u: goto L_00467FA4;
    case 379u: goto L_00467FB4;
    case 380u: goto L_00467FD4;
    default: bad_entry(c, 0x00464000u); return;
    }
L_00464000:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00464004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046400Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 359u, depth + 1u); else { c.pc = 0x00463EC0u; return; } if (c.pc != 0x0046400Cu) [[unlikely]] return; }
L_0046400C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00464010:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00464024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464020u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 359u, depth + 1u); else { c.pc = 0x00463EC0u; return; } if (c.pc != 0x00464020u) [[unlikely]] return; }
L_00464020:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00464024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046402Cu);  if (depth < kMaxDepth) unit_00D9(c, 29u, depth + 1u); else { c.pc = 0x004641D0u; return; } if (c.pc != 0x0046402Cu) [[unlikely]] return; }
L_0046402C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464038u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D9(c, 27u, depth + 1u); else { c.pc = 0x00464180u; return; } if (c.pc != 0x00464038u) [[unlikely]] return; }
L_00464038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 26u, depth + 1u); else { c.pc = 0x00464170u; return; } if (c.pc != 0x00464040u) [[unlikely]] return; }
L_00464040:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464050u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 24u, depth + 1u); else { c.pc = 0x00464150u; return; } if (c.pc != 0x00464050u) [[unlikely]] return; }
L_00464050:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00464054:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004640B8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00464074; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464070u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 359u, depth + 1u); else { c.pc = 0x00463EC0u; return; } if (c.pc != 0x00464070u) [[unlikely]] return; }
L_00464070:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00464074:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00464088; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464084u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 359u, depth + 1u); else { c.pc = 0x00463EC0u; return; } if (c.pc != 0x00464084u) [[unlikely]] return; }
L_00464084:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00464088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464090u);  if (depth < kMaxDepth) unit_00D9(c, 29u, depth + 1u); else { c.pc = 0x004641D0u; return; } if (c.pc != 0x00464090u) [[unlikely]] return; }
L_00464090:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046409Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D9(c, 27u, depth + 1u); else { c.pc = 0x00464180u; return; } if (c.pc != 0x0046409Cu) [[unlikely]] return; }
L_0046409C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004640A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 26u, depth + 1u); else { c.pc = 0x00464170u; return; } if (c.pc != 0x004640A4u) [[unlikely]] return; }
L_004640A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004640B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 24u, depth + 1u); else { c.pc = 0x00464150u; return; } if (c.pc != 0x004640B4u) [[unlikely]] return; }
L_004640B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004640B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004640C0u);  if (depth < kMaxDepth) unit_00D9(c, 29u, depth + 1u); else { c.pc = 0x004641D0u; return; } if (c.pc != 0x004640C0u) [[unlikely]] return; }
L_004640C0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004640CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D8(c, 352u, depth + 1u); else { c.pc = 0x00463DA0u; return; } if (c.pc != 0x004640CCu) [[unlikely]] return; }
L_004640CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004640D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 26u, depth + 1u); else { c.pc = 0x00464170u; return; } if (c.pc != 0x004640D4u) [[unlikely]] return; }
L_004640D4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004640E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004640E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004640E4u) [[unlikely]] return; }
L_004640E4:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_004640E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00464124; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00464124; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00464124; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00464124; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00464124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464124u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00464124u) [[unlikely]] return; }
L_00464124:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00464138; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464134u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00464134u) [[unlikely]] return; }
L_00464134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00464138:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00464150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00464164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464164u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00464164u) [[unlikely]] return; }
L_00464164:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00464170:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_00464180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004641C0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004641C4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004641C0; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004641C0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004641C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004641C0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004641C0u) [[unlikely]] return; }
L_004641C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004641C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004641D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004641E0:
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_00464210:
    set32(c.r[29], c.r[29].w[0] - 128u);
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
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00464274; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046426Cu); set32(c.r[5], c.r[5].w[0] - 32057u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0046426Cu) [[unlikely]] return; }
L_0046426C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464274u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00464274u) [[unlikely]] return; }
L_00464274:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464280u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00464280u) [[unlikely]] return; }
L_00464280:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_004642A8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046429Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0046429Cu) [[unlikely]] return; }
L_0046429C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_004642A8:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004642C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_004642CC; } }
L_004642C8:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004642CC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004642E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x004642E4u) [[unlikely]] return; }
L_004642E4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004642F4; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004642F4:
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
L_00464320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 32008u);  c.pc = t; return; }
L_00464330:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00464358; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_00464358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00464360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004643C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 30032u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004643B0u); st32((c.r[2].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00D8(c, 304u, depth + 1u); else { c.pc = 0x00463840u; return; } if (c.pc != 0x004643B0u) [[unlikely]] return; }
L_004643B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004643CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004643C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004643C8u) [[unlikely]] return; }
L_004643C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004643CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004643E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046440Cu); set32(c.r[7], c.r[7].w[0] - 31992u);  if (depth < kMaxDepth) unit_00D8(c, 307u, depth + 1u); else { c.pc = 0x004638C0u; return; } if (c.pc != 0x0046440Cu) [[unlikely]] return; }
L_0046440C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 30032u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[3].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00464480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29924u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0046449C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004644AC; } }
L_0046449C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004644A4u);  if (depth < kMaxDepth) unit_00D8(c, 339u, depth + 1u); else { c.pc = 0x00463BF0u; return; } if (c.pc != 0x004644A4u) [[unlikely]] return; }
L_004644A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_004644AC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004644C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004644E4u); set32(c.r[4], c.r[4].w[0] - 32024u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004644E4u) [[unlikely]] return; }
L_004644E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004644F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00464504; } }
L_004644F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004644FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 340u, depth + 1u); else { c.pc = 0x00463C10u; return; } if (c.pc != 0x004644FCu) [[unlikely]] return; }
L_004644FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00464504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00464520:
    set32(c.r[2], ld32((c.r[28].w[0] - 29932u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00464530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29924u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0046454C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00464554; } }
L_0046454C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464554u);  if (depth < kMaxDepth) unit_00D8(c, 343u, depth + 1u); else { c.pc = 0x00463C60u; return; } if (c.pc != 0x00464554u) [[unlikely]] return; }
L_00464554:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00464560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29924u)));  c.pc = t; return; }
L_00464570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 31944u);  c.pc = t; return; }
L_00464580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 376u), c.f[12]);
    set32(c.r[2], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004645A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004645A8; } }
L_004645A4:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_004645A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004645B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 313u, depth + 1u); else { c.pc = 0x0046BD80u; return; } if (c.pc != 0x004645B8u) [[unlikely]] return; }
L_004645B8:
    st32((c.r[16].w[0] + 380u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004645D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 408u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 404u)));
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_00464610; } }
L_00464608:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00464610:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 20u)));  goto L_00464630; }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00464608u | kUnwind; return; } goto L_00464608; }
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 1;
L_00464630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464638u); set32(c.r[4], c.r[4].w[0] + 396u);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x00464638u) [[unlikely]] return; }
L_00464638:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00464650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 404u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 408u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046467Cu); set32(c.r[4], c.r[4].w[0] + 396u);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x0046467Cu) [[unlikely]] return; }
L_0046467C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00464690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 36u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 44u), c.f[0]);  if (t) { goto L_004646FC; } }
L_004646E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004646E8u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00D9(c, 75u, depth + 1u); else { c.pc = 0x00464820u; return; } if (c.pc != 0x004646E8u) [[unlikely]] return; }
L_004646E8:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004646F4u); set32(c.r[4], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00D9(c, 71u, depth + 1u); else { c.pc = 0x00464780u; return; } if (c.pc != 0x004646F4u) [[unlikely]] return; }
L_004646F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004646FCu); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00D9(c, 70u, depth + 1u); else { c.pc = 0x00464760u; return; } if (c.pc != 0x004646FCu) [[unlikely]] return; }
L_004646FC:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464708u); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00D9(c, 69u, depth + 1u); else { c.pc = 0x00464740u; return; } if (c.pc != 0x00464708u) [[unlikely]] return; }
L_00464708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004646E0u | kUnwind; return; } goto L_004646E0; } }
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046471Cu); set32(c.r[5], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_00D9(c, 68u, depth + 1u); else { c.pc = 0x00464730u; return; } if (c.pc != 0x0046471Cu) [[unlikely]] return; }
L_0046471C:
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00464730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00464740:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00464760:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00464780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0046480C; }
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004647D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004647D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004647D8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004647D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004647D8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004647D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004647D8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004647D8u) [[unlikely]] return; }
L_004647D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00464800; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004647FC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004647FC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004647FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 138u, depth + 1u); else { c.pc = 0x00115B20u; return; } if (c.pc != 0x004647FCu) [[unlikely]] return; }
L_004647FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00464800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464808u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00464808u) [[unlikely]] return; }
L_00464808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0046480C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00464820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00464830:
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0] + 32u));  c.pc = t; return; }
L_00464850:
    set32(c.r[29], c.r[29].w[0] - 160u);
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
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 15;
    { const bool t = c.r[18].sd[0] <= 0; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_004649B8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 296u)));
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046489Cu); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 37u, depth + 1u); else { c.pc = 0x0046C6C0u; return; } if (c.pc != 0x0046489Cu) [[unlikely]] return; }
L_0046489C:
    c.f[0] = c.r[18].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.f[22] = 0u;
    c.budget -= 18;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_004649B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[22];  if (t) { goto L_004649AC; } }
L_004648EC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464900u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00DA(c, 184u, depth + 1u); else { c.pc = 0x0046A640u; return; } if (c.pc != 0x00464900u) [[unlikely]] return; }
L_00464900:
    c.f[8] = ld32((c.r[20].w[0] + 240u));
    c.f[14] = ld32((c.r[29].w[0] + 144u));
    c.f[11] = ld32((c.r[20].w[0] + 192u));
    c.f[13] = ld32((c.r[29].w[0] + 148u));
    c.f[10] = ld32((c.r[20].w[0] + 208u));
    c.f[12] = ld32((c.r[29].w[0] + 152u));
    c.f[9] = ld32((c.r[20].w[0] + 224u));
    c.f[7] = ld32((c.r[20].w[0] + 196u));
    c.f[6] = ld32((c.r[20].w[0] + 212u));
    c.f[5] = ld32((c.r[20].w[0] + 228u));
    c.f[4] = ld32((c.r[20].w[0] + 244u));
    c.f[3] = ld32((c.r[20].w[0] + 200u));
    c.f[2] = ld32((c.r[20].w[0] + 216u));
    c.f[1] = ld32((c.r[20].w[0] + 232u));
    c.f[0] = ld32((c.r[20].w[0] + 248u));
    c.facc = fp::add(c.f[20], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[10]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[12], c.f[9]));
    c.facc = fp::add(c.f[20], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[6]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[12], c.f[5]));
    c.facc = fp::add(c.f[20], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[14], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[13], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[1]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[8]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 116u), c.f[4]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464984u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_00C8(c, 6u, depth + 1u); else { c.pc = 0x004200D0u; return; } if (c.pc != 0x00464984u) [[unlikely]] return; }
L_00464984:
    set32(c.r[3], ld32((c.r[20].w[0] + 296u)));
    set32(c.r[4], c.r[20].w[0] + 288u);
    set32(c.r[2], ld32((c.r[20].w[0] + 300u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004649A4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DB(c, 23u, depth + 1u); else { c.pc = 0x0046C190u; return; } if (c.pc != 0x004649A4u) [[unlikely]] return; }
L_004649A4:
    c.f[22] = fp::add(c.f[22], c.f[21]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_004649AC:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004648ECu | kUnwind; return; } goto L_004648EC; }
L_004649B8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004649F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 296u)));
    c.f[4] = ld32((c.r[28].w[0] - 32640u));
    set32(c.r[6], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);  if (t) { goto L_00464A64; } }
L_00464A10:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 16;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = c.r[6].d[0] << 32;  goto L_00464A5C; }
    c.f[4] = c.f[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.budget -= 3;
L_00464A5C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[6], c.r[2].w[0] + 32u);
    c.budget -= 2;
L_00464A64:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00464A10u | kUnwind; return; } goto L_00464A10; }
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00464A98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 17920u);
    c.budget -= 2;
L_00464A98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00464AA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[13];
    c.f[21] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464AD8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x00464AD8u) [[unlikely]] return; }
L_00464AD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00464B90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464AE8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x00464AE8u) [[unlikely]] return; }
L_00464AE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_00464AFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00464B8C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_00464AFC:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.f[0] = 0u;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = fp::mul(c.f[21], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_00464B70; }
    fpu_div(c, 0u, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 80u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464B64u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 158u, depth + 1u); else { c.pc = 0x004022F0u; return; } if (c.pc != 0x00464B64u) [[unlikely]] return; }
L_00464B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00464B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 1;
L_00464B70:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[0], c.f[1]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464B8Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 330u, depth + 1u); else { c.pc = 0x004FA8D0u; return; } if (c.pc != 0x00464B8Cu) [[unlikely]] return; }
L_00464B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00464B90:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00464BB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[13];
    c.f[21] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464BE8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x00464BE8u) [[unlikely]] return; }
L_00464BE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00464CC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464BF8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x00464BF8u) [[unlikely]] return; }
L_00464BF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] << 3);  goto L_00464C0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00464CBC; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 1;
L_00464C0C:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = fp::mul(c.f[21], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 15;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::sub(c.f[2], c.f[1]);  goto L_00464CA4; }
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 80u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    fpu_div(c, 2u, c.f[20], c.f[0]);
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[28].w[0] - 29908u));
    c.facc = fp::add(c.f[0], c.f[21]);
    c.f[0] = fp::sub(c.f[1], c.f[21]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464C98u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 158u, depth + 1u); else { c.pc = 0x004022F0u; return; } if (c.pc != 0x00464C98u) [[unlikely]] return; }
L_00464C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00464CBC; } }
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 1;
L_00464CA4:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464CBCu); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00FE(c, 343u, depth + 1u); else { c.pc = 0x004FAA80u; return; } if (c.pc != 0x00464CBCu) [[unlikely]] return; }
L_00464CBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00464CC0:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00464CE0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00464DFC; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[21].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464D38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x00464D38u) [[unlikely]] return; }
L_00464D38:
    set32(c.r[22], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_00464DE0; } }
L_00464D50:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_00464DC0; }
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[3].w[0] + 4u));  goto L_00464D88; }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[19].w[0]));  goto L_00464D90; }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 1;
L_00464D88:
    st32((c.r[20].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.budget -= 2;
L_00464D90:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[3].w[0] + 4u));  goto L_00464DB8; }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00464DBC; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 1;
L_00464DB8:
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 1;
L_00464DBC:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00464DC0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[18].d[0]) { set32(c.r[6], ld32((c.r[21].w[0] + 284u)));  goto L_00464DE4; }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[23].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_00464DDC; }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00464DDC:
    set32(c.r[18], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_00464DE0:
    set32(c.r[6], ld32((c.r[21].w[0] + 284u)));
    c.budget -= 1;
L_00464DE4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464DF0u); set32(c.r[5], c.r[21].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x00464DF0u) [[unlikely]] return; }
L_00464DF0:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00464D50u | kUnwind; return; } goto L_00464D50; }
L_00464DFC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00464E30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_00464E70; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 328u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00464E70:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.f[12] = c.f[21];  goto L_00464E90; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::sub(c.f[0], c.f[21]);
    c.f[12] = c.f[21];
    c.budget -= 5;
L_00464E90:
    set32(c.r[6], c.r[29].w[0] + 76u);
    set32(c.r[7], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464EA0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 113u, depth + 1u); else { c.pc = 0x00465120u; return; } if (c.pc != 0x00464EA0u) [[unlikely]] return; }
L_00464EA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.f[20] = 0u;
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  goto L_00464EE0; }
    c.f[1] = fp::sub(c.f[21], c.f[2]);
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
L_00464EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464EE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 137u, depth + 1u); else { c.pc = 0x0046E240u; return; } if (c.pc != 0x00464EE8u) [[unlikely]] return; }
L_00464EE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.f[23] = c.f[0];
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464EFCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00DB(c, 137u, depth + 1u); else { c.pc = 0x0046E240u; return; } if (c.pc != 0x00464EFCu) [[unlikely]] return; }
L_00464EFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.f[22] = c.f[0];
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464F10u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 137u, depth + 1u); else { c.pc = 0x0046E240u; return; } if (c.pc != 0x00464F10u) [[unlikely]] return; }
L_00464F10:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.f[21] = c.f[0];
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00464F24u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00DB(c, 137u, depth + 1u); else { c.pc = 0x0046E240u; return; } if (c.pc != 0x00464F24u) [[unlikely]] return; }
L_00464F24:
    c.f[2] = fp::sub(c.f[0], c.f[22]);
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] ^ 1ull;
    c.f[1] = 0u;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.facc = fp::add(c.f[1], c.f[22]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    c.f[0] = fp::sub(c.f[21], c.f[23]);
    c.facc = fp::add(c.f[1], c.f[23]);
    st32((c.r[4].w[0]), c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00464F90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_00464FD0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 328u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00464FD0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.f[12] = c.f[21];  goto L_00464FF0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[21] = fp::sub(c.f[0], c.f[21]);
    c.f[12] = c.f[21];
    c.budget -= 5;
L_00464FF0:
    set32(c.r[6], c.r[29].w[0] + 76u);
    set32(c.r[7], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465000u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 113u, depth + 1u); else { c.pc = 0x00465120u; return; } if (c.pc != 0x00465000u) [[unlikely]] return; }
L_00465000:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.f[20] = 0u;
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  goto L_00465040; }
    c.f[1] = fp::sub(c.f[21], c.f[2]);
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
L_00465040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465048u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x00465048u) [[unlikely]] return; }
L_00465048:
    c.f[23] = ld32((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046505Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x0046505Cu) [[unlikely]] return; }
L_0046505C:
    c.f[22] = ld32((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465070u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x00465070u) [[unlikely]] return; }
L_00465070:
    c.f[21] = ld32((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465084u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x00465084u) [[unlikely]] return; }
L_00465084:
    c.f[2] = ld32((c.r[2].w[0]));
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.f[1] = 0u;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.f[2] = fp::sub(c.f[2], c.f[22]);
    c.r[3].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.facc = fp::add(c.f[1], c.f[22]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    c.f[0] = fp::sub(c.f[21], c.f[23]);
    c.facc = fp::add(c.f[1], c.f[23]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[0]));
    st32((c.r[4].w[0]), c.f[2]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004650F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465104u); set32(c.r[6], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_00D9(c, 105u, depth + 1u); else { c.pc = 0x00464F90u; return; } if (c.pc != 0x00465104u) [[unlikely]] return; }
L_00465104:
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00465120:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 19;
    { const bool t = c.r[22].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_0046518C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 328u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 280u)));  goto L_00465190; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 4;
L_0046518C:
    set32(c.r[2], ld32((c.r[21].w[0] + 280u)));
    c.budget -= 1;
L_00465190:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[3], ld32((c.r[21].w[0] + 272u)));
    set32(c.r[5], c.r[21].w[0] + 256u);
    set32(c.r[7], ld32((c.r[21].w[0] + 264u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[2].w[0] >> 7);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 276u)));
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 280u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 272u)));
    set32(c.r[7], ld32((c.r[21].w[0] + 264u)));
    set32(c.r[8], c.r[2].w[0] >> 7);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0] + 276u)));
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046521Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x0046521Cu) [[unlikely]] return; }
L_0046521C:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[30], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_00465314; } }
L_00465238:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_004652AC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_0046527C; }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00465278; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00465278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004652AC; } }
L_00465278:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0046527C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004652AC; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004652AC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_004652AC; } }
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004652AC:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[20].d[0]) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_004652F0; }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[18].w[0]), c.r[5].w[0]);  goto L_004652EC; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004652E8; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[5].w[0]);  if (t) { goto L_00465358; } }
L_004652E8:
    st32((c.r[18].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_004652EC:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_004652F0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[23].d[0]) { set32(c.r[6], ld32((c.r[21].w[0] + 284u)));  goto L_00465318; }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_00465310; }
    c.r[16].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00465310:
    set32(c.r[23], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_00465314:
    set32(c.r[6], ld32((c.r[21].w[0] + 284u)));
    c.budget -= 1;
L_00465318:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465324u); set32(c.r[5], c.r[21].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x00465324u) [[unlikely]] return; }
L_00465324:
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00465238u | kUnwind; return; } goto L_00465238; }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_0046535C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 328u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00465358; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    c.budget -= 4;
L_00465358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0046535C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00465390:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0046540C; } }
L_004653C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004653CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 135u, depth + 1u); else { c.pc = 0x004658D0u; return; } if (c.pc != 0x004653CCu) [[unlikely]] return; }
L_004653CC:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0046540C; }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00465408; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_004654B0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 364u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_004654B0; } }
L_00465408:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0046540C:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 324u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 328u)));  goto L_00465490; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00465470; } }
L_0046542C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 360u)));  goto L_00465448; }
    set32(c.r[2], ld32((c.r[21].w[0] + 344u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_00465458; } }
L_00465448:
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00465458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465460u);  if (depth < kMaxDepth) unit_0102(c, 291u, depth + 1u); else { c.pc = 0x00509FE0u; return; } if (c.pc != 0x00465460u) [[unlikely]] return; }
L_00465460:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00465470; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00465470:
    set32(c.r[3], ld32((c.r[21].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 356u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046542Cu | kUnwind; return; } goto L_0046542C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;  if (t) { goto L_004654A8; } }
L_00465490:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[21].w[0] + 332u);  goto L_004654A0; }
    set32(c.r[2], c.r[21].w[0] + 348u);
    c.budget -= 1;
L_004654A0:
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004654A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004653C4u | kUnwind; return; } goto L_004653C4; }
L_004654B0:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004654E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0046555C; } }
L_00465514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046551Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 132u, depth + 1u); else { c.pc = 0x004657A0u; return; } if (c.pc != 0x0046551Cu) [[unlikely]] return; }
L_0046551C:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0046555C; }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00465558; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00465600; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 364u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_00465600; } }
L_00465558:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0046555C:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 324u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 328u)));  goto L_004655E0; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004655C0; } }
L_0046557C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 360u)));  goto L_00465598; }
    set32(c.r[2], ld32((c.r[21].w[0] + 344u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_004655A8; } }
L_00465598:
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_004655A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004655B0u);  if (depth < kMaxDepth) unit_0102(c, 290u, depth + 1u); else { c.pc = 0x00509FA0u; return; } if (c.pc != 0x004655B0u) [[unlikely]] return; }
L_004655B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004655C0; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_004655C0:
    set32(c.r[3], ld32((c.r[21].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 356u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046557Cu | kUnwind; return; } goto L_0046557C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;  if (t) { goto L_004655F8; } }
L_004655E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[21].w[0] + 348u);  goto L_004655F0; }
    set32(c.r[2], c.r[21].w[0] + 332u);
    c.budget -= 1;
L_004655F0:
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004655F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00465514u | kUnwind; return; } goto L_00465514; }
L_00465600:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00465630:
    set32(c.r[3], ld32((c.r[4].w[0] + 360u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00465690; } }
L_0046563C:
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[8], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[8].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] << 32;  goto L_00465688; }
    c.r[7].d[0] = ld8((c.r[8].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00465684; } }
    set32(c.r[7], ld32((c.r[8].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[8].w[0] + 24u)));  goto L_0046566C; }
    set32(c.r[7], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 1;
L_0046566C:
    set32(c.r[7], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00465684; } }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
L_00465684:
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_00465688:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_00465690:
    set32(c.r[8], ld32((c.r[4].w[0] + 356u)));
    c.r[9].d[0] = c.r[3].d[0] << 32;
    set32(c.r[7], ld32((c.r[4].w[0] + 360u)));
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 8;
    if (c.r[9].d[0] == c.r[7].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 344u)));  goto L_00465718; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[7].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046563Cu | kUnwind; return; } goto L_0046563C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00465718; } }
L_004656C4:
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[8], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 5;
    if (c.r[8].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] << 32;  goto L_00465710; }
    c.r[7].d[0] = ld8((c.r[8].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0046570C; } }
    set32(c.r[7], ld32((c.r[8].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[8].w[0] + 24u)));  goto L_004656F4; }
    set32(c.r[7], ld32((c.r[8].w[0] + 28u)));
    c.budget -= 1;
L_004656F4:
    set32(c.r[7], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0046570C; } }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
L_0046570C:
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.budget -= 1;
L_00465710:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_00465718:
    set32(c.r[8], ld32((c.r[4].w[0] + 340u)));
    c.r[9].d[0] = c.r[3].d[0] << 32;
    set32(c.r[7], ld32((c.r[4].w[0] + 344u)));
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 8;
    if (c.r[9].d[0] == c.r[7].d[0]) { set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);  goto L_00465744; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[7].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004656C4u | kUnwind; return; } goto L_004656C4; }
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_00465744:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00465750:
    set32(c.r[3], ld32((c.r[4].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 356u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_00465760:
    set32(c.r[2], ld32((c.r[4].w[0] + 340u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] - c.r[2].w[0]);  goto L_00465784; }
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00465794; } }
L_00465784:
    set32(c.r[2], ld32((c.r[4].w[0] + 360u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00465794:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004657A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 328u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 324u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00465858; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00465838; } }
L_004657E4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 360u)));  goto L_00465800; }
    set32(c.r[2], ld32((c.r[19].w[0] + 344u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_00465810; } }
L_00465800:
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00465810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465818u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 290u, depth + 1u); else { c.pc = 0x00509FA0u; return; } if (c.pc != 0x00465818u) [[unlikely]] return; }
L_00465818:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00465838; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00465834; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004658AC; } }
L_00465834:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00465838:
    set32(c.r[3], ld32((c.r[19].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 356u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004657E4u | kUnwind; return; } goto L_004657E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004658AC; } }
L_00465858:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 348u);  goto L_00465864; }
    set32(c.r[4], c.r[19].w[0] + 332u);
    c.budget -= 1;
L_00465864:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_00465880; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0046587C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0046587C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00465880:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_004658A0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0046589C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046589C:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004658A0:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_004658AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004658D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 328u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 324u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00465988; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00465968; } }
L_00465914:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 360u)));  goto L_00465930; }
    set32(c.r[2], ld32((c.r[19].w[0] + 344u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_00465940; } }
L_00465930:
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00465940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465948u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 291u, depth + 1u); else { c.pc = 0x00509FE0u; return; } if (c.pc != 0x00465948u) [[unlikely]] return; }
L_00465948:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00465968; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00465964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_004659D8; } }
L_00465964:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00465968:
    set32(c.r[3], ld32((c.r[19].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 356u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00465914u | kUnwind; return; } goto L_00465914; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004659D8; } }
L_00465988:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 332u);  goto L_00465994; }
    set32(c.r[4], c.r[19].w[0] + 348u);
    c.budget -= 1;
L_00465994:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 28u)));  if (t) { goto L_004659B0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004659AC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004659AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004659B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  goto L_004659CC; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_004659C8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004659C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004659CC:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_004659D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00465A00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 324u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00465A90; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00465A70; } }
L_00465A2C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 360u)));  goto L_00465A48; }
    set32(c.r[2], ld32((c.r[18].w[0] + 344u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_00465A58; } }
L_00465A48:
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00465A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465A60u);  if (depth < kMaxDepth) unit_0102(c, 290u, depth + 1u); else { c.pc = 0x00509FA0u; return; } if (c.pc != 0x00465A60u) [[unlikely]] return; }
L_00465A60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00465A70; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00465A70:
    set32(c.r[3], ld32((c.r[18].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00465A2Cu | kUnwind; return; } goto L_00465A2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00465AA8; } }
L_00465A90:
    set32(c.r[3], ld32((c.r[18].w[0] + 328u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] + 348u);  goto L_00465AA4; }
    set32(c.r[2], c.r[18].w[0] + 332u);
    c.budget -= 1;
L_00465AA4:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_00465AA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00465AC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 324u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00465B50; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00465B30; } }
L_00465AEC:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 360u)));  goto L_00465B08; }
    set32(c.r[2], ld32((c.r[18].w[0] + 344u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_00465B18; } }
L_00465B08:
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00465B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465B20u);  if (depth < kMaxDepth) unit_0102(c, 291u, depth + 1u); else { c.pc = 0x00509FE0u; return; } if (c.pc != 0x00465B20u) [[unlikely]] return; }
L_00465B20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00465B30; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00465B30:
    set32(c.r[3], ld32((c.r[18].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00465AECu | kUnwind; return; } goto L_00465AEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00465B68; } }
L_00465B50:
    set32(c.r[3], ld32((c.r[18].w[0] + 328u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] + 332u);  goto L_00465B64; }
    set32(c.r[2], c.r[18].w[0] + 348u);
    c.budget -= 1;
L_00465B64:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_00465B68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00465B80:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00465CD8; } }
    st8((c.r[18].w[0] + 306u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 306u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00465CDC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 388u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 388u), 0u);  goto L_00465BD4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00465BD0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00465BD0u) [[unlikely]] return; }
L_00465BD0:
    st32((c.r[18].w[0] + 388u), 0u);
    c.budget -= 1;
L_00465BD4:
    set32(c.r[4], ld32((c.r[18].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 384u)));  goto L_00465BEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465BE8u);  if (depth < kMaxDepth) unit_00C6(c, 212u, depth + 1u); else { c.pc = 0x004198F0u; return; } if (c.pc != 0x00465BE8u) [[unlikely]] return; }
L_00465BE8:
    set32(c.r[17], ld32((c.r[18].w[0] + 384u)));
    c.budget -= 1;
L_00465BEC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32644u));  goto L_00465C4C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00465C40; }
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00465C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465C10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00465C10u) [[unlikely]] return; }
L_00465C10:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465C20u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00465C20u) [[unlikely]] return; }
L_00465C20:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00465C3C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00465C3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00465C3Cu) [[unlikely]] return; }
L_00465C3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00465C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465C48u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00465C48u) [[unlikely]] return; }
L_00465C48:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 1;
L_00465C4C:
    st32((c.r[18].w[0] + 384u), 0u);
    st32((c.r[18].w[0] + 312u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465C64u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x00465C64u) [[unlikely]] return; }
L_00465C64:
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00465CC4; } }
L_00465C70:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[29].w[0] + 164u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465C88u); st32((c.r[29].w[0] + 168u), 0u);  if (depth < kMaxDepth) unit_0005(c, 148u, depth + 1u); else { c.pc = 0x00115FB0u; return; } if (c.pc != 0x00465C88u) [[unlikely]] return; }
L_00465C88:
    c.f[1] = ld32((c.r[18].w[0] + 312u));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 31848u));  goto L_00465CBC; }
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[18].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[18].w[0] + 312u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[18].w[0] + 316u), c.f[0]);
    st32((c.r[18].w[0] + 320u), c.f[20]);
    c.f[0] = ld32((c.r[28].w[0] - 31848u));
    c.budget -= 8;
L_00465CBC:
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_00465CC4:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00465C70u | kUnwind; return; } goto L_00465C70; }
L_00465CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00465CDC:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00465D00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 305u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00465D10:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 412u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 416u), 0u);
    st32((c.r[4].w[0] + 420u), 0u);
    st32((c.r[4].w[0] + 424u), 0u);
    st32((c.r[4].w[0] + 428u), 0u);
    st32((c.r[4].w[0] + 432u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 23;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00465D70; } }
    set32(c.r[23], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00465D70:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 388u), 0u);  goto L_00465D8C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00465D88u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00465D88u) [[unlikely]] return; }
L_00465D88:
    st32((c.r[20].w[0] + 388u), 0u);
    c.budget -= 1;
L_00465D8C:
    set32(c.r[4], ld32((c.r[20].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 384u)));  goto L_00465DA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465DA0u);  if (depth < kMaxDepth) unit_00C6(c, 212u, depth + 1u); else { c.pc = 0x004198F0u; return; } if (c.pc != 0x00465DA0u) [[unlikely]] return; }
L_00465DA0:
    set32(c.r[17], ld32((c.r[20].w[0] + 384u)));
    c.budget -= 1;
L_00465DA4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 384u), 0u);  goto L_00465E04; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00465DF8; }
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00465DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465DC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00465DC8u) [[unlikely]] return; }
L_00465DC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465DD8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00465DD8u) [[unlikely]] return; }
L_00465DD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00465DF4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00465DF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00465DF4u) [[unlikely]] return; }
L_00465DF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00465DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465E00u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00465E00u) [[unlikely]] return; }
L_00465E00:
    st32((c.r[20].w[0] + 384u), 0u);
    c.budget -= 1;
L_00465E04:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[20].w[0] + 306u));  goto L_00465E44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465E14u); set32(c.r[4], c.r[20].w[0] + 288u);  if (depth < kMaxDepth) unit_00DB(c, 41u, depth + 1u); else { c.pc = 0x0046C810u; return; } if (c.pc != 0x00465E14u) [[unlikely]] return; }
L_00465E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00465E30; } }
L_00465E1C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465E2Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 77u, depth + 1u); else { c.pc = 0x00464850u; return; } if (c.pc != 0x00465E2Cu) [[unlikely]] return; }
L_00465E2C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00465E30:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00465E1Cu | kUnwind; return; } goto L_00465E1C; }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 306u));
    c.budget -= 1;
L_00465E44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  goto L_00465E54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00466528; } }
L_00465E54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 452u)));  goto L_00465E9C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 364u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00465E70; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00465E70:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00465E80; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00465E80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00465E98; } }
    st8((c.r[20].w[0] + 412u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 420u), c.r[2].w[0]);  if (t) { goto L_00466528; } }
L_00465E98:
    set32(c.r[17], ld32((c.r[20].w[0] + 452u)));
    c.budget -= 1;
L_00465E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[20].w[0] + 448u);  if (t) { goto L_00465EBC; } }
L_00465EA4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465EB0u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00465EB0u) [[unlikely]] return; }
L_00465EB0:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_00465EBC:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00465EA4u | kUnwind; return; } goto L_00465EA4; }
    set32(c.r[2], c.r[20].w[0] + 448u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[5], c.r[20].w[0] + 436u);
    set32(c.r[2], ld32((c.r[20].w[0] + 452u)));
    set32(c.r[6], c.r[29].w[0] + 180u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465EF8u); st32((c.r[29].w[0] + 180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x00465EF8u) [[unlikely]] return; }
L_00465EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465F00u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 236u, depth + 1u); else { c.pc = 0x00509940u; return; } if (c.pc != 0x00465F00u) [[unlikely]] return; }
L_00465F00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00465F14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00465F58; } }
L_00465F14:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00465F20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00465F20u) [[unlikely]] return; }
L_00465F20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 26616u);  if (t) { goto L_00465F3C; } }
L_00465F2C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00465F3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00465F48; } }
L_00465F3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00465F2Cu | kUnwind; return; } goto L_00465F2C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00465F48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00465F58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00465F58; } }
L_00465F58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 204u), c.r[16].w[0]);  if (t) { goto L_00465F78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465F68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00465F68u) [[unlikely]] return; }
L_00465F68:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465F78u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00465F78u) [[unlikely]] return; }
L_00465F78:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[20].w[0] + 380u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00465F94u); st32((c.r[20].w[0] + 376u), c.f[0]);  if (depth < kMaxDepth) unit_0102(c, 237u, depth + 1u); else { c.pc = 0x00509970u; return; } if (c.pc != 0x00465F94u) [[unlikely]] return; }
L_00465F94:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_00465FA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00465FEC; } }
L_00465FA8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00465FB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00465FB4u) [[unlikely]] return; }
L_00465FB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_00465FD0; } }
L_00465FC0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00465FD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00465FDC; } }
L_00465FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00465FC0u | kUnwind; return; } goto L_00465FC0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00465FDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_00465FEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00465FEC; } }
L_00465FEC:
    c.r[30].d[0] = ld16((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00466364; } }
L_00465FF8:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 212u)));  goto L_0046600C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00466018; } }
L_0046600C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00466018:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00466028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0046606C; } }
L_00466028:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00466034u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00466034u) [[unlikely]] return; }
L_00466034:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20928u);  if (t) { goto L_00466050; } }
L_00466040:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00466050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0046605C; } }
L_00466050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00466040u | kUnwind; return; } goto L_00466040; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046605C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0046606C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0046606C; } }
L_0046606C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00466364; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046607Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 236u, depth + 1u); else { c.pc = 0x00509940u; return; } if (c.pc != 0x0046607Cu) [[unlikely]] return; }
L_0046607C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00466090; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004660D4; } }
L_00466090:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046609Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046609Cu) [[unlikely]] return; }
L_0046609C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 26208u);  if (t) { goto L_004660B8; } }
L_004660A8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_004660B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004660C4; } }
L_004660B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004660A8u | kUnwind; return; } goto L_004660A8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004660C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004660D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004660D4; } }
L_004660D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 200u), c.r[16].w[0]);  if (t) { goto L_004660F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004660E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004660E4u) [[unlikely]] return; }
L_004660E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004660F4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004660F4u) [[unlikely]] return; }
L_004660F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004660FCu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 236u, depth + 1u); else { c.pc = 0x00509940u; return; } if (c.pc != 0x004660FCu) [[unlikely]] return; }
L_004660FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00466110; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00466154; } }
L_00466110:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0046611Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0046611Cu) [[unlikely]] return; }
L_0046611C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20904u);  if (t) { goto L_00466138; } }
L_00466128:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00466138; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00466144; } }
L_00466138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00466128u | kUnwind; return; } goto L_00466128; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00466144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00466154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00466154; } }
L_00466154:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 196u), c.r[16].w[0]);  if (t) { goto L_00466174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466164u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00466164u) [[unlikely]] return; }
L_00466164:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466174u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00466174u) [[unlikely]] return; }
L_00466174:
    set32(c.r[21], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[21].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 200u)));  goto L_004661E8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 288u), c.r[21].w[0]);  goto L_004661C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466194u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00466194u) [[unlikely]] return; }
L_00466194:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004661A4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004661A4u) [[unlikely]] return; }
L_004661A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004661C0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004661C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004661C0u) [[unlikely]] return; }
L_004661C0:
    st32((c.r[17].w[0] + 288u), c.r[21].w[0]);
    c.budget -= 1;
L_004661C4:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_004661E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004661D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004661D4u) [[unlikely]] return; }
L_004661D4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004661E4u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004661E4u) [[unlikely]] return; }
L_004661E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_004661E8:
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[13] = ld32((c.r[20].w[0] + 464u));  goto L_0046629C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[13] = ld32((c.r[20].w[0] + 460u));  goto L_00466260; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[13] = ld32((c.r[20].w[0] + 468u));  goto L_00466218; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 200u)));  if (t) { goto L_004662B8; } }
L_00466218:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466230u); set32(c.r[6], c.r[6].w[0] - 31883u);  if (depth < kMaxDepth) unit_00DA(c, 104u, depth + 1u); else { c.pc = 0x00468FD0u; return; } if (c.pc != 0x00466230u) [[unlikely]] return; }
L_00466230:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 305u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004662B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004662B4; } }
    c.f[0] = ld32((c.r[20].w[0] + 468u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 31976u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24336u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004662B4; } }
L_00466260:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466278u); set32(c.r[6], c.r[6].w[0] - 31903u);  if (depth < kMaxDepth) unit_00DA(c, 104u, depth + 1u); else { c.pc = 0x00468FD0u; return; } if (c.pc != 0x00466278u) [[unlikely]] return; }
L_00466278:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24332u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004662B4; } }
    c.f[0] = ld32((c.r[20].w[0] + 460u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 31968u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 24332u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004662B4; } }
L_0046629C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004662B4u); set32(c.r[6], c.r[6].w[0] - 31920u);  if (depth < kMaxDepth) unit_00DA(c, 104u, depth + 1u); else { c.pc = 0x00468FD0u; return; } if (c.pc != 0x004662B4u) [[unlikely]] return; }
L_004662B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_004662B8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 28u));
    c.f[13] = ld32((c.r[2].w[0] + 24u));
    c.f[14] = ld32((c.r[2].w[0] + 16u));
    c.f[15] = ld32((c.r[2].w[0] + 20u));
    c.f[16] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004662E0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00DA(c, 201u, depth + 1u); else { c.pc = 0x0046AAD0u; return; } if (c.pc != 0x004662E0u) [[unlikely]] return; }
L_004662E0:
    set32(c.r[16], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 200u)));  goto L_00466324; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004662F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004662F4u) [[unlikely]] return; }
L_004662F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466304u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00466304u) [[unlikely]] return; }
L_00466304:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00466320; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00466320u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00466320u) [[unlikely]] return; }
L_00466320:
    set32(c.r[16], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_00466324:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00466360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466334u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00466334u) [[unlikely]] return; }
L_00466334:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466344u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00466344u) [[unlikely]] return; }
L_00466344:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00466360; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00466360u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00466360u) [[unlikely]] return; }
L_00466360:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00466364:
    c.r[2].d[0] = c.r[18].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00465FF8u | kUnwind; return; } goto L_00465FF8; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466380u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x00466380u) [[unlikely]] return; }
L_00466380:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 24u)));  goto L_004663D0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 364u)));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004663A0; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_004663A0:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004663B4; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_004663B4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { st8((c.r[20].w[0] + 412u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_004663CC; }
    c.r[2].d[0] = c.r[3].d[0] ^ 0ull;
    st8((c.r[20].w[0] + 412u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[20].w[0] + 420u), c.r[2].w[0]);
    c.budget -= 4;
L_004663CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_004663D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004663D8u); st32((c.r[29].w[0] + 172u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004663D8u) [[unlikely]] return; }
L_004663D8:
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004663E8u); st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004663E8u) [[unlikely]] return; }
L_004663E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 384u), c.r[2].w[0]);  goto L_00466400; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004663FCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 218u, depth + 1u); else { c.pc = 0x00419980u; return; } if (c.pc != 0x004663FCu) [[unlikely]] return; }
L_004663FC:
    st32((c.r[20].w[0] + 384u), c.r[2].w[0]);
    c.budget -= 1;
L_00466400:
    c.f[0] = ld32((c.r[20].w[0] + 380u));
    st32((c.r[20].w[0] + 424u), c.f[0]);
    c.budget -= 4;
    { const bool t = c.r[23].d[0] == 0ull; st8((c.r[20].w[0] + 304u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00466464; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 388u)));  goto L_00466450; }
    set32(c.r[2], ld32((c.r[20].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046644C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 31867u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046643Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 105u, depth + 1u); else { c.pc = 0x00424CA0u; return; } if (c.pc != 0x0046643Cu) [[unlikely]] return; }
L_0046643C:
    st32((c.r[20].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046644Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 215u, depth + 1u); else { c.pc = 0x004033D0u; return; } if (c.pc != 0x0046644Cu) [[unlikely]] return; }
L_0046644C:
    set32(c.r[2], ld32((c.r[20].w[0] + 388u)));
    c.budget -= 1;
L_00466450:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  goto L_0046645C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0046645C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466464u); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x00466464u) [[unlikely]] return; }
L_00466464:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 392u)));
    c.budget -= 2;
L_0046646C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 148u)));  if (t) { goto L_00466480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046647Cu);  if (depth < kMaxDepth) unit_008A(c, 37u, depth + 1u); else { c.pc = 0x00329760u; return; } if (c.pc != 0x0046647Cu) [[unlikely]] return; }
L_0046647C:
    st32((c.r[20].w[0] + 392u), c.r[2].w[0]);
    c.budget -= 1;
L_00466480:
    set32(c.r[16], ld32((c.r[20].w[0] + 392u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 168u)));  goto L_004664DC; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_004664BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004664A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x004664A8u) [[unlikely]] return; }
L_004664A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
L_004664BC:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004664C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004664C8u) [[unlikely]] return; }
L_004664C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 5;
L_004664DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004664E4u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004664E4u) [[unlikely]] return; }
L_004664E4:
    set32(c.r[16], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00466528; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004664F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004664F8u) [[unlikely]] return; }
L_004664F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466508u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00466508u) [[unlikely]] return; }
L_00466508:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00466524; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00466524u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00466524u) [[unlikely]] return; }
L_00466524:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00466528:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00466560:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004668AC; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004665A4u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_00DA(c, 317u, depth + 1u); else { c.pc = 0x0046BED0u; return; } if (c.pc != 0x004665A4u) [[unlikely]] return; }
L_004665A4:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004665B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004665B0u) [[unlikely]] return; }
L_004665B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004665D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004665C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x004665C0u) [[unlikely]] return; }
L_004665C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22096u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004665D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 168u), c.r[16].w[0]);  if (t) { goto L_004665F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004665E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004665E4u) [[unlikely]] return; }
L_004665E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004665F4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004665F4u) [[unlikely]] return; }
L_004665F4:
    c.f[0] = ld32((c.r[21].w[0] + 380u));
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[21].w[0] + 376u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466610u); set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  if (depth < kMaxDepth) unit_0083(c, 213u, depth + 1u); else { c.pc = 0x0030D7A0u; return; } if (c.pc != 0x00466610u) [[unlikely]] return; }
L_00466610:
    set32(c.r[2], ld32((c.r[21].w[0] + 388u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466620u); set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (depth < kMaxDepth) unit_0083(c, 213u, depth + 1u); else { c.pc = 0x0030D7A0u; return; } if (c.pc != 0x00466620u) [[unlikely]] return; }
L_00466620:
    set32(c.r[3], ld32((c.r[21].w[0] + 328u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[22].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[22].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 452u)));  goto L_00466644; }
    set32(c.r[3], c.r[21].w[0] + 448u);
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.r[3].w[0]);  if (t) { goto L_0046664C; } }
L_00466644:
    set32(c.r[4], c.r[29].w[0] + 152u);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    c.budget -= 2;
L_0046664C:
    c.r[3].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00466834; } }
L_00466660:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_0046667C; }
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_00466688; } }
L_0046667C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
L_00466688:
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_0046669C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004666E0; } }
L_0046669C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004666A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004666A8u) [[unlikely]] return; }
L_004666A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20928u);  if (t) { goto L_004666C4; } }
L_004666B4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_004666C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004666D0; } }
L_004666C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004666B4u | kUnwind; return; } goto L_004666B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004666D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_004666E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004666E0; } }
L_004666E0:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004666ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004666ECu) [[unlikely]] return; }
L_004666EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00466720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004666FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x004666FCu) [[unlikely]] return; }
L_004666FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22176u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 16u), 0u);
    st32((c.r[18].w[0] + 20u), 0u);
    st32((c.r[18].w[0] + 24u), 0u);
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00466720:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[18].w[0]);  if (t) { goto L_00466740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466730u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00466730u) [[unlikely]] return; }
L_00466730:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466740u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00466740u) [[unlikely]] return; }
L_00466740:
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 24u));
    st8((c.r[5].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046677Cu); set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  if (depth < kMaxDepth) unit_0083(c, 213u, depth + 1u); else { c.pc = 0x0030D7A0u; return; } if (c.pc != 0x0046677Cu) [[unlikely]] return; }
L_0046677C:
    set32(c.r[5], ld32((c.r[19].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466788u); set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  if (depth < kMaxDepth) unit_0083(c, 213u, depth + 1u); else { c.pc = 0x0030D7A0u; return; } if (c.pc != 0x00466788u) [[unlikely]] return; }
L_00466788:
    set32(c.r[17], ld32((c.r[19].w[0] + 288u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 160u)));  goto L_004667F8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004667D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004667A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004667A4u) [[unlikely]] return; }
L_004667A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004667B4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004667B4u) [[unlikely]] return; }
L_004667B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004667D0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004667D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004667D0u) [[unlikely]] return; }
L_004667D0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004667D4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[19].w[0] + 288u), 0u);  if (t) { goto L_004667F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004667E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004667E4u) [[unlikely]] return; }
L_004667E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004667F4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004667F4u) [[unlikely]] return; }
L_004667F4:
    set32(c.r[17], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_004667F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00466834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466808u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00466808u) [[unlikely]] return; }
L_00466808:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466818u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00466818u) [[unlikely]] return; }
L_00466818:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00466834; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00466834u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00466834u) [[unlikely]] return; }
L_00466834:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 452u)));  goto L_00466854; }
    c.r[4].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], c.r[21].w[0] + 448u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_00466864; } }
L_00466854:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00466864:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00466660u | kUnwind; return; } goto L_00466660; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_004668B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466880u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00466880u) [[unlikely]] return; }
L_00466880:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466890u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00466890u) [[unlikely]] return; }
L_00466890:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004668AC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004668ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004668ACu) [[unlikely]] return; }
L_004668AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004668B0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004668E0:
    set32(c.r[29], c.r[29].w[0] - 1648u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 412u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st8((c.r[29].w[0] + 411u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 412u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 416u), 0u);
    st32((c.r[4].w[0] + 420u), 0u);
    st32((c.r[4].w[0] + 424u), 0u);
    st32((c.r[4].w[0] + 428u), 0u);
    st32((c.r[4].w[0] + 432u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 33;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 384u), 0u);  if (t) { goto L_0046696C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[29].w[0] + 384u), c.r[3].w[0]);
    c.budget -= 2;
L_0046696C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 388u), 0u);  goto L_00466988; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00466984u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00466984u) [[unlikely]] return; }
L_00466984:
    st32((c.r[20].w[0] + 388u), 0u);
    c.budget -= 1;
L_00466988:
    set32(c.r[4], ld32((c.r[20].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 384u)));  goto L_004669A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046699Cu);  if (depth < kMaxDepth) unit_00C6(c, 212u, depth + 1u); else { c.pc = 0x004198F0u; return; } if (c.pc != 0x0046699Cu) [[unlikely]] return; }
L_0046699C:
    set32(c.r[17], ld32((c.r[20].w[0] + 384u)));
    c.budget -= 1;
L_004669A0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 412u)));  goto L_00466A00; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004669F4; }
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004669F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004669C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004669C4u) [[unlikely]] return; }
L_004669C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004669D4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004669D4u) [[unlikely]] return; }
L_004669D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004669F0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004669F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004669F0u) [[unlikely]] return; }
L_004669F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004669F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004669FCu);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004669FCu) [[unlikely]] return; }
L_004669FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 412u)));
    c.budget -= 1;
L_00466A00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[20].w[0] + 384u), 0u);  if (t) { goto L_00466A3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466A10u); set32(c.r[4], c.r[20].w[0] + 288u);  if (depth < kMaxDepth) unit_00DB(c, 41u, depth + 1u); else { c.pc = 0x0046C810u; return; } if (c.pc != 0x00466A10u) [[unlikely]] return; }
L_00466A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00466A2C; } }
L_00466A18:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466A28u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_00D9(c, 77u, depth + 1u); else { c.pc = 0x00464850u; return; } if (c.pc != 0x00466A28u) [[unlikely]] return; }
L_00466A28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00466A2C:
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 412u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00466A18u | kUnwind; return; } goto L_00466A18; }
L_00466A3C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 306u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  [[clang::musttail]] return unit_00DA(c, 71u, depth); }
    set32(c.r[4], c.r[29].w[0] + 640u);
    set32(c.r[5], c.r[20].w[0] + 256u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 368u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466A60u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x00466A60u) [[unlikely]] return; }
L_00466A60:
    set32(c.r[22], ld32((c.r[29].w[0] + 644u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 660u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 640u)));  if (t) { goto L_00466AAC; } }
L_00466A78:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_00466A8C; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 2;
L_00466A8C:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[18].d[0]) { set32(c.r[6], ld32((c.r[20].w[0] + 284u)));  goto L_00466AB0; }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[23].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_00466AA8; }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_00466AA8:
    set32(c.r[18], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_00466AAC:
    set32(c.r[6], ld32((c.r[20].w[0] + 284u)));
    c.budget -= 1;
L_00466AB0:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466ABCu); set32(c.r[5], c.r[20].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x00466ABCu) [[unlikely]] return; }
L_00466ABC:
    set32(c.r[2], ld32((c.r[29].w[0] + 560u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00466A78u | kUnwind; return; } goto L_00466A78; }
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 452u)));  goto L_00466AE0; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[20].w[0] + 452u)));
    c.budget -= 3;
L_00466AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[20].w[0] + 448u);  if (t) { goto L_00466B00; } }
L_00466AE8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466AF4u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00466AF4u) [[unlikely]] return; }
L_00466AF4:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_00466B00:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00466AE8u | kUnwind; return; } goto L_00466AE8; }
    set32(c.r[2], c.r[20].w[0] + 448u);
    set32(c.r[4], c.r[29].w[0] + 1544u);
    st32((c.r[29].w[0] + 1536u), c.r[2].w[0]);
    set32(c.r[5], c.r[20].w[0] + 436u);
    set32(c.r[2], ld32((c.r[20].w[0] + 452u)));
    set32(c.r[6], c.r[29].w[0] + 1540u);
    set32(c.r[7], c.r[29].w[0] + 1536u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466B3Cu); st32((c.r[29].w[0] + 1540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0004(c, 31u, depth + 1u); else { c.pc = 0x001103E0u; return; } if (c.pc != 0x00466B3Cu) [[unlikely]] return; }
L_00466B3C:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466B48u); st32((c.r[29].w[0] + 1508u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00466B48u) [[unlikely]] return; }
L_00466B48:
    st32((c.r[29].w[0] + 1504u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466B58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00466B58u) [[unlikely]] return; }
L_00466B58:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 1504u)));  goto L_00466B78; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466B70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x00466B70u) [[unlikely]] return; }
L_00466B70:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 1504u)));
    c.budget -= 2;
L_00466B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466B80u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00466B80u) [[unlikely]] return; }
L_00466B80:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[20].w[0] + 8u);  if (t) { goto L_00466B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00466B9C; } }
L_00466B98:
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00466B9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00466BB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_00466BB8; } }
L_00466BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466BB8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00466BB8u) [[unlikely]] return; }
L_00466BB8:
    st32((c.r[29].w[0] + 1596u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466BC8u); set32(c.r[5], c.r[29].w[0] + 1596u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x00466BC8u) [[unlikely]] return; }
L_00466BC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 1596u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[13] = ld32((c.r[20].w[0] + 468u));  goto L_00466C28; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466BF4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00466BF4u) [[unlikely]] return; }
L_00466BF4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466C04u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00466C04u) [[unlikely]] return; }
L_00466C04:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00466C24; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466C24u); set32(c.r[5], c.r[29].w[0] + 1596u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00466C24u) [[unlikely]] return; }
L_00466C24:
    c.f[13] = ld32((c.r[20].w[0] + 468u));
    c.budget -= 1;
L_00466C28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466C40u); set32(c.r[6], c.r[6].w[0] - 31883u);  if (depth < kMaxDepth) unit_00DA(c, 104u, depth + 1u); else { c.pc = 0x00468FD0u; return; } if (c.pc != 0x00466C40u) [[unlikely]] return; }
L_00466C40:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 1428u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466C58u); st32((c.r[29].w[0] + 1424u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DA(c, 83u, depth + 1u); else { c.pc = 0x004688C0u; return; } if (c.pc != 0x00466C58u) [[unlikely]] return; }
L_00466C58:
    set32(c.r[4], c.r[29].w[0] + 1380u);
    set32(c.r[5], 0u + 6u);
    st32((c.r[29].w[0] + 1460u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466C6Cu); st32((c.r[29].w[0] + 1376u), 0u);  if (depth < kMaxDepth) unit_00DA(c, 83u, depth + 1u); else { c.pc = 0x004688C0u; return; } if (c.pc != 0x00466C6Cu) [[unlikely]] return; }
L_00466C6C:
    set32(c.r[4], c.r[29].w[0] + 1332u);
    set32(c.r[5], 0u + 6u);
    st32((c.r[29].w[0] + 1412u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466C80u); st32((c.r[29].w[0] + 1328u), 0u);  if (depth < kMaxDepth) unit_00DA(c, 83u, depth + 1u); else { c.pc = 0x004688C0u; return; } if (c.pc != 0x00466C80u) [[unlikely]] return; }
L_00466C80:
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], c.r[29].w[0] + 1296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466C90u); st32((c.r[29].w[0] + 1364u), 0u);  if (depth < kMaxDepth) unit_00DA(c, 79u, depth + 1u); else { c.pc = 0x00468860u; return; } if (c.pc != 0x00466C90u) [[unlikely]] return; }
L_00466C90:
    set32(c.r[4], c.r[29].w[0] + 1524u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466C9Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 78u, depth + 1u); else { c.pc = 0x00468850u; return; } if (c.pc != 0x00466C9Cu) [[unlikely]] return; }
L_00466C9C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466CA8u); set32(c.r[4], c.r[29].w[0] + 1296u);  if (depth < kMaxDepth) unit_00DA(c, 73u, depth + 1u); else { c.pc = 0x00468800u; return; } if (c.pc != 0x00466CA8u) [[unlikely]] return; }
L_00466CA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 1264u), 0u);
    set32(c.r[4], c.r[29].w[0] + 1200u);
    st32((c.r[29].w[0] + 1268u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 1272u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1240u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 1276u), 0u);
    st32((c.r[29].w[0] + 1280u), 0u);
    st32((c.r[29].w[0] + 1284u), 0u);
    st8((c.r[29].w[0] + 1288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 1256u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 1232u), 0u);
    st32((c.r[29].w[0] + 1236u), 0u);
    st32((c.r[29].w[0] + 1244u), 0u);
    st32((c.r[29].w[0] + 1248u), 0u);
    st32((c.r[29].w[0] + 1252u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 328u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[18].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466D08u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 283u, depth + 1u); else { c.pc = 0x00509EE0u; return; } if (c.pc != 0x00466D08u) [[unlikely]] return; }
L_00466D08:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[30], c.r[29].w[0] + 1200u);  if (t) { goto L_00466D14; } }
    c.r[30].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00466D14:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 608u);  goto L_00467084; }
    set32(c.r[2], ld32((c.r[20].w[0] + 364u)));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00466D34; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00466D34:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 1u);  goto L_00466D48; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_00466D48:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00466E08; } }
    c.r[16].d[0] = c.r[3].d[0] ^ 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 1424u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[4], c.r[20].w[0] + 256u);  goto L_00466DC0; }
    set32(c.r[4], c.r[20].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466D84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 72u, depth + 1u); else { c.pc = 0x004687C0u; return; } if (c.pc != 0x00466D84u) [[unlikely]] return; }
L_00466D84:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1428u);
    set32(c.r[5], c.r[29].w[0] + 1592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466D98u); st32((c.r[29].w[0] + 1592u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00466D98u) [[unlikely]] return; }
L_00466D98:
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466DA4u); set32(c.r[4], c.r[20].w[0] + 256u);  if (depth < kMaxDepth) unit_00DA(c, 72u, depth + 1u); else { c.pc = 0x004687C0u; return; } if (c.pc != 0x00466DA4u) [[unlikely]] return; }
L_00466DA4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1428u);
    set32(c.r[5], c.r[29].w[0] + 1588u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466DB8u); st32((c.r[29].w[0] + 1588u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00466DB8u) [[unlikely]] return; }
L_00466DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 412u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00466E00; } }
L_00466DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466DC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 72u, depth + 1u); else { c.pc = 0x004687C0u; return; } if (c.pc != 0x00466DC8u) [[unlikely]] return; }
L_00466DC8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1428u);
    set32(c.r[5], c.r[29].w[0] + 1584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466DDCu); st32((c.r[29].w[0] + 1584u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00466DDCu) [[unlikely]] return; }
L_00466DDC:
    set32(c.r[4], c.r[20].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466DE8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00DA(c, 72u, depth + 1u); else { c.pc = 0x004687C0u; return; } if (c.pc != 0x00466DE8u) [[unlikely]] return; }
L_00466DE8:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1428u);
    set32(c.r[5], c.r[29].w[0] + 1580u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466DFCu); st32((c.r[29].w[0] + 1580u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00466DFCu) [[unlikely]] return; }
L_00466DFC:
    st8((c.r[20].w[0] + 412u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00466E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 420u), c.r[16].w[0]);  if (t) { goto L_0046725C; } }
L_00466E08:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00466E5C; }
    st8((c.r[20].w[0] + 412u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 1200u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466E24u); st32((c.r[20].w[0] + 420u), 0u);  if (depth < kMaxDepth) unit_0102(c, 279u, depth + 1u); else { c.pc = 0x00509E50u; return; } if (c.pc != 0x00466E24u) [[unlikely]] return; }
L_00466E24:
    set32(c.r[4], c.r[29].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466E30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x00466E30u) [[unlikely]] return; }
L_00466E30:
    set32(c.r[4], c.r[29].w[0] + 1332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466E3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x00466E3Cu) [[unlikely]] return; }
L_00466E3C:
    set32(c.r[4], c.r[29].w[0] + 1380u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466E48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x00466E48u) [[unlikely]] return; }
L_00466E48:
    set32(c.r[4], c.r[29].w[0] + 1428u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466E54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x00466E54u) [[unlikely]] return; }
L_00466E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00DA(c, 70u, depth); } }
L_00466E5C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 1144u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1120u);
    st32((c.r[29].w[0] + 1176u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1136u), 0u);
    st32((c.r[29].w[0] + 1140u), 0u);
    st32((c.r[29].w[0] + 1148u), 0u);
    st32((c.r[29].w[0] + 1168u), 0u);
    st32((c.r[29].w[0] + 1172u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466E88u); st32((c.r[29].w[0] + 1180u), 0u);  if (depth < kMaxDepth) unit_00DA(c, 90u, depth + 1u); else { c.pc = 0x00468980u; return; } if (c.pc != 0x00466E88u) [[unlikely]] return; }
L_00466E88:
    c.f[1] = ld32((c.r[29].w[0] + 1140u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 1184u));
    c.f[0] = ld32((c.r[29].w[0] + 1144u));
    set32(c.r[2], c.r[29].w[0] + 1264u);
    st32((c.r[29].w[0] + 1460u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 1136u));
    st32((c.r[29].w[0] + 1268u), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 1232u);
    st32((c.r[29].w[0] + 1272u), c.f[0]);
    st32((c.r[29].w[0] + 1412u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 1148u));
    set32(c.r[2], ld32((c.r[29].w[0] + 1152u)));
    c.f[0] = ld32((c.r[29].w[0] + 1128u));
    st8((c.r[29].w[0] + 1256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 1264u), c.f[2]);
    st8((c.r[29].w[0] + 1288u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 1276u), c.f[1]);
    st32((c.r[29].w[0] + 1284u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1280u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1120u)));
    c.f[1] = ld32((c.r[29].w[0] + 1172u));
    c.f[0] = ld32((c.r[29].w[0] + 1176u));
    c.f[2] = ld32((c.r[29].w[0] + 1168u));
    st32((c.r[29].w[0] + 1252u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 1236u), c.f[1]);
    st32((c.r[29].w[0] + 1240u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 1180u));
    c.f[0] = ld32((c.r[29].w[0] + 1160u));
    st32((c.r[29].w[0] + 1232u), c.f[2]);
    st32((c.r[29].w[0] + 1244u), c.f[1]);
    st32((c.r[29].w[0] + 1248u), c.f[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 328u)));
    st32((c.r[20].w[0] + 328u), 0u);
    c.budget -= 35;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 408u)));  if (t) { goto L_00466F3C; } }
L_00466F14:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00466F30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00466F30u) [[unlikely]] return; }
L_00466F30:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_00466F3C:
    set32(c.r[4], ld32((c.r[20].w[0] + 404u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[20].w[0] + 408u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00466F14u | kUnwind; return; } goto L_00466F14; }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466F80u); c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00D9(c, 135u, depth + 1u); else { c.pc = 0x004658D0u; return; } if (c.pc != 0x00466F80u) [[unlikely]] return; }
L_00466F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466F88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x00466F88u) [[unlikely]] return; }
L_00466F88:
    st32((c.r[29].w[0] + 1576u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1428u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466F98u); set32(c.r[5], c.r[29].w[0] + 1576u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00466F98u) [[unlikely]] return; }
L_00466F98:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466FA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 132u, depth + 1u); else { c.pc = 0x004657A0u; return; } if (c.pc != 0x00466FA4u) [[unlikely]] return; }
L_00466FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466FACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x00466FACu) [[unlikely]] return; }
L_00466FAC:
    st32((c.r[29].w[0] + 1572u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1428u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466FBCu); set32(c.r[5], c.r[29].w[0] + 1572u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00466FBCu) [[unlikely]] return; }
L_00466FBC:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466FD0u); c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_00D9(c, 135u, depth + 1u); else { c.pc = 0x004658D0u; return; } if (c.pc != 0x00466FD0u) [[unlikely]] return; }
L_00466FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466FD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x00466FD8u) [[unlikely]] return; }
L_00466FD8:
    st32((c.r[29].w[0] + 1568u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1380u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466FE8u); set32(c.r[5], c.r[29].w[0] + 1568u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00466FE8u) [[unlikely]] return; }
L_00466FE8:
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466FF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 132u, depth + 1u); else { c.pc = 0x004657A0u; return; } if (c.pc != 0x00466FF4u) [[unlikely]] return; }
L_00466FF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00466FFCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x00466FFCu) [[unlikely]] return; }
L_00466FFC:
    st32((c.r[29].w[0] + 1564u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1380u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046700Cu); set32(c.r[5], c.r[29].w[0] + 1564u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x0046700Cu) [[unlikely]] return; }
L_0046700C:
    st32((c.r[20].w[0] + 328u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 408u)));  if (t) { goto L_00467040; } }
L_00467018:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 196u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00467034u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00467034u) [[unlikely]] return; }
L_00467034:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_00467040:
    set32(c.r[4], ld32((c.r[20].w[0] + 404u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[20].w[0] + 408u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00467018u | kUnwind; return; } goto L_00467018; }
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[29].w[0] + 1376u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 412u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0046725C; } }
L_00467084:
    set32(c.r[5], c.r[20].w[0] + 256u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467094u); c.r[23].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x00467094u) [[unlikely]] return; }
L_00467094:
    set32(c.r[2], ld32((c.r[29].w[0] + 620u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 624u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 628u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (t) { goto L_004670E8; } }
L_004670B0:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_004670C4; }
    set32(c.r[23], c.r[23].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 2;
L_004670C4:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[21].d[0]) { set32(c.r[6], ld32((c.r[20].w[0] + 284u)));  goto L_004670EC; }
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_004670E4; }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_004670E4:
    set32(c.r[21], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_004670E8:
    set32(c.r[6], ld32((c.r[20].w[0] + 284u)));
    c.budget -= 1;
L_004670EC:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004670F8u); set32(c.r[5], c.r[20].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004670F8u) [[unlikely]] return; }
L_004670F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004670B0u | kUnwind; return; } goto L_004670B0; }
    set32(c.r[4], c.r[29].w[0] + 576u);
    set32(c.r[5], c.r[20].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467114u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x00467114u) [[unlikely]] return; }
L_00467114:
    set32(c.r[2], ld32((c.r[29].w[0] + 580u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 592u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 588u)));
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 596u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_00467228; } }
L_00467138:
    st32((c.r[29].w[0] + 1644u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;  goto L_00467158; }
    set32(c.r[4], c.r[29].w[0] + 1428u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467154u); set32(c.r[5], c.r[29].w[0] + 1644u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00467154u) [[unlikely]] return; }
L_00467154:
    c.r[1].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 1;
L_00467158:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 288u)));  goto L_004671FC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 1644u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004671F8; } }
    set32(c.r[4], 0u + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046717Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0046717Cu) [[unlikely]] return; }
L_0046717C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1644u)));  goto L_004671CC; }
    set32(c.r[21], ld32((c.r[29].w[0] + 1644u)));
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[5], c.r[21].w[0] + 20u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 16u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004671C0u); st32((c.r[16].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004671C0u) [[unlikely]] return; }
L_004671C0:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 84u));
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 1644u)));
    c.budget -= 3;
L_004671CC:
    set32(c.r[4], c.r[29].w[0] + 1380u);
    st32((c.r[29].w[0] + 1640u), c.r[16].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1640u);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1640u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004671ECu); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004671ECu) [[unlikely]] return; }
L_004671EC:
    set32(c.r[4], c.r[29].w[0] + 1296u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004671F8u); set32(c.r[5], c.r[29].w[0] + 1640u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004671F8u) [[unlikely]] return; }
L_004671F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 1;
L_004671FC:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[6], ld32((c.r[20].w[0] + 284u)));  goto L_0046722C; }
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.budget -= 4;
    if (c.r[22].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[22].w[0])));  goto L_00467220; }
    set32(c.r[22], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[17], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_00467220:
    set32(c.r[2], c.r[17].w[0] + 512u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 2;
L_00467228:
    set32(c.r[6], ld32((c.r[20].w[0] + 284u)));
    c.budget -= 1;
L_0046722C:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467238u); set32(c.r[5], c.r[20].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x00467238u) [[unlikely]] return; }
L_00467238:
    set32(c.r[2], ld32((c.r[29].w[0] + 496u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00467138u | kUnwind; return; } goto L_00467138; }
    set32(c.r[2], ld32((c.r[29].w[0] + 1408u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24340u)));  goto L_00467260; }
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 1376u), c.r[2].w[0]);
    c.budget -= 3;
L_0046725C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24340u)));
    c.budget -= 1;
L_00467260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0046727C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467270u);  if (depth < kMaxDepth) unit_00D2(c, 91u, depth + 1u); else { c.pc = 0x00448EE0u; return; } if (c.pc != 0x00467270u) [[unlikely]] return; }
L_00467270:
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 24344u), c.f[0]);
    st8((c.r[28].w[0] - 24340u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0046727C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467284u);  if (depth < kMaxDepth) unit_00D2(c, 93u, depth + 1u); else { c.pc = 0x00448F10u; return; } if (c.pc != 0x00467284u) [[unlikely]] return; }
L_00467284:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = ld32((c.r[20].w[0] + 376u));
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004672A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 313u, depth + 1u); else { c.pc = 0x0046BD80u; return; } if (c.pc != 0x004672A0u) [[unlikely]] return; }
L_004672A0:
    st32((c.r[20].w[0] + 380u), c.f[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 412u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    c.f[12] = ld32((c.r[20].w[0] + 380u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1088u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004672C0u); set32(c.r[6], c.r[20].w[0] + 412u);  if (depth < kMaxDepth) unit_0102(c, 235u, depth + 1u); else { c.pc = 0x00509920u; return; } if (c.pc != 0x004672C0u) [[unlikely]] return; }
L_004672C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 368u));  goto L_0046761C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 1424u)));
    c.f[0] = ld32((c.r[28].w[0] - 24344u));
    c.f[21] = ld32((c.r[2].w[0] + 32u));
    fpu_div(c, 12u, c.f[21], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004672ECu);  if (depth < kMaxDepth) unit_00AB(c, 378u, depth + 1u); else { c.pc = 0x003AF0E0u; return; } if (c.pc != 0x004672ECu) [[unlikely]] return; }
L_004672EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_00467314; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00467328; } }
L_00467314:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_00467328:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[12] = ld32((c.r[20].w[0] + 380u));  goto L_00467338; }
    set32(c.r[17], 0u + 1u);
    c.f[12] = ld32((c.r[20].w[0] + 380u));
    c.budget -= 2;
L_00467338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046734Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 313u, depth + 1u); else { c.pc = 0x0046BD80u; return; } if (c.pc != 0x0046734Cu) [[unlikely]] return; }
L_0046734C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 1636u), 0u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] < 0; c.f[20] = c.f[0];  if (t) { goto L_0046736C; } }
    c.f[0] = c.r[17].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00467388; } }
L_0046736C:
    set32(c.r[3], c.r[17].w[0] >> 1);
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00467388:
    fpu_div(c, 24u, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[22], ld32((c.r[2].w[0] + 20312u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[21], c.f[24]);  if (t) { goto L_00467608; } }
L_004673A8:
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_004673BC; }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004673D4; } }
L_004673BC:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004673D4:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.f[23] = fp::mul(c.f[0], c.f[24]);  if (t) { goto L_004673EC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00467408; } }
L_004673EC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00467408:
    c.f[13] = fp::mul(c.f[0], c.f[24]);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 411u));
    set32(c.r[4], c.r[29].w[0] + 1632u);
    set32(c.r[5], c.r[29].w[0] + 1088u);
    set32(c.r[7], c.r[29].w[0] + 1424u);
    set32(c.r[8], c.r[29].w[0] + 1376u);
    set32(c.r[9], c.r[29].w[0] + 1636u);
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.r[11].d[0] = c.r[30].d[0] + 0ull;
    c.f[15] = ld32((c.r[20].w[0] + 468u));
    c.f[12] = c.f[23];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046743Cu); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0102(c, 230u, depth + 1u); else { c.pc = 0x00509890u; return; } if (c.pc != 0x0046743Cu) [[unlikely]] return; }
L_0046743C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1072u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 31841u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467454u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00467454u) [[unlikely]] return; }
L_00467454:
    set32(c.r[2], ld32((c.r[29].w[0] + 1072u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 1073u);  goto L_00467468; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1080u)));
    c.budget -= 1;
L_00467468:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00467478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00467480; } }
L_00467478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467480u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00467480u) [[unlikely]] return; }
L_00467480:
    set32(c.r[4], ld32((c.r[29].w[0] + 1632u)));
    set32(c.r[5], c.r[29].w[0] + 1560u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467490u); st32((c.r[29].w[0] + 1560u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x00467490u) [[unlikely]] return; }
L_00467490:
    set32(c.r[2], ld32((c.r[29].w[0] + 1560u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 1632u)));  goto L_004674E8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[21], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004674B4u); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004674B4u) [[unlikely]] return; }
L_004674B4:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004674C4u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004674C4u) [[unlikely]] return; }
L_004674C4:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004674E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004674E4u); set32(c.r[5], c.r[29].w[0] + 1560u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004674E4u) [[unlikely]] return; }
L_004674E4:
    set32(c.r[5], ld32((c.r[29].w[0] + 1632u)));
    c.budget -= 1;
L_004674E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00467578; } }
    set32(c.r[3], ld32((c.r[30].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 24u)));  goto L_0046754C; }
    c.f[13] = ld32((c.r[20].w[0] + 468u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 31883u);
    c.f[12] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046751Cu); c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_00DA(c, 104u, depth + 1u); else { c.pc = 0x00468FD0u; return; } if (c.pc != 0x0046751Cu) [[unlikely]] return; }
L_0046751C:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 305u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00467548; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00467548; } }
    c.f[0] = ld32((c.r[20].w[0] + 468u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 31976u), c.f[0]);
    st8((c.r[28].w[0] - 24336u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00467548:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_0046754C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467554u); st32((c.r[29].w[0] + 1500u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00467554u) [[unlikely]] return; }
L_00467554:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 1632u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00467570u); st32((c.r[29].w[0] + 1496u), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00467570u) [[unlikely]] return; }
L_00467570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467578u); set32(c.r[4], ld32((c.r[29].w[0] + 1496u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00467578u) [[unlikely]] return; }
L_00467578:
    c.f[13] = fp::mul(c.f[21], c.f[23]);
    set32(c.r[5], ld32((c.r[29].w[0] + 1632u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[16] = ld32((c.r[29].w[0] + 1636u));
    c.f[15] = ld32((c.r[20].w[0] + 468u));
    c.f[14] = c.f[20];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004675A0u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_00DA(c, 201u, depth + 1u); else { c.pc = 0x0046AAD0u; return; } if (c.pc != 0x004675A0u) [[unlikely]] return; }
L_004675A0:
    c.f[12] = ld32((c.r[29].w[0] + 1636u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004675B4u); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_00DA(c, 313u, depth + 1u); else { c.pc = 0x0046BD80u; return; } if (c.pc != 0x004675B4u) [[unlikely]] return; }
L_004675B4:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 1072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004675C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004675C4u) [[unlikely]] return; }
L_004675C4:
    set32(c.r[21], ld32((c.r[29].w[0] + 1632u)));
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00467608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004675D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004675D8u) [[unlikely]] return; }
L_004675D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004675E8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004675E8u) [[unlikely]] return; }
L_004675E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00467604; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00467604u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00467604u) [[unlikely]] return; }
L_00467604:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00467608:
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004673A8u | kUnwind; return; } goto L_004673A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 1428u);  if (t) { [[clang::musttail]] return unit_00DA(c, 38u, depth); } }
L_0046761C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[20].w[0] + 305u));  goto L_00467BF4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1452u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1424u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 1444u)));
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 1436u)));
    set32(c.r[4], c.r[2].w[0] >> 7);
    set32(c.r[6], ld32((c.r[29].w[0] + 1448u)));
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.f[26] = ld32((c.r[5].w[0] + 32u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[20].w[0] + 380u));
    c.r[2].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.r[22].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[25] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004676B0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 313u, depth + 1u); else { c.pc = 0x0046BD80u; return; } if (c.pc != 0x004676B0u) [[unlikely]] return; }
L_004676B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 1456u)));
    c.f[24] = c.f[0];
    st32((c.r[29].w[0] + 1628u), 0u);
    set32(c.r[17], 0u + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { [[clang::musttail]] return unit_00DA(c, 37u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 320u), c.r[2].w[0]);  if (t) { goto L_00467BDC; } }
L_004676DC:
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], ld32((c.r[29].w[0] + 1444u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 1436u)));
    set32(c.r[2], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1448u)));
    set32(c.r[6], c.r[2].w[0] >> 7);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 20;
    { const bool t = c.r[22].d[0] != 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_00467778; } }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[10]);
    set32(c.r[11], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[11].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0046776C; } }
    mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0046776C; } }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_0046776C:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] & 255ull;  goto L_0046777C; }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00467778:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0046777C:
    c.r[2].d[0] = c.r[9].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[22].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_004677A4; } }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00467BDC; }
L_004677A4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 1444u)));  goto L_004677C0; }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004677BC; } }
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_004677BC:
    set32(c.r[5], ld32((c.r[29].w[0] + 1444u)));
    c.budget -= 1;
L_004677C0:
    set32(c.r[2], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1436u)));
    set32(c.r[6], c.r[2].w[0] >> 7);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 1448u)));
    c.f[0] = 0u;
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[23] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::sub(c.f[23], c.f[25]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 20;
    if ((c.fcr31 & kFpuCondition) != 0) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  goto L_00467BD0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 1424u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046781Cu); set32(c.r[4], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x0046781Cu) [[unlikely]] return; }
L_0046781C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 752u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1424u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467834u); c.f[20] = fp::mul(c.f[25], c.f[0]);  if (depth < kMaxDepth) unit_0005(c, 171u, depth + 1u); else { c.pc = 0x00116E00u; return; } if (c.pc != 0x00467834u) [[unlikely]] return; }
L_00467834:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.f[0] = ld32((c.r[28].w[0] - 24344u));
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = fp::mul(c.f[23], c.f[1]);
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0046785Cu);  if (depth < kMaxDepth) unit_00AB(c, 378u, depth + 1u); else { c.pc = 0x003AF0E0u; return; } if (c.pc != 0x0046785Cu) [[unlikely]] return; }
L_0046785C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_00467884; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00467898; } }
L_00467884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.r[16].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_00467898:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004678A8; }
    set32(c.r[16], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_004678A8:
    c.f[1] = c.r[2].w[0];
    c.budget -= 3;
    if (c.r[16].sd[0] < 0) { set32(c.r[3], c.r[16].w[0] >> 1);  goto L_004678C0; }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004678D8; } }
L_004678C0:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004678D8:
    fpu_div(c, 22u, c.f[1], c.f[0]);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[23], c.f[25]);  if (t) { goto L_00467BC0; } }
L_004678F4:
    c.budget -= 2;
    if (c.r[21].sd[0] < 0) { set32(c.r[3], c.r[21].w[0] >> 1);  goto L_00467908; }
    c.f[0] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00467920; } }
L_00467908:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00467920:
    c.f[1] = fp::mul(c.f[0], c.f[22]);
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[25]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.f[21] = fp::add(c.facc, fp::mul(c.f[1], c.f[20]));  if (t) { goto L_00467948; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00467964; } }
L_00467948:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00467964:
    c.f[1] = fp::mul(c.f[0], c.f[22]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[25]);
    c.f[28] = ld32((c.r[20].w[0] + 468u));
    c.budget -= 7;
    { const bool t = c.r[22].d[0] == 0ull; c.f[27] = fp::add(c.facc, fp::mul(c.f[1], c.f[20]));  if (t) { goto L_00467984; } }
    c.f[28] = ld32((c.r[20].w[0] + 464u));
    c.budget -= 1;
L_00467984:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[8], c.r[29].w[0] + 1328u);  goto L_00467990; }
    set32(c.r[8], c.r[29].w[0] + 1376u);
    c.budget -= 1;
L_00467990:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 411u));
    set32(c.r[4], c.r[29].w[0] + 1624u);
    set32(c.r[5], c.r[29].w[0] + 1088u);
    set32(c.r[7], c.r[29].w[0] + 1424u);
    c.f[12] = c.f[21];
    set32(c.r[9], c.r[29].w[0] + 1628u);
    c.f[13] = c.f[27];
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = c.f[24];
    c.r[11].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004679C0u); c.f[15] = c.f[28];  if (depth < kMaxDepth) unit_0102(c, 230u, depth + 1u); else { c.pc = 0x00509890u; return; } if (c.pc != 0x004679C0u) [[unlikely]] return; }
L_004679C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 1056u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 31841u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004679D8u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004679D8u) [[unlikely]] return; }
L_004679D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 1056u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 1057u);  goto L_004679EC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1064u)));
    c.budget -= 1;
L_004679EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004679FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  if (t) { goto L_00467A04; } }
L_004679FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467A04u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00467A04u) [[unlikely]] return; }
L_00467A04:
    set32(c.r[4], ld32((c.r[29].w[0] + 1624u)));
    set32(c.r[5], c.r[29].w[0] + 1556u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467A14u); st32((c.r[29].w[0] + 1556u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x00467A14u) [[unlikely]] return; }
L_00467A14:
    set32(c.r[3], ld32((c.r[29].w[0] + 1556u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 1624u)));  goto L_00467A74; }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467A40u); st32((c.r[29].w[0] + 352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00467A40u) [[unlikely]] return; }
L_00467A40:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467A50u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00467A50u) [[unlikely]] return; }
L_00467A50:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00467A70; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467A70u); set32(c.r[5], c.r[29].w[0] + 1556u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00467A70u) [[unlikely]] return; }
L_00467A70:
    set32(c.r[5], ld32((c.r[29].w[0] + 1624u)));
    c.budget -= 1;
L_00467A74:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_00467B28; } }
    set32(c.r[3], ld32((c.r[30].w[0] + 8u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 24u)));  goto L_00467AFC; }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.f[13] = ld32((c.r[20].w[0] + 468u));  goto L_00467AB4; }
    c.f[13] = ld32((c.r[20].w[0] + 464u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467AACu); set32(c.r[6], c.r[6].w[0] - 31920u);  if (depth < kMaxDepth) unit_00DA(c, 104u, depth + 1u); else { c.pc = 0x00468FD0u; return; } if (c.pc != 0x00467AACu) [[unlikely]] return; }
L_00467AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(3ll);  if (t) { goto L_00467AF8; } }
L_00467AB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467AC8u); set32(c.r[6], c.r[6].w[0] - 31883u);  if (depth < kMaxDepth) unit_00DA(c, 104u, depth + 1u); else { c.pc = 0x00468FD0u; return; } if (c.pc != 0x00467AC8u) [[unlikely]] return; }
L_00467AC8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 305u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00467AF8; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00467AF4; } }
    c.f[0] = ld32((c.r[20].w[0] + 468u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 31976u), c.f[0]);
    st8((c.r[28].w[0] - 24336u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00467AF4:
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00467AF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_00467AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467B04u); st32((c.r[29].w[0] + 1492u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00467B04u) [[unlikely]] return; }
L_00467B04:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 1624u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00467B20u); st32((c.r[29].w[0] + 1488u), c.r[2].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00467B20u) [[unlikely]] return; }
L_00467B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467B28u); set32(c.r[4], ld32((c.r[29].w[0] + 1488u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00467B28u) [[unlikely]] return; }
L_00467B28:
    c.f[0] = fp::sub(c.f[27], c.f[21]);
    set32(c.r[5], ld32((c.r[29].w[0] + 1624u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[24];
    c.f[24] = fp::mul(c.f[26], c.f[0]);
    c.f[13] = fp::mul(c.f[26], c.f[21]);
    c.f[16] = ld32((c.r[29].w[0] + 1628u));
    c.f[15] = c.f[28];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467B58u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_00DA(c, 201u, depth + 1u); else { c.pc = 0x0046AAD0u; return; } if (c.pc != 0x00467B58u) [[unlikely]] return; }
L_00467B58:
    c.f[12] = ld32((c.r[29].w[0] + 1628u));
    set32(c.r[4], ld32((c.r[29].w[0] + 1624u)));
    c.f[13] = c.f[24];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467B6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 313u, depth + 1u); else { c.pc = 0x0046BD80u; return; } if (c.pc != 0x00467B6Cu) [[unlikely]] return; }
L_00467B6C:
    c.f[24] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467B7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00467B7Cu) [[unlikely]] return; }
L_00467B7C:
    set32(c.r[23], ld32((c.r[29].w[0] + 1624u)));
    c.budget -= 3;
    if (c.r[23].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_00467BC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467B90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00467B90u) [[unlikely]] return; }
L_00467B90:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467BA0u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00467BA0u) [[unlikely]] return; }
L_00467BA0:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00467BBC; } }
    set32(c.r[25], ld32((c.r[23].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00467BBCu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00467BBCu) [[unlikely]] return; }
L_00467BBC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00467BC0:
    c.r[2].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004678F4u | kUnwind; return; } goto L_004678F4; } }
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 1;
L_00467BD0:
    c.f[25] = c.f[23];
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_00467BDC:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 1452u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004676DCu | kUnwind; return; } goto L_004676DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00DA(c, 37u, depth); } }
L_00467BF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 1424u)));  [[clang::musttail]] return unit_00DA(c, 16u, depth); }
    set32(c.r[3], ld32((c.r[29].w[0] + 1424u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = ld32((c.r[28].w[0] - 31936u));
    c.f[0] = c.r[2].w[0];
    c.f[26] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = fp::mul(c.f[1], c.f[26]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467C28u);  if (depth < kMaxDepth) unit_00AB(c, 378u, depth + 1u); else { c.pc = 0x003AF0E0u; return; } if (c.pc != 0x00467C28u) [[unlikely]] return; }
L_00467C28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_00467C50; }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00467C64; } }
L_00467C50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
L_00467C64:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00467C74; }
    set32(c.r[17], 0u + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00467C74:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(33ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00467C88; } }
    set32(c.r[17], 0u + 31u);
    c.budget -= 1;
L_00467C88:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[4] = ld32((c.r[28].w[0] - 31936u));  goto L_00467D40; }
    c.f[3] = ld32((c.r[28].w[0] - 31936u));
    set32(c.r[4], c.r[17].w[0] - 1u);
    set32(c.r[2], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    c.f[1] = c.r[4].w[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_00467D20; } }
L_00467CB0:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[5], c.r[6].w[0] >> 1);  goto L_00467CC4; }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00467CDC; } }
L_00467CC4:
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00467CDC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.f[2] = fp::mul(c.f[3], c.f[0]);  if (t) { goto L_00467CEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_00467D04; } }
L_00467CEC:
    set32(c.r[2], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00467D04:
    fpu_div(c, 0u, c.f[2], c.f[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 928u), c.f[0]);
    c.budget -= 7;
L_00467D20:
    c.r[2].d[0] = c.r[6].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00467CB0u | kUnwind; return; } goto L_00467CB0; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 928u), c.r[3].w[0]);  if (t) { goto L_00467DE4; } }
L_00467D40:
    set32(c.r[4], c.r[17].w[0] - 1u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 928u), 0u);
    c.f[1] = ld32((c.r[28].w[0] - 32564u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    c.f[2] = c.r[4].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_00467DD8; } }
L_00467D64:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { set32(c.r[5], c.r[6].w[0] >> 1);  goto L_00467D78; }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00467D90; } }
L_00467D78:
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00467D90:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; c.f[3] = fp::mul(c.f[4], c.f[0]);  if (t) { goto L_00467DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[2]);  if (t) { goto L_00467DB8; } }
L_00467DA0:
    set32(c.r[2], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00467DB8:
    fpu_div(c, 0u, c.f[3], c.f[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 932u), c.f[0]);
    c.budget -= 8;
L_00467DD8:
    c.r[2].d[0] = c.r[6].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00467D64u | kUnwind; return; } goto L_00467D64; } }
L_00467DE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[25] = ld32((c.r[20].w[0] + 380u));
    set32(c.r[23], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00DA(c, 15u, depth); } }
L_00467DF8:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + 928u);
    c.f[24] = ld32((c.r[2].w[0]));
    c.f[23] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::sub(c.f[23], c.f[24]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; c.f[22] = fp::mul(c.f[26], c.f[0]);  if (t) { goto L_00467E2C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00467E2C; } }
    c.f[21] = ld32((c.r[20].w[0] + 460u));
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 64u);  if (t) { goto L_00467E64; } }
L_00467E2C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[21] = ld32((c.r[20].w[0] + 468u));  goto L_00467E5C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00467E58; } }
    c.f[21] = ld32((c.r[20].w[0] + 460u));
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 64u);  if (t) { goto L_00467E64; } }
L_00467E58:
    c.f[21] = ld32((c.r[20].w[0] + 468u));
    c.budget -= 1;
L_00467E5C:
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[22], 0u + 512u);
    c.budget -= 2;
L_00467E64:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.f[3] = c.f[22];  if (t) { goto L_00467E70; } }
    c.f[3] = c.f[22] ^ fp::kSign;
    c.budget -= 1;
L_00467E70:
    c.f[0] = c.r[22].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[13] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::mul(c.f[25], c.f[13]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[2] = c.r[3].w[0];
    fpu_div(c, 20u, c.f[0], c.f[2]);
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[25]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    c.f[0] = fp::mul(c.f[0], c.f[13]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    fpu_div(c, 27u, c.f[0], c.f[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467EC4u); c.f[12] = c.f[27];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x00467EC4u) [[unlikely]] return; }
L_00467EC4:
    c.f[0] = fp::sub(c.f[0], c.f[27]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 411u));
    set32(c.r[4], c.r[29].w[0] + 1616u);
    set32(c.r[5], c.r[29].w[0] + 1088u);
    set32(c.r[7], c.r[29].w[0] + 1424u);
    set32(c.r[8], c.r[29].w[0] + 1376u);
    set32(c.r[9], c.r[29].w[0] + 1620u);
    c.f[1] = fp::add(c.f[20], c.f[0]);
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.r[11].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 1620u), 0u);
    c.f[0] = c.r[22].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[0], c.f[21]);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.f[13] = c.f[23];
    c.f[12] = c.f[24];
    c.f[15] = c.f[21];
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467F28u); c.f[14] = c.f[20];  if (depth < kMaxDepth) unit_0102(c, 230u, depth + 1u); else { c.pc = 0x00509890u; return; } if (c.pc != 0x00467F28u) [[unlikely]] return; }
L_00467F28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 912u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 31841u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467F40u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x00467F40u) [[unlikely]] return; }
L_00467F40:
    set32(c.r[2], ld32((c.r[29].w[0] + 912u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 913u);  goto L_00467F54; }
    set32(c.r[4], ld32((c.r[29].w[0] + 920u)));
    c.budget -= 1;
L_00467F54:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00467F64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_00467F6C; } }
L_00467F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467F6Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00467F6Cu) [[unlikely]] return; }
L_00467F6C:
    set32(c.r[4], ld32((c.r[29].w[0] + 1616u)));
    set32(c.r[5], c.r[29].w[0] + 1552u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467F7Cu); st32((c.r[29].w[0] + 1552u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x00467F7Cu) [[unlikely]] return; }
L_00467F7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 1552u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[23].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 1616u)));  goto L_00467FD8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[22], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467FA4u); st32((c.r[29].w[0] + 336u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00467FA4u) [[unlikely]] return; }
L_00467FA4:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467FB4u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00467FB4u) [[unlikely]] return; }
L_00467FB4:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00467FD4; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00467FD4u); set32(c.r[5], c.r[29].w[0] + 1552u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00467FD4u) [[unlikely]] return; }
L_00467FD4:
    set32(c.r[5], ld32((c.r[29].w[0] + 1616u)));
    c.budget -= 1;
L_00467FD8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.f[13] = fp::mul(c.f[26], c.f[24]);  [[clang::musttail]] return unit_00DA(c, 9u, depth); }
    set32(c.r[2], ld32((c.r[30].w[0] + 8u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 24u)));  [[clang::musttail]] return unit_00DA(c, 5u, depth); }
    c.r[3].d[0] = c.r[21].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[13] = ld32((c.r[20].w[0] + 468u));  [[clang::musttail]] return unit_00DA(c, 3u, depth); }
    [[clang::musttail]] return unit_00DA(c, 1u, depth);
}

}
