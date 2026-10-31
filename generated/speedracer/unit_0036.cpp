#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0036[4096] = {
    1, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45,
    0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 283, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0,
    0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0,
};

void unit_0036(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001D8000;
    case 2u: goto L_001D800C;
    case 3u: goto L_001D8010;
    case 4u: goto L_001D8040;
    case 5u: goto L_001D8064;
    case 6u: goto L_001D8090;
    case 7u: goto L_001D80C4;
    case 8u: goto L_001D80E8;
    case 9u: goto L_001D8114;
    case 10u: goto L_001D8130;
    case 11u: goto L_001D8164;
    case 12u: goto L_001D8188;
    case 13u: goto L_001D81B0;
    case 14u: goto L_001D81CC;
    case 15u: goto L_001D81D8;
    case 16u: goto L_001D81F0;
    case 17u: goto L_001D820C;
    case 18u: goto L_001D8230;
    case 19u: goto L_001D8260;
    case 20u: goto L_001D8280;
    case 21u: goto L_001D82B4;
    case 22u: goto L_001D82D8;
    case 23u: goto L_001D8300;
    case 24u: goto L_001D831C;
    case 25u: goto L_001D833C;
    case 26u: goto L_001D8350;
    case 27u: goto L_001D836C;
    case 28u: goto L_001D837C;
    case 29u: goto L_001D83A4;
    case 30u: goto L_001D83D8;
    case 31u: goto L_001D83FC;
    case 32u: goto L_001D8424;
    case 33u: goto L_001D8440;
    case 34u: goto L_001D8460;
    case 35u: goto L_001D849C;
    case 36u: goto L_001D84C0;
    case 37u: goto L_001D84F8;
    case 38u: goto L_001D851C;
    case 39u: goto L_001D8554;
    case 40u: goto L_001D8578;
    case 41u: goto L_001D85B0;
    case 42u: goto L_001D85D4;
    case 43u: goto L_001D85E4;
    case 44u: goto L_001D85F0;
    case 45u: goto L_001D85FC;
    case 46u: goto L_001D8608;
    case 47u: goto L_001D8614;
    case 48u: goto L_001D861C;
    case 49u: goto L_001D8638;
    case 50u: goto L_001D8660;
    case 51u: goto L_001D86A8;
    case 52u: goto L_001D86DC;
    case 53u: goto L_001D8700;
    case 54u: goto L_001D872C;
    case 55u: goto L_001D8748;
    case 56u: goto L_001D8768;
    case 57u: goto L_001D8780;
    case 58u: goto L_001D8790;
    case 59u: goto L_001D87CC;
    case 60u: goto L_001D87F0;
    case 61u: goto L_001D8834;
    case 62u: goto L_001D8868;
    case 63u: goto L_001D888C;
    case 64u: goto L_001D88B0;
    case 65u: goto L_001D88CC;
    case 66u: goto L_001D88F0;
    case 67u: goto L_001D8924;
    case 68u: goto L_001D8948;
    case 69u: goto L_001D896C;
    case 70u: goto L_001D8988;
    case 71u: goto L_001D89A8;
    case 72u: goto L_001D89BC;
    case 73u: goto L_001D89D8;
    case 74u: goto L_001D89E8;
    case 75u: goto L_001D8A04;
    case 76u: goto L_001D8A30;
    case 77u: goto L_001D8A64;
    case 78u: goto L_001D8A88;
    case 79u: goto L_001D8AB0;
    case 80u: goto L_001D8ACC;
    case 81u: goto L_001D8AEC;
    case 82u: goto L_001D8B04;
    case 83u: goto L_001D8B14;
    case 84u: goto L_001D8B1C;
    case 85u: goto L_001D8B70;
    case 86u: goto L_001D8BB4;
    case 87u: goto L_001D8BE8;
    case 88u: goto L_001D8C0C;
    case 89u: goto L_001D8C38;
    case 90u: goto L_001D8C54;
    case 91u: goto L_001D8C74;
    case 92u: goto L_001D8CA4;
    case 93u: goto L_001D8CC0;
    case 94u: goto L_001D8CD0;
    case 95u: goto L_001D8CE8;
    case 96u: goto L_001D8D1C;
    case 97u: goto L_001D8D40;
    case 98u: goto L_001D8D68;
    case 99u: goto L_001D8D84;
    case 100u: goto L_001D8DA4;
    case 101u: goto L_001D8DB8;
    case 102u: goto L_001D8DD4;
    case 103u: goto L_001D8DE4;
    case 104u: goto L_001D8E30;
    case 105u: goto L_001D8E70;
    case 106u: goto L_001D8EA4;
    case 107u: goto L_001D8EC8;
    case 108u: goto L_001D8EF4;
    case 109u: goto L_001D8F10;
    case 110u: goto L_001D8F30;
    case 111u: goto L_001D8F48;
    case 112u: goto L_001D8F64;
    case 113u: goto L_001D8F74;
    case 114u: goto L_001D8FA8;
    case 115u: goto L_001D8FCC;
    case 116u: goto L_001D9008;
    case 117u: goto L_001D9024;
    case 118u: goto L_001D9050;
    case 119u: goto L_001D9098;
    case 120u: goto L_001D90CC;
    case 121u: goto L_001D90F0;
    case 122u: goto L_001D911C;
    case 123u: goto L_001D9138;
    case 124u: goto L_001D9158;
    case 125u: goto L_001D9178;
    case 126u: goto L_001D9188;
    case 127u: goto L_001D91A0;
    case 128u: goto L_001D91D4;
    case 129u: goto L_001D91F8;
    case 130u: goto L_001D9220;
    case 131u: goto L_001D923C;
    case 132u: goto L_001D925C;
    case 133u: goto L_001D9270;
    case 134u: goto L_001D928C;
    case 135u: goto L_001D929C;
    case 136u: goto L_001D92D4;
    case 137u: goto L_001D9308;
    case 138u: goto L_001D932C;
    case 139u: goto L_001D9354;
    case 140u: goto L_001D9370;
    case 141u: goto L_001D9390;
    case 142u: goto L_001D93BC;
    case 143u: goto L_001D93F0;
    case 144u: goto L_001D9414;
    case 145u: goto L_001D943C;
    case 146u: goto L_001D9458;
    case 147u: goto L_001D9478;
    case 148u: goto L_001D94D0;
    case 149u: goto L_001D9510;
    case 150u: goto L_001D9544;
    case 151u: goto L_001D9568;
    case 152u: goto L_001D9594;
    case 153u: goto L_001D95B0;
    case 154u: goto L_001D95D0;
    case 155u: goto L_001D95E8;
    case 156u: goto L_001D9604;
    case 157u: goto L_001D9614;
    case 158u: goto L_001D9648;
    case 159u: goto L_001D966C;
    case 160u: goto L_001D96A8;
    case 161u: goto L_001D96C4;
    case 162u: goto L_001D96F0;
    case 163u: goto L_001D9720;
    case 164u: goto L_001D9754;
    case 165u: goto L_001D9788;
    case 166u: goto L_001D978C;
    case 167u: goto L_001D97D8;
    case 168u: goto L_001D9844;
    case 169u: goto L_001D9868;
    case 170u: goto L_001D9890;
    case 171u: goto L_001D98C4;
    case 172u: goto L_001D98D4;
    case 173u: goto L_001D98F8;
    case 174u: goto L_001D9924;
    case 175u: goto L_001D9944;
    case 176u: goto L_001D9974;
    case 177u: goto L_001D9990;
    case 178u: goto L_001D99E4;
    case 179u: goto L_001D9A14;
    case 180u: goto L_001D9A44;
    case 181u: goto L_001D9A60;
    case 182u: goto L_001D9A84;
    case 183u: goto L_001D9A8C;
    case 184u: goto L_001D9AB8;
    case 185u: goto L_001D9B1C;
    case 186u: goto L_001D9B24;
    case 187u: goto L_001D9B50;
    case 188u: goto L_001D9B74;
    case 189u: goto L_001D9B7C;
    case 190u: goto L_001D9BF8;
    case 191u: goto L_001D9C28;
    case 192u: goto L_001D9C58;
    case 193u: goto L_001D9C74;
    case 194u: goto L_001D9D10;
    case 195u: goto L_001D9D18;
    case 196u: goto L_001D9DB4;
    case 197u: goto L_001D9DBC;
    case 198u: goto L_001D9E58;
    case 199u: goto L_001D9E60;
    case 200u: goto L_001D9F04;
    case 201u: goto L_001D9F0C;
    case 202u: goto L_001D9F74;
    case 203u: goto L_001D9F7C;
    case 204u: goto L_001D9FC8;
    case 205u: goto L_001DA028;
    case 206u: goto L_001DA048;
    case 207u: goto L_001DA074;
    case 208u: goto L_001DA0AC;
    case 209u: goto L_001DA0B4;
    case 210u: goto L_001DA108;
    case 211u: goto L_001DA128;
    case 212u: goto L_001DA168;
    case 213u: goto L_001DA170;
    case 214u: goto L_001DA19C;
    case 215u: goto L_001DA244;
    case 216u: goto L_001DA298;
    case 217u: goto L_001DA310;
    case 218u: goto L_001DA35C;
    case 219u: goto L_001DA374;
    case 220u: goto L_001DA39C;
    case 221u: goto L_001DA3A8;
    case 222u: goto L_001DA3CC;
    case 223u: goto L_001DA430;
    case 224u: goto L_001DA478;
    case 225u: goto L_001DA4D8;
    case 226u: goto L_001DA520;
    case 227u: goto L_001DA5C4;
    case 228u: goto L_001DA5F8;
    case 229u: goto L_001DA640;
    case 230u: goto L_001DA6A0;
    case 231u: goto L_001DA6AC;
    case 232u: goto L_001DA72C;
    case 233u: goto L_001DA768;
    case 234u: goto L_001DA7BC;
    case 235u: goto L_001DA7D4;
    case 236u: goto L_001DA7F8;
    case 237u: goto L_001DA834;
    case 238u: goto L_001DA870;
    case 239u: goto L_001DA8AC;
    case 240u: goto L_001DA8E8;
    case 241u: goto L_001DA964;
    case 242u: goto L_001DA9C0;
    case 243u: goto L_001DA9DC;
    case 244u: goto L_001DAA4C;
    case 245u: goto L_001DAA78;
    case 246u: goto L_001DAA8C;
    case 247u: goto L_001DAA98;
    case 248u: goto L_001DAAD4;
    case 249u: goto L_001DAB48;
    case 250u: goto L_001DAB5C;
    case 251u: goto L_001DAB80;
    case 252u: goto L_001DAB8C;
    case 253u: goto L_001DAB94;
    case 254u: goto L_001DABC8;
    case 255u: goto L_001DABDC;
    case 256u: goto L_001DAC2C;
    case 257u: goto L_001DAC80;
    case 258u: goto L_001DACC0;
    case 259u: goto L_001DAD28;
    case 260u: goto L_001DAD84;
    case 261u: goto L_001DAE68;
    case 262u: goto L_001DAE90;
    case 263u: goto L_001DAEA4;
    case 264u: goto L_001DAEDC;
    case 265u: goto L_001DAEF8;
    case 266u: goto L_001DAF20;
    case 267u: goto L_001DAF58;
    case 268u: goto L_001DAF80;
    case 269u: goto L_001DAFB8;
    case 270u: goto L_001DAFF4;
    case 271u: goto L_001DB008;
    case 272u: goto L_001DB01C;
    case 273u: goto L_001DB02C;
    case 274u: goto L_001DB068;
    case 275u: goto L_001DB07C;
    case 276u: goto L_001DB090;
    case 277u: goto L_001DB0A0;
    case 278u: goto L_001DB0C8;
    case 279u: goto L_001DB0E4;
    case 280u: goto L_001DB10C;
    case 281u: goto L_001DB144;
    case 282u: goto L_001DB174;
    case 283u: goto L_001DB178;
    case 284u: goto L_001DB1C4;
    case 285u: goto L_001DB1D8;
    case 286u: goto L_001DB1E8;
    case 287u: goto L_001DB1F8;
    case 288u: goto L_001DB23C;
    case 289u: goto L_001DB254;
    case 290u: goto L_001DB264;
    case 291u: goto L_001DB288;
    case 292u: goto L_001DB2C4;
    case 293u: goto L_001DB310;
    case 294u: goto L_001DB364;
    case 295u: goto L_001DB36C;
    case 296u: goto L_001DB38C;
    case 297u: goto L_001DB3A0;
    case 298u: goto L_001DB3B4;
    case 299u: goto L_001DB3FC;
    case 300u: goto L_001DB448;
    case 301u: goto L_001DB464;
    case 302u: goto L_001DB480;
    case 303u: goto L_001DB4C8;
    case 304u: goto L_001DB514;
    case 305u: goto L_001DB530;
    case 306u: goto L_001DB54C;
    case 307u: goto L_001DB584;
    case 308u: goto L_001DB5F0;
    case 309u: goto L_001DB628;
    case 310u: goto L_001DB674;
    case 311u: goto L_001DB68C;
    case 312u: goto L_001DB6B4;
    case 313u: goto L_001DB6C0;
    case 314u: goto L_001DB6E4;
    case 315u: goto L_001DB748;
    case 316u: goto L_001DB770;
    case 317u: goto L_001DB77C;
    case 318u: goto L_001DB7A0;
    case 319u: goto L_001DB808;
    case 320u: goto L_001DB830;
    case 321u: goto L_001DB868;
    case 322u: goto L_001DB8B4;
    case 323u: goto L_001DB8C8;
    case 324u: goto L_001DB8F0;
    case 325u: goto L_001DB8FC;
    case 326u: goto L_001DB920;
    case 327u: goto L_001DB984;
    case 328u: goto L_001DB9A0;
    case 329u: goto L_001DB9C8;
    case 330u: goto L_001DB9D4;
    case 331u: goto L_001DB9EC;
    case 332u: goto L_001DBA40;
    case 333u: goto L_001DBA78;
    case 334u: goto L_001DBA9C;
    case 335u: goto L_001DBAD0;
    case 336u: goto L_001DBAFC;
    case 337u: goto L_001DBB20;
    case 338u: goto L_001DBB48;
    case 339u: goto L_001DBB6C;
    case 340u: goto L_001DBBA0;
    case 341u: goto L_001DBBE0;
    case 342u: goto L_001DBBFC;
    case 343u: goto L_001DBC38;
    case 344u: goto L_001DBC70;
    case 345u: goto L_001DBC94;
    case 346u: goto L_001DBCB0;
    case 347u: goto L_001DBCD4;
    case 348u: goto L_001DBCEC;
    case 349u: goto L_001DBD00;
    case 350u: goto L_001DBD24;
    case 351u: goto L_001DBD48;
    case 352u: goto L_001DBD6C;
    case 353u: goto L_001DBD88;
    case 354u: goto L_001DBDAC;
    case 355u: goto L_001DBDC4;
    case 356u: goto L_001DBDF0;
    case 357u: goto L_001DBE24;
    case 358u: goto L_001DBE48;
    case 359u: goto L_001DBE6C;
    case 360u: goto L_001DBE84;
    case 361u: goto L_001DBEB0;
    case 362u: goto L_001DBF08;
    case 363u: goto L_001DBF40;
    case 364u: goto L_001DBF60;
    case 365u: goto L_001DBF7C;
    case 366u: goto L_001DBFB8;
    case 367u: goto L_001DBFEC;
    default: bad_entry(c, 0x001D8000u); return;
    }
L_001D8000:
    set32(c.r[5], c.r[5].w[0] - 24877u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D800Cu); set32(c.r[7], c.r[7].w[0] - 24788u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D800Cu) [[unlikely]] return; }
L_001D800C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001D8010:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D8038; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D8044; } }
L_001D8038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8040u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D8040u) [[unlikely]] return; }
L_001D8040:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8044:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[9].d[0] = c.r[16].d[0] & 255ull;  goto L_001D8068; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8064u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8064u) [[unlikely]] return; }
L_001D8064:
    c.r[9].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_001D8068:
    set32(c.r[8], 0u + 9u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_001D8094; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 24877u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8090u); set32(c.r[7], c.r[7].w[0] - 24786u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8090u) [[unlikely]] return; }
L_001D8090:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001D8094:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D80BC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D80C8; } }
L_001D80BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D80C4u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D80C4u) [[unlikely]] return; }
L_001D80C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D80C8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[9].d[0] = c.r[16].d[0] & 255ull;  goto L_001D80EC; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D80E8u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D80E8u) [[unlikely]] return; }
L_001D80E8:
    c.r[9].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 1;
L_001D80EC:
    set32(c.r[8], 0u + 4u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[8].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_001D8118; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 24877u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8114u); set32(c.r[7], c.r[7].w[0] - 24784u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8114u) [[unlikely]] return; }
L_001D8114:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_001D8118:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_001D81A4; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[17], c.r[29].w[0] + 91u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_001D81CC; } }
L_001D8130:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_001D815C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D8168; } }
L_001D815C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8164u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D8164u) [[unlikely]] return; }
L_001D8164:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8168:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));  goto L_001D818C; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8188u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8188u) [[unlikely]] return; }
L_001D8188:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 1;
L_001D818C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8130u | kUnwind; return; } goto L_001D8130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[29].w[0] + 88u));  if (t) { goto L_001D81D0; } }
L_001D81A4:
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81B0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D81B0u) [[unlikely]] return; }
L_001D81B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D81CC; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81CCu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D81CCu) [[unlikely]] return; }
L_001D81CC:
    c.f[12] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 1;
L_001D81D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81D8u);  if (depth < kMaxDepth) unit_00AB(c, 484u, depth + 1u); else { c.pc = 0x003AFBE0u; return; } if (c.pc != 0x001D81D8u) [[unlikely]] return; }
L_001D81D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01DF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 24182ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D81F0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 484u, depth + 1u); else { c.pc = 0x003AFBE0u; return; } if (c.pc != 0x001D81F0u) [[unlikely]] return; }
L_001D81F0:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001D8210; }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D820Cu); set32(c.r[5], c.r[5].w[0] - 24777u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D820Cu) [[unlikely]] return; }
L_001D820C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001D8210:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001D8230:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8260u); c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 49u, depth + 1u); else { c.pc = 0x001CC6C0u; return; } if (c.pc != 0x001D8260u) [[unlikely]] return; }
L_001D8260:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_001D82F4; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[20], c.r[29].w[0] + 123u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] - 1u);  if (t) { goto L_001D831C; } }
L_001D8280:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D82AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D82B8; } }
L_001D82AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82B4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D82B4u) [[unlikely]] return; }
L_001D82B4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D82B8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_001D82DC; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D82D8u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D82D8u) [[unlikely]] return; }
L_001D82D8:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001D82DC:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8280u | kUnwind; return; } goto L_001D8280; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_001D8320; } }
L_001D82F4:
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8300u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D8300u) [[unlikely]] return; }
L_001D8300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D831C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D831Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D831Cu) [[unlikely]] return; }
L_001D831C:
    set32(c.r[18], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_001D8320:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_001D8330; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D837C; } }
L_001D8330:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D833Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001D833Cu) [[unlikely]] return; }
L_001D833C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8350u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D8350u) [[unlikely]] return; }
L_001D8350:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_001D8370; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D836Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D836Cu) [[unlikely]] return; }
L_001D836C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001D8370:
    set32(c.r[6], c.r[18].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D837Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001D837Cu) [[unlikely]] return; }
L_001D837C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_001D8388; } }
    st32((c.r[16].w[0] + 32u), c.r[21].w[0]);
    c.budget -= 1;
L_001D8388:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_001D8418; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[19], c.r[29].w[0] + 127u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] - 1u);  if (t) { goto L_001D8440; } }
L_001D83A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D83D0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D83DC; } }
L_001D83D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D83D8u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D83D8u) [[unlikely]] return; }
L_001D83D8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D83DC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[2].d[0]) { st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));  goto L_001D8400; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D83FCu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D83FCu) [[unlikely]] return; }
L_001D83FC:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 1;
L_001D8400:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D83A4u | kUnwind; return; } goto L_001D83A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 124u)));  if (t) { goto L_001D8444; } }
L_001D8418:
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8424u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D8424u) [[unlikely]] return; }
L_001D8424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8440; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8440u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8440u) [[unlikely]] return; }
L_001D8440:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_001D8444:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 124u)));  goto L_001D8464; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8460u); set32(c.r[5], c.r[5].w[0] - 24749u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8460u) [[unlikely]] return; }
L_001D8460:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_001D8464:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D8494; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D84A0; } }
L_001D8494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D849Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D849Cu) [[unlikely]] return; }
L_001D849C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D84A0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_001D84C4; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D84C0u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D84C0u) [[unlikely]] return; }
L_001D84C0:
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001D84C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D84F0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D84FC; } }
L_001D84F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D84F8u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D84F8u) [[unlikely]] return; }
L_001D84F8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D84FC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_001D8520; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D851Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D851Cu) [[unlikely]] return; }
L_001D851C:
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001D8520:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D854C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D8558; } }
L_001D854C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8554u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D8554u) [[unlikely]] return; }
L_001D8554:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8558:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_001D857C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8578u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8578u) [[unlikely]] return; }
L_001D8578:
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001D857C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D85A8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D85B4; } }
L_001D85A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85B0u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D85B0u) [[unlikely]] return; }
L_001D85B0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D85B4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001D85D8; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85D4u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D85D4u) [[unlikely]] return; }
L_001D85D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001D85D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85E4u); st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_0036(c, 104u, depth + 1u); else { c.pc = 0x001D8E30u; return; } if (c.pc != 0x001D85E4u) [[unlikely]] return; }
L_001D85E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 118u, depth + 1u); else { c.pc = 0x001D9050u; return; } if (c.pc != 0x001D85F0u) [[unlikely]] return; }
L_001D85F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D85FCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 85u, depth + 1u); else { c.pc = 0x001D8B70u; return; } if (c.pc != 0x001D85FCu) [[unlikely]] return; }
L_001D85FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8608u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 50u, depth + 1u); else { c.pc = 0x001D8660u; return; } if (c.pc != 0x001D8608u) [[unlikely]] return; }
L_001D8608:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8614u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 148u, depth + 1u); else { c.pc = 0x001D94D0u; return; } if (c.pc != 0x001D8614u) [[unlikely]] return; }
L_001D8614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D861Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 102u, depth + 1u); else { c.pc = 0x001C9B10u; return; } if (c.pc != 0x001D861Cu) [[unlikely]] return; }
L_001D861C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001D863C; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8638u); set32(c.r[5], c.r[5].w[0] - 24731u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8638u) [[unlikely]] return; }
L_001D8638:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D863C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001D8660:
    set32(c.r[29], c.r[29].w[0] - 160u);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D871C; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[17], c.r[29].w[0] + 159u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_001D8748; } }
L_001D86A8:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D86D4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D86E0; } }
L_001D86D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D86DCu); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D86DCu) [[unlikely]] return; }
L_001D86DC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D86E0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_001D8704; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8700u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8700u) [[unlikely]] return; }
L_001D8700:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001D8704:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D86A8u | kUnwind; return; } goto L_001D86A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_001D874C; } }
L_001D871C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D872Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D872Cu) [[unlikely]] return; }
L_001D872C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8748; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8748u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8748u) [[unlikely]] return; }
L_001D8748:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_001D874C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[23], ld32((c.r[29].w[0] + 156u)));  goto L_001D876C; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8768u); set32(c.r[5], c.r[5].w[0] - 24749u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8768u) [[unlikely]] return; }
L_001D8768:
    set32(c.r[23], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_001D876C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8780u); c.r[7].d[0] = c.r[23].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D8780u) [[unlikely]] return; }
L_001D8780:
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 40u), c.r[23].w[0]);  if (t) { goto L_001D8A08; } }
L_001D8790:
    set32(c.r[3], c.r[19].w[0] << 3);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D87C4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D87D0; } }
L_001D87C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D87CCu); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D87CCu) [[unlikely]] return; }
L_001D87CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D87D0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[3].d[0] = c.r[17].d[0] & 255ull;  goto L_001D87F4; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D87F0u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D87F0u) [[unlikely]] return; }
L_001D87F0:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 1;
L_001D87F4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0]), 0u);  goto L_001D8A04; }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { st32((c.r[16].w[0]), c.r[6].w[0]);  goto L_001D88D8; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_001D881C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[21].w[0])));  if (t) { goto L_001D89F0; } }
L_001D881C:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  goto L_001D88A8; }
    set32(c.r[18], c.r[29].w[0] + 155u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[6].w[0] - 1u);  if (t) { goto L_001D88CC; } }
L_001D8834:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D8860; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D886C; } }
L_001D8860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8868u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D8868u) [[unlikely]] return; }
L_001D8868:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D886C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[22].d[0] != c.r[2].d[0]) { st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));  goto L_001D8890; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D888Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D888Cu) [[unlikely]] return; }
L_001D888C:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 1;
L_001D8890:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8834u | kUnwind; return; } goto L_001D8834; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 152u));  if (t) { goto L_001D88D0; } }
L_001D88A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D88B0u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D88B0u) [[unlikely]] return; }
L_001D88B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D88CC; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D88CCu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D88CCu) [[unlikely]] return; }
L_001D88CC:
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 1;
L_001D88D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { goto L_001D8A04; } }
L_001D88D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  goto L_001D8964; }
    set32(c.r[18], c.r[29].w[0] + 147u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[6].w[0] - 1u);  if (t) { goto L_001D8988; } }
L_001D88F0:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D891C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D8928; } }
L_001D891C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8924u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D8924u) [[unlikely]] return; }
L_001D8924:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8928:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[22].d[0] != c.r[2].d[0]) { st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));  goto L_001D894C; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8948u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8948u) [[unlikely]] return; }
L_001D8948:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 1;
L_001D894C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D88F0u | kUnwind; return; } goto L_001D88F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_001D898C; } }
L_001D8964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D896Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D896Cu) [[unlikely]] return; }
L_001D896C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8988; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8988u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8988u) [[unlikely]] return; }
L_001D8988:
    set32(c.r[17], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_001D898C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_001D899C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001D89E8; } }
L_001D899C:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89A8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001D89A8u) [[unlikely]] return; }
L_001D89A8:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89BCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D89BCu) [[unlikely]] return; }
L_001D89BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_001D89DC; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89D8u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D89D8u) [[unlikely]] return; }
L_001D89D8:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_001D89DC:
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D89E8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001D89E8u) [[unlikely]] return; }
L_001D89E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001D8A04; } }
L_001D89F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[21].w[0] + 16u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A04u); set32(c.r[5], c.r[5].w[0] - 24716u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8A04u) [[unlikely]] return; }
L_001D8A04:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001D8A08:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8790u | kUnwind; return; } goto L_001D8790; }
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  goto L_001D8AA4; }
    set32(c.r[2], 0u + 4u);
    set32(c.r[17], c.r[29].w[0] + 151u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_001D8ACC; } }
L_001D8A30:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D8A5C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D8A68; } }
L_001D8A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A64u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D8A64u) [[unlikely]] return; }
L_001D8A64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8A68:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_001D8A8C; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8A88u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8A88u) [[unlikely]] return; }
L_001D8A88:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001D8A8C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8A30u | kUnwind; return; } goto L_001D8A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 148u)));  if (t) { goto L_001D8AD0; } }
L_001D8AA4:
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8AB0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D8AB0u) [[unlikely]] return; }
L_001D8AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8ACC; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8ACCu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8ACCu) [[unlikely]] return; }
L_001D8ACC:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 1;
L_001D8AD0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], ld32((c.r[29].w[0] + 148u)));  goto L_001D8AF0; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8AECu); set32(c.r[5], c.r[5].w[0] - 24749u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8AECu) [[unlikely]] return; }
L_001D8AEC:
    set32(c.r[16], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 1;
L_001D8AF0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8B04u); c.r[7].d[0] = c.r[16].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D8B04u) [[unlikely]] return; }
L_001D8B04:
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.r[16].w[0]);  if (t) { goto L_001D8B30; } }
L_001D8B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8B1Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 18u, depth + 1u); else { c.pc = 0x001D8230u; return; } if (c.pc != 0x001D8B1Cu) [[unlikely]] return; }
L_001D8B1C:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_001D8B30:
    c.r[3].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8B14u | kUnwind; return; } goto L_001D8B14; }
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
L_001D8B70:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D8C28; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[17], c.r[29].w[0] + 143u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_001D8C54; } }
L_001D8BB4:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D8BE0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D8BEC; } }
L_001D8BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8BE8u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D8BE8u) [[unlikely]] return; }
L_001D8BE8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8BEC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_001D8C10; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C0Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8C0Cu) [[unlikely]] return; }
L_001D8C0C:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001D8C10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8BB4u | kUnwind; return; } goto L_001D8BB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 140u)));  if (t) { goto L_001D8C58; } }
L_001D8C28:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C38u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D8C38u) [[unlikely]] return; }
L_001D8C38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8C54; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C54u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8C54u) [[unlikely]] return; }
L_001D8C54:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_001D8C58:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  goto L_001D8C78; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8C74u); set32(c.r[5], c.r[5].w[0] - 24749u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8C74u) [[unlikely]] return; }
L_001D8C74:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_001D8C78:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_001D8CA8; }
    c.r[8].d[0] = ld8((c.r[20].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[8].d[0];  if (t) { goto L_001D8CA4; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] - 24687u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CA4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8CA4u) [[unlikely]] return; }
L_001D8CA4:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_001D8CA8:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[2].d[0] << 2;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8CC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D8CC0u) [[unlikely]] return; }
L_001D8CC0:
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 36u), c.r[16].w[0]);  if (t) { goto L_001D8DFC; } }
L_001D8CD0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  goto L_001D8D5C; }
    set32(c.r[3], 0u + 4u);
    set32(c.r[18], c.r[29].w[0] + 139u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] - 1u);  if (t) { goto L_001D8D84; } }
L_001D8CE8:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001D8D14; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001D8D20; } }
L_001D8D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8D1Cu); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D8D1Cu) [[unlikely]] return; }
L_001D8D1C:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8D20:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[22].d[0] != c.r[3].d[0]) { st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));  goto L_001D8D44; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8D40u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8D40u) [[unlikely]] return; }
L_001D8D40:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 1;
L_001D8D44:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8CE8u | kUnwind; return; } goto L_001D8CE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 136u)));  if (t) { goto L_001D8D88; } }
L_001D8D5C:
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8D68u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D8D68u) [[unlikely]] return; }
L_001D8D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8D84; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8D84u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8D84u) [[unlikely]] return; }
L_001D8D84:
    set32(c.r[17], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_001D8D88:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_001D8D98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001D8DE8; } }
L_001D8D98:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DA4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001D8DA4u) [[unlikely]] return; }
L_001D8DA4:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DB8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D8DB8u) [[unlikely]] return; }
L_001D8DB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_001D8DD8; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DD4u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8DD4u) [[unlikely]] return; }
L_001D8DD4:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_001D8DD8:
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8DE4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001D8DE4u) [[unlikely]] return; }
L_001D8DE4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8DE8:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 5;
L_001D8DFC:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8CD0u | kUnwind; return; } goto L_001D8CD0; }
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
L_001D8E30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D8EE4; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[18], c.r[29].w[0] + 127u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] - 1u);  if (t) { goto L_001D8F10; } }
L_001D8E70:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D8E9C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D8EA8; } }
L_001D8E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8EA4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D8EA4u) [[unlikely]] return; }
L_001D8EA4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8EA8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[2].d[0]) { st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));  goto L_001D8ECC; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8EC8u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8EC8u) [[unlikely]] return; }
L_001D8EC8:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 1;
L_001D8ECC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8E70u | kUnwind; return; } goto L_001D8E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 124u)));  if (t) { goto L_001D8F14; } }
L_001D8EE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8EF4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D8EF4u) [[unlikely]] return; }
L_001D8EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D8F10; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F10u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8F10u) [[unlikely]] return; }
L_001D8F10:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_001D8F14:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[21], ld32((c.r[29].w[0] + 124u)));  goto L_001D8F34; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F30u); set32(c.r[5], c.r[5].w[0] - 24749u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8F30u) [[unlikely]] return; }
L_001D8F30:
    set32(c.r[21], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_001D8F34:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8F48u); c.r[7].d[0] = c.r[21].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D8F48u) [[unlikely]] return; }
L_001D8F48:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_001D8FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001D8FE8; } }
L_001D8F64:
    set32(c.r[3], 0u + 4u);
    set32(c.r[19], c.r[20].w[0] + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] - 1u);  if (t) { goto L_001D8FE0; } }
L_001D8F74:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001D8FA0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001D8FAC; } }
L_001D8FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8FA8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D8FA8u) [[unlikely]] return; }
L_001D8FA8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D8FAC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[3].d[0]) { st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_001D8FD0; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D8FCCu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D8FCCu) [[unlikely]] return; }
L_001D8FCC:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_001D8FD0:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8F74u | kUnwind; return; } goto L_001D8F74; } }
L_001D8FE0:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_001D8FE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D8F64u | kUnwind; return; } goto L_001D8F64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001D9028; } }
L_001D8FF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[21].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9008u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D9008u) [[unlikely]] return; }
L_001D9008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9024; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9024u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D9024u) [[unlikely]] return; }
L_001D9024:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001D9028:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001D9050:
    set32(c.r[29], c.r[29].w[0] - 160u);
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
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001D910C; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[17], c.r[29].w[0] + 159u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] - 1u);  if (t) { goto L_001D9138; } }
L_001D9098:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D90C4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D90D0; } }
L_001D90C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D90CCu); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D90CCu) [[unlikely]] return; }
L_001D90CC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D90D0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_001D90F4; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D90F0u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D90F0u) [[unlikely]] return; }
L_001D90F0:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 1;
L_001D90F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9098u | kUnwind; return; } goto L_001D9098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 156u)));  if (t) { goto L_001D913C; } }
L_001D910C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D911Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D911Cu) [[unlikely]] return; }
L_001D911C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9138; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9138u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D9138u) [[unlikely]] return; }
L_001D9138:
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_001D913C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[16], ld32((c.r[29].w[0] + 156u)));  goto L_001D915C; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9158u); set32(c.r[5], c.r[5].w[0] - 24749u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D9158u) [[unlikely]] return; }
L_001D9158:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_001D915C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] + c.r[16].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9178u); c.r[7].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D9178u) [[unlikely]] return; }
L_001D9178:
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 56u), c.r[16].w[0]);  if (t) { goto L_001D948C; } }
L_001D9188:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  goto L_001D9214; }
    set32(c.r[3], 0u + 4u);
    set32(c.r[18], c.r[29].w[0] + 147u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] - 1u);  if (t) { goto L_001D923C; } }
L_001D91A0:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001D91CC; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001D91D8; } }
L_001D91CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D91D4u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D91D4u) [[unlikely]] return; }
L_001D91D4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D91D8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[22].d[0] != c.r[3].d[0]) { st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));  goto L_001D91FC; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D91F8u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D91F8u) [[unlikely]] return; }
L_001D91F8:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 1;
L_001D91FC:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D91A0u | kUnwind; return; } goto L_001D91A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_001D9240; } }
L_001D9214:
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9220u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D9220u) [[unlikely]] return; }
L_001D9220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D923C; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D923Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D923Cu) [[unlikely]] return; }
L_001D923C:
    set32(c.r[17], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_001D9240:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_001D9250; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001D92A0; } }
L_001D9250:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D925Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001D925Cu) [[unlikely]] return; }
L_001D925C:
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9270u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D9270u) [[unlikely]] return; }
L_001D9270:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_001D9290; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D928Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D928Cu) [[unlikely]] return; }
L_001D928C:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_001D9290:
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D929Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001D929Cu) [[unlikely]] return; }
L_001D929C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D92A0:
    set32(c.r[4], c.r[19].w[0] << 1);
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[23], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  goto L_001D9348; }
    set32(c.r[3], 0u + 4u);
    set32(c.r[18], c.r[29].w[0] + 155u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] - 1u);  if (t) { goto L_001D9370; } }
L_001D92D4:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001D9300; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001D930C; } }
L_001D9300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9308u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D9308u) [[unlikely]] return; }
L_001D9308:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D930C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[22].d[0] != c.r[3].d[0]) { st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));  goto L_001D9330; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D932Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D932Cu) [[unlikely]] return; }
L_001D932C:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 1;
L_001D9330:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D92D4u | kUnwind; return; } goto L_001D92D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 152u)));  if (t) { goto L_001D9374; } }
L_001D9348:
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9354u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D9354u) [[unlikely]] return; }
L_001D9354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9370; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9370u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D9370u) [[unlikely]] return; }
L_001D9370:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_001D9374:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { set32(c.r[3], ld32((c.r[20].w[0] + 24u)));  goto L_001D9394; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9390u); set32(c.r[5], c.r[5].w[0] - 24749u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D9390u) [[unlikely]] return; }
L_001D9390:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_001D9394:
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  goto L_001D9430; }
    set32(c.r[3], 0u + 4u);
    set32(c.r[18], c.r[29].w[0] + 151u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] - 1u);  if (t) { goto L_001D9458; } }
L_001D93BC:
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001D93E8; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001D93F4; } }
L_001D93E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D93F0u); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D93F0u) [[unlikely]] return; }
L_001D93F0:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D93F4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[22].d[0] != c.r[3].d[0]) { st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));  goto L_001D9418; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9414u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D9414u) [[unlikely]] return; }
L_001D9414:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 1;
L_001D9418:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D93BCu | kUnwind; return; } goto L_001D93BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 148u)));  if (t) { goto L_001D945C; } }
L_001D9430:
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D943Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D943Cu) [[unlikely]] return; }
L_001D943C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9458; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9458u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D9458u) [[unlikely]] return; }
L_001D9458:
    set32(c.r[3], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 1;
L_001D945C:
    c.budget -= 2;
    if (c.r[3].sd[0] >= 0) { set32(c.r[3], ld32((c.r[20].w[0] + 24u)));  goto L_001D947C; }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9478u); set32(c.r[5], c.r[5].w[0] - 24749u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D9478u) [[unlikely]] return; }
L_001D9478:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_001D947C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_001D948C:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9188u | kUnwind; return; } goto L_001D9188; }
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
L_001D94D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001D9584; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[18], c.r[29].w[0] + 127u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] - 1u);  if (t) { goto L_001D95B0; } }
L_001D9510:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001D953C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001D9548; } }
L_001D953C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9544u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D9544u) [[unlikely]] return; }
L_001D9544:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D9548:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[2].d[0]) { st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));  goto L_001D956C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9568u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D9568u) [[unlikely]] return; }
L_001D9568:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 1;
L_001D956C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9510u | kUnwind; return; } goto L_001D9510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 124u)));  if (t) { goto L_001D95B4; } }
L_001D9584:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9594u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D9594u) [[unlikely]] return; }
L_001D9594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D95B0; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D95B0u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D95B0u) [[unlikely]] return; }
L_001D95B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_001D95B4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[21], ld32((c.r[29].w[0] + 124u)));  goto L_001D95D4; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D95D0u); set32(c.r[5], c.r[5].w[0] - 24749u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D95D0u) [[unlikely]] return; }
L_001D95D0:
    set32(c.r[21], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_001D95D4:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D95E8u); c.r[7].d[0] = c.r[21].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001D95E8u) [[unlikely]] return; }
L_001D95E8:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 44u), c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_001D9698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001D9688; } }
L_001D9604:
    set32(c.r[3], 0u + 4u);
    set32(c.r[19], c.r[20].w[0] + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] - 1u);  if (t) { goto L_001D9680; } }
L_001D9614:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001D9640; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001D964C; } }
L_001D9640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9648u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001D9648u) [[unlikely]] return; }
L_001D9648:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001D964C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[3].d[0]) { st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_001D9670; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D966Cu); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D966Cu) [[unlikely]] return; }
L_001D966C:
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_001D9670:
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9614u | kUnwind; return; } goto L_001D9614; } }
L_001D9680:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_001D9688:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9604u | kUnwind; return; } goto L_001D9604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001D96C8; } }
L_001D9698:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[21].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D96A8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 28u, depth + 1u); else { c.pc = 0x001DC4D0u; return; } if (c.pc != 0x001D96A8u) [[unlikely]] return; }
L_001D96A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D96C4; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D96C4u); set32(c.r[5], c.r[5].w[0] - 25037u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001D96C4u) [[unlikely]] return; }
L_001D96C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001D96C8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001D96F0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
L_001D9720:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  goto L_001D9758; }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[29].w[0] + 188u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9754u); st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0032(c, 203u, depth + 1u); else { c.pc = 0x001CB640u; return; } if (c.pc != 0x001D9754u) [[unlikely]] return; }
L_001D9754:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_001D9758:
    set32(c.r[4], c.r[29].w[0] + 188u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[21], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 12;
L_001D9788:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_001D978C:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] & 12ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[20].w[0] + 12u)));  goto L_001D9810; }
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_001D97D0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D980C; } }
L_001D97D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D97D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 15u, depth + 1u); else { c.pc = 0x001DC1F0u; return; } if (c.pc != 0x001D97D8u) [[unlikely]] return; }
L_001D97D8:
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D980C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[4], 0u + 24u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_001DAC88; } }
L_001D980C:
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_001D9810:
    set32(c.r[30], c.r[16].w[0] >> 24);
    c.r[23].d[0] = c.r[16].d[0] & 63ull;
    set32(c.r[22], c.r[30].w[0] << 3);
    c.r[1].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(35ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[19].w[0] + c.r[22].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[23].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001D9844:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9868:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] >> 46;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9890:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] >> 15);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 188u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001D978Cu | kUnwind; return; } goto L_001D978C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D98C4:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_001D98D4:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D98D4u | kUnwind; return; } goto L_001D98D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D98F8:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9924:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] >> 46;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9944u); set32(c.r[4], ld32((c.r[21].w[0] + 20u)));  if (depth < kMaxDepth) unit_0035(c, 230u, depth + 1u); else { c.pc = 0x001D6980u; return; } if (c.pc != 0x001D9944u) [[unlikely]] return; }
L_001D9944:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001D9964; }
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D9964:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9974u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 361u, depth + 1u); else { c.pc = 0x001DBEB0u; return; } if (c.pc != 0x001D9974u) [[unlikely]] return; }
L_001D9974:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9990:
    set32(c.r[3], c.r[16].w[0] >> 15);
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[23], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_001D99BC; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D99C8; } }
L_001D99BC:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] - 2000u);
    c.budget -= 3;
L_001D99C8:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[23].d[0] + 0ull;  goto L_001D9A34; }
    set32(c.r[4], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D99E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 223u, depth + 1u); else { c.pc = 0x001D6650u; return; } if (c.pc != 0x001D99E4u) [[unlikely]] return; }
L_001D99E4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = c.r[23].d[0] + 0ull;  goto L_001D9A04; }
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_001D9A04:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A14u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 361u, depth + 1u); else { c.pc = 0x001DBEB0u; return; } if (c.pc != 0x001D9A14u) [[unlikely]] return; }
L_001D9A14:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_001D9A34:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A44u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 356u, depth + 1u); else { c.pc = 0x001DBDF0u; return; } if (c.pc != 0x001D9A44u) [[unlikely]] return; }
L_001D9A44:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9A60:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 46;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 46;
    set32(c.r[5], c.r[21].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9A84u); set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001DBA40u; return; } if (c.pc != 0x001D9A84u) [[unlikely]] return; }
L_001D9A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9A8C:
    set32(c.r[3], c.r[16].w[0] >> 15);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9AB8:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9ADC; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9AE4; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9ADC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9AE4:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9B08; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9B10; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9B08:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9B10:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9B1Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 332u, depth + 1u); else { c.pc = 0x001DBA40u; return; } if (c.pc != 0x001D9B1Cu) [[unlikely]] return; }
L_001D9B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9B24:
    set32(c.r[3], c.r[16].w[0] >> 15);
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[4].d[0] = c.r[3].d[0] & 511ull;
    c.r[6].d[0] = c.r[2].d[0] & 511ull;
    c.r[3].d[0] = c.r[4].d[0] & 7ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    set32(c.r[5], c.r[3].w[0] << (c.r[2].w[0] & 31u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], 0u + 5u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9B50u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 249u, depth + 1u); else { c.pc = 0x001D6F30u; return; } if (c.pc != 0x001D9B50u) [[unlikely]] return; }
L_001D9B50:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 56u));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 48u));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9B74u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 65u, depth + 1u); else { c.pc = 0x001CC9A0u; return; } if (c.pc != 0x001D9B74u) [[unlikely]] return; }
L_001D9B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9B7C:
    set32(c.r[3], c.r[16].w[0] >> 15);
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_001D9BA8; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9BB4; } }
L_001D9BA8:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[2].w[0] - 2000u);
    c.budget -= 3;
L_001D9BB4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001D9BD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DAC88; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001D9BD0:
    set32(c.r[2], 0u + 5u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001D9C48; }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9BF8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0035(c, 230u, depth + 1u); else { c.pc = 0x001D6980u; return; } if (c.pc != 0x001D9BF8u) [[unlikely]] return; }
L_001D9BF8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001D9C18; }
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D9C18:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C28u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 361u, depth + 1u); else { c.pc = 0x001DBEB0u; return; } if (c.pc != 0x001D9C28u) [[unlikely]] return; }
L_001D9C28:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001D9C48:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9C58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 356u, depth + 1u); else { c.pc = 0x001DBDF0u; return; } if (c.pc != 0x001D9C58u) [[unlikely]] return; }
L_001D9C58:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9C74:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9C98; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9CA0; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9C98:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9CA0:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9CC4; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9CCC; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9CC4:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9CCC:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001D9D04; }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D9D00; } }
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9D00:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001D9D04:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9D10u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_0036(c, 258u, depth + 1u); else { c.pc = 0x001DACC0u; return; } if (c.pc != 0x001D9D10u) [[unlikely]] return; }
L_001D9D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9D18:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9D3C; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9D44; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9D3C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9D44:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9D68; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9D70; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9D68:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9D70:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001D9DA8; }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D9DA4; } }
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9DA4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001D9DA8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9DB4u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_0036(c, 258u, depth + 1u); else { c.pc = 0x001DACC0u; return; } if (c.pc != 0x001D9DB4u) [[unlikely]] return; }
L_001D9DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9DBC:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9DE0; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9DE8; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9DE0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9DE8:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9E0C; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9E14; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9E0C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9E14:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001D9E4C; }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D9E48; } }
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9E48:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001D9E4C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9E58u); set32(c.r[8], 0u + 7u);  if (depth < kMaxDepth) unit_0036(c, 258u, depth + 1u); else { c.pc = 0x001DACC0u; return; } if (c.pc != 0x001D9E58u) [[unlikely]] return; }
L_001D9E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9E60:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9E84; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9E8C; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9E84:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9E8C:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9EB0; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9EB8; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9EB0:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9EB8:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001D9EF8; }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001D9EF4; } }
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9EF4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001D9EF8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9F04u); set32(c.r[8], 0u + 8u);  if (depth < kMaxDepth) unit_0036(c, 258u, depth + 1u); else { c.pc = 0x001DACC0u; return; } if (c.pc != 0x001D9F04u) [[unlikely]] return; }
L_001D9F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9F0C:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9F30; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9F38; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9F30:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9F38:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001D9F5C; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001D9F64; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001D9F5C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001D9F64:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9F74u); set32(c.r[8], 0u + 9u);  if (depth < kMaxDepth) unit_0036(c, 258u, depth + 1u); else { c.pc = 0x001DACC0u; return; } if (c.pc != 0x001D9F74u) [[unlikely]] return; }
L_001D9F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001D9F7C:
    set32(c.r[3], c.r[16].w[0] >> 15);
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001D9FF4; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001D9FB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001D9FEC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001D9FB0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = 0ull + 0ull;  goto L_001D9FEC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001D9FC8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0034(c, 19u, depth + 1u); else { c.pc = 0x001D02C0u; return; } if (c.pc != 0x001D9FC8u) [[unlikely]] return; }
L_001D9FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001D9FE8; } }
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.f[0]);  if (t) { goto L_001D9FEC; } }
L_001D9FE8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001D9FEC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 168u), 0u);  goto L_001DA010; }
L_001D9FF4:
    set32(c.r[2], 0u + 3u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    st32((c.r[29].w[0] + 168u), 0u);
    c.budget -= 1;
L_001DA010:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA028u); set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DA028u) [[unlikely]] return; }
L_001DA028:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0])));  goto L_001DA050; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA048u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DA048u) [[unlikely]] return; }
L_001DA048:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 2;
L_001DA050:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001DA068; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001DA094; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001DA068:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA074u); set32(c.r[7], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DA074u) [[unlikely]] return; }
L_001DA074:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 8;
L_001DA094:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA0ACu); set32(c.r[6], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0032(c, 82u, depth + 1u); else { c.pc = 0x001C95F0u; return; } if (c.pc != 0x001DA0ACu) [[unlikely]] return; }
L_001DA0AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DA0B4:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001DA0F8; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DA0EC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001DA0EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_001DA0FC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA0F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001DA0FC:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DA108:
    set32(c.r[2], c.r[16].w[0] >> 6);
    set32(c.r[3], c.r[16].w[0] >> 15);
    c.r[16].d[0] = c.r[3].d[0] & 511ull;
    c.r[6].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[2], c.r[6].w[0] - c.r[16].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA128u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0036(c, 268u, depth + 1u); else { c.pc = 0x001DAF80u; return; } if (c.pc != 0x001DA128u) [[unlikely]] return; }
L_001DA128:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 56u));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 48u));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA168u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 65u, depth + 1u); else { c.pc = 0x001CC9A0u; return; } if (c.pc != 0x001DA168u) [[unlikely]] return; }
L_001DA168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DA170:
    set32(c.r[3], c.r[16].w[0] >> 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[3].d[0] = c.r[3].d[0] >> 46;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DA19C:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[5].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[5].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001DA1BC; } }
    set32(c.r[6], c.r[5].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[19].w[0] + c.r[6].w[0]);  if (t) { goto L_001DA1C8; } }
L_001DA1BC:
    set32(c.r[6], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[8], c.r[2].w[0] - 2000u);
    c.budget -= 3;
L_001DA1C8:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[4].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[4].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], c.r[4].w[0] << 3);  goto L_001DA1EC; }
    set32(c.r[7], c.r[4].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[7].w[0]);  if (t) { goto L_001DA1F4; } }
    set32(c.r[7], c.r[4].w[0] << 3);
    c.budget -= 1;
L_001DA1EC:
    set32(c.r[2], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001DA1F4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001DA250; } }
    c.r[1].d[0] = c.r[5].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);  goto L_001DA21C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);  if (t) { goto L_001DA220; } }
    set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_001DA21C:
    set32(c.r[6], c.r[2].w[0] - 2000u);
    c.budget -= 1;
L_001DA220:
    c.r[1].d[0] = c.r[4].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + c.r[7].w[0]);  goto L_001DA238; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[19].w[0] + c.r[7].w[0]);  if (t) { goto L_001DA23C; } }
    set32(c.r[2], c.r[17].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_001DA238:
    set32(c.r[5], c.r[2].w[0] - 2000u);
    c.budget -= 1;
L_001DA23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA244u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 293u, depth + 1u); else { c.pc = 0x001DB310u; return; } if (c.pc != 0x001DA244u) [[unlikely]] return; }
L_001DA244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DA250; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_001DA250:
    c.budget -= 2;
    if (c.r[30].d[0] == c.r[18].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 188u)));  goto L_001DA26C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_001DA26C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 6);
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[3].d[0] = c.r[3].d[0] >> 46;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DA298:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001DA2BC; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001DA2C4; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001DA2BC:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001DA2C4:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001DA2E8; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001DA2F0; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001DA2E8:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001DA2F0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_001DA31C; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA310u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 79u, depth + 1u); else { c.pc = 0x001C9580u; return; } if (c.pc != 0x001DA310u) [[unlikely]] return; }
L_001DA310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA430; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001DA31C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001DA348; }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DA430; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA430; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001DA348:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001DA368; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA35Cu); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0036(c, 328u, depth + 1u); else { c.pc = 0x001DB9A0u; return; } if (c.pc != 0x001DA35Cu) [[unlikely]] return; }
L_001DA35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_001DA430; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001DA368:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA374u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DA374u) [[unlikely]] return; }
L_001DA374:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001DA390; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001DA40C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001DA390:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA39Cu); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DA39Cu) [[unlikely]] return; }
L_001DA39C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA3A8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 23u, depth + 1u); else { c.pc = 0x001D0360u; return; } if (c.pc != 0x001DA3A8u) [[unlikely]] return; }
L_001DA3A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001DA3BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001DA40C; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001DA3BC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA3CCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DA3CCu) [[unlikely]] return; }
L_001DA3CC:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001DA404; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DA3F8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001DA3F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  goto L_001DA408; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA404:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001DA408:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001DA40C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001DA424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA430; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DA424:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA430u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 79u, depth + 1u); else { c.pc = 0x001C9580u; return; } if (c.pc != 0x001DA430u) [[unlikely]] return; }
L_001DA430:
    c.budget -= 2;
    if (c.r[30].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 188u)));  goto L_001DA44C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_001DA44C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 6);
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[3].d[0] = c.r[3].d[0] >> 46;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DA478:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001DA49C; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001DA4A4; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001DA49C:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001DA4A4:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[1].d[0] = c.r[2].sd[0] < 250ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] << 3);  goto L_001DA4C8; }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_001DA4D0; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 1;
L_001DA4C8:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] - 2000u);
    c.budget -= 2;
L_001DA4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA4D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 308u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001DA4D8u) [[unlikely]] return; }
L_001DA4D8:
    c.budget -= 2;
    if (c.r[30].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 188u)));  goto L_001DA4F4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_001DA4F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 6);
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[3].d[0] = c.r[3].d[0] >> 46;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DA520:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_001DA564; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DA558; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001DA558:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] >> 6);  goto L_001DA568; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA564:
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.budget -= 1;
L_001DA568:
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_001DA588; }
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_001DA588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 6);
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[3].d[0] = c.r[3].d[0] >> 46;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DA5C4:
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] >> 6);  goto L_001DA5E4; }
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.budget -= 4;
L_001DA5E4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA5F8u); set32(c.r[16], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0032(c, 176u, depth + 1u); else { c.pc = 0x001CB0E0u; return; } if (c.pc != 0x001DA5F8u) [[unlikely]] return; }
L_001DA5F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 25u);  goto L_001DA65C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] + 0ull;  goto L_001DA634; }
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[4], 0u + 8u);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 16u), c.r[4].w[0]);  if (t) { goto L_001DAC88; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DA634:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA640u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 170u, depth + 1u); else { c.pc = 0x001CAFC0u; return; } if (c.pc != 0x001DA640u) [[unlikely]] return; }
L_001DA640:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 1;
L_001DA65C:
    c.budget -= 2;
    if (c.r[23].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 20u)));  goto L_001DA684; }
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[2].w[0] - 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 16u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9720u | kUnwind; return; } goto L_001D9720; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_001DA684:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[17], ld32((c.r[3].w[0] - 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[22].w[0]);  if (t) { goto L_001DA6A0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA6A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 52u, depth + 1u); else { c.pc = 0x001CC760u; return; } if (c.pc != 0x001DA6A0u) [[unlikely]] return; }
L_001DA6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001DA6C4; } }
    set32(c.r[5], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_001DA6AC:
    set32(c.r[3], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0] - 8u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[3].w[0] - 4u), c.f[0]);
    c.budget -= 6;
L_001DA6C4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[16].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[16].w[0] + c.r[4].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA6ACu | kUnwind; return; } goto L_001DA6AC; }
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 8u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[2].w[0] - 20u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[4].w[0] - 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] - 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[2].w[0] - 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] - 24u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 24u)));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9720u | kUnwind; return; } goto L_001D9720; } }
L_001DA72C:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] >> 15);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] - 24u);  if (t) { goto L_001DA750; } }
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8u);
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_001DA750:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  goto L_001DA76C; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA768u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 52u, depth + 1u); else { c.pc = 0x001CC760u; return; } if (c.pc != 0x001DA768u) [[unlikely]] return; }
L_001DA768:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_001DA76C:
    set32(c.r[3], 0u + 8u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_001DA79C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001DAC88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_001DA79C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[2], c.r[2].w[0] >> 6);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 170u, depth + 1u); else { c.pc = 0x001CAFC0u; return; } if (c.pc != 0x001DA7BCu) [[unlikely]] return; }
L_001DA7BC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9754u | kUnwind; return; } goto L_001D9754; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9754u | kUnwind; return; } goto L_001D9754; } }
L_001DA7D4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 3u);
    set32(c.r[19], c.r[18].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[22], c.r[18].w[0] + 16u);  if (t) { goto L_001DA7F8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA7F8u); set32(c.r[5], c.r[5].w[0] - 24464u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001DA7F8u) [[unlikely]] return; }
L_001DA7F8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[22].w[0])));  goto L_001DA874; }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001DA81C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA858; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001DA81C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_001DA858; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA834u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0034(c, 19u, depth + 1u); else { c.pc = 0x001D02C0u; return; } if (c.pc != 0x001DA834u) [[unlikely]] return; }
L_001DA834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DA854; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[19], c.r[18].w[0] + 8u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { goto L_001DA858; } }
L_001DA854:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA858:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001DA870; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA870u); set32(c.r[5], c.r[5].w[0] - 24427u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001DA870u) [[unlikely]] return; }
L_001DA870:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_001DA874:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[3] = ld32((c.r[22].w[0] + 4u));  goto L_001DA8EC; }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001DA894; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA8D0; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001DA894:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[22].d[0] = 0ull + 0ull;  goto L_001DA8D0; }
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8ACu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0034(c, 19u, depth + 1u); else { c.pc = 0x001D02C0u; return; } if (c.pc != 0x001DA8ACu) [[unlikely]] return; }
L_001DA8AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DA8CC; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[22], c.r[18].w[0] + 16u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.f[0]);  if (t) { goto L_001DA8D0; } }
L_001DA8CC:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA8D0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_001DA8E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA8E8u); set32(c.r[5], c.r[5].w[0] - 24398u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001DA8E8u) [[unlikely]] return; }
L_001DA8E8:
    c.f[3] = ld32((c.r[22].w[0] + 4u));
    c.budget -= 1;
L_001DA8EC:
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::add(c.f[2], c.f[3]);  if (t) { goto L_001DA91C; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DA92C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DA92C; } }
L_001DA91C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_001DA92C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DA92C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    set32(c.r[3], c.r[16].w[0] >> 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[3].d[0] = c.r[3].d[0] >> 46;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DA964:
    set32(c.r[3], c.r[16].w[0] >> 6);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] + 1u);
    set32(c.r[19], c.r[16].w[0] << 3);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[18].w[0] + c.r[19].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], c.r[7].w[0] + 16u);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[2], c.r[5].w[0] + 24u);
    st32((c.r[7].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[7].w[0] + 24u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[7].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[7].w[0] + 32u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[7].w[0] + 36u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DA9C0u); st32((c.r[20].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0032(c, 161u, depth + 1u); else { c.pc = 0x001CAEA0u; return; } if (c.pc != 0x001DA9C0u) [[unlikely]] return; }
L_001DA9C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[6], c.r[2].w[0] + 16u);
    set32(c.r[5], c.r[6].w[0] + c.r[19].w[0]);
    c.budget -= 7;
L_001DA9DC:
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 9;
    { const bool t = c.r[16].sd[0] > 0; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DA9DCu | kUnwind; return; } goto L_001DA9DC; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 188u)));  goto L_001DAA20; }
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_001DAA20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] >> 6);
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[3].d[0] = c.r[3].d[0] >> 46;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DAA4C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[16].w[0] >> 6);  goto L_001DAAAC; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 24370u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA78u); st32((c.r[18].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001DAA78u) [[unlikely]] return; }
L_001DAA78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24370u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA8Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001DAA8Cu) [[unlikely]] return; }
L_001DAA8C:
    set32(c.r[4], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAA98u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 230u, depth + 1u); else { c.pc = 0x001D6980u; return; } if (c.pc != 0x001DAA98u) [[unlikely]] return; }
L_001DAA98:
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[18].w[0] + 4u), c.f[0]);
    set32(c.r[3], c.r[16].w[0] >> 6);
    c.budget -= 5;
L_001DAAAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[3].d[0] = c.r[3].d[0] << 46;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.r[3].d[0] = c.r[3].d[0] >> 46;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DAAD4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] >> 6);  goto L_001DAAF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DAC88; } }
    set32(c.r[2], c.r[16].w[0] >> 6);
    c.budget -= 1;
L_001DAAF0:
    set32(c.r[30], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] << 46;
    set32(c.r[2], 0u + 31u);
    c.budget -= 5;
    { const bool t = c.r[23].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[4].d[0] >> 46;  if (t) { goto L_001DAB10; } }
    c.r[2].d[0] = c.r[4].d[0] & 31ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 1u);  if (t) { goto L_001DAB38; } }
L_001DAB10:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_001DAB28; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_001DAB28:
    set32(c.r[16], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_001DAB38:
    set32(c.r[2], 0u - 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (t) { goto L_001DAB70; } }
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 1;
L_001DAB48:
    set32(c.r[6], c.r[22].w[0] + c.r[16].w[0]);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB5Cu); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 214u, depth + 1u); else { c.pc = 0x001D6450u; return; } if (c.pc != 0x001DAB5Cu) [[unlikely]] return; }
L_001DAB5C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[16], c.r[16].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.budget -= 5;
L_001DAB70:
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { set32(c.r[2], c.r[16].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DAB48u | kUnwind; return; } goto L_001DAB48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DAB80:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAB8Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 52u, depth + 1u); else { c.pc = 0x001CC760u; return; } if (c.pc != 0x001DAB8Cu) [[unlikely]] return; }
L_001DAB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DAB94:
    set32(c.r[2], c.r[16].w[0] >> 6);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] << 46;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 46;
    set32(c.r[6], c.r[21].w[0] + 16u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[23].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DABC8u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 58u, depth + 1u); else { c.pc = 0x001CC870u; return; } if (c.pc != 0x001DABC8u) [[unlikely]] return; }
L_001DABC8:
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001DAC48; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_001DABDC:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[4].d[0] & 63ull;
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] >> 15);  goto L_001DAC18; }
    set32(c.r[3], c.r[4].w[0] >> 15);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_001DAC38; } }
    set32(c.r[2], c.r[4].w[0] >> 15);
    c.budget -= 1;
L_001DAC18:
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC2Cu); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 55u, depth + 1u); else { c.pc = 0x001CC7E0u; return; } if (c.pc != 0x001DAC2Cu) [[unlikely]] return; }
L_001DAC2C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_001DAC38:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.budget -= 4;
L_001DAC48:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 188u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DABDCu | kUnwind; return; } goto L_001DABDC; }
    set32(c.r[2], 0u + 6u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 56u));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 48u));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAC80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 65u, depth + 1u); else { c.pc = 0x001CC9A0u; return; } if (c.pc != 0x001DAC80u) [[unlikely]] return; }
L_001DAC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001D9788u | kUnwind; return; } goto L_001D9788; } }
L_001DAC88:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001DACC0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001DAD0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001DAD4C; } }
L_001DAD0C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_001DAD4C; }
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD28u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0034(c, 19u, depth + 1u); else { c.pc = 0x001D02C0u; return; } if (c.pc != 0x001DAD28u) [[unlikely]] return; }
L_001DAD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DAD48; } }
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[3], 0u + 3u);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[17], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 148u), c.f[0]);  if (t) { goto L_001DAD4C; } }
L_001DAD48:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DAD4C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 28u)));  goto L_001DAEC8; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_001DAD6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001DADA8; } }
L_001DAD6C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_001DADA8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAD84u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0034(c, 19u, depth + 1u); else { c.pc = 0x001D02C0u; return; } if (c.pc != 0x001DAD84u) [[unlikely]] return; }
L_001DAD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DADA4; } }
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[3], 0u + 3u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 140u), c.f[0]);  if (t) { goto L_001DADA8; } }
L_001DADA4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DADA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001DAEC4; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 16u)));  goto L_001DAE5C; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_001DAE3C; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_001DAE24; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_001DAE0C; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 3u);  goto L_001DADF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001DAF5C; } }
L_001DADF4:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.f[0]);  if (t) { goto L_001DAF58; } }
L_001DAE0C:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.f[0]);  if (t) { goto L_001DAF58; } }
L_001DAE24:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.f[0]);  if (t) { goto L_001DAF58; } }
L_001DAE3C:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.f[0]);  if (t) { goto L_001DAF58; } }
L_001DAE5C:
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE68u); set32(c.r[4], ld32((c.r[21].w[0] + 68u)));  if (depth < kMaxDepth) unit_0035(c, 230u, depth + 1u); else { c.pc = 0x001D6980u; return; } if (c.pc != 0x001DAE68u) [[unlikely]] return; }
L_001DAE68:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[20].w[0] - c.r[4].w[0]);  if (t) { goto L_001DAE90; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAE90u); set32(c.r[5], c.r[5].w[0] - 24365u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001DAE90u) [[unlikely]] return; }
L_001DAE90:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAEA4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DAEA4u) [[unlikely]] return; }
L_001DAEA4:
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.f[0]);  if (t) { goto L_001DAF58; } }
L_001DAEC4:
    set32(c.r[2], ld32((c.r[21].w[0] + 28u)));
    c.budget -= 1;
L_001DAEC8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAEDCu); set32(c.r[16], c.r[20].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DAEDCu) [[unlikely]] return; }
L_001DAEDC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DAEFC; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAEF8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DAEF8u) [[unlikely]] return; }
L_001DAEF8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DAEFC:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001DAF14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001DAF40; } }
L_001DAF14:
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF20u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DAF20u) [[unlikely]] return; }
L_001DAF20:
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 8;
L_001DAF40:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001DAF58; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAF58u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 82u, depth + 1u); else { c.pc = 0x001C95F0u; return; } if (c.pc != 0x001DAF58u) [[unlikely]] return; }
L_001DAF58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001DAF5C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001DAF80:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
L_001DAFB8:
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], c.r[22].w[0] << 3);
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[20], c.r[5].w[0] + 8u);
    set32(c.r[5], ld32((c.r[5].w[0] - 8u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], 0u + 2u);  if (t) { goto L_001DB03C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[12] = ld32((c.r[20].w[0] - 12u));  goto L_001DAFEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001DB034; } }
L_001DAFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DAFF4u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001DAFF4u) [[unlikely]] return; }
L_001DAFF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB008u); set32(c.r[5], c.r[5].w[0] - 24324u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001DB008u) [[unlikely]] return; }
L_001DB008:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    st32((c.r[20].w[0] - 16u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB01Cu); set32(c.r[19], c.r[20].w[0] - 16u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001DB01Cu) [[unlikely]] return; }
L_001DB01C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB02Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001DB02Cu) [[unlikely]] return; }
L_001DB02C:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_001DB034:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_001DB0B4; }
L_001DB03C:
    set32(c.r[5], ld32((c.r[20].w[0] - 8u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] - 4u)));  goto L_001DB150; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.f[12] = ld32((c.r[20].w[0] - 4u));  goto L_001DB060; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001DB0A8; } }
L_001DB060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB068u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001DB068u) [[unlikely]] return; }
L_001DB068:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB07Cu); set32(c.r[5], c.r[5].w[0] - 24324u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001DB07Cu) [[unlikely]] return; }
L_001DB07C:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[20].w[0] - 8u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB090u); set32(c.r[19], c.r[20].w[0] - 8u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001DB090u) [[unlikely]] return; }
L_001DB090:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB0A0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001DB0A0u) [[unlikely]] return; }
L_001DB0A0:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_001DB0A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001DB14C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001DB0B4:
    set32(c.r[5], c.r[20].w[0] - 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB0C8u); set32(c.r[19], c.r[5].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DB0C8u) [[unlikely]] return; }
L_001DB0C8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DB0E8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB0E4u); set32(c.r[6], 0u + 13u);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DB0E4u) [[unlikely]] return; }
L_001DB0E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DB0E8:
    set32(c.r[6], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DB100; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001DB12C; } }
L_001DB100:
    set32(c.r[6], c.r[20].w[0] - 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB10Cu); set32(c.r[7], c.r[20].w[0] - 8u);  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DB10Cu) [[unlikely]] return; }
L_001DB10C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.budget -= 8;
L_001DB12C:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] - 1u);  goto L_001DB2CC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB144u); set32(c.r[6], c.r[20].w[0] - 8u);  if (depth < kMaxDepth) unit_0032(c, 88u, depth + 1u); else { c.pc = 0x001C9700u; return; } if (c.pc != 0x001DB144u) [[unlikely]] return; }
L_001DB144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB2C8; } }
L_001DB14C:
    set32(c.r[3], ld32((c.r[20].w[0] - 4u)));
    c.budget -= 1;
L_001DB150:
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001DB2C8; } }
    c.r[2].d[0] = c.r[3].d[0] << 32;
    set32(c.r[3], ld32((c.r[20].w[0] - 12u)));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = ld32((c.r[3].w[0] + 12u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (t) { goto L_001DB184; } }
L_001DB174:
    set32(c.r[2], ld32((c.r[19].w[0] - 4u)));
    c.budget -= 1;
L_001DB178:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = ld32((c.r[2].w[0] + 12u));
    c.r[21].d[0] = c.r[21].d[0] + c.r[2].d[0];
    c.budget -= 3;
L_001DB184:
    c.r[1].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = 0ull | 0ull;  goto L_001DB20C; }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], 0u + 4u);
    set32(c.r[19], c.r[20].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[23], c.r[19].w[0] - 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DB174u | kUnwind; return; } goto L_001DB174; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[12] = ld32((c.r[19].w[0] - 4u));  goto L_001DB1BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB200; } }
L_001DB1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB1C4u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001DB1C4u) [[unlikely]] return; }
L_001DB1C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB1D8u); set32(c.r[5], c.r[5].w[0] - 24324u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001DB1D8u) [[unlikely]] return; }
L_001DB1D8:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB1E8u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001DB1E8u) [[unlikely]] return; }
L_001DB1E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB1F8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001DB1F8u) [[unlikely]] return; }
L_001DB1F8:
    st32((c.r[23].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_001DB200:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] - 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DB178u | kUnwind; return; } goto L_001DB178; }
    c.r[1].d[0] = 0ull | 0ull;
    c.budget -= 1;
L_001DB20C:
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] | 65534ull;
    c.r[1].d[0] = c.r[21].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_001DB240; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB23Cu); set32(c.r[5], c.r[5].w[0] - 24319u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001DB23Cu) [[unlikely]] return; }
L_001DB23C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_001DB240:
    c.r[6].d[0] = c.r[21].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB254u); set32(c.r[5], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001DB254u) [[unlikely]] return; }
L_001DB254:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001DB298; } }
L_001DB264:
    set32(c.r[3], c.r[21].w[0] << 3);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[20].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[23].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[30], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[5], c.r[2].w[0] + 16u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB288u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001DB288u) [[unlikely]] return; }
L_001DB288:
    c.r[2].d[0] = c.r[30].d[0] << 32;
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[19].d[0] = c.r[19].d[0] + c.r[2].d[0];
    c.budget -= 4;
L_001DB298:
    c.budget -= 2;
    if (c.r[21].sd[0] > 0) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001DB264u | kUnwind; return; } goto L_001DB264; }
    c.r[6].d[0] = c.r[19].d[0] << 32;
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[2], 0u + 4u);
    set32(c.r[19], c.r[20].w[0] - c.r[3].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB2C4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001DB2C4u) [[unlikely]] return; }
L_001DB2C4:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_001DB2C8:
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_001DB2CC:
    set32(c.r[17], c.r[17].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], c.r[22].w[0] - c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DAFB8u | kUnwind; return; } goto L_001DAFB8; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_001DB310:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001DB54C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24496u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001D8000u < 16384u) { entry = entries_0036[(t - 0x001D8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001DB364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DB5C4; } }
L_001DB36C:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DB5C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001DB5C8; } }
L_001DB38C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001DB5C4; } }
L_001DB3A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001DB5C4; } }
L_001DB3B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[19], ld32((c.r[2].w[0] + 8u)));  goto L_001DB3D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DB5C4; } }
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_001DB3D0:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_001DB3E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB3FC; } }
L_001DB3E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB3FCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001DB3FCu) [[unlikely]] return; }
L_001DB3FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DB40C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB478; } }
L_001DB40C:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[21].d[0]) { c.r[2].d[0] = ld8((c.r[21].w[0] + 6u));  goto L_001DB420; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB478; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 6u));
    c.budget -= 1;
L_001DB420:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_001DB438; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB448; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_001DB438:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB448u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001DB448u) [[unlikely]] return; }
L_001DB448:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001DB45C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB478; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001DB45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB464u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 23u, depth + 1u); else { c.pc = 0x001D0360u; return; } if (c.pc != 0x001DB464u) [[unlikely]] return; }
L_001DB464:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DB478; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001DB478; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB560; } }
L_001DB480:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[19], ld32((c.r[2].w[0] + 8u)));  goto L_001DB49C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DB5C4; } }
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_001DB49C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_001DB4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB4C8; } }
L_001DB4B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB4C8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001DB4C8u) [[unlikely]] return; }
L_001DB4C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DB4D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB544; } }
L_001DB4D8:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[21].d[0]) { c.r[2].d[0] = ld8((c.r[21].w[0] + 6u));  goto L_001DB4EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB544; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 6u));
    c.budget -= 1;
L_001DB4EC:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_001DB504; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB514; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_001DB504:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB514u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001DB514u) [[unlikely]] return; }
L_001DB514:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001DB528; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB544; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001DB528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB530u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 23u, depth + 1u); else { c.pc = 0x001D0360u; return; } if (c.pc != 0x001DB530u) [[unlikely]] return; }
L_001DB530:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001DB544; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001DB544; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB560; } }
L_001DB54C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_001DB5C4; } }
L_001DB560:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_001DB574; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DB5C4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DB574:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB584u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DB584u) [[unlikely]] return; }
L_001DB584:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001DB5BC; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DB5B0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001DB5B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  goto L_001DB5C0; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB5BC:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001DB5C0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001DB5C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001DB5C8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001DB5F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001DB630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB628u);  if (depth < kMaxDepth) unit_0032(c, 79u, depth + 1u); else { c.pc = 0x001C9580u; return; } if (c.pc != 0x001DB628u) [[unlikely]] return; }
L_001DB628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001DB80C; } }
L_001DB630:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001DB660; }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DB808; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB808; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001DB660:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], 0u + 12u);  goto L_001DB684; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB674u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0036(c, 328u, depth + 1u); else { c.pc = 0x001DB9A0u; return; } if (c.pc != 0x001DB674u) [[unlikely]] return; }
L_001DB674:
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_001DB808; } }
    set32(c.r[6], 0u + 12u);
    c.budget -= 1;
L_001DB684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB68Cu);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DB68Cu) [[unlikely]] return; }
L_001DB68C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DB6A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001DB724; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DB6A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB6B4u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DB6B4u) [[unlikely]] return; }
L_001DB6B4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB6C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 23u, depth + 1u); else { c.pc = 0x001D0360u; return; } if (c.pc != 0x001DB6C0u) [[unlikely]] return; }
L_001DB6C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001DB6D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001DB724; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001DB6D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB6E4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DB6E4u) [[unlikely]] return; }
L_001DB6E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001DB71C; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DB710; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001DB710:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  goto L_001DB720; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB71C:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001DB720:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001DB724:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DB73C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB808; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DB73C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB748u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DB748u) [[unlikely]] return; }
L_001DB748:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DB764; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001DB7E0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DB764:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB770u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DB770u) [[unlikely]] return; }
L_001DB770:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB77Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 23u, depth + 1u); else { c.pc = 0x001D0360u; return; } if (c.pc != 0x001DB77Cu) [[unlikely]] return; }
L_001DB77C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001DB790; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001DB7E0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001DB790:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB7A0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DB7A0u) [[unlikely]] return; }
L_001DB7A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001DB7D8; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DB7CC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001DB7CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  goto L_001DB7DC; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB7D8:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001DB7DC:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001DB7E0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DB7FC; }
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_001DB808; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DB7FC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB808u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 79u, depth + 1u); else { c.pc = 0x001C9580u; return; } if (c.pc != 0x001DB808u) [[unlikely]] return; }
L_001DB808:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001DB80C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DB830:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001DB870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB868u);  if (depth < kMaxDepth) unit_0032(c, 79u, depth + 1u); else { c.pc = 0x001C9580u; return; } if (c.pc != 0x001DB868u) [[unlikely]] return; }
L_001DB868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001DB988; } }
L_001DB870:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_001DB8A0; }
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001DB984; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB984; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_001DB8A0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], 0u + 11u);  goto L_001DB8C0; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB8B4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0036(c, 328u, depth + 1u); else { c.pc = 0x001DB9A0u; return; } if (c.pc != 0x001DB8B4u) [[unlikely]] return; }
L_001DB8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_001DB984; } }
    set32(c.r[6], 0u + 11u);
    c.budget -= 1;
L_001DB8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB8C8u);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DB8C8u) [[unlikely]] return; }
L_001DB8C8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DB8E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001DB960; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DB8E4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB8F0u); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DB8F0u) [[unlikely]] return; }
L_001DB8F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB8FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 23u, depth + 1u); else { c.pc = 0x001D0360u; return; } if (c.pc != 0x001DB8FCu) [[unlikely]] return; }
L_001DB8FC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001DB910; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001DB960; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001DB910:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB920u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DB920u) [[unlikely]] return; }
L_001DB920:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001DB958; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001DB94C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_001DB94C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  goto L_001DB95C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001DB958:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001DB95C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001DB960:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001DB978; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DB984; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001DB978:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB984u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 79u, depth + 1u); else { c.pc = 0x001C9580u; return; } if (c.pc != 0x001DB984u) [[unlikely]] return; }
L_001DB984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001DB988:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DB9A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[5].w[0] + 16u);
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 10;
L_001DB9C8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB9D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 157u, depth + 1u); else { c.pc = 0x003B9D10u; return; } if (c.pc != 0x001DB9D4u) [[unlikely]] return; }
L_001DB9D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001DB9E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001DBA28; } }
L_001DB9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DB9ECu);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001DB9ECu) [[unlikely]] return; }
L_001DB9EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_001DBA00; } }
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[18].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001DBA24; } }
L_001DBA00:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_001DBA10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001DBA24; } }
L_001DBA10:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DB9C8u | kUnwind; return; } goto L_001DB9C8; } }
L_001DBA24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001DBA28:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001DBA40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 14;
L_001DBA78:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001DBAF0; }
    set32(c.r[20], ld32((c.r[18].w[0] + 4u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBA9Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 218u, depth + 1u); else { c.pc = 0x001D6590u; return; } if (c.pc != 0x001DBA9Cu) [[unlikely]] return; }
L_001DBA9C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DBADC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_001DBAC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001DBAD4; } }
L_001DBAC4:
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBAD0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001DBAD0u) [[unlikely]] return; }
L_001DBAD0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001DBAD4:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0])));  goto L_001DBB24; }
L_001DBADC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 4u), c.f[0]);  if (t) { goto L_001DBB6C; } }
L_001DBAF0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBAFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DBAFCu) [[unlikely]] return; }
L_001DBAFC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001DBB20; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB20u); set32(c.r[6], c.r[6].w[0] - 24298u);  if (depth < kMaxDepth) unit_0032(c, 93u, depth + 1u); else { c.pc = 0x001C9800u; return; } if (c.pc != 0x001DBB20u) [[unlikely]] return; }
L_001DBB20:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_001DBB24:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_001DBB50; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB48u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 9u, depth + 1u); else { c.pc = 0x001DC0A0u; return; } if (c.pc != 0x001DBB48u) [[unlikely]] return; }
L_001DBB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001DBB70; } }
L_001DBB50:
    c.r[1].d[0] = c.r[21].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001DBA78u | kUnwind; return; } goto L_001DBA78; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBB6Cu); set32(c.r[5], c.r[5].w[0] - 24292u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001DBB6Cu) [[unlikely]] return; }
L_001DBB6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001DBB70:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001DBBA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[1].d[0] = c.r[17].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001DBBE0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBBE0u); set32(c.r[5], c.r[5].w[0] - 24275u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001DBBE0u) [[unlikely]] return; }
L_001DBBE0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001DBCF4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBBFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 223u, depth + 1u); else { c.pc = 0x001D6650u; return; } if (c.pc != 0x001DBBFCu) [[unlikely]] return; }
L_001DBBFC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_001DBC10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001DBDC8; } }
L_001DBC10:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 16u)));  goto L_001DBC2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DBC38; } }
L_001DBC2C:
    set32(c.r[6], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBC38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001DBC38u) [[unlikely]] return; }
L_001DBC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DBC4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 26280u);  if (t) { goto L_001DBCEC; } }
L_001DBC4C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_001DBC78; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBC70u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DBC70u) [[unlikely]] return; }
L_001DBC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_001DBCEC; } }
L_001DBC78:
    c.r[1].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001DBC98; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBC94u); set32(c.r[5], c.r[5].w[0] - 24275u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001DBC94u) [[unlikely]] return; }
L_001DBC94:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001DBC98:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[17].w[0] + 2u);  goto L_001DBCDC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBCB0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 223u, depth + 1u); else { c.pc = 0x001D6650u; return; } if (c.pc != 0x001DBCB0u) [[unlikely]] return; }
L_001DBCB0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[17].w[0] + 2u);  goto L_001DBCC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DBCEC; } }
L_001DBCC4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBCD4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 361u, depth + 1u); else { c.pc = 0x001DBEB0u; return; } if (c.pc != 0x001DBCD4u) [[unlikely]] return; }
L_001DBCD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DBCEC; } }
L_001DBCDC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBCECu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 356u, depth + 1u); else { c.pc = 0x001DBDF0u; return; } if (c.pc != 0x001DBCECu) [[unlikely]] return; }
L_001DBCEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DBDC4; } }
L_001DBCF4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD00u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DBD00u) [[unlikely]] return; }
L_001DBD00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001DBD28; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD24u); set32(c.r[6], c.r[6].w[0] - 24298u);  if (depth < kMaxDepth) unit_0032(c, 93u, depth + 1u); else { c.pc = 0x001C9800u; return; } if (c.pc != 0x001DBD24u) [[unlikely]] return; }
L_001DBD24:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001DBD28:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_001DBD50; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD48u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DBD48u) [[unlikely]] return; }
L_001DBD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_001DBDC4; } }
L_001DBD50:
    c.r[1].d[0] = c.r[2].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001DBD70; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD6Cu); set32(c.r[5], c.r[5].w[0] - 24275u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001DBD6Cu) [[unlikely]] return; }
L_001DBD6C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001DBD70:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[7], c.r[17].w[0] + 2u);  goto L_001DBDB4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBD88u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 223u, depth + 1u); else { c.pc = 0x001D6650u; return; } if (c.pc != 0x001DBD88u) [[unlikely]] return; }
L_001DBD88:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[7], c.r[17].w[0] + 2u);  goto L_001DBD9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DBDC4; } }
L_001DBD9C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBDACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 361u, depth + 1u); else { c.pc = 0x001DBEB0u; return; } if (c.pc != 0x001DBDACu) [[unlikely]] return; }
L_001DBDAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001DBDC4; } }
L_001DBDB4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBDC4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 356u, depth + 1u); else { c.pc = 0x001DBDF0u; return; } if (c.pc != 0x001DBDC4u) [[unlikely]] return; }
L_001DBDC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001DBDC8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DBDF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBE24u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0035(c, 288u, depth + 1u); else { c.pc = 0x001D78D0u; return; } if (c.pc != 0x001DBE24u) [[unlikely]] return; }
L_001DBE24:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001DBE4C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBE48u); set32(c.r[6], c.r[6].w[0] - 24298u);  if (depth < kMaxDepth) unit_0032(c, 93u, depth + 1u); else { c.pc = 0x001C9800u; return; } if (c.pc != 0x001DBE48u) [[unlikely]] return; }
L_001DBE48:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001DBE4C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001DBE74; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBE6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DBE6Cu) [[unlikely]] return; }
L_001DBE6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  if (t) { goto L_001DBE84; } }
L_001DBE74:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBE84u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 340u, depth + 1u); else { c.pc = 0x001DBBA0u; return; } if (c.pc != 0x001DBE84u) [[unlikely]] return; }
L_001DBE84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001DBEB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001DBEF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DBF08; } }
L_001DBEF8:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001DBF08u) [[unlikely]] return; }
L_001DBF08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001DBF1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 26280u);  if (t) { [[clang::musttail]] return unit_0037(c, 8u, depth); } }
L_001DBF1C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[1].d[0] = c.r[18].sd[0] < 101ll ? 1ull : 0ull;  goto L_001DBF48; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF40u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DBF40u) [[unlikely]] return; }
L_001DBF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  if (t) { [[clang::musttail]] return unit_0037(c, 8u, depth); } }
L_001DBF48:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_001DBF64; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF60u); set32(c.r[5], c.r[5].w[0] - 24275u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001DBF60u) [[unlikely]] return; }
L_001DBF60:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001DBF64:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  [[clang::musttail]] return unit_0037(c, 3u, depth); }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBF7Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 223u, depth + 1u); else { c.pc = 0x001D6650u; return; } if (c.pc != 0x001DBF7Cu) [[unlikely]] return; }
L_001DBF7C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_001DBF90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0037(c, 8u, depth); } }
L_001DBF90:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 16u)));  goto L_001DBFAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001DBFB8; } }
L_001DBFAC:
    set32(c.r[6], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBFB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001DBFB8u) [[unlikely]] return; }
L_001DBFB8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0])));  goto L_001DBFCC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 26280u);  if (t) { [[clang::musttail]] return unit_0037(c, 2u, depth); } }
L_001DBFCC:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[18].w[0] + 1u);  goto L_001DBFF4; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DBFECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 12u, depth + 1u); else { c.pc = 0x001DC150u; return; } if (c.pc != 0x001DBFECu) [[unlikely]] return; }
L_001DBFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  if (t) { [[clang::musttail]] return unit_0037(c, 2u, depth); } }
L_001DBFF4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001DC004u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0036(c, 340u, depth + 1u); else { c.pc = 0x001DBBA0u; return; } if (c.pc != 0x001DC004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0037(c, 2u, depth);
}

}
