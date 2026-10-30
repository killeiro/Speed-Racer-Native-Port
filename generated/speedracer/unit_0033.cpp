#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0033[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0,
    0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0,
    0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
};

void unit_0033(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001CC000;
    case 2u: goto L_001CC014;
    case 3u: goto L_001CC034;
    case 4u: goto L_001CC044;
    case 5u: goto L_001CC054;
    case 6u: goto L_001CC074;
    case 7u: goto L_001CC094;
    case 8u: goto L_001CC0B4;
    case 9u: goto L_001CC0D0;
    case 10u: goto L_001CC0DC;
    case 11u: goto L_001CC0FC;
    case 12u: goto L_001CC104;
    case 13u: goto L_001CC140;
    case 14u: goto L_001CC168;
    case 15u: goto L_001CC180;
    case 16u: goto L_001CC19C;
    case 17u: goto L_001CC1BC;
    case 18u: goto L_001CC1D8;
    case 19u: goto L_001CC200;
    case 20u: goto L_001CC248;
    case 21u: goto L_001CC250;
    case 22u: goto L_001CC278;
    case 23u: goto L_001CC2BC;
    case 24u: goto L_001CC2F4;
    case 25u: goto L_001CC318;
    case 26u: goto L_001CC330;
    case 27u: goto L_001CC360;
    case 28u: goto L_001CC368;
    case 29u: goto L_001CC380;
    case 30u: goto L_001CC3C0;
    case 31u: goto L_001CC40C;
    case 32u: goto L_001CC414;
    case 33u: goto L_001CC458;
    case 34u: goto L_001CC480;
    case 35u: goto L_001CC498;
    case 36u: goto L_001CC4C0;
    case 37u: goto L_001CC4E8;
    case 38u: goto L_001CC520;
    case 39u: goto L_001CC52C;
    case 40u: goto L_001CC5A0;
    case 41u: goto L_001CC5E0;
    case 42u: goto L_001CC60C;
    case 43u: goto L_001CC624;
    case 44u: goto L_001CC63C;
    case 45u: goto L_001CC654;
    case 46u: goto L_001CC674;
    case 47u: goto L_001CC68C;
    case 48u: goto L_001CC6A0;
    case 49u: goto L_001CC6C0;
    case 50u: goto L_001CC6E4;
    case 51u: goto L_001CC6F8;
    case 52u: goto L_001CC760;
    case 53u: goto L_001CC77C;
    case 54u: goto L_001CC7A4;
    case 55u: goto L_001CC7E0;
    case 56u: goto L_001CC7FC;
    case 57u: goto L_001CC838;
    case 58u: goto L_001CC870;
    case 59u: goto L_001CC8B4;
    case 60u: goto L_001CC8C8;
    case 61u: goto L_001CC900;
    case 62u: goto L_001CC93C;
    case 63u: goto L_001CC950;
    case 64u: goto L_001CC980;
    case 65u: goto L_001CC9A0;
    case 66u: goto L_001CC9BC;
    case 67u: goto L_001CC9CC;
    case 68u: goto L_001CCA20;
    case 69u: goto L_001CCA54;
    case 70u: goto L_001CCA88;
    case 71u: goto L_001CCAA0;
    case 72u: goto L_001CCAF8;
    case 73u: goto L_001CCB28;
    case 74u: goto L_001CCB34;
    case 75u: goto L_001CCB5C;
    case 76u: goto L_001CCB68;
    case 77u: goto L_001CCB70;
    case 78u: goto L_001CCB78;
    case 79u: goto L_001CCB8C;
    case 80u: goto L_001CCB9C;
    case 81u: goto L_001CCBB0;
    case 82u: goto L_001CCBC4;
    case 83u: goto L_001CCBD4;
    case 84u: goto L_001CCBDC;
    case 85u: goto L_001CCC78;
    case 86u: goto L_001CCC80;
    case 87u: goto L_001CCD10;
    case 88u: goto L_001CCD24;
    case 89u: goto L_001CCD2C;
    case 90u: goto L_001CCDBC;
    case 91u: goto L_001CCDE0;
    case 92u: goto L_001CCE18;
    case 93u: goto L_001CCE40;
    case 94u: goto L_001CCE54;
    case 95u: goto L_001CCE64;
    case 96u: goto L_001CCE90;
    case 97u: goto L_001CCED4;
    case 98u: goto L_001CCEFC;
    case 99u: goto L_001CCF30;
    case 100u: goto L_001CCF60;
    case 101u: goto L_001CCFCC;
    case 102u: goto L_001CD018;
    case 103u: goto L_001CD050;
    case 104u: goto L_001CD088;
    case 105u: goto L_001CD090;
    case 106u: goto L_001CD098;
    case 107u: goto L_001CD0A0;
    case 108u: goto L_001CD0A8;
    case 109u: goto L_001CD0B4;
    case 110u: goto L_001CD0BC;
    case 111u: goto L_001CD0C4;
    case 112u: goto L_001CD0CC;
    case 113u: goto L_001CD0D4;
    case 114u: goto L_001CD0DC;
    case 115u: goto L_001CD0EC;
    case 116u: goto L_001CD0F4;
    case 117u: goto L_001CD104;
    case 118u: goto L_001CD110;
    case 119u: goto L_001CD120;
    case 120u: goto L_001CD128;
    case 121u: goto L_001CD194;
    case 122u: goto L_001CD230;
    case 123u: goto L_001CD244;
    case 124u: goto L_001CD288;
    case 125u: goto L_001CD29C;
    case 126u: goto L_001CD2B0;
    case 127u: goto L_001CD2C4;
    case 128u: goto L_001CD2E0;
    case 129u: goto L_001CD328;
    case 130u: goto L_001CD338;
    case 131u: goto L_001CD360;
    case 132u: goto L_001CD388;
    case 133u: goto L_001CD3A4;
    case 134u: goto L_001CD404;
    case 135u: goto L_001CD454;
    case 136u: goto L_001CD470;
    case 137u: goto L_001CD4A0;
    case 138u: goto L_001CD4D0;
    case 139u: goto L_001CD508;
    case 140u: goto L_001CD524;
    case 141u: goto L_001CD530;
    case 142u: goto L_001CD570;
    case 143u: goto L_001CD5B0;
    case 144u: goto L_001CD5E8;
    case 145u: goto L_001CD628;
    case 146u: goto L_001CD65C;
    case 147u: goto L_001CD680;
    case 148u: goto L_001CD69C;
    case 149u: goto L_001CD6F0;
    case 150u: goto L_001CD738;
    case 151u: goto L_001CD760;
    case 152u: goto L_001CD78C;
    case 153u: goto L_001CD7A0;
    case 154u: goto L_001CD810;
    case 155u: goto L_001CD848;
    case 156u: goto L_001CD864;
    case 157u: goto L_001CD8B8;
    case 158u: goto L_001CD8EC;
    case 159u: goto L_001CD920;
    case 160u: goto L_001CD958;
    case 161u: goto L_001CD9A0;
    case 162u: goto L_001CDA30;
    case 163u: goto L_001CDAA4;
    case 164u: goto L_001CDAF0;
    case 165u: goto L_001CDB18;
    case 166u: goto L_001CDB1C;
    case 167u: goto L_001CDBD8;
    case 168u: goto L_001CDC18;
    case 169u: goto L_001CDC78;
    case 170u: goto L_001CDCB0;
    case 171u: goto L_001CDCD0;
    case 172u: goto L_001CDCDC;
    case 173u: goto L_001CDD14;
    case 174u: goto L_001CDD5C;
    case 175u: goto L_001CDD9C;
    case 176u: goto L_001CDDB4;
    case 177u: goto L_001CDDBC;
    case 178u: goto L_001CDDEC;
    case 179u: goto L_001CDE44;
    case 180u: goto L_001CDE64;
    case 181u: goto L_001CDE9C;
    case 182u: goto L_001CDEE4;
    case 183u: goto L_001CDF20;
    case 184u: goto L_001CDF68;
    case 185u: goto L_001CDFA4;
    case 186u: goto L_001CDFEC;
    case 187u: goto L_001CE028;
    case 188u: goto L_001CE070;
    case 189u: goto L_001CE08C;
    case 190u: goto L_001CE0C4;
    case 191u: goto L_001CE104;
    case 192u: goto L_001CE144;
    case 193u: goto L_001CE188;
    case 194u: goto L_001CE1DC;
    case 195u: goto L_001CE20C;
    case 196u: goto L_001CE248;
    case 197u: goto L_001CE24C;
    case 198u: goto L_001CE26C;
    case 199u: goto L_001CE2B8;
    case 200u: goto L_001CE304;
    case 201u: goto L_001CE33C;
    case 202u: goto L_001CE35C;
    case 203u: goto L_001CE380;
    case 204u: goto L_001CE38C;
    case 205u: goto L_001CE3C0;
    case 206u: goto L_001CE3F0;
    case 207u: goto L_001CE448;
    case 208u: goto L_001CE490;
    case 209u: goto L_001CE4A0;
    case 210u: goto L_001CE4C0;
    case 211u: goto L_001CE51C;
    case 212u: goto L_001CE540;
    case 213u: goto L_001CE54C;
    case 214u: goto L_001CE588;
    case 215u: goto L_001CE5AC;
    case 216u: goto L_001CE5B8;
    case 217u: goto L_001CE5F0;
    case 218u: goto L_001CE6AC;
    case 219u: goto L_001CE6FC;
    case 220u: goto L_001CE74C;
    case 221u: goto L_001CE798;
    case 222u: goto L_001CE7E8;
    case 223u: goto L_001CE838;
    case 224u: goto L_001CE888;
    case 225u: goto L_001CE8D4;
    case 226u: goto L_001CE914;
    case 227u: goto L_001CE974;
    case 228u: goto L_001CE9AC;
    case 229u: goto L_001CE9CC;
    case 230u: goto L_001CE9D8;
    case 231u: goto L_001CEA40;
    case 232u: goto L_001CEA50;
    case 233u: goto L_001CEA94;
    case 234u: goto L_001CEB08;
    case 235u: goto L_001CEB2C;
    case 236u: goto L_001CEB38;
    case 237u: goto L_001CEB94;
    case 238u: goto L_001CEBE8;
    case 239u: goto L_001CEC18;
    case 240u: goto L_001CEC50;
    case 241u: goto L_001CECA8;
    case 242u: goto L_001CED00;
    case 243u: goto L_001CED44;
    case 244u: goto L_001CED88;
    case 245u: goto L_001CEDE8;
    case 246u: goto L_001CEE20;
    case 247u: goto L_001CEE40;
    case 248u: goto L_001CEE4C;
    case 249u: goto L_001CEE54;
    case 250u: goto L_001CEE58;
    case 251u: goto L_001CEE78;
    case 252u: goto L_001CEEE0;
    case 253u: goto L_001CEF14;
    case 254u: goto L_001CEF20;
    case 255u: goto L_001CEF6C;
    case 256u: goto L_001CEFC8;
    case 257u: goto L_001CF018;
    case 258u: goto L_001CF07C;
    case 259u: goto L_001CF0CC;
    case 260u: goto L_001CF110;
    case 261u: goto L_001CF170;
    case 262u: goto L_001CF1A8;
    case 263u: goto L_001CF1C8;
    case 264u: goto L_001CF1D4;
    case 265u: goto L_001CF228;
    case 266u: goto L_001CF274;
    case 267u: goto L_001CF2AC;
    case 268u: goto L_001CF2E0;
    case 269u: goto L_001CF32C;
    case 270u: goto L_001CF34C;
    case 271u: goto L_001CF36C;
    case 272u: goto L_001CF3B8;
    case 273u: goto L_001CF430;
    case 274u: goto L_001CF480;
    case 275u: goto L_001CF4C0;
    case 276u: goto L_001CF4E4;
    case 277u: goto L_001CF4F0;
    case 278u: goto L_001CF4F8;
    case 279u: goto L_001CF518;
    case 280u: goto L_001CF564;
    case 281u: goto L_001CF5E8;
    case 282u: goto L_001CF648;
    case 283u: goto L_001CF650;
    case 284u: goto L_001CF670;
    case 285u: goto L_001CF6BC;
    case 286u: goto L_001CF700;
    case 287u: goto L_001CF72C;
    case 288u: goto L_001CF750;
    case 289u: goto L_001CF75C;
    case 290u: goto L_001CF780;
    case 291u: goto L_001CF7E8;
    case 292u: goto L_001CF7FC;
    case 293u: goto L_001CF82C;
    case 294u: goto L_001CF860;
    case 295u: goto L_001CF884;
    case 296u: goto L_001CF8B0;
    case 297u: goto L_001CF92C;
    case 298u: goto L_001CF964;
    case 299u: goto L_001CF984;
    case 300u: goto L_001CF990;
    case 301u: goto L_001CF9B0;
    case 302u: goto L_001CF9F8;
    case 303u: goto L_001CFA58;
    case 304u: goto L_001CFA90;
    case 305u: goto L_001CFAB0;
    case 306u: goto L_001CFABC;
    case 307u: goto L_001CFAE0;
    case 308u: goto L_001CFAFC;
    case 309u: goto L_001CFB18;
    case 310u: goto L_001CFB28;
    case 311u: goto L_001CFB60;
    case 312u: goto L_001CFB9C;
    case 313u: goto L_001CFBC8;
    case 314u: goto L_001CFBD8;
    case 315u: goto L_001CFBF8;
    case 316u: goto L_001CFC40;
    case 317u: goto L_001CFCC0;
    case 318u: goto L_001CFD2C;
    case 319u: goto L_001CFD50;
    case 320u: goto L_001CFD88;
    case 321u: goto L_001CFDAC;
    case 322u: goto L_001CFDC0;
    case 323u: goto L_001CFDE8;
    case 324u: goto L_001CFDF4;
    case 325u: goto L_001CFE08;
    case 326u: goto L_001CFE30;
    case 327u: goto L_001CFE50;
    case 328u: goto L_001CFE60;
    case 329u: goto L_001CFE70;
    case 330u: goto L_001CFE80;
    case 331u: goto L_001CFEA0;
    case 332u: goto L_001CFEF4;
    case 333u: goto L_001CFF00;
    case 334u: goto L_001CFF48;
    case 335u: goto L_001CFF5C;
    case 336u: goto L_001CFF84;
    case 337u: goto L_001CFF90;
    case 338u: goto L_001CFF9C;
    case 339u: goto L_001CFFC4;
    case 340u: goto L_001CFFEC;
    default: bad_entry(c, 0x001CC000u); return;
    }
L_001CC000:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC014u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC014u) [[unlikely]] return; }
L_001CC014:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 68u));
    set32(c.r[5], c.r[29].w[0] + 159u);
    st8((c.r[29].w[0] + 159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC034u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC034u) [[unlikely]] return; }
L_001CC034:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 69u));
    set32(c.r[5], c.r[29].w[0] + 158u);
    st8((c.r[29].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 4;
L_001CC044:
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC054u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC054u) [[unlikely]] return; }
L_001CC054:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 70u));
    set32(c.r[5], c.r[29].w[0] + 157u);
    st8((c.r[29].w[0] + 157u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC074u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC074u) [[unlikely]] return; }
L_001CC074:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 71u));
    set32(c.r[5], c.r[29].w[0] + 156u);
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC094u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC094u) [[unlikely]] return; }
L_001CC094:
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[5], c.r[29].w[0] + 140u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC0B4u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC0B4u) [[unlikely]] return; }
L_001CC0B4:
    set32(c.r[2], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC0D0u); set32(c.r[4], ld32((c.r[20].w[0])));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC0D0u) [[unlikely]] return; }
L_001CC0D0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC0DCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 30u, depth + 1u); else { c.pc = 0x001CC3C0u; return; } if (c.pc != 0x001CC0DCu) [[unlikely]] return; }
L_001CC0DC:
    set32(c.r[17], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[5], c.r[29].w[0] + 136u);
    st32((c.r[29].w[0] + 136u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC0FCu); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC0FCu) [[unlikely]] return; }
L_001CC0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001CC184; } }
L_001CC104:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 128u), 0u);  goto L_001CC128; }
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_001CC148; }
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 1;
L_001CC128:
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC140u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC140u) [[unlikely]] return; }
L_001CC140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_001CC184; } }
L_001CC148:
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[18], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 124u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC168u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC168u) [[unlikely]] return; }
L_001CC168:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC180u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC180u) [[unlikely]] return; }
L_001CC180:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001CC184:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC104u | kUnwind; return; } goto L_001CC104; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC19Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 19u, depth + 1u); else { c.pc = 0x001CC200u; return; } if (c.pc != 0x001CC19Cu) [[unlikely]] return; }
L_001CC19C:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC1BCu); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC1BCu) [[unlikely]] return; }
L_001CC1BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC1D8u); set32(c.r[5], ld32((c.r[21].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC1D8u) [[unlikely]] return; }
L_001CC1D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001CC200:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[29].w[0] + 136u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC248u); set32(c.r[5], c.r[29].w[0] + 136u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC248u) [[unlikely]] return; }
L_001CC248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CC334; } }
L_001CC250:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 143u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st8((c.r[29].w[0] + 143u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC278u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC278u) [[unlikely]] return; }
L_001CC278:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001CC334; }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[6].d[0]) { set32(c.r[19], ld32((c.r[19].w[0] + 4u)));  goto L_001CC2C4; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[19].w[0] + 4u));  goto L_001CC2A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC330; } }
L_001CC2A4:
    st32((c.r[29].w[0] + 132u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC2BCu); set32(c.r[5], c.r[29].w[0] + 132u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC2BCu) [[unlikely]] return; }
L_001CC2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC330; } }
L_001CC2C4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[29].w[0] + 124u), 0u);  goto L_001CC2DC; }
    set32(c.r[2], c.r[19].w[0] + 16u);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  goto L_001CC2FC; }
    st32((c.r[29].w[0] + 124u), 0u);
    c.budget -= 1;
L_001CC2DC:
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC2F4u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC2F4u) [[unlikely]] return; }
L_001CC2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CC330; } }
L_001CC2FC:
    set32(c.r[21], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 120u), c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC318u); set32(c.r[5], c.r[29].w[0] + 120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC318u) [[unlikely]] return; }
L_001CC318:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC330u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC330u) [[unlikely]] return; }
L_001CC330:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001CC334:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC250u | kUnwind; return; } goto L_001CC250; }
    set32(c.r[16], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC360u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC360u) [[unlikely]] return; }
L_001CC360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001CC384; } }
L_001CC368:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC380u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 248u, depth + 1u); else { c.pc = 0x001CBF50u; return; } if (c.pc != 0x001CC380u) [[unlikely]] return; }
L_001CC380:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001CC384:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC368u | kUnwind; return; } goto L_001CC368; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001CC3C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[22], ld32((c.r[4].w[0] + 56u)));
    st32((c.r[29].w[0] + 156u), c.r[22].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC40Cu); set32(c.r[5], c.r[29].w[0] + 156u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC40Cu) [[unlikely]] return; }
L_001CC40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001CC4EC; } }
L_001CC414:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 144u), 0u);  goto L_001CC440; }
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_001CC460; }
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 1;
L_001CC440:
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC458u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC458u) [[unlikely]] return; }
L_001CC458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0] + 24u)));  if (t) { goto L_001CC49C; } }
L_001CC460:
    set32(c.r[5], c.r[29].w[0] + 140u);
    set32(c.r[18], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 140u), c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC480u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC480u) [[unlikely]] return; }
L_001CC480:
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC498u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC498u) [[unlikely]] return; }
L_001CC498:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 1;
L_001CC49C:
    set32(c.r[5], c.r[29].w[0] + 152u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC4C0u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC4C0u) [[unlikely]] return; }
L_001CC4C0:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC4E8u); set32(c.r[6], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CC4E8u) [[unlikely]] return; }
L_001CC4E8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001CC4EC:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC414u | kUnwind; return; } goto L_001CC414; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001CC520:
    set32(c.r[8], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_001CC55C; } }
L_001CC52C:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_001CC55C; }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001CC558; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { goto L_001CC590; } }
L_001CC558:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_001CC55C:
    c.r[1].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CC590; }
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC52Cu | kUnwind; return; } goto L_001CC52C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CC590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CC5A0:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 6u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[5].w[0] + 7u));  goto L_001CC5C0; }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 24u);  if (t) { goto L_001CC5CC; } }
L_001CC5C0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.budget -= 3;
L_001CC5CC:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  goto L_001CFB60; }
L_001CC5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC60Cu); c.r[6].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC60Cu) [[unlikely]] return; }
L_001CC60C:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC624u); c.r[6].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC624u) [[unlikely]] return; }
L_001CC624:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC63Cu); c.r[6].d[0] = c.r[2].d[0] << 3;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC63Cu) [[unlikely]] return; }
L_001CC63C:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC654u); c.r[6].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC654u) [[unlikely]] return; }
L_001CC654:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC674u); c.r[6].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC674u) [[unlikely]] return; }
L_001CC674:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC68Cu); c.r[6].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC68Cu) [[unlikely]] return; }
L_001CC68C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC6A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC6A0u) [[unlikely]] return; }
L_001CC6A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC6C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 72u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC6E4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC6E4u) [[unlikely]] return; }
L_001CC6E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC6F8u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0033(c, 64u, depth + 1u); else { c.pc = 0x001CC980u; return; } if (c.pc != 0x001CC6F8u) [[unlikely]] return; }
L_001CC6F8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 28u), 0u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 70u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 71u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CC7A4; } }
L_001CC77C:
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC7A4u); st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 64u, depth + 1u); else { c.pc = 0x001CC980u; return; } if (c.pc != 0x001CC7A4u) [[unlikely]] return; }
L_001CC7A4:
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001CC7C4; }
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    c.r[1].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC77Cu | kUnwind; return; } goto L_001CC77C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001CC7C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC7E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[4].w[0] + 72u);  if (t) { goto L_001CC80C; } }
L_001CC7FC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[17].d[0]) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_001CC80C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001CC85C; } }
L_001CC80C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_001CC82C; }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CC7FCu | kUnwind; return; } goto L_001CC7FC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CC82C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC838u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC838u) [[unlikely]] return; }
L_001CC838:
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
L_001CC85C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001CC870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC8B4u); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC8B4u) [[unlikely]] return; }
L_001CC8B4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC8C8u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0033(c, 64u, depth + 1u); else { c.pc = 0x001CC980u; return; } if (c.pc != 0x001CC8C8u) [[unlikely]] return; }
L_001CC8C8:
    st8((c.r[19].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[19].w[0] + 16u), c.f[1]);
    st32((c.r[19].w[0] + 20u), c.f[0]);
    st8((c.r[19].w[0] + 7u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CC900:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 24u);
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC93Cu); c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CC93Cu) [[unlikely]] return; }
L_001CC93C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC950u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0033(c, 64u, depth + 1u); else { c.pc = 0x001CC980u; return; } if (c.pc != 0x001CC950u) [[unlikely]] return; }
L_001CC950:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CC980:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_001CC9A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC9BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0033(c, 71u, depth + 1u); else { c.pc = 0x001CCAA0u; return; } if (c.pc != 0x001CC9BCu) [[unlikely]] return; }
L_001CC9BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CC9CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 91u, depth + 1u); else { c.pc = 0x001CCDE0u; return; } if (c.pc != 0x001CC9CCu) [[unlikely]] return; }
L_001CC9CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.r[3].d[0] = ld64((c.r[2].w[0] + 8u));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_001CC9E8; } }
    set32(c.r[2], c.r[4].w[0] + 3u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 2;
L_001CC9E8:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  goto L_001CCA24; }
    c.r[1].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CCA20; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_001CCA18; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001CCA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCA20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 207u, depth + 1u); else { c.pc = 0x001D6330u; return; } if (c.pc != 0x001CCA20u) [[unlikely]] return; }
L_001CCA20:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001CCA24:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(65ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  goto L_001CCA68; }
    set32(c.r[18], c.r[2].w[0] >> 1);
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[7].d[0] = c.r[7].d[0] >> 32;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCA54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CCA54u) [[unlikely]] return; }
L_001CCA54:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[2].w[0] + 40u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
L_001CCA68:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[5].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] << 1;
    c.r[2].d[0] = c.r[3].d[0] - c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCA88u); st64((c.r[5].w[0] + 48u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0033(c, 99u, depth + 1u); else { c.pc = 0x001CCF30u; return; } if (c.pc != 0x001CCA88u) [[unlikely]] return; }
L_001CCA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CCAA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 80u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CCAF8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  goto L_001CCAFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCAF8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CCAF8u) [[unlikely]] return; }
L_001CCAF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001CCAFC:
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  goto L_001CCB2C; }
    set32(c.r[5], ld32((c.r[3].w[0] + 72u)));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CCB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB28u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CCB28u) [[unlikely]] return; }
L_001CCB28:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_001CCB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB34u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0033(c, 128u, depth + 1u); else { c.pc = 0x001CD2E0u; return; } if (c.pc != 0x001CCB34u) [[unlikely]] return; }
L_001CCB34:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_001CCB60; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] & 17ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CCB5C; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CCB5Cu) [[unlikely]] return; }
L_001CCB5C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_001CCB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB68u);  if (depth < kMaxDepth) unit_0033(c, 122u, depth + 1u); else { c.pc = 0x001CD230u; return; } if (c.pc != 0x001CCB68u) [[unlikely]] return; }
L_001CCB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB70u); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0033(c, 118u, depth + 1u); else { c.pc = 0x001CD110u; return; } if (c.pc != 0x001CCB70u) [[unlikely]] return; }
L_001CCB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB78u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0033(c, 118u, depth + 1u); else { c.pc = 0x001CD110u; return; } if (c.pc != 0x001CCB78u) [[unlikely]] return; }
L_001CCB78:
    set32(c.r[16], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCB8Cu); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0033(c, 159u, depth + 1u); else { c.pc = 0x001CD920u; return; } if (c.pc != 0x001CCB8Cu) [[unlikely]] return; }
L_001CCB8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 32u)));  if (t) { goto L_001CCBB4; } }
L_001CCB9C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 254ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCBB0u); st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CCBB0u) [[unlikely]] return; }
L_001CCBB0:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001CCBB4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 5u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCB9Cu | kUnwind; return; } goto L_001CCB9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCBC4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0033(c, 122u, depth + 1u); else { c.pc = 0x001CD230u; return; } if (c.pc != 0x001CCBC4u) [[unlikely]] return; }
L_001CCBC4:
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001CCC5C; } }
L_001CCBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[7].w[0] << (c.r[2].w[0] & 31u));  if (t) { goto L_001CCC4C; } }
L_001CCBDC:
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[6].w[0])));  goto L_001CCC10; }
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 5;
L_001CCC10:
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CCC2C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_001CCC2C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[8].d[0] + 0ull;  goto L_001CCC50; }
    st32((c.r[6].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CCC4C; } }
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_001CCC4C:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_001CCC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCBDCu | kUnwind; return; } goto L_001CCBDC; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_001CCC5C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 7u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCBD4u | kUnwind; return; } goto L_001CCBD4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_001CCD00; } }
L_001CCC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[8].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_001CCCF0; } }
L_001CCC80:
    set32(c.r[5], c.r[9].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[7].w[0])));  goto L_001CCCB4; }
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 5;
L_001CCCB4:
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCCD0; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_001CCCD0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[9].d[0] + 0ull;  goto L_001CCCF4; }
    st32((c.r[7].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCCF0; } }
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_001CCCF0:
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_001CCCF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCC80u | kUnwind; return; } goto L_001CCC80; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 1;
L_001CCD00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[2].w[0] + 7u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCC78u | kUnwind; return; } goto L_001CCC78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCD10u); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (depth < kMaxDepth) unit_0033(c, 118u, depth + 1u); else { c.pc = 0x001CD110u; return; } if (c.pc != 0x001CCD10u) [[unlikely]] return; }
L_001CCD10:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_001CCDAC; } }
L_001CCD24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[8].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_001CCD9C; } }
L_001CCD2C:
    set32(c.r[5], c.r[9].w[0] << 2);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[7].w[0])));  goto L_001CCD60; }
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 5;
L_001CCD60:
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCD7C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_001CCD7C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[9].d[0] + 0ull;  goto L_001CCDA0; }
    st32((c.r[7].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CCD9C; } }
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_001CCD9C:
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_001CCDA0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCD2Cu | kUnwind; return; } goto L_001CCD2C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 1;
L_001CCDAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[2].w[0] + 7u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCD24u | kUnwind; return; } goto L_001CCD24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCDBCu); set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  if (depth < kMaxDepth) unit_0033(c, 118u, depth + 1u); else { c.pc = 0x001CD110u; return; } if (c.pc != 0x001CCDBCu) [[unlikely]] return; }
L_001CCDBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001CCDE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001CCE0C; } }
    set32(c.r[19], 0u + 256u);
    c.budget -= 1;
L_001CCE0C:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + 28u);  if (t) { goto L_001CCE40; } }
L_001CCE18:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_001CCE34; }
    c.r[3].d[0] = c.r[3].d[0] & 254ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CCE40; } }
L_001CCE34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE40u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 103u, depth + 1u); else { c.pc = 0x001CD050u; return; } if (c.pc != 0x001CCE40u) [[unlikely]] return; }
L_001CCE40:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCE18u | kUnwind; return; } goto L_001CCE18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001CCEB8; } }
L_001CCE54:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[18].w[0] << 2);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001CCE90; } }
L_001CCE64:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_001CCE80; }
    c.r[3].d[0] = c.r[3].d[0] & 254ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CCE90; } }
L_001CCE80:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCE90u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 103u, depth + 1u); else { c.pc = 0x001CD050u; return; } if (c.pc != 0x001CCE90u) [[unlikely]] return; }
L_001CCE90:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCE64u | kUnwind; return; } goto L_001CCE64; }
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] - c.r[3].d[0];
    st64((c.r[5].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 7;
L_001CCEB8:
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCE54u | kUnwind; return; } goto L_001CCE54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[4].w[0] + 24u);  if (t) { goto L_001CCEFC; } }
L_001CCED4:
    c.r[1].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_001CCEF0; }
    c.r[3].d[0] = c.r[3].d[0] & 254ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CCEFC; } }
L_001CCEF0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCEFCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 103u, depth + 1u); else { c.pc = 0x001CD050u; return; } if (c.pc != 0x001CCEFCu) [[unlikely]] return; }
L_001CCEFC:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCED4u | kUnwind; return; } goto L_001CCED4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001CCF30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = ld8((c.r[4].w[0] + 49u));
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001CD018; } }
L_001CCF60:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], 0u + 7u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[3].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] - 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] - 4u), c.r[18].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 254ull;
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 253ull;
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 22;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001CCFC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001CCFD0; } }
L_001CCFC0:
    set32(c.r[6], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CCFCCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001CCFCCu) [[unlikely]] return; }
L_001CCFCC:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CCFD0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_001CD01C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD018u); set32(c.r[5], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0032(c, 161u, depth + 1u); else { c.pc = 0x001CAEA0u; return; } if (c.pc != 0x001CD018u) [[unlikely]] return; }
L_001CD018:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_001CD01C:
    set32(c.r[18], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CCF60u | kUnwind; return; } goto L_001CCF60; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 8u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st8((c.r[17].w[0] + 49u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CD050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001CD108; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 26896u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001CC000u < 16384u) { entry = entries_0033[(t - 0x001CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CD088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD090u);  if (depth < kMaxDepth) unit_0033(c, 41u, depth + 1u); else { c.pc = 0x001CC5E0u; return; } if (c.pc != 0x001CD090u) [[unlikely]] return; }
L_001CD090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD104; } }
L_001CD098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0A0u);  if (depth < kMaxDepth) unit_0033(c, 40u, depth + 1u); else { c.pc = 0x001CC5A0u; return; } if (c.pc != 0x001CD0A0u) [[unlikely]] return; }
L_001CD0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD104; } }
L_001CD0A8:
    set32(c.r[6], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CD0B4u) [[unlikely]] return; }
L_001CD0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD104; } }
L_001CD0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0C4u);  if (depth < kMaxDepth) unit_0035(c, 245u, depth + 1u); else { c.pc = 0x001D6EA0u; return; } if (c.pc != 0x001CD0C4u) [[unlikely]] return; }
L_001CD0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD104; } }
L_001CD0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0D4u);  if (depth < kMaxDepth) unit_0035(c, 173u, depth + 1u); else { c.pc = 0x001D5C50u; return; } if (c.pc != 0x001CD0D4u) [[unlikely]] return; }
L_001CD0D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD104; } }
L_001CD0DC:
    c.r[2].d[0] = ld32((c.r[5].w[0] + 12u));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD0ECu); c.r[6].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(17ll);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CD0ECu) [[unlikely]] return; }
L_001CD0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD104; } }
L_001CD0F4:
    c.r[2].d[0] = ld32((c.r[5].w[0] + 12u));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD104u); c.r[6].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(16ll);  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CD104u) [[unlikely]] return; }
L_001CD104:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001CD108:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CD110:
    set32(c.r[3], 0u + 4u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u - 1u);  if (t) { goto L_001CD214; } }
L_001CD120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_001CD17C; } }
L_001CD128:
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[10].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.budget -= 6;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[8].w[0])));  goto L_001CD154; }
    set32(c.r[7], ld32((c.r[8].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 5u));
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.budget -= 5;
L_001CD154:
    c.r[5].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001CD170; } }
    set32(c.r[5], ld32((c.r[8].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_001CD170:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = c.r[10].d[0] + 0ull;  goto L_001CD180; }
    st32((c.r[8].w[0]), 0u);
    c.budget -= 1;
L_001CD17C:
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 1;
L_001CD180:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD128u | kUnwind; return; } goto L_001CD128; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 7u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[9].w[0] << (c.r[5].w[0] & 31u));  if (t) { goto L_001CD204; } }
L_001CD194:
    set32(c.r[7], c.r[10].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[8].w[0] + 8u)));  goto L_001CD1C8; }
    set32(c.r[7], ld32((c.r[8].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 5u));
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[8].w[0] + 8u)));
    c.budget -= 5;
L_001CD1C8:
    c.r[5].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001CD1E4; } }
    set32(c.r[5], ld32((c.r[8].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_001CD1E4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = c.r[10].d[0] + 0ull;  goto L_001CD208; }
    st32((c.r[8].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.r[5].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001CD204; } }
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_001CD204:
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 1;
L_001CD208:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD194u | kUnwind; return; } goto L_001CD194; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 1;
L_001CD214:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD120u | kUnwind; return; } goto L_001CD120; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CD230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CD2C4; } }
L_001CD244:
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 64u)));  goto L_001CD2B8; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 76u)));  goto L_001CD2A4; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  goto L_001CD290; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 24u)));  goto L_001CD27C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0])));  if (t) { goto L_001CD2C8; } }
L_001CD27C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD288u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 149u, depth + 1u); else { c.pc = 0x001CD6F0u; return; } if (c.pc != 0x001CD288u) [[unlikely]] return; }
L_001CD288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD2C4; } }
L_001CD290:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD29Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 136u, depth + 1u); else { c.pc = 0x001CD470u; return; } if (c.pc != 0x001CD29Cu) [[unlikely]] return; }
L_001CD29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD2C4; } }
L_001CD2A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD2B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 128u, depth + 1u); else { c.pc = 0x001CD2E0u; return; } if (c.pc != 0x001CD2B0u) [[unlikely]] return; }
L_001CD2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD2C4; } }
L_001CD2B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD2C4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0033(c, 143u, depth + 1u); else { c.pc = 0x001CD5B0u; return; } if (c.pc != 0x001CD2C4u) [[unlikely]] return; }
L_001CD2C4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001CD2C8:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD244u | kUnwind; return; } goto L_001CD244; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CD2E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 64u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CD328; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 8u)));  goto L_001CD32C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD328u);  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD328u) [[unlikely]] return; }
L_001CD328:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_001CD32C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 40u)));  if (t) { goto L_001CD34C; } }
L_001CD338:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 24u);  goto L_001CD34C; }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24u);
    c.budget -= 2;
L_001CD34C:
    c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD338u | kUnwind; return; } goto L_001CD338; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_001CD38C; } }
L_001CD360:
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 8u);  goto L_001CD38C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD388u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD388u) [[unlikely]] return; }
L_001CD388:
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_001CD38C:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD360u | kUnwind; return; } goto L_001CD360; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;  if (t) { goto L_001CD3B0; } }
L_001CD3A4:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_001CD3B0:
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD3A4u | kUnwind; return; } goto L_001CD3A4; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], 0u + 24u);
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  goto L_001CD408; }
    c.r[1].d[0] = c.r[4].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CD404; } }
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD404u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 213u, depth + 1u); else { c.pc = 0x001CB9B0u; return; } if (c.pc != 0x001CD404u) [[unlikely]] return; }
L_001CD404:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_001CD408:
    set32(c.r[4], c.r[16].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));  if (t) { goto L_001CD41C; } }
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_001CD41C:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_001CD458; }
    c.r[1].d[0] = c.r[4].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001CD454; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_001CD44C; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001CD44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD454u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 215u, depth + 1u); else { c.pc = 0x001CBA70u; return; } if (c.pc != 0x001CD454u) [[unlikely]] return; }
L_001CD454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001CD458:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CD470:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 6u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CD4EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CD4D4; } }
L_001CD4A0:
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001CD4D4; }
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD4D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD4D0u) [[unlikely]] return; }
L_001CD4D0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001CD4D4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 7u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD4A0u | kUnwind; return; } goto L_001CD4A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001CD590; } }
L_001CD4EC:
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  goto L_001CD50C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD508u);  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD508u) [[unlikely]] return; }
L_001CD508:
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_001CD50C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_001CD57C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD524u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD524u) [[unlikely]] return; }
L_001CD524:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD57C; } }
L_001CD530:
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001CD57C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_001CD574; }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD570u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD570u) [[unlikely]] return; }
L_001CD570:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001CD574:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001CD57C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 7u));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD530u | kUnwind; return; } goto L_001CD530; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001CD590:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CD5B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[5], 0u + 4u);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD610; } }
L_001CD5E8:
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001CD610; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 5;
L_001CD610:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD5E8u | kUnwind; return; } goto L_001CD5E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001CD644; } }
L_001CD628:
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_001CD644:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD628u | kUnwind; return; } goto L_001CD628; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CD684; } }
L_001CD65C:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001CD684; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD680u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD680u) [[unlikely]] return; }
L_001CD680:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001CD684:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD65Cu | kUnwind; return; } goto L_001CD65C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001CD6C0; } }
L_001CD69C:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_001CD6C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD69Cu | kUnwind; return; } goto L_001CD69C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CD6F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CD738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD738u);  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD738u) [[unlikely]] return; }
L_001CD738:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_001CD754; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_001CD764; } }
L_001CD754:
    set32(c.r[6], ld32((c.r[2].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD760u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001CD760u) [[unlikely]] return; }
L_001CD760:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CD764:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001CD800; } }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001CD800; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], 0u + 107u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD78Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x001CD78Cu) [[unlikely]] return; }
L_001CD78C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], 0u + 118u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD7A0u); set32(c.r[4], c.r[3].w[0] + 16u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x001CD7A0u) [[unlikely]] return; }
L_001CD7A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_001CD7B0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CD800; } }
L_001CD7B0:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 5u));
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 249ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CD7E4; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 12u);  goto L_001CD7F4; }
L_001CD7E4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 8u);  goto L_001CD7F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 4u);  if (t) { goto L_001CD7F4; } }
L_001CD7F4:
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[18].w[0]);
    c.budget -= 3;
L_001CD800:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[18].w[0] + 7u));  goto L_001CD858; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_001CD848; } }
L_001CD810:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[20].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[20].d[0] + 0ull;  goto L_001CD84C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD848u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD848u) [[unlikely]] return; }
L_001CD848:
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001CD84C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD810u | kUnwind; return; } goto L_001CD810; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 7u));
    c.budget -= 1;
L_001CD858:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[3].w[0] << (c.r[4].w[0] & 31u));  if (t) { goto L_001CD8EC; } }
L_001CD864:
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[21].d[0] + 0ull;  goto L_001CD8F0; }
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_001CD8BC; }
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD8B8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001CD8B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD8B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD8B8u) [[unlikely]] return; }
L_001CD8B8:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_001CD8BC:
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD8EC; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CD8EC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001CD8EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD8ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CD8ECu) [[unlikely]] return; }
L_001CD8EC:
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001CD8F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD864u | kUnwind; return; } goto L_001CD864; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001CD920:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], c.r[29].w[0] + 108u);
    set32(c.r[18], c.r[2].w[0] + 28u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), 0u);  if (t) { goto L_001CD9E0; } }
L_001CD958:
    c.r[2].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[18].d[0] = c.r[17].d[0] + 0ull;  goto L_001CD9E0; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_001CD97C; }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CD9E0; } }
L_001CD97C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 6u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 16u)));  goto L_001CD994; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001CD9A0; } }
L_001CD994:
    set32(c.r[6], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CD9A0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0035(c, 291u, depth + 1u); else { c.pc = 0x001D7950u; return; } if (c.pc != 0x001CD9A0u) [[unlikely]] return; }
L_001CD9A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld32((c.r[17].w[0] + 12u));  goto L_001CD9BC; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 253ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001CD9E0; } }
L_001CD9BC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(16ll);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
L_001CD9E0:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CD958u | kUnwind; return; } goto L_001CD958; }
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001CDA30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 9u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[6].d[0] = c.r[6].d[0] | 1ull;
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 4u));
    c.budget -= 9;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_001CDAD0; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_001CDAC4; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_001CDAB8; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[4].w[0])));  goto L_001CDAAC; }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0] + 8u)));  goto L_001CDA8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001CDADC; } }
L_001CDA8C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = c.r[3].d[0] & 17ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CDAD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDAA4u);  if (depth < kMaxDepth) unit_0033(c, 162u, depth + 1u); else { c.pc = 0x001CDA30u; return; } if (c.pc != 0x001CDAA4u) [[unlikely]] return; }
L_001CDAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CDAD8; } }
L_001CDAAC:
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_001CDAD8; } }
L_001CDAB8:
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_001CDAD8; } }
L_001CDAC4:
    st32((c.r[5].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_001CDAD8; } }
L_001CDAD0:
    st32((c.r[5].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_001CDAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001CDADC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CDAF0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
L_001CDB18:
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001CDB1C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 287u);  goto L_001CE3C8; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_001CE094; }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001CE080; }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_001CE07C; } }
    set32(c.r[2], 0u + 126u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_001CDFF8; }
    set32(c.r[2], 0u + 62u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_001CDF74; }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_001CDEF0; }
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_001CDE6C; }
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_001CDE14; }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_001CDCE4; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_001CDBA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_001CE190; } }
L_001CDBA8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDBD0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDBD8; } }
L_001CDBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDBD8u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDBD8u) [[unlikely]] return; }
L_001CDBD8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = c.r[1].d[0] | 65534ull;
    set32(c.r[6], c.r[6].w[0] - 26582u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CDB18u | kUnwind; return; } goto L_001CDB18; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], c.r[5].w[0] - 26565u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC18u); c.r[7].d[0] = c.r[2].d[0] | 65533ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CDC18u) [[unlikely]] return; }
L_001CDC18:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 285u);
    c.budget -= 5;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CDC58; }
    set32(c.r[2], 0u + 286u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001CDC54; } }
    set32(c.r[2], 0u + 278u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001CDC4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 257ll ? 1ull : 0ull;  if (t) { goto L_001CDC60; } }
L_001CDC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 16u);  if (t) { goto L_001CDC94; } }
L_001CDC54:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001CDC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[2].w[0])));  if (t) { goto L_001CDC94; } }
L_001CDC60:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001CDC80; }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDC78u); set32(c.r[5], c.r[5].w[0] - 26542u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CDC78u) [[unlikely]] return; }
L_001CDC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CDC94; } }
L_001CDC80:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 26864u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 1028u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_001CDC94:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[20], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[19], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDCB0u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CDCB0u) [[unlikely]] return; }
L_001CDCB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDCD0u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CDCD0u) [[unlikely]] return; }
L_001CDCD0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDCDCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CDCDCu) [[unlikely]] return; }
L_001CDCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CDB1Cu | kUnwind; return; } goto L_001CDB1C; } }
L_001CDCE4:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDD0C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDD14; } }
L_001CDD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD14u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDD14u) [[unlikely]] return; }
L_001CDD14:
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDD28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001CE3C8; } }
L_001CDD28:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDD54; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDD5C; } }
L_001CDD54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD5Cu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDD5Cu) [[unlikely]] return; }
L_001CDD5C:
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDDF0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDD94; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDD9C; } }
L_001CDD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDD9Cu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDD9Cu) [[unlikely]] return; }
L_001CDD9C:
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDDF0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 240u, depth + 1u); else { c.pc = 0x001CEC50u; return; } if (c.pc != 0x001CDDB4u) [[unlikely]] return; }
L_001CDDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CDB18u | kUnwind; return; } goto L_001CDB18; } }
L_001CDDBC:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDDE4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDDEC; } }
L_001CDDE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDDECu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDDECu) [[unlikely]] return; }
L_001CDDEC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001CDDF0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CDB18u | kUnwind; return; } goto L_001CDB18; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CDDBCu | kUnwind; return; } goto L_001CDDBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CDB18u | kUnwind; return; } goto L_001CDB18; } }
L_001CDE14:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDE3C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDE44; } }
L_001CDE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE44u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDE44u) [[unlikely]] return; }
L_001CDE44:
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001CE3C8; } }
L_001CDE58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE64u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 240u, depth + 1u); else { c.pc = 0x001CEC50u; return; } if (c.pc != 0x001CDE64u) [[unlikely]] return; }
L_001CDE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 286u);  if (t) { goto L_001CE3C8; } }
L_001CDE6C:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDE94; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDE9C; } }
L_001CDE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDE9Cu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDE9Cu) [[unlikely]] return; }
L_001CDE9C:
    set32(c.r[3], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001CE3C8; } }
L_001CDEB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDEDC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDEE4; } }
L_001CDEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDEE4u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDEE4u) [[unlikely]] return; }
L_001CDEE4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 281u);  if (t) { goto L_001CE3C8; } }
L_001CDEF0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDF18; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDF20; } }
L_001CDF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF20u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDF20u) [[unlikely]] return; }
L_001CDF20:
    set32(c.r[3], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDF34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 60u);  if (t) { goto L_001CE3C8; } }
L_001CDF34:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDF60; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDF68; } }
L_001CDF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDF68u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDF68u) [[unlikely]] return; }
L_001CDF68:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 283u);  if (t) { goto L_001CE3C8; } }
L_001CDF74:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDF9C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDFA4; } }
L_001CDF9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDFA4u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDFA4u) [[unlikely]] return; }
L_001CDFA4:
    set32(c.r[3], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDFB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 62u);  if (t) { goto L_001CE3C8; } }
L_001CDFB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CDFE4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CDFEC; } }
L_001CDFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CDFECu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CDFECu) [[unlikely]] return; }
L_001CDFEC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 282u);  if (t) { goto L_001CE3C8; } }
L_001CDFF8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE020; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE028; } }
L_001CE020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE028u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE028u) [[unlikely]] return; }
L_001CE028:
    set32(c.r[3], 0u + 61u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE03C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 126u);  if (t) { goto L_001CE3C8; } }
L_001CE03C:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE068; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE070; } }
L_001CE068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE070u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE070u) [[unlikely]] return; }
L_001CE070:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 284u);  if (t) { goto L_001CE3C8; } }
L_001CE07C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001CE080:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE08Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 206u, depth + 1u); else { c.pc = 0x001CE3F0u; return; } if (c.pc != 0x001CE08Cu) [[unlikely]] return; }
L_001CE08C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 286u);  if (t) { goto L_001CE3C8; } }
L_001CE094:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE0BC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE0C4; } }
L_001CE0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE0C4u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE0C4u) [[unlikely]] return; }
L_001CE0C4:
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE158; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE0FC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE104; } }
L_001CE0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE104u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE104u) [[unlikely]] return; }
L_001CE104:
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE150; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE13C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE144; } }
L_001CE13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE144u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE144u) [[unlikely]] return; }
L_001CE144:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 280u);  if (t) { goto L_001CE3C8; } }
L_001CE150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 279u);  if (t) { goto L_001CE3C8; } }
L_001CE158:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] - 31768u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001CE17C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001CE3C8; } }
L_001CE17C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE188u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0033(c, 268u, depth + 1u); else { c.pc = 0x001CF2E0u; return; } if (c.pc != 0x001CE188u) [[unlikely]] return; }
L_001CE188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 285u);  if (t) { goto L_001CE3C8; } }
L_001CE190:
    set32(c.r[2], c.r[2].w[0] - 31769u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_001CE1E4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE1D4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE1DC; } }
L_001CE1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE1DCu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE1DCu) [[unlikely]] return; }
L_001CE1DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CDB18u | kUnwind; return; } goto L_001CDB18; } }
L_001CE1E4:
    set32(c.r[2], c.r[2].w[0] - 31768u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 3ull;  goto L_001CE214; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE20Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0033(c, 268u, depth + 1u); else { c.pc = 0x001CF2E0u; return; } if (c.pc != 0x001CE20Cu) [[unlikely]] return; }
L_001CE20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 285u);  if (t) { goto L_001CE3C8; } }
L_001CE214:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 40u)));  goto L_001CE22C; }
    set32(c.r[2], 0u + 95u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[3].d[0] & 32ull;  goto L_001CE320; }
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001CE22C:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001CE248; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE248u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001CE248u) [[unlikely]] return; }
L_001CE248:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001CE24C:
    set32(c.r[3], c.r[18].w[0] + 5u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE270; }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE26Cu); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001CE26Cu) [[unlikely]] return; }
L_001CE26C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001CE270:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE2B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE2B8; } }
L_001CE2B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE2B8u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE2B8u) [[unlikely]] return; }
L_001CE2B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] - 31769u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE248u | kUnwind; return; } goto L_001CE248; } }
    set32(c.r[3], 0u + 95u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE24Cu | kUnwind; return; } goto L_001CE24C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE304u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001CE304u) [[unlikely]] return; }
L_001CE304:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 6u));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_001CE318; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + 256u);  if (t) { goto L_001CE3C8; } }
L_001CE318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 278u);  if (t) { goto L_001CE3C8; } }
L_001CE320:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_001CE390; }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 26519u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE33Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CE33Cu) [[unlikely]] return; }
L_001CE33C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[16], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE35Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CE35Cu) [[unlikely]] return; }
L_001CE35C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE380u); set32(c.r[8], c.r[8].w[0] - 26510u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CE380u) [[unlikely]] return; }
L_001CE380:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE38Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CE38Cu) [[unlikely]] return; }
L_001CE38C:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_001CE390:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE3B8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE3C0; } }
L_001CE3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE3C0u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE3C0u) [[unlikely]] return; }
L_001CE3C0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001CE3C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_001CE3F0:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001CE448; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE448u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001CE448u) [[unlikely]] return; }
L_001CE448:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE488; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE490; } }
L_001CE488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE490u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE490u) [[unlikely]] return; }
L_001CE490:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[30], ld32((c.r[2].w[0] - 26744u)));  if (t) { goto L_001CEB98; } }
L_001CE4A0:
    set32(c.r[3], c.r[16].w[0] + 5u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_001CE4C4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE4C0u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001CE4C0u) [[unlikely]] return; }
L_001CE4C0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001CE4C4:
    set32(c.r[2], 0u + 92u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  goto L_001CE5C0; }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE554; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE4F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_001CEB50; } }
L_001CE4F0:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[6], 0u + 80u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE51Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CE51Cu) [[unlikely]] return; }
L_001CE51C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    set32(c.r[6], c.r[29].w[0] + 400u);
    set32(c.r[8], c.r[8].w[0] - 26489u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE540u); c.r[9].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CE540u) [[unlikely]] return; }
L_001CE540:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE54Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CE54Cu) [[unlikely]] return; }
L_001CE54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { goto L_001CEB9C; } }
L_001CE554:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[6], 0u + 80u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE588u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CE588u) [[unlikely]] return; }
L_001CE588:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE5ACu); set32(c.r[8], c.r[8].w[0] - 26489u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CE5ACu) [[unlikely]] return; }
L_001CE5AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE5B8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CE5B8u) [[unlikely]] return; }
L_001CE5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEB98; } }
L_001CE5C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE5E8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE5F0; } }
L_001CE5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE5F0u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE5F0u) [[unlikely]] return; }
L_001CE5F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEB98; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE890; }
    set32(c.r[3], 0u + 118u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE840; }
    set32(c.r[3], 0u + 116u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE7F0; }
    set32(c.r[3], 0u + 114u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE7A0; }
    set32(c.r[3], 0u + 110u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE754; }
    set32(c.r[3], 0u + 102u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE704; }
    set32(c.r[3], 0u + 98u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE6B4; }
    set32(c.r[3], 0u + 97u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE664; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_001CE9E0; } }
L_001CE664:
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE6A4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE6AC; } }
L_001CE6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE6ACu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE6ACu) [[unlikely]] return; }
L_001CE6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEB98; } }
L_001CE6B4:
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE6F4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE6FC; } }
L_001CE6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE6FCu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE6FCu) [[unlikely]] return; }
L_001CE6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEB98; } }
L_001CE704:
    set32(c.r[3], 0u + 12u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE744; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE74C; } }
L_001CE744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE74Cu); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE74Cu) [[unlikely]] return; }
L_001CE74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEB98; } }
L_001CE754:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE790; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE798; } }
L_001CE790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE798u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE798u) [[unlikely]] return; }
L_001CE798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEB98; } }
L_001CE7A0:
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE7E0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE7E8; } }
L_001CE7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE7E8u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE7E8u) [[unlikely]] return; }
L_001CE7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEB98; } }
L_001CE7F0:
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE830; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE838; } }
L_001CE830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE838u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE838u) [[unlikely]] return; }
L_001CE838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEB98; } }
L_001CE840:
    set32(c.r[3], 0u + 11u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE880; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE888; } }
L_001CE880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE888u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE888u) [[unlikely]] return; }
L_001CE888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEB98; } }
L_001CE890:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CE8CC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CE8D4; } }
L_001CE8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE8D4u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CE8D4u) [[unlikely]] return; }
L_001CE8D4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = c.r[1].d[0] | 65534ull;
    set32(c.r[6], c.r[6].w[0] - 26582u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001CEB98; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], c.r[5].w[0] - 26565u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE914u); c.r[7].d[0] = c.r[2].d[0] | 65533ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CE914u) [[unlikely]] return; }
L_001CE914:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 285u);
    c.budget -= 5;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CE954; }
    set32(c.r[2], 0u + 286u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001CE950; } }
    set32(c.r[2], 0u + 278u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001CE948; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 257ll ? 1ull : 0ull;  if (t) { goto L_001CE95C; } }
L_001CE948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[2].w[0] + 16u);  if (t) { goto L_001CE990; } }
L_001CE950:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001CE954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[2].w[0])));  if (t) { goto L_001CE990; } }
L_001CE95C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001CE97C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE974u); set32(c.r[5], c.r[5].w[0] - 26542u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CE974u) [[unlikely]] return; }
L_001CE974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CE990; } }
L_001CE97C:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 26864u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 1028u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_001CE990:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[20], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[19], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE9ACu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CE9ACu) [[unlikely]] return; }
L_001CE9AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE9CCu); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CE9CCu) [[unlikely]] return; }
L_001CE9CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CE9D8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CE9D8u) [[unlikely]] return; }
L_001CE9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CEB98; } }
L_001CE9E0:
    set32(c.r[3], c.r[3].w[0] - 31769u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_001CEA48; }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEA38; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CEA40; } }
L_001CEA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEA40u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CEA40u) [[unlikely]] return; }
L_001CEA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEB98; } }
L_001CEA48:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - 48u);
    c.budget -= 2;
L_001CEA50:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEA8C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CEA94; } }
L_001CEA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEA94u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CEA94u) [[unlikely]] return; }
L_001CEA94:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEAC4; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] - 31769u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEA50u | kUnwind; return; } goto L_001CEA50; }
L_001CEAC4:
    c.r[1].d[0] = c.r[21].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CEB3C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[6], 0u + 80u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEB08u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CEB08u) [[unlikely]] return; }
L_001CEB08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEB2Cu); set32(c.r[8], c.r[8].w[0] - 26471u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CEB2Cu) [[unlikely]] return; }
L_001CEB2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEB38u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CEB38u) [[unlikely]] return; }
L_001CEB38:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001CEB3C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001CEB98; } }
L_001CEB50:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEB8C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CEB94; } }
L_001CEB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEB94u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CEB94u) [[unlikely]] return; }
L_001CEB94:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001CEB98:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001CEB9C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[22].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CE4A0u | kUnwind; return; } goto L_001CE4A0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CEBE0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CEBE8; } }
L_001CEBE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEBE8u); set32(c.r[4], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CEBE8u) [[unlikely]] return; }
L_001CEBE8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], c.r[16].w[0] - 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEC18u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001CEC18u) [[unlikely]] return; }
L_001CEC18:
    st32((c.r[23].w[0]), c.r[2].w[0]);
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_001CEC50:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001CECA8; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CECA8u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001CECA8u) [[unlikely]] return; }
L_001CECA8:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[4], 0u + 91u);
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CECF8; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CED04; } }
L_001CECF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CED00u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CED00u) [[unlikely]] return; }
L_001CED00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CED04:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[21].w[0]), c.r[4].w[0]);  if (t) { goto L_001CEE4C; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CED3C; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CED48; } }
L_001CED3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CED44u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CED44u) [[unlikely]] return; }
L_001CED44:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CED48:
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = c.r[1].d[0] | 65534ull;
    set32(c.r[6], c.r[6].w[0] - 26582u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001CEE4C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], c.r[5].w[0] - 26565u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CED88u); c.r[7].d[0] = c.r[2].d[0] | 65533ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CED88u) [[unlikely]] return; }
L_001CED88:
    set32(c.r[6], ld32((c.r[21].w[0] + 12u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 285u);
    c.budget -= 5;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 40u)));  goto L_001CEDC8; }
    set32(c.r[2], 0u + 286u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001CEDC4; } }
    set32(c.r[2], 0u + 278u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 16u)));  goto L_001CEDBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 257ll ? 1ull : 0ull;  if (t) { goto L_001CEDD0; } }
L_001CEDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 16u);  if (t) { goto L_001CEE04; } }
L_001CEDC4:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_001CEDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_001CEE04; } }
L_001CEDD0:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001CEDF0; }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEDE8u); set32(c.r[5], c.r[5].w[0] - 26542u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CEDE8u) [[unlikely]] return; }
L_001CEDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CEE04; } }
L_001CEDF0:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27892u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_001CEE04:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[22], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[16], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE20u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CEE20u) [[unlikely]] return; }
L_001CEE20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE40u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CEE40u) [[unlikely]] return; }
L_001CEE40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE4Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CEE4Cu) [[unlikely]] return; }
L_001CEE4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[30], ld32((c.r[3].w[0] - 26744u)));
    c.budget -= 2;
L_001CEE54:
    set32(c.r[5], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_001CEE58:
    set32(c.r[4], c.r[18].w[0] + 5u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0])));  goto L_001CEE7C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEE78u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001CEE78u) [[unlikely]] return; }
L_001CEE78:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_001CEE7C:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 40u)));  goto L_001CF088; }
    set32(c.r[3], 0u + 93u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 40u)));  goto L_001CEFD4; }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 40u)));  goto L_001CEF28; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 40u)));  goto L_001CEEB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 40u)));  if (t) { goto L_001CF1E4; } }
L_001CEEB4:
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[6], 0u + 80u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEEE0u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CEEE0u) [[unlikely]] return; }
L_001CEEE0:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001CEEF4; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] - 26445u);  if (t) { goto L_001CEEF8; } }
L_001CEEF4:
    set32(c.r[8], c.r[8].w[0] - 26422u);
    c.budget -= 1;
L_001CEEF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF14u); c.r[9].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CEF14u) [[unlikely]] return; }
L_001CEF14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF20u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CEF20u) [[unlikely]] return; }
L_001CEF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[21].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEE58u | kUnwind; return; } goto L_001CEE58; } }
L_001CEF28:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CEF64; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CEF70; } }
L_001CEF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEF6Cu); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CEF6Cu) [[unlikely]] return; }
L_001CEF6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CEF70:
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[21].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEE54u | kUnwind; return; } goto L_001CEE54; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CEFC0; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CEFCC; } }
L_001CEFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CEFC8u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CEFC8u) [[unlikely]] return; }
L_001CEFC8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CEFCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEE54u | kUnwind; return; } goto L_001CEE54; } }
L_001CEFD4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CF010; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CF01C; } }
L_001CF010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF018u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF018u) [[unlikely]] return; }
L_001CF018:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CF01C:
    set32(c.r[3], 0u + 93u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[21].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEE54u | kUnwind; return; } goto L_001CEE54; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 40u)));  goto L_001CF234; }
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CF074; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CF080; } }
L_001CF074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF07Cu); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF07Cu) [[unlikely]] return; }
L_001CF07C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CF080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEE54u | kUnwind; return; } goto L_001CEE54; } }
L_001CF088:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CF0C4; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CF0D0; } }
L_001CF0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF0CCu); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF0CCu) [[unlikely]] return; }
L_001CF0CC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CF0D0:
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = c.r[1].d[0] | 65534ull;
    set32(c.r[6], c.r[6].w[0] - 26582u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[21].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_001CF1D4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], c.r[5].w[0] - 26565u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF110u); c.r[7].d[0] = c.r[2].d[0] | 65533ull;  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CF110u) [[unlikely]] return; }
L_001CF110:
    set32(c.r[6], ld32((c.r[21].w[0] + 12u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 285u);
    c.budget -= 5;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 40u)));  goto L_001CF150; }
    set32(c.r[2], 0u + 286u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001CF14C; } }
    set32(c.r[2], 0u + 278u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 16u)));  goto L_001CF144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 257ll ? 1ull : 0ull;  if (t) { goto L_001CF158; } }
L_001CF144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] + 16u);  if (t) { goto L_001CF18C; } }
L_001CF14C:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_001CF150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_001CF18C; } }
L_001CF158:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001CF178; }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF170u); set32(c.r[5], c.r[5].w[0] - 26542u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CF170u) [[unlikely]] return; }
L_001CF170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CF18C; } }
L_001CF178:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 26864u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 1028u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_001CF18C:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[22], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[16], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1A8u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CF1A8u) [[unlikely]] return; }
L_001CF1A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1C8u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CF1C8u) [[unlikely]] return; }
L_001CF1C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF1D4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CF1D4u) [[unlikely]] return; }
L_001CF1D4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEE54u | kUnwind; return; } goto L_001CEE54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEE54u | kUnwind; return; } goto L_001CEE54; } }
L_001CF1E4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CF220; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CF22C; } }
L_001CF220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF228u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF228u) [[unlikely]] return; }
L_001CF228:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CF22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CEE54u | kUnwind; return; } goto L_001CEE54; } }
L_001CF234:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CF26C; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CF278; } }
L_001CF26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF274u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF274u) [[unlikely]] return; }
L_001CF274:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CF278:
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CF2B0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[6], c.r[18].w[0] - 3u);
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF2ACu); set32(c.r[5], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001CF2ACu) [[unlikely]] return; }
L_001CF2AC:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001CF2B0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_001CF2E0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001CF32C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF32Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001CF32Cu) [[unlikely]] return; }
L_001CF32C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0])));  goto L_001CF3C0; }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[3], 0u + 46u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001CF3BC; } }
L_001CF34C:
    set32(c.r[3], c.r[19].w[0] + 5u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 40u)));  goto L_001CF370; }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF36Cu); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001CF36Cu) [[unlikely]] return; }
L_001CF36C:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_001CF370:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CF3B0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CF3B8; } }
L_001CF3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF3B8u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF3B8u) [[unlikely]] return; }
L_001CF3B8:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001CF3BC:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_001CF3C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 31769u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF34Cu | kUnwind; return; } goto L_001CF34C; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[21].w[0])));  goto L_001CF56C; }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CF428; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CF430; } }
L_001CF428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF430u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF430u) [[unlikely]] return; }
L_001CF430:
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_001CF568; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CF478; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CF480; } }
L_001CF478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF480u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF480u) [[unlikely]] return; }
L_001CF480:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], 0u + 80u);
    set32(c.r[19], c.r[19].w[0] + 2u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF4C0u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CF4C0u) [[unlikely]] return; }
L_001CF4C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF4E4u); set32(c.r[8], c.r[8].w[0] - 26398u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CF4E4u) [[unlikely]] return; }
L_001CF4E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF4F0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CF4F0u) [[unlikely]] return; }
L_001CF4F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CF568; } }
L_001CF4F8:
    set32(c.r[3], c.r[19].w[0] + 5u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 40u)));  goto L_001CF51C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF518u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001CF518u) [[unlikely]] return; }
L_001CF518:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_001CF51C:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CF55C; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CF564; } }
L_001CF55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF564u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF564u) [[unlikely]] return; }
L_001CF564:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001CF568:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_001CF56C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 31769u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF4F8u | kUnwind; return; } goto L_001CF4F8; }
    set32(c.r[2], 0u + 101u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 40u)));  goto L_001CF5A4; }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[21].w[0] + 40u)));  goto L_001CF6E4; }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_001CF5A4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CF5E0; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CF5E8; } }
L_001CF5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF5E8u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF5E8u) [[unlikely]] return; }
L_001CF5E8:
    set32(c.r[3], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_001CF600; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[21].w[0])));  goto L_001CF6C4; }
L_001CF600:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CF640; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CF648; } }
L_001CF640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF648u); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF648u) [[unlikely]] return; }
L_001CF648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_001CF6C0; } }
L_001CF650:
    set32(c.r[3], c.r[19].w[0] + 5u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 40u)));  goto L_001CF674; }
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF670u); set32(c.r[6], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_0037(c, 26u, depth + 1u); else { c.pc = 0x001DC460u; return; } if (c.pc != 0x001CF670u) [[unlikely]] return; }
L_001CF670:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_001CF674:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_001CF6B4; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_001CF6BC; } }
L_001CF6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF6BCu); set32(c.r[4], ld32((c.r[21].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF6BCu) [[unlikely]] return; }
L_001CF6BC:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_001CF6C0:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_001CF6C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 31769u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF650u | kUnwind; return; } goto L_001CF650; }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 1;
L_001CF6E4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF700u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 19u, depth + 1u); else { c.pc = 0x001D02C0u; return; } if (c.pc != 0x001CF700u) [[unlikely]] return; }
L_001CF700:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001CF760; }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[17], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[16], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF72Cu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CF72Cu) [[unlikely]] return; }
L_001CF72C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF750u); set32(c.r[8], c.r[8].w[0] - 26342u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CF750u) [[unlikely]] return; }
L_001CF750:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF75Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CF75Cu) [[unlikely]] return; }
L_001CF75C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001CF760:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_001CF780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 287u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[5].w[0] + 32u), c.r[4].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 36u), c.r[6].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 28u), 0u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 44u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CF7E0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CF7EC; } }
L_001CF7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF7E8u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF7E8u) [[unlikely]] return; }
L_001CF7E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CF7EC:
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[16].w[0]), c.r[4].w[0]);  if (t) { goto L_001CF848; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_001CF7FC:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_001CF824; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_001CF830; } }
L_001CF824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF82Cu); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0037(c, 35u, depth + 1u); else { c.pc = 0x001DC6A0u; return; } if (c.pc != 0x001CF82Cu) [[unlikely]] return; }
L_001CF82C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CF830:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[16].w[0]), c.r[4].w[0]);  if (t) { goto L_001CF848; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001CF7FCu | kUnwind; return; } goto L_001CF7FC; }
L_001CF848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001CF860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[6].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001CF88C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF884u); set32(c.r[5], c.r[5].w[0] - 26542u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CF884u) [[unlikely]] return; }
L_001CF884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001CF8A4; } }
L_001CF88C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27892u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
L_001CF8A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001CF8B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u + 285u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001CF908; } }
    set32(c.r[2], 0u + 286u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CF90C; }
    set32(c.r[2], 0u + 278u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001CF900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 257ll ? 1ull : 0ull;  if (t) { goto L_001CF914; } }
L_001CF900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 16u);  if (t) { goto L_001CF948; } }
L_001CF908:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001CF90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_001CF948; } }
L_001CF914:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001CF934; }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF92Cu); set32(c.r[5], c.r[5].w[0] - 26542u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CF92Cu) [[unlikely]] return; }
L_001CF92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CF948; } }
L_001CF934:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27892u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_001CF948:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF964u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CF964u) [[unlikely]] return; }
L_001CF964:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF984u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CF984u) [[unlikely]] return; }
L_001CF984:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF990u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CF990u) [[unlikely]] return; }
L_001CF990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001CF9B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001CFABC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CF9F8u); set32(c.r[5], c.r[5].w[0] - 26565u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CF9F8u) [[unlikely]] return; }
L_001CF9F8:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 285u);
    c.budget -= 5;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_001CFA38; }
    set32(c.r[2], 0u + 286u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_001CFA34; } }
    set32(c.r[2], 0u + 278u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_001CFA2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 257ll ? 1ull : 0ull;  if (t) { goto L_001CFA40; } }
L_001CFA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[2].w[0] + 16u);  if (t) { goto L_001CFA74; } }
L_001CFA34:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_001CFA38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_001CFA74; } }
L_001CFA40:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001CFA60; }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA58u); set32(c.r[5], c.r[5].w[0] - 26542u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CFA58u) [[unlikely]] return; }
L_001CFA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001CFA74; } }
L_001CFA60:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 27892u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
L_001CFA74:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], 0u + 80u);
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFA90u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0033(c, 319u, depth + 1u); else { c.pc = 0x001CFD50u; return; } if (c.pc != 0x001CFA90u) [[unlikely]] return; }
L_001CFA90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26539u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFAB0u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0033(c, 331u, depth + 1u); else { c.pc = 0x001CFEA0u; return; } if (c.pc != 0x001CFAB0u) [[unlikely]] return; }
L_001CFAB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFABCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CFABCu) [[unlikely]] return; }
L_001CFABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001CFAE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_001CFAFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 26864u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001CFB18u) [[unlikely]] return; }
L_001CFB18:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB28u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001CFB28u) [[unlikely]] return; }
L_001CFB28:
    c.r[4].d[0] = ld8((c.r[2].w[0] + 5u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 21ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 16ull;
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CFAFCu | kUnwind; return; } goto L_001CFAFC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001CFB60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001CFBA4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CFC24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFB9Cu);  if (depth < kMaxDepth) unit_0016(c, 71u, depth + 1u); else { c.pc = 0x00158B30u; return; } if (c.pc != 0x001CFB9Cu) [[unlikely]] return; }
L_001CFB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001CFBF8; } }
L_001CFBA4:
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65533ull;
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[16].d[0] << 32;  goto L_001CFBD0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBC8u); set32(c.r[5], c.r[5].w[0] - 26320u);  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001CFBC8u) [[unlikely]] return; }
L_001CFBC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFBF8; } }
L_001CFBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBD8u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_0016(c, 72u, depth + 1u); else { c.pc = 0x00158B40u; return; } if (c.pc != 0x001CFBD8u) [[unlikely]] return; }
L_001CFBD8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001CFBF8; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001CFC24; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFBF8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0032(c, 222u, depth + 1u); else { c.pc = 0x001CBC30u; return; } if (c.pc != 0x001CFBF8u) [[unlikely]] return; }
L_001CFBF8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001CFC24; }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].d[0] = ld64((c.r[3].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[17].d[0];
    st64((c.r[3].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].d[0] = ld64((c.r[3].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[16].d[0];
    st64((c.r[3].w[0] + 56u), c.r[2].d[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
L_001CFC24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CFC40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[16], c.r[3].w[0] << 1);
    c.r[1].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_001CFC84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 4u);  if (t) { goto L_001CFCC0; } }
L_001CFC84:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 1));  if (t) { goto L_001CFC94; } }
    set32(c.r[2], c.r[8].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001CFC94:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_001CFCC4; }
    set32(c.r[2], c.r[8].w[0] - 4u);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[9].d[0] + 0ull;  goto L_001CFCB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_001CFCC0; } }
L_001CFCB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFCC0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 69u, depth + 1u); else { c.pc = 0x001C9330u; return; } if (c.pc != 0x001CFCC0u) [[unlikely]] return; }
L_001CFCC0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001CFCC4:
    c.r[13].d[0] = c.r[17].d[0] << 32;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.r[8].d[0] = c.r[16].d[0] << 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 0, c.r[3].w[0], c.r[13].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[11].w[0], c.r[3].w[0]);
    c.r[10].d[0] = c.lo.d[1];
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 1, c.r[8].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.hi.d[1];
    mmi::pextlw(c.r[7], c.r[3], c.r[6]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[13].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    mmi::pextlw(c.r[12], c.r[3], c.r[12]);
    mmi::mult(c, 0, c.r[13].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[10].d[0] + c.r[3].d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[8].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] + c.r[12].d[0];
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD2Cu); c.r[7].d[0] = c.r[2].d[0] + c.r[7].d[0];  if (depth < kMaxDepth) unit_0033(c, 311u, depth + 1u); else { c.pc = 0x001CFB60u; return; } if (c.pc != 0x001CFD2Cu) [[unlikely]] return; }
L_001CFD2C:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001CFD50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 61u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001CFD94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFD88u); set32(c.r[5], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x001CFD88u) [[unlikely]] return; }
L_001CFD88:
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] - 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001CFE80; } }
L_001CFD94:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001CFDFC; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001CFDACu) [[unlikely]] return; }
L_001CFDAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDC0u); set32(c.r[5], c.r[5].w[0] - 26016u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x001CFDC0u) [[unlikely]] return; }
L_001CFDC0:
    set32(c.r[2], c.r[17].w[0] - 8u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001CFDEC; }
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDE8u); set32(c.r[5], c.r[5].w[0] - 26015u);  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x001CFDE8u) [[unlikely]] return; }
L_001CFDE8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001CFDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFDF4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x001CFDF4u) [[unlikely]] return; }
L_001CFDF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001CFE84; } }
L_001CFDFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE08u); set32(c.r[5], c.r[5].w[0] - 26011u);  if (depth < kMaxDepth) unit_00AE(c, 162u, depth + 1u); else { c.pc = 0x003B9E40u; return; } if (c.pc != 0x001CFE08u) [[unlikely]] return; }
L_001CFE08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] - 17u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001CFE20; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CFE20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE30u); set32(c.r[5], c.r[5].w[0] - 26009u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x001CFE30u) [[unlikely]] return; }
L_001CFE30:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001CFE68; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE50u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 265u, depth + 1u); else { c.pc = 0x003BA510u; return; } if (c.pc != 0x001CFE50u) [[unlikely]] return; }
L_001CFE50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE60u); set32(c.r[5], c.r[5].w[0] - 26015u);  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x001CFE60u) [[unlikely]] return; }
L_001CFE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CFE70; } }
L_001CFE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE70u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x001CFE70u) [[unlikely]] return; }
L_001CFE70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFE80u); set32(c.r[5], c.r[5].w[0] - 25999u);  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x001CFE80u) [[unlikely]] return; }
L_001CFE80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001CFE84:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001CFEA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[10].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 88u), c.r[11].d[0]);  if (t) { goto L_001CFED4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001CFEE0; } }
L_001CFED4:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_001CFEE0:
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFEF4u); set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0033(c, 333u, depth + 1u); else { c.pc = 0x001CFF00u; return; } if (c.pc != 0x001CFEF4u) [[unlikely]] return; }
L_001CFEF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001CFF00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF48u); set32(c.r[4], c.r[4].w[0] - 26016u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001CFF48u) [[unlikely]] return; }
L_001CFF48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF5Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001CFF5Cu) [[unlikely]] return; }
L_001CFF5C:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_001CFF88; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF84u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 206u, depth + 1u); else { c.pc = 0x001CB740u; return; } if (c.pc != 0x001CFF84u) [[unlikely]] return; }
L_001CFF84:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_001CFF88:
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_001CFF90:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFF9Cu); set32(c.r[5], 0u + 37u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x001CFF9Cu) [[unlikely]] return; }
L_001CFF9C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 8u)));  [[clang::musttail]] return unit_0034(c, 14u, depth); }
    set32(c.r[19], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[6], c.r[20].w[0] - c.r[21].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFC4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0035(c, 198u, depth + 1u); else { c.pc = 0x001D6130u; return; } if (c.pc != 0x001CFFC4u) [[unlikely]] return; }
L_001CFFC4:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_001CFFF0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CFFECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0032(c, 206u, depth + 1u); else { c.pc = 0x001CB740u; return; } if (c.pc != 0x001CFFECu) [[unlikely]] return; }
L_001CFFEC:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_001CFFF0:
    set32(c.r[2], 0u + 37u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1u)));
    c.budget -= 4;
    [[clang::musttail]] return unit_0034(c, 1u, depth);
}

}
