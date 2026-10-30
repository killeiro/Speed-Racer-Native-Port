#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005C[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23,
    0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0,
    108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00270000;
    case 2u: goto L_0027000C;
    case 3u: goto L_00270020;
    case 4u: goto L_00270030;
    case 5u: goto L_00270060;
    case 6u: goto L_00270090;
    case 7u: goto L_002700BC;
    case 8u: goto L_002700C0;
    case 9u: goto L_002700D0;
    case 10u: goto L_002701C0;
    case 11u: goto L_002701D0;
    case 12u: goto L_002701E0;
    case 13u: goto L_002701F0;
    case 14u: goto L_00270238;
    case 15u: goto L_00270248;
    case 16u: goto L_00270264;
    case 17u: goto L_00270270;
    case 18u: goto L_0027028C;
    case 19u: goto L_002702B0;
    case 20u: goto L_002702C0;
    case 21u: goto L_002702DC;
    case 22u: goto L_002702E8;
    case 23u: goto L_002702FC;
    case 24u: goto L_0027030C;
    case 25u: goto L_00270320;
    case 26u: goto L_00270330;
    case 27u: goto L_00270344;
    case 28u: goto L_00270360;
    case 29u: goto L_0027037C;
    case 30u: goto L_00270450;
    case 31u: goto L_00270480;
    case 32u: goto L_0027049C;
    case 33u: goto L_002704A8;
    case 34u: goto L_002704BC;
    case 35u: goto L_002704D0;
    case 36u: goto L_002704EC;
    case 37u: goto L_00270514;
    case 38u: goto L_00270530;
    case 39u: goto L_00270540;
    case 40u: goto L_00270560;
    case 41u: goto L_0027056C;
    case 42u: goto L_00270574;
    case 43u: goto L_00270594;
    case 44u: goto L_002705A4;
    case 45u: goto L_002705C0;
    case 46u: goto L_002705D4;
    case 47u: goto L_002705E4;
    case 48u: goto L_00270600;
    case 49u: goto L_0027061C;
    case 50u: goto L_0027062C;
    case 51u: goto L_0027067C;
    case 52u: goto L_0027068C;
    case 53u: goto L_002706B0;
    case 54u: goto L_002706DC;
    case 55u: goto L_002706EC;
    case 56u: goto L_0027073C;
    case 57u: goto L_0027074C;
    case 58u: goto L_00270760;
    case 59u: goto L_002707A0;
    case 60u: goto L_002707B0;
    case 61u: goto L_002707CC;
    case 62u: goto L_002707E0;
    case 63u: goto L_002707F0;
    case 64u: goto L_00270800;
    case 65u: goto L_00270820;
    case 66u: goto L_00270944;
    case 67u: goto L_00270A30;
    case 68u: goto L_00270A5C;
    case 69u: goto L_00270A78;
    case 70u: goto L_00270A98;
    case 71u: goto L_00270AA8;
    case 72u: goto L_00270AC4;
    case 73u: goto L_00270AD8;
    case 74u: goto L_00270AE8;
    case 75u: goto L_00270B00;
    case 76u: goto L_00270B10;
    case 77u: goto L_00270B2C;
    case 78u: goto L_00270B50;
    case 79u: goto L_00270B6C;
    case 80u: goto L_00270B80;
    case 81u: goto L_00270BD8;
    case 82u: goto L_00270BE8;
    case 83u: goto L_00270C04;
    case 84u: goto L_00270C18;
    case 85u: goto L_00270C28;
    case 86u: goto L_00270CC4;
    case 87u: goto L_00270D80;
    case 88u: goto L_00270D90;
    case 89u: goto L_00270DAC;
    case 90u: goto L_00270DC0;
    case 91u: goto L_00270DD0;
    case 92u: goto L_00270E10;
    case 93u: goto L_00270EC0;
    case 94u: goto L_00270F14;
    case 95u: goto L_00270FD0;
    case 96u: goto L_00270FF0;
    case 97u: goto L_00271010;
    case 98u: goto L_00271020;
    case 99u: goto L_00271040;
    case 100u: goto L_00271060;
    case 101u: goto L_00271070;
    case 102u: goto L_00271080;
    case 103u: goto L_002710A4;
    case 104u: goto L_002710B8;
    case 105u: goto L_002710C8;
    case 106u: goto L_002710DC;
    case 107u: goto L_002710EC;
    case 108u: goto L_00271100;
    case 109u: goto L_00271110;
    case 110u: goto L_00271124;
    case 111u: goto L_00271140;
    case 112u: goto L_0027115C;
    case 113u: goto L_00271168;
    case 114u: goto L_00271174;
    case 115u: goto L_00271190;
    case 116u: goto L_002711AC;
    case 117u: goto L_002711B8;
    case 118u: goto L_002711C4;
    case 119u: goto L_002711E8;
    case 120u: goto L_00271208;
    case 121u: goto L_00271228;
    case 122u: goto L_00271250;
    case 123u: goto L_00271304;
    case 124u: goto L_0027130C;
    case 125u: goto L_002713B0;
    case 126u: goto L_0027147C;
    case 127u: goto L_002714D4;
    case 128u: goto L_002714DC;
    case 129u: goto L_00271568;
    case 130u: goto L_0027158C;
    case 131u: goto L_002715B0;
    case 132u: goto L_002715EC;
    case 133u: goto L_002716B0;
    case 134u: goto L_00271730;
    case 135u: goto L_00271770;
    case 136u: goto L_00271800;
    case 137u: goto L_00271824;
    case 138u: goto L_00271848;
    case 139u: goto L_00271890;
    case 140u: goto L_002718F0;
    case 141u: goto L_00271958;
    case 142u: goto L_002719D0;
    case 143u: goto L_00271A00;
    case 144u: goto L_00271A1C;
    case 145u: goto L_00271A40;
    case 146u: goto L_00271A50;
    case 147u: goto L_00271A60;
    case 148u: goto L_00271A88;
    case 149u: goto L_00271A94;
    case 150u: goto L_00271AC0;
    case 151u: goto L_00271AD4;
    case 152u: goto L_00271AE0;
    case 153u: goto L_00271AF4;
    case 154u: goto L_00271B10;
    case 155u: goto L_00271B20;
    case 156u: goto L_00271B30;
    case 157u: goto L_00271B40;
    case 158u: goto L_00271B50;
    case 159u: goto L_00271B60;
    case 160u: goto L_00271B7C;
    case 161u: goto L_00271B8C;
    case 162u: goto L_00271BAC;
    case 163u: goto L_00271BBC;
    case 164u: goto L_00271BF0;
    case 165u: goto L_00271C1C;
    case 166u: goto L_00271C2C;
    case 167u: goto L_00271C4C;
    case 168u: goto L_00271C5C;
    case 169u: goto L_00271C7C;
    case 170u: goto L_00271CA0;
    case 171u: goto L_00271D0C;
    case 172u: goto L_00271D6C;
    case 173u: goto L_00271D88;
    case 174u: goto L_00271E04;
    case 175u: goto L_00271E14;
    case 176u: goto L_00271E20;
    case 177u: goto L_00271E4C;
    case 178u: goto L_00271E80;
    case 179u: goto L_00271E90;
    case 180u: goto L_00271EAC;
    case 181u: goto L_00271EB8;
    case 182u: goto L_00271ECC;
    case 183u: goto L_00271EDC;
    case 184u: goto L_00271EF0;
    case 185u: goto L_00271F10;
    case 186u: goto L_00271F34;
    case 187u: goto L_00271F94;
    case 188u: goto L_00271FAC;
    case 189u: goto L_00271FF0;
    case 190u: goto L_0027200C;
    case 191u: goto L_00272018;
    case 192u: goto L_00272030;
    case 193u: goto L_00272058;
    case 194u: goto L_00272070;
    case 195u: goto L_00272080;
    case 196u: goto L_00272090;
    case 197u: goto L_002720B4;
    case 198u: goto L_002720C0;
    case 199u: goto L_002720D8;
    case 200u: goto L_00272114;
    case 201u: goto L_00272140;
    case 202u: goto L_00272170;
    case 203u: goto L_002721D0;
    case 204u: goto L_002721E8;
    case 205u: goto L_002721F8;
    case 206u: goto L_00272230;
    case 207u: goto L_0027226C;
    case 208u: goto L_00272280;
    case 209u: goto L_00272290;
    case 210u: goto L_002722A4;
    case 211u: goto L_002722B8;
    case 212u: goto L_002722D8;
    case 213u: goto L_00272310;
    case 214u: goto L_00272348;
    case 215u: goto L_0027239C;
    case 216u: goto L_002723AC;
    case 217u: goto L_002723C0;
    case 218u: goto L_002723D0;
    case 219u: goto L_002723EC;
    case 220u: goto L_00272420;
    case 221u: goto L_0027244C;
    case 222u: goto L_00272470;
    case 223u: goto L_002724C4;
    case 224u: goto L_002724D0;
    case 225u: goto L_002724EC;
    case 226u: goto L_00272510;
    case 227u: goto L_0027252C;
    case 228u: goto L_00272538;
    case 229u: goto L_00272550;
    case 230u: goto L_00272560;
    case 231u: goto L_0027257C;
    case 232u: goto L_00272588;
    case 233u: goto L_002725A0;
    case 234u: goto L_002725B0;
    case 235u: goto L_002725E0;
    case 236u: goto L_002725FC;
    case 237u: goto L_0027261C;
    case 238u: goto L_00272668;
    case 239u: goto L_002726D0;
    case 240u: goto L_002726EC;
    case 241u: goto L_00272790;
    case 242u: goto L_002727C0;
    case 243u: goto L_002727F0;
    case 244u: goto L_0027287C;
    case 245u: goto L_002728C0;
    case 246u: goto L_00272938;
    case 247u: goto L_00272990;
    case 248u: goto L_00272A08;
    case 249u: goto L_00272A40;
    case 250u: goto L_00272B10;
    case 251u: goto L_00272B20;
    case 252u: goto L_00272B30;
    case 253u: goto L_00272B40;
    case 254u: goto L_00272B50;
    case 255u: goto L_00272B6C;
    case 256u: goto L_00272B78;
    case 257u: goto L_00272B8C;
    case 258u: goto L_00272BA8;
    case 259u: goto L_00272BC0;
    case 260u: goto L_00272BDC;
    case 261u: goto L_00272C2C;
    case 262u: goto L_00272C60;
    case 263u: goto L_00272C7C;
    case 264u: goto L_00272C90;
    case 265u: goto L_00272CB0;
    case 266u: goto L_00272CCC;
    case 267u: goto L_00272CF4;
    case 268u: goto L_00272D10;
    case 269u: goto L_00272D24;
    case 270u: goto L_00272D50;
    case 271u: goto L_00272D70;
    case 272u: goto L_00272D90;
    case 273u: goto L_00272DB0;
    case 274u: goto L_00272DC0;
    case 275u: goto L_00272DDC;
    case 276u: goto L_00272DF0;
    case 277u: goto L_00272E00;
    case 278u: goto L_00272E20;
    case 279u: goto L_00272E3C;
    case 280u: goto L_00272E58;
    case 281u: goto L_00272E70;
    case 282u: goto L_00272E94;
    case 283u: goto L_00272EA8;
    case 284u: goto L_00272EC8;
    case 285u: goto L_00272ED8;
    case 286u: goto L_00272EF4;
    case 287u: goto L_00272F08;
    case 288u: goto L_00272F18;
    case 289u: goto L_00272F30;
    case 290u: goto L_00272F54;
    case 291u: goto L_00272F74;
    case 292u: goto L_00272F90;
    case 293u: goto L_00272FB4;
    case 294u: goto L_00272FC0;
    case 295u: goto L_00272FE0;
    case 296u: goto L_00272FF0;
    case 297u: goto L_00273000;
    case 298u: goto L_00273034;
    case 299u: goto L_00273044;
    case 300u: goto L_00273060;
    case 301u: goto L_00273074;
    case 302u: goto L_00273084;
    case 303u: goto L_002730A0;
    case 304u: goto L_002730B0;
    case 305u: goto L_002730C0;
    case 306u: goto L_002730D8;
    case 307u: goto L_002730F8;
    case 308u: goto L_00273108;
    case 309u: goto L_00273120;
    case 310u: goto L_0027314C;
    case 311u: goto L_00273158;
    case 312u: goto L_00273190;
    case 313u: goto L_002731C0;
    case 314u: goto L_002731E0;
    case 315u: goto L_002731EC;
    case 316u: goto L_002731F8;
    case 317u: goto L_00273230;
    case 318u: goto L_00273260;
    case 319u: goto L_00273280;
    case 320u: goto L_00273290;
    case 321u: goto L_002732D0;
    case 322u: goto L_002732F0;
    case 323u: goto L_00273310;
    case 324u: goto L_00273340;
    case 325u: goto L_00273374;
    case 326u: goto L_0027338C;
    case 327u: goto L_002733C8;
    case 328u: goto L_002733F0;
    case 329u: goto L_00273410;
    case 330u: goto L_00273430;
    case 331u: goto L_00273450;
    case 332u: goto L_00273460;
    case 333u: goto L_00273480;
    case 334u: goto L_002734B0;
    case 335u: goto L_002734C0;
    case 336u: goto L_002734D0;
    case 337u: goto L_002735B0;
    case 338u: goto L_002735DC;
    case 339u: goto L_002735E8;
    case 340u: goto L_00273620;
    case 341u: goto L_00273650;
    case 342u: goto L_00273670;
    case 343u: goto L_0027367C;
    case 344u: goto L_00273688;
    case 345u: goto L_002736C0;
    case 346u: goto L_002736F0;
    case 347u: goto L_00273710;
    case 348u: goto L_00273730;
    case 349u: goto L_00273770;
    case 350u: goto L_00273790;
    case 351u: goto L_002737B0;
    case 352u: goto L_002737E0;
    case 353u: goto L_00273814;
    case 354u: goto L_00273830;
    case 355u: goto L_00273888;
    case 356u: goto L_002738B0;
    case 357u: goto L_00273910;
    case 358u: goto L_00273930;
    case 359u: goto L_00273950;
    case 360u: goto L_00273970;
    case 361u: goto L_00273980;
    case 362u: goto L_002739B0;
    case 363u: goto L_002739C0;
    case 364u: goto L_00273A90;
    case 365u: goto L_00273ABC;
    case 366u: goto L_00273AC8;
    case 367u: goto L_00273B00;
    case 368u: goto L_00273B30;
    case 369u: goto L_00273B50;
    case 370u: goto L_00273B5C;
    case 371u: goto L_00273B68;
    case 372u: goto L_00273BA0;
    case 373u: goto L_00273BE0;
    case 374u: goto L_00273C00;
    case 375u: goto L_00273C20;
    case 376u: goto L_00273C50;
    case 377u: goto L_00273C84;
    case 378u: goto L_00273C9C;
    case 379u: goto L_00273CD8;
    case 380u: goto L_00273D00;
    case 381u: goto L_00273D20;
    case 382u: goto L_00273D40;
    case 383u: goto L_00273D60;
    case 384u: goto L_00273D70;
    case 385u: goto L_00273D90;
    case 386u: goto L_00273DC0;
    case 387u: goto L_00273DD0;
    case 388u: goto L_00273DE0;
    case 389u: goto L_00273EC0;
    case 390u: goto L_00273EEC;
    case 391u: goto L_00273EF8;
    case 392u: goto L_00273F30;
    case 393u: goto L_00273F60;
    case 394u: goto L_00273F80;
    case 395u: goto L_00273F8C;
    case 396u: goto L_00273F98;
    case 397u: goto L_00273FD0;
    default: bad_entry(c, 0x00270000u); return;
    }
L_00270000:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_0027000C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00270020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31024u));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_00270060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31024u));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_00270090:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31024u));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31028u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_002700BC:
    c.budget -= 1;
L_002700C0:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002700D0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 27908u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);  goto L_002700E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002701AC; } }
L_002700E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] - 1248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13256u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 1328u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14120u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14264u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[5], c.r[5].w[0] + 464u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14408u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 448u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14552u), c.r[4].w[0]);
    set32(c.r[5], 0u + 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st8((c.r[3].w[0] + 14966u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13400u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13544u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13688u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13832u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 592u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13976u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 27908u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 14840u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 14696u), 0u);
    c.budget -= 50;
L_002701AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002701C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002701D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002701E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002701F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027028C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 4704u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00270264; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00270268; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270238u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00270238u) [[unlikely]] return; }
L_00270238:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270248u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00270248u) [[unlikely]] return; }
L_00270248:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00270264; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00270264u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00270264u) [[unlikely]] return; }
L_00270264:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00270268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270270u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0058(c, 274u, depth + 1u); else { c.pc = 0x002622E0u; return; } if (c.pc != 0x00270270u) [[unlikely]] return; }
L_00270270:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00270290; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027028Cu); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0027028Cu) [[unlikely]] return; }
L_0027028C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00270290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002702B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14328u);  c.pc = t; return; }
L_002702C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702DCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 253u, depth + 1u); else { c.pc = 0x00262040u; return; } if (c.pc != 0x002702DCu) [[unlikely]] return; }
L_002702DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702E8u); set32(c.r[4], ld32((c.r[2].w[0] + 14328u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002702E8u) [[unlikely]] return; }
L_002702E8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002702FCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002702FCu) [[unlikely]] return; }
L_002702FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027030Cu); set32(c.r[5], c.r[5].w[0] + 14336u);  if (depth < kMaxDepth) unit_0072(c, 189u, depth + 1u); else { c.pc = 0x002C93B0u; return; } if (c.pc != 0x0027030Cu) [[unlikely]] return; }
L_0027030C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270320u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00270320u) [[unlikely]] return; }
L_00270320:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270330u); set32(c.r[4], c.r[4].w[0] + 14355u);  if (depth < kMaxDepth) unit_0088(c, 223u, depth + 1u); else { c.pc = 0x00321A40u; return; } if (c.pc != 0x00270330u) [[unlikely]] return; }
L_00270330:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270344u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00270344u) [[unlikely]] return; }
L_00270344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00270360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027037Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 257u, depth + 1u); else { c.pc = 0x00262090u; return; } if (c.pc != 0x0027037Cu) [[unlikely]] return; }
L_0027037C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 16u));  goto L_0027038C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270468; } }
L_0027038C:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002703A0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002703A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002703C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002703C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002703C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002703E0; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_002703E0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002703E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00270400; } }
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00270400; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270400:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  goto L_00270410; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270468; } }
L_00270410:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00270424; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00270468; }
L_00270424:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00270438; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00270458; } }
L_00270438:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00270468; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00270450u); set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00270450u) [[unlikely]] return; }
L_00270450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00270464; } }
L_00270458:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270468; } }
L_00270464:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00270468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00270480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027049Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 258u, depth + 1u); else { c.pc = 0x002620A0u; return; } if (c.pc != 0x0027049Cu) [[unlikely]] return; }
L_0027049C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002704A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 197u, depth + 1u); else { c.pc = 0x002C9470u; return; } if (c.pc != 0x002704A8u) [[unlikely]] return; }
L_002704A8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002704BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002704BCu) [[unlikely]] return; }
L_002704BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002704D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002704ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 259u, depth + 1u); else { c.pc = 0x002620B0u; return; } if (c.pc != 0x002704ECu) [[unlikely]] return; }
L_002704EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  goto L_002704FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270518; } }
L_002704FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00270518; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00270514u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00270514u) [[unlikely]] return; }
L_00270514:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00270518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00270530:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002620C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 260u, depth); }
L_00270540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270560u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 261u, depth + 1u); else { c.pc = 0x002620D0u; return; } if (c.pc != 0x00270560u) [[unlikely]] return; }
L_00270560:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027056Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 202u, depth + 1u); else { c.pc = 0x002C9590u; return; } if (c.pc != 0x0027056Cu) [[unlikely]] return; }
L_0027056C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270574u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x00270574u) [[unlikely]] return; }
L_00270574:
    set32(c.r[17], ld32((c.r[18].w[0] + 32u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002705E8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 32u), c.r[16].w[0]);  goto L_002705C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270594u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00270594u) [[unlikely]] return; }
L_00270594:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705A4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002705A4u) [[unlikely]] return; }
L_002705A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002705C0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002705C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002705C0u) [[unlikely]] return; }
L_002705C0:
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 1;
L_002705C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002705E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002705D4u) [[unlikely]] return; }
L_002705D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002705E4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002705E4u) [[unlikely]] return; }
L_002705E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002705E8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00270600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027061Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0027061Cu) [[unlikely]] return; }
L_0027061C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00270690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027062Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x0027062Cu) [[unlikely]] return; }
L_0027062C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 4704u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 13616u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13620u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13624u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13628u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 32u), 0u);  if (t) { goto L_0027068C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027067Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027067Cu) [[unlikely]] return; }
L_0027067C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027068Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027068Cu) [[unlikely]] return; }
L_0027068C:
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_00270690:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002706B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002706DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002706DCu) [[unlikely]] return; }
L_002706DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00270750; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002706ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 277u, depth + 1u); else { c.pc = 0x00262350u; return; } if (c.pc != 0x002706ECu) [[unlikely]] return; }
L_002706EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 4704u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 13616u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 13620u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13624u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13628u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_0027074C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027073Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027073Cu) [[unlikely]] return; }
L_0027073C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027074Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0027074Cu) [[unlikely]] return; }
L_0027074C:
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 1;
L_00270750:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270760u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x002620E0u; return; } if (c.pc != 0x00270760u) [[unlikely]] return; }
L_00270760:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 12;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_002707F4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 32u)));  goto L_002707D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002707A0u) [[unlikely]] return; }
L_002707A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707B0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002707B0u) [[unlikely]] return; }
L_002707B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002707CC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002707CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002707CCu) [[unlikely]] return; }
L_002707CC:
    set32(c.r[16], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 1;
L_002707D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), c.r[16].w[0]);  if (t) { goto L_002707F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002707E0u) [[unlikely]] return; }
L_002707E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002707F0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002707F0u) [[unlikely]] return; }
L_002707F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_002707F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 3;
L_00270800:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00270820:
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
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00270900; } }
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 13616u));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00270888; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270888:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002708AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 13620u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002708AC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002708AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002708D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 13624u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002708D0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002708D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] ^ 1ull;  goto L_00270A18; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[2].w[0] + 13628u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_002708F4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002708F4:
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00270A18; } }
L_00270900:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_00270920; }
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_0027092C; } }
L_00270920:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0027092C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00270964; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[8], c.r[17].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270944u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_005C(c, 245u, depth + 1u); else { c.pc = 0x002728C0u; return; } if (c.pc != 0x00270944u) [[unlikely]] return; }
L_00270944:
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 8;
L_00270964:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 13616u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002709A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 13620u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002709A0; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002709A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002709C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 13624u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002709C4; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002709C4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002709E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[2].w[0] + 13628u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002709E8; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002709E8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[16].w[0]), c.f[2]);  goto L_002709F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270A18; } }
L_002709F8:
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[20]);
    c.budget -= 8;
L_00270A18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00270A30:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A5Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0058(c, 223u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x00270A5Cu) [[unlikely]] return; }
L_00270A5C:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00270B2C; } }
    c.f[12] = c.f[21];
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A78u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_005C(c, 206u, depth + 1u); else { c.pc = 0x00272230u; return; } if (c.pc != 0x00270A78u) [[unlikely]] return; }
L_00270A78:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { st32((c.r[17].w[0] + 36u), 0u);  goto L_00270AEC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 32u), c.r[16].w[0]);  goto L_00270AC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270A98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00270A98u) [[unlikely]] return; }
L_00270A98:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270AA8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00270AA8u) [[unlikely]] return; }
L_00270AA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00270AC4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00270AC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00270AC4u) [[unlikely]] return; }
L_00270AC4:
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 1;
L_00270AC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00270AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270AD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00270AD8u) [[unlikely]] return; }
L_00270AD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270AE8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00270AE8u) [[unlikely]] return; }
L_00270AE8:
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 1;
L_00270AEC:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00270B30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00270B00u) [[unlikely]] return; }
L_00270B00:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B10u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00270B10u) [[unlikely]] return; }
L_00270B10:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00270B2C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00270B2Cu) [[unlikely]] return; }
L_00270B2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00270B30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00270B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00270B70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270B6Cu);  if (depth < kMaxDepth) unit_005C(c, 220u, depth + 1u); else { c.pc = 0x00272420u; return; } if (c.pc != 0x00270B6Cu) [[unlikely]] return; }
L_00270B6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00270B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00270B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00270DE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[13], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_00270C5C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00270C28; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00270C08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00270BD8u) [[unlikely]] return; }
L_00270BD8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270BE8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00270BE8u) [[unlikely]] return; }
L_00270BE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00270C04; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00270C04u) [[unlikely]] return; }
L_00270C04:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270C08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_00270C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00270C18u) [[unlikely]] return; }
L_00270C18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270C28u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00270C28u) [[unlikely]] return; }
L_00270C28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 13616u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[5].w[0] + 13620u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 13624u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 13628u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.f[0]);  if (t) { goto L_00270DE0; } }
L_00270C5C:
    c.f[20] = ld32((c.r[13].w[0] + 16u));
    set32(c.r[6], 0u + 1u);
    c.f[21] = ld32((c.r[13].w[0] + 20u));
    c.f[22] = ld32((c.r[13].w[0] + 24u));
    c.f[23] = ld32((c.r[13].w[0] + 28u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00270C8C; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[5].d[0]) { set32(c.r[5], 0u + 1u);  goto L_00270C90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00270D60; } }
L_00270C8C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00270C90:
    c.budget -= 2;
    if (c.r[8].d[0] == c.r[5].d[0]) { set32(c.r[14], 0u + 1u);  goto L_00270CA8; }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_00270D60; } }
    set32(c.r[14], 0u + 1u);
    c.budget -= 1;
L_00270CA8:
    c.r[12].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[9].d[0] = c.r[14].d[0] + 0ull;
    c.r[8].d[0] = c.r[14].d[0] + 0ull;
    c.r[7].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_00270D44; } }
L_00270CC4:
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[11], c.r[13].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[11].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[10], c.r[11].w[0] + 16u);  if (t) { goto L_00270CE0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270CE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00270CFC; } }
    c.f[0] = ld32((c.r[10].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00270CFC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270CFC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00270D18; } }
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00270D18; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270D18:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00270D34; } }
    c.f[0] = ld32((c.r[10].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00270D34; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270D34:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[14], c.r[14].w[0] + 1u);  goto L_00270D44; }
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.budget -= 2;
L_00270D44:
    c.r[5].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00270D60; } }
    c.r[5].d[0] = c.r[14].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { mmi::mult(c, 0, c.r[14].w[0], c.r[12].w[0]); c.r[10].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00270CC4u | kUnwind; return; } goto L_00270CC4; }
L_00270D60:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00270DE4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.f[20]);  goto L_00270DD4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00270DB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00270D80u) [[unlikely]] return; }
L_00270D80:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270D90u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00270D90u) [[unlikely]] return; }
L_00270D90:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00270DAC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00270DACu) [[unlikely]] return; }
L_00270DAC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270DB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_00270DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00270DC0u) [[unlikely]] return; }
L_00270DC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00270DD0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00270DD0u) [[unlikely]] return; }
L_00270DD0:
    st32((c.r[17].w[0] + 16u), c.f[20]);
    c.budget -= 1;
L_00270DD4:
    st32((c.r[17].w[0] + 20u), c.f[21]);
    st32((c.r[17].w[0] + 24u), c.f[22]);
    st32((c.r[17].w[0] + 28u), c.f[23]);
    c.budget -= 3;
L_00270DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00270DE4:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00270E10:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00270E24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00270EAC; } }
L_00270E24:
    c.f[0] = ld32((c.r[2].w[0] + 13616u));
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00270E3C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00270E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13620u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00270E60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270E60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00270E84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13624u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00270E84; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270E84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_00270EAC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 13628u));
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00270EA8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00270EA8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_00270EAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270EC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00270EE0; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[9], ld32((c.r[3].w[0] + 16u)));
    c.r[8].d[0] = ld8((c.r[3].w[0] + 20u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_00270EEC; } }
L_00270EE0:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00270EEC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_00270FB4; } }
    set32(c.r[7], 0u + 4u);
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[7].d[0]) { set32(c.r[7], c.r[4].w[0] - 1u);  goto L_00270F94; }
    c.f[2] = ld32((c.r[28].w[0] - 32640u));
    c.r[11].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[7].d[0] = c.r[11].d[0] & 255ull;
    c.budget -= 5;
L_00270F14:
    set32(c.r[9], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[10].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[7].d[0] = ld8((c.r[7].w[0] + 56u));  if (t) { goto L_00270F6C; } }
    set32(c.r[10], ld32((c.r[10].w[0] + 60u)));
    c.f[0] = ld32((c.r[10].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[9], c.r[9].w[0] - 1u);  goto L_00270F48; }
    c.f[2] = c.f[0];
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 2;
L_00270F48:
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    mmi::mult(c, 0, c.r[9].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[12].d[0] = c.r[8].d[0] + 0ull;  goto L_00270F6C; }
    c.f[1] = c.f[0];
    c.r[12].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_00270F6C:
    set32(c.r[7], c.r[11].w[0] + 1u);
    c.r[11].d[0] = c.r[7].d[0] & 255ull;
    c.r[7].d[0] = c.r[11].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = c.r[11].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00270F14u | kUnwind; return; } goto L_00270F14; }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_00270FB4; } }
    st32((c.r[5].w[0]), c.f[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[1]);  if (t) { goto L_00270FB4; } }
L_00270F94:
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[8].d[0] & 255ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 8;
L_00270FB4:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_00270FC4; } }
    st32((c.r[5].w[0]), 0u);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 2;
L_00270FC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270FD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00270FE0; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 1;
L_00270FE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00270FF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00271000; }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 1;
L_00271000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271010:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00271020:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00271030; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_00271030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271040:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00271050; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_00271050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00271060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00271070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00271080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710A4u); set32(c.r[4], c.r[4].w[0] + 14448u);  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002710A4u) [[unlikely]] return; }
L_002710A4:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710B8u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002710B8u) [[unlikely]] return; }
L_002710B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710C8u); set32(c.r[5], c.r[5].w[0] + 14464u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x002710C8u) [[unlikely]] return; }
L_002710C8:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710DCu); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002710DCu) [[unlikely]] return; }
L_002710DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002710ECu); set32(c.r[5], c.r[5].w[0] + 14477u);  if (depth < kMaxDepth) unit_0072(c, 189u, depth + 1u); else { c.pc = 0x002C93B0u; return; } if (c.pc != 0x002710ECu) [[unlikely]] return; }
L_002710EC:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271100u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00271100u) [[unlikely]] return; }
L_00271100:
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271110u); set32(c.r[4], c.r[4].w[0] + 14487u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x00271110u) [[unlikely]] return; }
L_00271110:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271124u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00271124u) [[unlikely]] return; }
L_00271124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00271140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027115Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x0027115Cu) [[unlikely]] return; }
L_0027115C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271168u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 197u, depth + 1u); else { c.pc = 0x002C9470u; return; } if (c.pc != 0x00271168u) [[unlikely]] return; }
L_00271168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271174u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00271174u) [[unlikely]] return; }
L_00271174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00271190:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x002711ACu) [[unlikely]] return; }
L_002711AC:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 202u, depth + 1u); else { c.pc = 0x002C9590u; return; } if (c.pc != 0x002711B8u) [[unlikely]] return; }
L_002711B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711C4u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002711C4u) [[unlikely]] return; }
L_002711C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 110ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00271240; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002711E8u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002711E8u) [[unlikely]] return; }
L_002711E8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00271200; }
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[17].w[0]), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00271200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271208u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00271208u) [[unlikely]] return; }
L_00271208:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00271220; }
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00271220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271228u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00271228u) [[unlikely]] return; }
L_00271228:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 63u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027123C; } }
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.budget -= 2;
L_0027123C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00271240:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00271250:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = ld32((c.r[3].w[0] + 14404u));
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[22] = ld32((c.r[3].w[0] + 14408u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[4] = ld32((c.r[3].w[0] + 14416u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[6] = ld32((c.r[3].w[0] + 14424u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[7] = ld32((c.r[3].w[0] + 14428u));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002712C4; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = fp::mul(c.f[2], c.f[0]);  goto L_002712C8; }
L_002712C4:
    c.f[20] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 1;
L_002712C8:
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[5] = ld32((c.r[28].w[0] - 32644u));  goto L_0027131C; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_002712F8; }
    c.f[5] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027131C; } }
L_002712F8:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271304u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0072(c, 228u, depth + 1u); else { c.pc = 0x002C9E60u; return; } if (c.pc != 0x00271304u) [[unlikely]] return; }
L_00271304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027130Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0072(c, 207u, depth + 1u); else { c.pc = 0x002C95F0u; return; } if (c.pc != 0x0027130Cu) [[unlikely]] return; }
L_0027130C:
    c.f[4] = ld32((c.r[29].w[0] + 80u));
    c.f[5] = ld32((c.r[29].w[0] + 84u));
    c.f[6] = ld32((c.r[29].w[0] + 88u));
    c.f[7] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 4;
L_0027131C:
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[8] = ld32((c.r[28].w[0] - 32644u));  goto L_00271364; }
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[8] = fp::add(c.f[2], c.f[0]);  goto L_0027134C; }
    c.f[8] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271364; } }
L_0027134C:
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[21] = fp::add(c.f[3], c.f[2]);
    c.f[22] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
L_00271364:
    st32((c.r[18].w[0]), c.f[8]);
    st32((c.r[18].w[0] + 4u), c.f[21]);
    st32((c.r[18].w[0] + 8u), c.f[22]);
    st32((c.r[18].w[0] + 16u), c.f[4]);
    st32((c.r[18].w[0] + 20u), c.f[5]);
    st32((c.r[18].w[0] + 24u), c.f[6]);
    st32((c.r[18].w[0] + 28u), c.f[7]);
    st32((c.r[18].w[0] + 32u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002713B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.f[31]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[3].w[0] + 14404u));
    c.f[2] = ld32((c.r[5].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[21] = ld32((c.r[3].w[0] + 14408u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 14416u));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 14424u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 14428u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[31] = c.r[3].w[0];
    c.budget -= 40;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_00271460; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[20] = fp::mul(c.f[2], c.f[0]);  goto L_00271468; }
L_00271460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[28].w[0] - 32644u));  if (t) { goto L_0027146C; } }
L_00271468:
    c.f[31] = c.f[20];
    c.budget -= 1;
L_0027146C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[6].w[0] + 15184u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_0027147C:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027147Cu | kUnwind; return; } goto L_0027147C; } }
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32644u));  goto L_002714C0; }
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_002714C8; }
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 1;
L_002714C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.f[0]);  if (t) { goto L_002715B0; } }
L_002714C8:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714D4u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0072(c, 228u, depth + 1u); else { c.pc = 0x002C9E60u; return; } if (c.pc != 0x002714D4u) [[unlikely]] return; }
L_002714D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002714DCu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0072(c, 207u, depth + 1u); else { c.pc = 0x002C95F0u; return; } if (c.pc != 0x002714DCu) [[unlikely]] return; }
L_002714DC:
    c.f[7] = ld32((c.r[17].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[2] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.f[6] = fp::mul(c.f[2], c.f[7]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = fp::mul(c.f[2], c.f[5]);
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[3] = ld32((c.r[17].w[0] + 28u));
    c.f[30] = fp::mul(c.f[6], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    c.f[22] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.f[29] = fp::mul(c.f[4], c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    c.f[25] = fp::mul(c.f[2], c.f[7]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[28] = fp::mul(c.f[2], c.f[1]);
    c.f[24] = fp::mul(c.f[4], c.f[5]);
    c.f[26] = fp::mul(c.f[4], c.f[7]);
    c.f[1] = fp::add(c.f[24], c.f[22]);
    c.f[0] = c.r[2].w[0];
    c.f[27] = fp::mul(c.f[6], c.f[7]);
    c.f[23] = fp::mul(c.f[2], c.f[5]);
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    c.f[13] = fp::add(c.f[26], c.f[28]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271568u); c.f[14] = fp::sub(c.f[25], c.f[29]);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x00271568u) [[unlikely]] return; }
L_00271568:
    c.f[1] = fp::add(c.f[27], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[26], c.f[28]);
    c.f[13] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027158Cu); c.f[14] = fp::add(c.f[23], c.f[30]);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x0027158Cu) [[unlikely]] return; }
L_0027158C:
    c.f[1] = fp::add(c.f[27], c.f[24]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], 0u + 2u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[25], c.f[29]);
    c.f[13] = fp::sub(c.f[23], c.f[30]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715B0u); c.f[14] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x002715B0u) [[unlikely]] return; }
L_002715B0:
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[4] = ld32((c.r[28].w[0] - 32644u));  goto L_00271628; }
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_002715E0; }
    c.f[4] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271628; } }
L_002715E0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002715ECu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x002715ECu) [[unlikely]] return; }
L_002715EC:
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 208u));
    c.f[3] = 0u;
    c.facc = fp::add(c.f[3], c.f[4]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[31], c.f[5]));
    c.f[2] = ld32((c.r[29].w[0] + 212u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[31], c.f[2]));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[21] = fp::add(c.facc, fp::mul(c.f[31], c.f[1]));
    c.budget -= 15;
L_00271628:
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[18].w[0]), c.f[4]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[18].w[0] + 8u), c.f[21]);
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    st32((c.r[18].w[0] + 32u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_002716B0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[29] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00271710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.f[0]);  if (t) { goto L_00271720; } }
L_00271710:
    fpu_div(c, 29u, c.f[29], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[29]);
    c.budget -= 4;
L_00271720:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] + 15184u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_00271730:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271730u | kUnwind; return; } goto L_00271730; } }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00271768; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.f[0]);  if (t) { goto L_00271848; } }
L_00271768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271770u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0072(c, 227u, depth + 1u); else { c.pc = 0x002C9E30u; return; } if (c.pc != 0x00271770u) [[unlikely]] return; }
L_00271770:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[16].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 24u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[16].w[0] + 28u), c.f[1]);
    c.f[6] = ld32((c.r[16].w[0] + 20u));
    c.f[4] = ld32((c.r[16].w[0] + 24u));
    c.f[1] = ld32((c.r[16].w[0] + 28u));
    c.f[5] = fp::mul(c.f[2], c.f[6]);
    c.f[3] = fp::mul(c.f[2], c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[22] = fp::mul(c.f[3], c.f[4]);
    c.f[28] = fp::mul(c.f[5], c.f[1]);
    c.f[27] = fp::mul(c.f[3], c.f[1]);
    c.f[26] = fp::mul(c.f[2], c.f[1]);
    c.f[24] = fp::mul(c.f[3], c.f[6]);
    c.f[23] = fp::mul(c.f[2], c.f[6]);
    c.f[1] = fp::add(c.f[22], c.f[20]);
    c.f[25] = fp::mul(c.f[5], c.f[6]);
    c.f[21] = fp::mul(c.f[2], c.f[4]);
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    c.f[13] = fp::add(c.f[24], c.f[26]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271800u); c.f[14] = fp::sub(c.f[23], c.f[27]);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x00271800u) [[unlikely]] return; }
L_00271800:
    c.f[1] = fp::add(c.f[25], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[24], c.f[26]);
    c.f[13] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271824u); c.f[14] = fp::add(c.f[21], c.f[28]);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x00271824u) [[unlikely]] return; }
L_00271824:
    c.f[1] = fp::add(c.f[25], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 2u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::add(c.f[23], c.f[27]);
    c.f[13] = fp::sub(c.f[21], c.f[28]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271848u); c.f[14] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_004F(c, 138u, depth + 1u); else { c.pc = 0x0023E3A0u; return; } if (c.pc != 0x00271848u) [[unlikely]] return; }
L_00271848:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[1] ^ fp::kSign;  goto L_00271864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_002718B4; } }
L_00271864:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271890u); st32((c.r[29].w[0] + 168u), c.f[2]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x00271890u) [[unlikely]] return; }
L_00271890:
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[1] = ld32((c.r[29].w[0] + 180u));
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[0] = fp::mul(c.f[29], c.f[0]);
    c.f[1] = fp::mul(c.f[29], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[2] = fp::mul(c.f[29], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 9;
L_002718B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002718F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00271920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.f[0]);  if (t) { goto L_00271934; } }
L_00271920:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.budget -= 5;
L_00271934:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00271950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.f[0]);  if (t) { goto L_00271978; } }
L_00271950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271958u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0072(c, 227u, depth + 1u); else { c.pc = 0x002C9E30u; return; } if (c.pc != 0x00271958u) [[unlikely]] return; }
L_00271958:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.budget -= 8;
L_00271978:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = c.f[1] ^ fp::kSign;  goto L_00271994; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_002719B0; } }
L_00271994:
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 7;
L_002719B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002719D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00271A1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A00u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 9u, depth + 1u); else { c.pc = 0x0025C0D0u; return; } if (c.pc != 0x00271A00u) [[unlikely]] return; }
L_00271A00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00271A20; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A1Cu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00271A1Cu) [[unlikely]] return; }
L_00271A1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00271A20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00271A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14496u);  c.pc = t; return; }
L_00271A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00271A60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00271A7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00271AB4; } }
L_00271A7C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271A88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271A88u) [[unlikely]] return; }
L_00271A88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_00271AA4; } }
L_00271A94:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00271AA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00271AB0; } }
L_00271AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271A94u | kUnwind; return; } goto L_00271A94; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00271AB0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00271AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00271AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AD4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 107u, depth + 1u); else { c.pc = 0x0031D490u; return; } if (c.pc != 0x00271AD4u) [[unlikely]] return; }
L_00271AD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AE0u); set32(c.r[4], ld32((c.r[2].w[0] + 14496u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00271AE0u) [[unlikely]] return; }
L_00271AE0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271AF4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00271AF4u) [[unlikely]] return; }
L_00271AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00271B10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BD90u | kUnwind; return; } [[clang::musttail]] return unit_0056(c, 486u, depth); }
L_00271B20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BDE0u | kUnwind; return; } [[clang::musttail]] return unit_0056(c, 489u, depth); }
L_00271B30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BE30u | kUnwind; return; } [[clang::musttail]] return unit_0056(c, 492u, depth); }
L_00271B40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BE90u | kUnwind; return; } [[clang::musttail]] return unit_0056(c, 495u, depth); }
L_00271B50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025BF40u | kUnwind; return; } [[clang::musttail]] return unit_0056(c, 503u, depth); }
L_00271B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 60u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B7Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00271B7Cu) [[unlikely]] return; }
L_00271B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00271BCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271B8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 251u, depth + 1u); else { c.pc = 0x0031E6D0u; return; } if (c.pc != 0x00271B8Cu) [[unlikely]] return; }
L_00271B8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 960u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_00271BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00271BACu) [[unlikely]] return; }
L_00271BAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271BBCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00271BBCu) [[unlikely]] return; }
L_00271BBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 52u), 0u);
    set32(c.r[2], c.r[2].w[0] + 4896u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00271BCC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00271BF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 60u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C1Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00271C1Cu) [[unlikely]] return; }
L_00271C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00271C6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 251u, depth + 1u); else { c.pc = 0x0031E6D0u; return; } if (c.pc != 0x00271C2Cu) [[unlikely]] return; }
L_00271C2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 960u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 56u), 0u);  if (t) { goto L_00271C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00271C4Cu) [[unlikely]] return; }
L_00271C4C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C5Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00271C5Cu) [[unlikely]] return; }
L_00271C5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[2], c.r[2].w[0] + 4896u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00271C6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271C7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 509u, depth + 1u); else { c.pc = 0x0025BFC0u; return; } if (c.pc != 0x00271C7Cu) [[unlikely]] return; }
L_00271C7C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00271CA0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00271E68; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00271D48; }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[4].d[0] & 64ull;  goto L_00271CF4; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00271CF0; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271D48; } }
L_00271CF0:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_00271CF4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_00271D3C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271D0Cu) [[unlikely]] return; }
L_00271D0C:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 40u), c.f[0]);  goto L_00271D38; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00271D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00271D48; } }
L_00271D34:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_00271D38:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_00271D3C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00271D48:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00271D5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00271E6C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00271D5C:
    set32(c.r[5], c.r[29].w[0] + 184u);
    set32(c.r[6], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D6Cu); set32(c.r[7], c.r[29].w[0] + 191u);  if (depth < kMaxDepth) unit_0057(c, 8u, depth + 1u); else { c.pc = 0x0025C090u; return; } if (c.pc != 0x00271D6Cu) [[unlikely]] return; }
L_00271D6C:
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.f[12] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = ld8((c.r[29].w[0] + 191u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271D88u); set32(c.r[7], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0057(c, 258u, depth + 1u); else { c.pc = 0x0025DF30u; return; } if (c.pc != 0x00271D88u) [[unlikely]] return; }
L_00271D88:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.f[12] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[2].w[0] + 48u));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    st32((c.r[29].w[0] + 128u), c.f[3]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 64u));
    c.f[2] = ld32((c.r[2].w[0] + 68u));
    c.f[1] = ld32((c.r[2].w[0] + 72u));
    c.f[0] = ld32((c.r[2].w[0] + 76u));
    st32((c.r[29].w[0] + 144u), c.f[3]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 80u));
    c.f[2] = ld32((c.r[2].w[0] + 84u));
    c.f[1] = ld32((c.r[2].w[0] + 88u));
    c.f[0] = ld32((c.r[2].w[0] + 92u));
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 168u), c.f[1]);
    st32((c.r[29].w[0] + 124u), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E04u); st32((c.r[29].w[0] + 172u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 83u, depth + 1u); else { c.pc = 0x0027D9D0u; return; } if (c.pc != 0x00271E04u) [[unlikely]] return; }
L_00271E04:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271E14u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x00271E14u) [[unlikely]] return; }
L_00271E14:
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_00271E20:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271E20u | kUnwind; return; } goto L_00271E20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[3].w[0] + 48u);
    c.budget -= 4;
L_00271E4C:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00271E4Cu | kUnwind; return; } goto L_00271E4C; } }
L_00271E68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00271E6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00271E80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14536u);  c.pc = t; return; }
L_00271E90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x00271EACu) [[unlikely]] return; }
L_00271EAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EB8u); set32(c.r[4], ld32((c.r[2].w[0] + 14536u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00271EB8u) [[unlikely]] return; }
L_00271EB8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271ECCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00271ECCu) [[unlikely]] return; }
L_00271ECC:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EDCu); set32(c.r[4], c.r[4].w[0] + 14544u);  if (depth < kMaxDepth) unit_0088(c, 232u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x00271EDCu) [[unlikely]] return; }
L_00271EDC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271EF0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00271EF0u) [[unlikely]] return; }
L_00271EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00271F10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00271F34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x00271F34u) [[unlikely]] return; }
L_00271F34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00271F44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00271FD0; } }
L_00271F44:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00271FD0; }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00271F70; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 20u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 20u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_00271F7C; }
L_00271F70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00271FD0; } }
L_00271F7C:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 14000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00271FBC; } }
L_00271F94:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00271FACu); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00271FACu) [[unlikely]] return; }
L_00271FAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00271FBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00271FD0; } }
L_00271FBC:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[19].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00271F94u | kUnwind; return; } goto L_00271F94; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00271FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00271FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027200Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x0027200Cu) [[unlikely]] return; }
L_0027200C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272018u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00272018u) [[unlikely]] return; }
L_00272018:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0027205C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272030u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0041(c, 95u, depth + 1u); else { c.pc = 0x00205090u; return; } if (c.pc != 0x00272030u) [[unlikely]] return; }
L_00272030:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14144u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272058u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272058u) [[unlikely]] return; }
L_00272058:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0027205C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272070:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_00272080:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_00272090:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720B4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002720B4u) [[unlikely]] return; }
L_002720B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720C0u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002720C0u) [[unlikely]] return; }
L_002720C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002721B4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002720D8u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0041(c, 96u, depth + 1u); else { c.pc = 0x002050A0u; return; } if (c.pc != 0x002720D8u) [[unlikely]] return; }
L_002720D8:
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 14972u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13280u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272114u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272114u) [[unlikely]] return; }
L_00272114:
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] + 14864u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 20u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272140u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272140u) [[unlikely]] return; }
L_00272140:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 88u)));  if (t) { goto L_00272170; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272170u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272170u) [[unlikely]] return; }
L_00272170:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[19].w[0] + 8u), 0u);  goto L_00272184; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_00272194; }
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 1;
L_00272184:
    st32((c.r[19].w[0] + 12u), 0u);
    st32((c.r[19].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002721B0; } }
L_00272194:
    set32(c.r[3], c.r[3].w[0] + 14972u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 7;
L_002721B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002721B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002721D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 24u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002721E8u) [[unlikely]] return; }
L_002721E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00272214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002721F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002721F8u) [[unlikely]] return; }
L_002721F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5024u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_00272214:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272230:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027226Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_006E(c, 432u, depth + 1u); else { c.pc = 0x002BB390u; return; } if (c.pc != 0x0027226Cu) [[unlikely]] return; }
L_0027226C:
    set32(c.r[17], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[17].w[0]);  if (t) { goto L_00272290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272280u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00272280u) [[unlikely]] return; }
L_00272280:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272290u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00272290u) [[unlikely]] return; }
L_00272290:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_002722DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002722A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002722A4u) [[unlikely]] return; }
L_002722A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002722B8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002722B8u) [[unlikely]] return; }
L_002722B8:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002722D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002722D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002722D8u) [[unlikely]] return; }
L_002722D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_002722DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 124u)));  goto L_0027238C; }
    st32((c.r[29].w[0] + 120u), 0u);
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 116u), 0u);
    c.f[13] = c.f[20];
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], c.r[29].w[0] + 120u);
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272310u); set32(c.r[9], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_004E(c, 271u, depth + 1u); else { c.pc = 0x0023ABD0u; return; } if (c.pc != 0x00272310u) [[unlikely]] return; }
L_00272310:
    set32(c.r[19], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_00272348; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272348u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272348u) [[unlikely]] return; }
L_00272348:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_0027235C; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0027236C; }
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_0027235C:
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00272388; } }
L_0027236C:
    set32(c.r[2], c.r[2].w[0] + 14972u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.budget -= 7;
L_00272388:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_0027238C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_002723AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027239Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0027239Cu) [[unlikely]] return; }
L_0027239C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723ACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002723ACu) [[unlikely]] return; }
L_002723AC:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002723F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002723C0u) [[unlikely]] return; }
L_002723C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002723D0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002723D0u) [[unlikely]] return; }
L_002723D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002723EC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002723ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002723ECu) [[unlikely]] return; }
L_002723EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002723F0:
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
L_00272420:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027244Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_004E(c, 266u, depth + 1u); else { c.pc = 0x0023AA50u; return; } if (c.pc != 0x0027244Cu) [[unlikely]] return; }
L_0027244C:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002724EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 5024u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002724C8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 14576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002724C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002724C4u) [[unlikely]] return; }
L_002724C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002724C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002724D0u) [[unlikely]] return; }
L_002724D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002724F0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002724ECu); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002724ECu) [[unlikely]] return; }
L_002724EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002724F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027252Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 289u, depth + 1u); else { c.pc = 0x0023B020u; return; } if (c.pc != 0x0027252Cu) [[unlikely]] return; }
L_0027252C:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272538u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 197u, depth + 1u); else { c.pc = 0x002C9470u; return; } if (c.pc != 0x00272538u) [[unlikely]] return; }
L_00272538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027257Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 290u, depth + 1u); else { c.pc = 0x0023B030u; return; } if (c.pc != 0x0027257Cu) [[unlikely]] return; }
L_0027257C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272588u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 202u, depth + 1u); else { c.pc = 0x002C9590u; return; } if (c.pc != 0x00272588u) [[unlikely]] return; }
L_00272588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002725A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002725B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00272640; } }
L_002725E0:
    mmi::mult(c, 1, c.r[17].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 16u);
    set32(c.r[20], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002725FCu); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_005F(c, 115u, depth + 1u); else { c.pc = 0x0027E2A0u; return; } if (c.pc != 0x002725FCu) [[unlikely]] return; }
L_002725FC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00272640; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027261Cu); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0072(c, 229u, depth + 1u); else { c.pc = 0x002C9EE0u; return; } if (c.pc != 0x0027261Cu) [[unlikely]] return; }
L_0027261C:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[20].w[0] + 28u), c.f[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 9;
L_00272640:
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002725E0u | kUnwind; return; } goto L_002725E0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00272698; } }
L_00272668:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00272684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.f[1]);  if (t) { goto L_00272694; } }
L_00272684:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00272698; }
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.budget -= 1;
L_00272694:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00272698:
    c.r[3].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]); c.r[3].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00272668u | kUnwind; return; } goto L_00272668; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002726D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002726ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 288u, depth + 1u); else { c.pc = 0x0023B000u; return; } if (c.pc != 0x002726ECu) [[unlikely]] return; }
L_002726EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 16u));  goto L_002726FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272770; } }
L_002726FC:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00272710; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00272710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272730; } }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00272730; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00272730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272750; } }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00272750; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00272750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00272770; } }
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00272770; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00272770:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[13] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[14] = c.f[13];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002727C0u); c.f[15] = c.f[13];  if (depth < kMaxDepth) unit_0072(c, 232u, depth + 1u); else { c.pc = 0x002C9FC0u; return; } if (c.pc != 0x002727C0u) [[unlikely]] return; }
L_002727C0:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002727F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00272884; } }
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[8], c.r[7].w[0] - 1u);  goto L_00272834; }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_002728B4; } }
L_00272834:
    c.r[3].d[0] = c.r[9].d[0] & 255ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[8], c.r[29].w[0] + 28u);  goto L_00272874; }
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_002728B4; } }
L_00272874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027287Cu); st32((c.r[29].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_005C(c, 245u, depth + 1u); else { c.pc = 0x002728C0u; return; } if (c.pc != 0x0027287Cu) [[unlikely]] return; }
L_0027287C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002728B8; } }
L_00272884:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[3].w[0] + 15072u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[6].w[0] + 15076u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 15080u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 15084u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.budget -= 12;
L_002728B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002728B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002728C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00272908; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0027290C; }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_00272A28; } }
L_00272908:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0027290C:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[8].w[0])));  goto L_0027295C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13568u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272938u); set32(c.r[6], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272938u) [[unlikely]] return; }
L_00272938:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_00272A28; } }
L_0027295C:
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[7].w[0] - 1u);  if (t) { goto L_00272980; } }
    st32((c.r[8].w[0]), 0u);
    c.f[1] = ld32((c.r[5].w[0]));
    c.budget -= 2;
L_00272980:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.f[0] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] + 1u);  if (t) { goto L_002729B8; } }
L_00272990:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[0], c.f[1]);  goto L_002729C8; }
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.f[1] = c.f[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[8].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_002729B8:
    c.r[1].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { mmi::mult(c, 0, c.r[7].w[0], c.r[9].w[0]); c.r[2].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00272990u | kUnwind; return; } goto L_00272990; }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 1;
L_002729C8:
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13568u);
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
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272A08u); set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272A08u) [[unlikely]] return; }
L_00272A08:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 8;
L_00272A28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00272A40:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 27876u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);  goto L_00272A54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272B04; } }
L_00272A54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 9632u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13280u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 9552u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14144u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 11056u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14288u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[5], c.r[5].w[0] + 11040u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14432u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 11024u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14576u), c.r[4].w[0]);
    set32(c.r[5], 0u + 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[4].w[0] + 14972u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13424u), 0u);
    set32(c.r[4], c.r[4].w[0] + 10128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13568u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13712u), 0u);
    set32(c.r[5], c.r[5].w[0] + 9936u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 9648u);
    st32((c.r[3].w[0] + 13856u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 27876u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 14000u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14864u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14720u), 0u);
    c.budget -= 44;
L_00272B04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272B20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00272B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00272B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14568u);  c.pc = t; return; }
L_00272B50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B6Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x002619E0u; return; } if (c.pc != 0x00272B6Cu) [[unlikely]] return; }
L_00272B6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B78u); set32(c.r[4], ld32((c.r[2].w[0] + 14568u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x00272B78u) [[unlikely]] return; }
L_00272B78:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272B8Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00272B8Cu) [[unlikely]] return; }
L_00272B8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00272BAC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272BA8u) [[unlikely]] return; }
L_00272BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00272BAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00272BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272BDCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 198u, depth + 1u); else { c.pc = 0x00261A60u; return; } if (c.pc != 0x00272BDCu) [[unlikely]] return; }
L_00272BDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_00272BEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272C44; } }
L_00272BEC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00272C00; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00272C44; }
L_00272C00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00272C14; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00272C34; } }
L_00272C14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00272C44; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C2Cu); set32(c.r[5], ld32((c.r[16].w[0] + 52u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272C2Cu) [[unlikely]] return; }
L_00272C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00272C40; } }
L_00272C34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00272C44; } }
L_00272C40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00272C44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C7Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 199u, depth + 1u); else { c.pc = 0x00261A70u; return; } if (c.pc != 0x00272C7Cu) [[unlikely]] return; }
L_00272C7C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272C90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272C90u) [[unlikely]] return; }
L_00272C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CCCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 200u, depth + 1u); else { c.pc = 0x00261A80u; return; } if (c.pc != 0x00272CCCu) [[unlikely]] return; }
L_00272CCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_00272CDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00272CF8; } }
L_00272CDC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00272CF8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272CF4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272CF4u) [[unlikely]] return; }
L_00272CF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00272CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D24u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 201u, depth + 1u); else { c.pc = 0x00261A90u; return; } if (c.pc != 0x00272D24u) [[unlikely]] return; }
L_00272D24:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[3].d[0] = c.r[3].d[0] | 104ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272D50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D70u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 203u, depth + 1u); else { c.pc = 0x00261AD0u; return; } if (c.pc != 0x00272D70u) [[unlikely]] return; }
L_00272D70:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[3].d[0] = c.r[3].d[0] | 104ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00272E04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272D90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x00272D90u) [[unlikely]] return; }
L_00272D90:
    set32(c.r[18], ld32((c.r[16].w[0] + 52u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_00272E00; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), c.r[17].w[0]);  goto L_00272DE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00272DB0u) [[unlikely]] return; }
L_00272DB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DC0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00272DC0u) [[unlikely]] return; }
L_00272DC0:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00272DDC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272DDCu) [[unlikely]] return; }
L_00272DDC:
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    c.budget -= 1;
L_00272DE0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00272E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272DF0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00272DF0u) [[unlikely]] return; }
L_00272DF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E00u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00272E00u) [[unlikely]] return; }
L_00272E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00272E04:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00272E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 168u, depth + 1u); else { c.pc = 0x0031DAB0u; return; } if (c.pc != 0x00272E3Cu) [[unlikely]] return; }
L_00272E3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00272E5C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272E58u) [[unlikely]] return; }
L_00272E58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00272E5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00272E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272E94u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 206u, depth + 1u); else { c.pc = 0x00261B60u; return; } if (c.pc != 0x00272E94u) [[unlikely]] return; }
L_00272E94:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00272F1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 454u, depth + 1u); else { c.pc = 0x002BB650u; return; } if (c.pc != 0x00272EA8u) [[unlikely]] return; }
L_00272EA8:
    set32(c.r[17], ld32((c.r[18].w[0] + 52u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_00272F18; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 52u), c.r[16].w[0]);  goto L_00272EF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00272EC8u) [[unlikely]] return; }
L_00272EC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272ED8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00272ED8u) [[unlikely]] return; }
L_00272ED8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00272EF4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272EF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272EF4u) [[unlikely]] return; }
L_00272EF4:
    st32((c.r[18].w[0] + 52u), c.r[16].w[0]);
    c.budget -= 1;
L_00272EF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00272F18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00272F08u) [[unlikely]] return; }
L_00272F08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00272F18u) [[unlikely]] return; }
L_00272F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00272F1C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00272F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00272F74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F54u);  if (depth < kMaxDepth) unit_0058(c, 207u, depth + 1u); else { c.pc = 0x00261B70u; return; } if (c.pc != 0x00272F54u) [[unlikely]] return; }
L_00272F54:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00272F78; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[16].w[0] + 20u);
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272F74u); set32(c.r[6], c.r[16].w[0] + 24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272F74u) [[unlikely]] return; }
L_00272F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00272F78:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00272F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00272FB8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00272FB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00272FB4u) [[unlikely]] return; }
L_00272FB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00272FB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00272FC0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 168u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00270000u < 16384u) { entry = entries_005C[(t - 0x00270000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00272FE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00272FF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00273000:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[17].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00273084; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 52u), c.r[17].w[0]);  goto L_00273064; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273034u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00273034u) [[unlikely]] return; }
L_00273034:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273044u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00273044u) [[unlikely]] return; }
L_00273044:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00273060; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00273060u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00273060u) [[unlikely]] return; }
L_00273060:
    st32((c.r[18].w[0] + 52u), c.r[17].w[0]);
    c.budget -= 1;
L_00273064:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00273088; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273074u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00273074u) [[unlikely]] return; }
L_00273074:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273084u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00273084u) [[unlikely]] return; }
L_00273084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00273088:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002730A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 52u)));  c.pc = t; return; }
L_002730B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002730C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730D8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 209u, depth + 1u); else { c.pc = 0x00261BA0u; return; } if (c.pc != 0x002730D8u) [[unlikely]] return; }
L_002730D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 5104u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_00273108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002730F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002730F8u) [[unlikely]] return; }
L_002730F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273108u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00273108u) [[unlikely]] return; }
L_00273108:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00273120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027315C; } }
L_0027314C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273158u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 53u, depth + 1u); else { c.pc = 0x00248680u; return; } if (c.pc != 0x00273158u) [[unlikely]] return; }
L_00273158:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0027315C:
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027314Cu | kUnwind; return; } goto L_0027314C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731C0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002731C0u) [[unlikely]] return; }
L_002731C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12928u);
    set32(c.r[6], c.r[6].w[0] + 12848u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731E0u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002731E0u) [[unlikely]] return; }
L_002731E0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002731FC; } }
L_002731EC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002731F8u); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 56u, depth + 1u); else { c.pc = 0x002486D0u; return; } if (c.pc != 0x002731F8u) [[unlikely]] return; }
L_002731F8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002731FC:
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002731ECu | kUnwind; return; } goto L_002731EC; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00273264; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00273260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273260u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00273260u) [[unlikely]] return; }
L_00273260:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00273264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00273290:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[7], 0u + 8u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 108u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 286u, depth + 1u); else { c.pc = 0x0023AFA0u; return; } if (c.pc != 0x002732D0u) [[unlikely]] return; }
L_002732D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002733D0; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002732F0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002732F0u) [[unlikely]] return; }
L_002732F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12928u);
    set32(c.r[6], c.r[6].w[0] + 12848u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273310u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00273310u) [[unlikely]] return; }
L_00273310:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] << 3);
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_00273344; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273340u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00273340u) [[unlikely]] return; }
L_00273340:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00273344:
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[18].w[0])));  goto L_00273378; }
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273374u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00273374u) [[unlikely]] return; }
L_00273374:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00273378:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027338Cu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0052(c, 63u, depth + 1u); else { c.pc = 0x00248790u; return; } if (c.pc != 0x0027338Cu) [[unlikely]] return; }
L_0027338C:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12848u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[20]);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002733C8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002733C8u) [[unlikely]] return; }
L_002733C8:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_002733D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002733F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 12848u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_00273410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273430u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00273430u) [[unlikely]] return; }
L_00273430:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 12928u);
    set32(c.r[6], c.r[6].w[0] + 12848u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273450u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00273450u) [[unlikely]] return; }
L_00273450:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273460:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00273480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));  goto L_002734A4; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002734A8; } }
L_002734A4:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002734A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002734B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002734C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00248740u | kUnwind; return; } [[clang::musttail]] return unit_0052(c, 61u, depth); }
L_002734D0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 27864u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);  goto L_002734E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027359C; } }
L_002734E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 12688u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13372u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 12576u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14236u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 13408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14380u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[5], c.r[5].w[0] + 13328u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14524u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 13296u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14668u), c.r[4].w[0]);
    set32(c.r[5], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[4].w[0] + 14995u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13516u), 0u);
    set32(c.r[4], c.r[4].w[0] + 13440u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13660u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13804u), 0u);
    set32(c.r[5], c.r[5].w[0] + 13504u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 13488u);
    st32((c.r[3].w[0] + 13948u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 27864u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 14092u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14956u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 12944u);
    st32((c.r[3].w[0] + 14812u), c.r[4].w[0]);
    c.budget -= 46;
L_0027359C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002735B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002735EC; } }
L_002735DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002735E8u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 387u, depth + 1u); else { c.pc = 0x0024F700u; return; } if (c.pc != 0x002735E8u) [[unlikely]] return; }
L_002735E8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002735EC:
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002735DCu | kUnwind; return; } goto L_002735DC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 5);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273650u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00273650u) [[unlikely]] return; }
L_00273650:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 14096u);
    set32(c.r[6], c.r[6].w[0] + 14016u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273670u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00273670u) [[unlikely]] return; }
L_00273670:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0027368C; } }
L_0027367C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273688u); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0053(c, 391u, depth + 1u); else { c.pc = 0x0024F750u; return; } if (c.pc != 0x00273688u) [[unlikely]] return; }
L_00273688:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0027368C:
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027367Cu | kUnwind; return; } goto L_0027367C; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002736C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002736F4; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002736F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002736F0u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002736F0u) [[unlikely]] return; }
L_002736F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002736F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273710:
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), 0u);  c.pc = t; return; }
L_00273730:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[7], 0u + 32u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 124u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273770u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 286u, depth + 1u); else { c.pc = 0x0023AFA0u; return; } if (c.pc != 0x00273770u) [[unlikely]] return; }
L_00273770:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00273890; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273790u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00273790u) [[unlikely]] return; }
L_00273790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 14096u);
    set32(c.r[6], c.r[6].w[0] + 14016u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737B0u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002737B0u) [[unlikely]] return; }
L_002737B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[6], c.r[2].w[0] << 5);
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_002737E4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002737E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002737E0u) [[unlikely]] return; }
L_002737E0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002737E4:
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], ld32((c.r[18].w[0])));  goto L_00273818; }
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 5);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273814u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00273814u) [[unlikely]] return; }
L_00273814:
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00273818:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273830u); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_0053(c, 397u, depth + 1u); else { c.pc = 0x0024F860u; return; } if (c.pc != 0x00273830u) [[unlikely]] return; }
L_00273830:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 14016u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273888u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00273888u) [[unlikely]] return; }
L_00273888:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00273890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002738B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[5].w[0] + 16u));  goto L_002738EC; }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.f[0]);  if (t) { goto L_00273908; } }
L_002738EC:
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    c.budget -= 7;
L_00273908:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273910:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 14016u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_00273930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273950u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00273950u) [[unlikely]] return; }
L_00273950:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 14096u);
    set32(c.r[6], c.r[6].w[0] + 14016u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273970u); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00273970u) [[unlikely]] return; }
L_00273970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273980:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.f[0]);  c.pc = t; return; }
L_002739B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024F7A0u | kUnwind; return; } [[clang::musttail]] return unit_0053(c, 395u, depth); }
L_002739C0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 27852u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);  goto L_002739D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00273A84; } }
L_002739D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 13856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13324u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 13744u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14188u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 14720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14332u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[5], c.r[5].w[0] + 14640u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14476u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 14608u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14620u), c.r[4].w[0]);
    set32(c.r[5], 0u + 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[4].w[0] + 14983u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13468u), 0u);
    set32(c.r[4], c.r[4].w[0] + 14512u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13612u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] + 14768u);
    st32((c.r[3].w[0] + 13756u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 14044u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 13900u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 14128u);
    st32((c.r[3].w[0] + 14908u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 27852u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 14764u), c.r[4].w[0]);
    c.budget -= 44;
L_00273A84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273A90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00273ACC; } }
L_00273ABC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273AC8u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 245u, depth + 1u); else { c.pc = 0x0025DDB0u; return; } if (c.pc != 0x00273AC8u) [[unlikely]] return; }
L_00273AC8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00273ACC:
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00273ABCu | kUnwind; return; } goto L_00273ABC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273B00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B30u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00273B30u) [[unlikely]] return; }
L_00273B30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21904u);
    set32(c.r[6], c.r[6].w[0] - 21984u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B50u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00273B50u) [[unlikely]] return; }
L_00273B50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00273B6C; } }
L_00273B5C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273B68u); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 249u, depth + 1u); else { c.pc = 0x0025DE00u; return; } if (c.pc != 0x00273B68u) [[unlikely]] return; }
L_00273B68:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00273B6C:
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00273B5Cu | kUnwind; return; } goto L_00273B5C; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273BA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[7], 0u + 8u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 108u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273BE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 286u, depth + 1u); else { c.pc = 0x0023AFA0u; return; } if (c.pc != 0x00273BE0u) [[unlikely]] return; }
L_00273BE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00273CE0; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C00u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00273C00u) [[unlikely]] return; }
L_00273C00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21904u);
    set32(c.r[6], c.r[6].w[0] - 21984u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C20u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00273C20u) [[unlikely]] return; }
L_00273C20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] << 3);
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_00273C54; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00273C50u) [[unlikely]] return; }
L_00273C50:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00273C54:
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[18].w[0])));  goto L_00273C88; }
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C84u); set32(c.r[5], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00273C84u) [[unlikely]] return; }
L_00273C84:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00273C88:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273C9Cu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0057(c, 253u, depth + 1u); else { c.pc = 0x0025DE50u; return; } if (c.pc != 0x00273C9Cu) [[unlikely]] return; }
L_00273C9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21984u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273CD8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00273CD8u) [[unlikely]] return; }
L_00273CD8:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00273CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00273D00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 21984u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_00273D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D40u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00273D40u) [[unlikely]] return; }
L_00273D40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21904u);
    set32(c.r[6], c.r[6].w[0] - 21984u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273D60u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00273D60u) [[unlikely]] return; }
L_00273D60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00273D70:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.f[0]);  c.pc = t; return; }
L_00273D90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[5].w[0] + 4u));  goto L_00273DB4; }
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_00273DB8; } }
L_00273DB4:
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 1;
L_00273DB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273DC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025DED0u | kUnwind; return; } [[clang::musttail]] return unit_0057(c, 256u, depth); }
L_00273DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273DE0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 27840u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);  goto L_00273DF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00273EAC; } }
L_00273DF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 15104u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13252u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 14992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14116u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 15728u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14260u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[5], c.r[5].w[0] + 15648u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14404u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] + 15616u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14548u), c.r[4].w[0]);
    set32(c.r[5], 0u + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[4].w[0] + 14965u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13396u), 0u);
    set32(c.r[4], c.r[4].w[0] + 15760u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 13540u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st32((c.r[3].w[0] + 13684u), 0u);
    set32(c.r[5], c.r[5].w[0] + 15808u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15824u);
    st32((c.r[3].w[0] + 13828u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 27840u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 13972u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 14836u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 15264u);
    st32((c.r[3].w[0] + 14692u), c.r[4].w[0]);
    c.budget -= 46;
L_00273EAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00273EC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00273EFC; } }
L_00273EEC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273EF8u); set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 359u, depth + 1u); else { c.pc = 0x0026FA90u; return; } if (c.pc != 0x00273EF8u) [[unlikely]] return; }
L_00273EF8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00273EFC:
    c.r[3].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00273EECu | kUnwind; return; } goto L_00273EEC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273F30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F60u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00273F60u) [[unlikely]] return; }
L_00273F60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16416u);
    set32(c.r[6], c.r[6].w[0] + 16336u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F80u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00273F80u) [[unlikely]] return; }
L_00273F80:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00273F9C; } }
L_00273F8C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00273F98u); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 363u, depth + 1u); else { c.pc = 0x0026FAE0u; return; } if (c.pc != 0x00273F98u) [[unlikely]] return; }
L_00273F98:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00273F9C:
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00273F8Cu | kUnwind; return; } goto L_00273F8C; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00273FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  [[clang::musttail]] return unit_005D(c, 2u, depth); }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_005D(c, 1u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274000u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00274000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_005D(c, 1u, depth);
}

}
