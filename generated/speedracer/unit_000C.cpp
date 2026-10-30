#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000C[4096] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 171, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0,
    266, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0,
    0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 288, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 323,
    0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363,
    0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0,
    377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382,
    0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0,
    0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421,
    0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0,
};

void unit_000C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00130000;
    case 2u: goto L_00130014;
    case 3u: goto L_0013001C;
    case 4u: goto L_00130094;
    case 5u: goto L_001300AC;
    case 6u: goto L_001300C4;
    case 7u: goto L_001300DC;
    case 8u: goto L_001300E8;
    case 9u: goto L_00130130;
    case 10u: goto L_00130144;
    case 11u: goto L_00130150;
    case 12u: goto L_00130170;
    case 13u: goto L_0013018C;
    case 14u: goto L_001301A0;
    case 15u: goto L_001301CC;
    case 16u: goto L_001301FC;
    case 17u: goto L_00130228;
    case 18u: goto L_00130238;
    case 19u: goto L_0013025C;
    case 20u: goto L_00130270;
    case 21u: goto L_00130290;
    case 22u: goto L_001302B0;
    case 23u: goto L_001302E4;
    case 24u: goto L_00130338;
    case 25u: goto L_0013038C;
    case 26u: goto L_001303FC;
    case 27u: goto L_0013044C;
    case 28u: goto L_00130470;
    case 29u: goto L_00130550;
    case 30u: goto L_00130570;
    case 31u: goto L_00130580;
    case 32u: goto L_001305F8;
    case 33u: goto L_00130610;
    case 34u: goto L_0013061C;
    case 35u: goto L_00130640;
    case 36u: goto L_00130670;
    case 37u: goto L_001306A0;
    case 38u: goto L_00130754;
    case 39u: goto L_001307A4;
    case 40u: goto L_001307C4;
    case 41u: goto L_00130800;
    case 42u: goto L_00130850;
    case 43u: goto L_00130890;
    case 44u: goto L_001308F4;
    case 45u: goto L_00130930;
    case 46u: goto L_001309A0;
    case 47u: goto L_00130A28;
    case 48u: goto L_00130A3C;
    case 49u: goto L_00130A54;
    case 50u: goto L_00130A70;
    case 51u: goto L_00130AA0;
    case 52u: goto L_00130B70;
    case 53u: goto L_00130B90;
    case 54u: goto L_00130BF0;
    case 55u: goto L_00130C5C;
    case 56u: goto L_00130C78;
    case 57u: goto L_00130CB4;
    case 58u: goto L_00130CD4;
    case 59u: goto L_00130CFC;
    case 60u: goto L_00130D1C;
    case 61u: goto L_00130D70;
    case 62u: goto L_00130D90;
    case 63u: goto L_00130DB8;
    case 64u: goto L_00130DD8;
    case 65u: goto L_00130E24;
    case 66u: goto L_00130E44;
    case 67u: goto L_00130E6C;
    case 68u: goto L_00130E8C;
    case 69u: goto L_00130F14;
    case 70u: goto L_00130F30;
    case 71u: goto L_00130F78;
    case 72u: goto L_00130FC0;
    case 73u: goto L_00131010;
    case 74u: goto L_00131030;
    case 75u: goto L_0013103C;
    case 76u: goto L_00131040;
    case 77u: goto L_00131058;
    case 78u: goto L_00131078;
    case 79u: goto L_00131080;
    case 80u: goto L_001310C0;
    case 81u: goto L_001310EC;
    case 82u: goto L_00131100;
    case 83u: goto L_0013110C;
    case 84u: goto L_00131134;
    case 85u: goto L_00131140;
    case 86u: goto L_00131154;
    case 87u: goto L_00131180;
    case 88u: goto L_001311F0;
    case 89u: goto L_0013129C;
    case 90u: goto L_001312C0;
    case 91u: goto L_0013130C;
    case 92u: goto L_00131330;
    case 93u: goto L_00131364;
    case 94u: goto L_00131370;
    case 95u: goto L_001313F0;
    case 96u: goto L_00131414;
    case 97u: goto L_0013143C;
    case 98u: goto L_00131450;
    case 99u: goto L_00131470;
    case 100u: goto L_00131498;
    case 101u: goto L_001314B8;
    case 102u: goto L_00131508;
    case 103u: goto L_00131528;
    case 104u: goto L_00131550;
    case 105u: goto L_00131570;
    case 106u: goto L_001315BC;
    case 107u: goto L_001315DC;
    case 108u: goto L_00131604;
    case 109u: goto L_00131624;
    case 110u: goto L_0013163C;
    case 111u: goto L_00131670;
    case 112u: goto L_00131694;
    case 113u: goto L_001316BC;
    case 114u: goto L_001316E0;
    case 115u: goto L_00131728;
    case 116u: goto L_00131780;
    case 117u: goto L_00131798;
    case 118u: goto L_001317B4;
    case 119u: goto L_001317D0;
    case 120u: goto L_001317F4;
    case 121u: goto L_00131818;
    case 122u: goto L_0013183C;
    case 123u: goto L_00131840;
    case 124u: goto L_00131864;
    case 125u: goto L_00131880;
    case 126u: goto L_001318B4;
    case 127u: goto L_001318C0;
    case 128u: goto L_001318D8;
    case 129u: goto L_00131900;
    case 130u: goto L_00131924;
    case 131u: goto L_00131940;
    case 132u: goto L_00131974;
    case 133u: goto L_00131980;
    case 134u: goto L_00131998;
    case 135u: goto L_001319C0;
    case 136u: goto L_001319E4;
    case 137u: goto L_00131A00;
    case 138u: goto L_00131A34;
    case 139u: goto L_00131A58;
    case 140u: goto L_00131A80;
    case 141u: goto L_00131AA4;
    case 142u: goto L_00131AF4;
    case 143u: goto L_00131B18;
    case 144u: goto L_00131B40;
    case 145u: goto L_00131B64;
    case 146u: goto L_00131BAC;
    case 147u: goto L_00131BC8;
    case 148u: goto L_00131C38;
    case 149u: goto L_00131C90;
    case 150u: goto L_00131CC8;
    case 151u: goto L_00131D40;
    case 152u: goto L_00131D78;
    case 153u: goto L_00131E10;
    case 154u: goto L_00131E3C;
    case 155u: goto L_00131E80;
    case 156u: goto L_00131EAC;
    case 157u: goto L_00131EB4;
    case 158u: goto L_00131EBC;
    case 159u: goto L_00131ED0;
    case 160u: goto L_00131EF4;
    case 161u: goto L_00131F10;
    case 162u: goto L_00131F24;
    case 163u: goto L_00131F50;
    case 164u: goto L_00131F80;
    case 165u: goto L_00131FBC;
    case 166u: goto L_00131FD4;
    case 167u: goto L_00131FF8;
    case 168u: goto L_00132000;
    case 169u: goto L_00132014;
    case 170u: goto L_00132038;
    case 171u: goto L_0013203C;
    case 172u: goto L_00132040;
    case 173u: goto L_00132058;
    case 174u: goto L_00132080;
    case 175u: goto L_001320A0;
    case 176u: goto L_001320C0;
    case 177u: goto L_001320F0;
    case 178u: goto L_00132100;
    case 179u: goto L_00132110;
    case 180u: goto L_00132138;
    case 181u: goto L_00132140;
    case 182u: goto L_00132158;
    case 183u: goto L_001321A8;
    case 184u: goto L_001321C8;
    case 185u: goto L_001321F0;
    case 186u: goto L_00132210;
    case 187u: goto L_00132260;
    case 188u: goto L_00132280;
    case 189u: goto L_001322A8;
    case 190u: goto L_001322C8;
    case 191u: goto L_0013232C;
    case 192u: goto L_00132348;
    case 193u: goto L_0013236C;
    case 194u: goto L_0013238C;
    case 195u: goto L_001323B4;
    case 196u: goto L_001323D4;
    case 197u: goto L_0013243C;
    case 198u: goto L_00132460;
    case 199u: goto L_001324D0;
    case 200u: goto L_00132560;
    case 201u: goto L_001325A0;
    case 202u: goto L_001325E4;
    case 203u: goto L_001325FC;
    case 204u: goto L_00132620;
    case 205u: goto L_00132634;
    case 206u: goto L_00132670;
    case 207u: goto L_0013268C;
    case 208u: goto L_001326AC;
    case 209u: goto L_00132714;
    case 210u: goto L_00132750;
    case 211u: goto L_00132784;
    case 212u: goto L_001327A4;
    case 213u: goto L_001327CC;
    case 214u: goto L_001327EC;
    case 215u: goto L_0013281C;
    case 216u: goto L_0013283C;
    case 217u: goto L_00132840;
    case 218u: goto L_0013286C;
    case 219u: goto L_00132880;
    case 220u: goto L_0013288C;
    case 221u: goto L_001328C0;
    case 222u: goto L_001328D0;
    case 223u: goto L_001328F8;
    case 224u: goto L_00132900;
    case 225u: goto L_00132910;
    case 226u: goto L_00132928;
    case 227u: goto L_00132940;
    case 228u: goto L_00132970;
    case 229u: goto L_00132994;
    case 230u: goto L_001329AC;
    case 231u: goto L_001329D0;
    case 232u: goto L_001329EC;
    case 233u: goto L_00132A10;
    case 234u: goto L_00132A20;
    case 235u: goto L_00132A4C;
    case 236u: goto L_00132A58;
    case 237u: goto L_00132A60;
    case 238u: goto L_00132A6C;
    case 239u: goto L_00132A90;
    case 240u: goto L_00132AD0;
    case 241u: goto L_00132ADC;
    case 242u: goto L_00132B18;
    case 243u: goto L_00132B30;
    case 244u: goto L_00132B50;
    case 245u: goto L_00132B70;
    case 246u: goto L_00132B84;
    case 247u: goto L_00132B98;
    case 248u: goto L_00132BD0;
    case 249u: goto L_00132BE8;
    case 250u: goto L_00132C00;
    case 251u: goto L_00132C14;
    case 252u: goto L_00132C44;
    case 253u: goto L_00132C58;
    case 254u: goto L_00132C80;
    case 255u: goto L_00132CA0;
    case 256u: goto L_00132CB8;
    case 257u: goto L_00132D00;
    case 258u: goto L_00132D18;
    case 259u: goto L_00132D30;
    case 260u: goto L_00132D50;
    case 261u: goto L_00132D7C;
    case 262u: goto L_00132D9C;
    case 263u: goto L_00132DA8;
    case 264u: goto L_00132DDC;
    case 265u: goto L_00132DF4;
    case 266u: goto L_00132E00;
    case 267u: goto L_00132E08;
    case 268u: goto L_00132E14;
    case 269u: goto L_00132E24;
    case 270u: goto L_00132E3C;
    case 271u: goto L_00132E40;
    case 272u: goto L_00132E54;
    case 273u: goto L_00132E70;
    case 274u: goto L_00132EA4;
    case 275u: goto L_00132EB4;
    case 276u: goto L_00132EFC;
    case 277u: goto L_00132F60;
    case 278u: goto L_00132F80;
    case 279u: goto L_00132F90;
    case 280u: goto L_00132FB0;
    case 281u: goto L_00132FC0;
    case 282u: goto L_00132FD0;
    case 283u: goto L_00132FF8;
    case 284u: goto L_00133004;
    case 285u: goto L_0013300C;
    case 286u: goto L_00133024;
    case 287u: goto L_00133034;
    case 288u: goto L_0013303C;
    case 289u: goto L_00133040;
    case 290u: goto L_00133050;
    case 291u: goto L_0013305C;
    case 292u: goto L_00133068;
    case 293u: goto L_0013307C;
    case 294u: goto L_00133080;
    case 295u: goto L_001330C0;
    case 296u: goto L_00133108;
    case 297u: goto L_00133120;
    case 298u: goto L_00133138;
    case 299u: goto L_00133140;
    case 300u: goto L_0013314C;
    case 301u: goto L_00133170;
    case 302u: goto L_0013319C;
    case 303u: goto L_001331D4;
    case 304u: goto L_001331EC;
    case 305u: goto L_00133204;
    case 306u: goto L_00133218;
    case 307u: goto L_00133240;
    case 308u: goto L_00133260;
    case 309u: goto L_00133288;
    case 310u: goto L_001332A0;
    case 311u: goto L_001332AC;
    case 312u: goto L_001332BC;
    case 313u: goto L_001332C4;
    case 314u: goto L_001332DC;
    case 315u: goto L_001332EC;
    case 316u: goto L_001332F8;
    case 317u: goto L_0013330C;
    case 318u: goto L_00133320;
    case 319u: goto L_00133330;
    case 320u: goto L_00133358;
    case 321u: goto L_00133364;
    case 322u: goto L_00133374;
    case 323u: goto L_0013337C;
    case 324u: goto L_00133394;
    case 325u: goto L_001333A4;
    case 326u: goto L_001333B0;
    case 327u: goto L_001333C4;
    case 328u: goto L_001333D4;
    case 329u: goto L_001333F0;
    case 330u: goto L_0013340C;
    case 331u: goto L_00133414;
    case 332u: goto L_0013341C;
    case 333u: goto L_00133438;
    case 334u: goto L_00133448;
    case 335u: goto L_00133454;
    case 336u: goto L_00133464;
    case 337u: goto L_00133474;
    case 338u: goto L_00133490;
    case 339u: goto L_001334A4;
    case 340u: goto L_001334B4;
    case 341u: goto L_001334D8;
    case 342u: goto L_001334F8;
    case 343u: goto L_00133520;
    case 344u: goto L_00133540;
    case 345u: goto L_00133550;
    case 346u: goto L_0013355C;
    case 347u: goto L_00133590;
    case 348u: goto L_001335B0;
    case 349u: goto L_001335C0;
    case 350u: goto L_001335E0;
    case 351u: goto L_001335F4;
    case 352u: goto L_0013361C;
    case 353u: goto L_00133638;
    case 354u: goto L_0013363C;
    case 355u: goto L_00133658;
    case 356u: goto L_0013368C;
    case 357u: goto L_001336D4;
    case 358u: goto L_001336E4;
    case 359u: goto L_0013370C;
    case 360u: goto L_00133730;
    case 361u: goto L_00133758;
    case 362u: goto L_00133770;
    case 363u: goto L_0013377C;
    case 364u: goto L_0013378C;
    case 365u: goto L_00133794;
    case 366u: goto L_001337AC;
    case 367u: goto L_001337BC;
    case 368u: goto L_001337C8;
    case 369u: goto L_001337DC;
    case 370u: goto L_001337F0;
    case 371u: goto L_00133800;
    case 372u: goto L_00133830;
    case 373u: goto L_0013383C;
    case 374u: goto L_00133840;
    case 375u: goto L_00133860;
    case 376u: goto L_00133878;
    case 377u: goto L_00133880;
    case 378u: goto L_001338C4;
    case 379u: goto L_001338E0;
    case 380u: goto L_00133900;
    case 381u: goto L_00133934;
    case 382u: goto L_0013397C;
    case 383u: goto L_0013398C;
    case 384u: goto L_001339B4;
    case 385u: goto L_001339E0;
    case 386u: goto L_00133A08;
    case 387u: goto L_00133A20;
    case 388u: goto L_00133A2C;
    case 389u: goto L_00133A3C;
    case 390u: goto L_00133A44;
    case 391u: goto L_00133A5C;
    case 392u: goto L_00133A6C;
    case 393u: goto L_00133A78;
    case 394u: goto L_00133A8C;
    case 395u: goto L_00133AA0;
    case 396u: goto L_00133AB0;
    case 397u: goto L_00133B00;
    case 398u: goto L_00133B40;
    case 399u: goto L_00133B64;
    case 400u: goto L_00133BB0;
    case 401u: goto L_00133BC8;
    case 402u: goto L_00133BE0;
    case 403u: goto L_00133BF4;
    case 404u: goto L_00133C08;
    case 405u: goto L_00133C1C;
    case 406u: goto L_00133C7C;
    case 407u: goto L_00133C94;
    case 408u: goto L_00133CA0;
    case 409u: goto L_00133CA8;
    case 410u: goto L_00133CB4;
    case 411u: goto L_00133CC4;
    case 412u: goto L_00133CD8;
    case 413u: goto L_00133CE4;
    case 414u: goto L_00133CF8;
    case 415u: goto L_00133D1C;
    case 416u: goto L_00133D28;
    case 417u: goto L_00133D34;
    case 418u: goto L_00133D44;
    case 419u: goto L_00133D4C;
    case 420u: goto L_00133D5C;
    case 421u: goto L_00133D7C;
    case 422u: goto L_00133D8C;
    case 423u: goto L_00133DA0;
    case 424u: goto L_00133DD0;
    case 425u: goto L_00133E24;
    case 426u: goto L_00133E3C;
    case 427u: goto L_00133E64;
    case 428u: goto L_00133E88;
    case 429u: goto L_00133EA0;
    case 430u: goto L_00133EC0;
    case 431u: goto L_00133F20;
    case 432u: goto L_00133F34;
    case 433u: goto L_00133F48;
    case 434u: goto L_00133F70;
    case 435u: goto L_00133F84;
    case 436u: goto L_00133F98;
    case 437u: goto L_00133FC0;
    case 438u: goto L_00133FD8;
    case 439u: goto L_00133FF0;
    default: bad_entry(c, 0x00130000u); return;
    }
L_00130000:
    st64((c.r[29].w[0] + 2176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 2184u), c.r[11].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29128u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00130150; } }
L_00130014:
    set32(c.r[3], ld32((c.r[28].w[0] - 29120u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00130028; } }
    goto L_00130020;
L_0013001C:
    c.budget -= 1;
L_00130020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00130154; } }
L_00130028:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00130040; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29124u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00130150; } }
L_00130040:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 8u);  goto L_0013005C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 29116u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00130150; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_0013005C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001300B4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0013009C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00130084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001300CC; } }
L_00130084:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130094u); set32(c.r[5], c.r[5].w[0] - 7153u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00130094u) [[unlikely]] return; }
L_00130094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 48u);  if (t) { goto L_001300E0; } }
L_0013009C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300ACu); set32(c.r[5], c.r[5].w[0] - 7145u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x001300ACu) [[unlikely]] return; }
L_001300AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001300DC; } }
L_001300B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300C4u); set32(c.r[5], c.r[5].w[0] - 7137u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x001300C4u) [[unlikely]] return; }
L_001300C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001300DC; } }
L_001300CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300DCu); set32(c.r[5], c.r[5].w[0] - 7129u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x001300DCu) [[unlikely]] return; }
L_001300DC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_001300E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300E8u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001300E8u) [[unlikely]] return; }
L_001300E8:
    set32(c.r[3], 0u + 2046u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 8u);  goto L_0013010C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00130114; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_0013010C:
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 2;
L_00130114:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[6].d[0] = c.r[17].d[0] << 32;
    set32(c.r[4], c.r[2].w[0] + 48u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[2], c.r[29].w[0] + 2192u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130130u); set32(c.r[7], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 197u, depth + 1u); else { c.pc = 0x003BDA08u; return; } if (c.pc != 0x00130130u) [[unlikely]] return; }
L_00130130:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 7121u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130144u); st8((c.r[29].w[0] + 2094u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AE(c, 144u, depth + 1u); else { c.pc = 0x003B9908u; return; } if (c.pc != 0x00130144u) [[unlikely]] return; }
L_00130144:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130150u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000B(c, 381u, depth + 1u); else { c.pc = 0x0012FB50u; return; } if (c.pc != 0x00130150u) [[unlikely]] return; }
L_00130150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00130154:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2192u);  c.pc = t; return; }
L_00130170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29112u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0013018C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013018Cu);  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x0013018Cu) [[unlikely]] return; }
L_0013018C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001301A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[28].w[0] - 29120u), c.r[5].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[28].w[0] - 29124u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301CCu); st32((c.r[28].w[0] - 29116u), 0u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x001301CCu) [[unlikely]] return; }
L_001301CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 32u));  goto L_001301E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_001301EC; } }
L_001301E4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_001301EC:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001301FCu) [[unlikely]] return; }
L_001301FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0013025C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29120u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013025C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 7119u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130228u); st32((c.r[28].w[0] - 29112u), 0u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x00130228u) [[unlikely]] return; }
L_00130228:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130238u); set32(c.r[5], c.r[5].w[0] - 7109u);  if (depth < kMaxDepth) unit_000B(c, 4u, depth + 1u); else { c.pc = 0x0012C060u; return; } if (c.pc != 0x00130238u) [[unlikely]] return; }
L_00130238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 29112u), c.r[2].w[0]);  if (t) { goto L_00130250; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29120u)));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[28].w[0] - 29120u), c.r[2].w[0]);
    c.budget -= 4;
L_00130250:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013025Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0013025Cu) [[unlikely]] return; }
L_0013025C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130270u); set32(c.r[6], c.r[6].w[0] - 7106u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00130270u) [[unlikely]] return; }
L_00130270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29128u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00130290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_001302B4; } }
L_001302B0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_001302B4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001302B0u | kUnwind; return; } goto L_001302B0; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_00130300; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_001302FC; } }
L_001302E4:
    set32(c.r[5], c.r[5].w[0] - 48u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_001302FC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 1;
L_00130300:
    c.r[3].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 46u);  goto L_00130328; }
    c.r[1].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00130324; } }
    c.r[3].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001302E4u | kUnwind; return; } goto L_001302E4; }
L_00130324:
    set32(c.r[3], 0u + 46u);
    c.budget -= 1;
L_00130328:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001303A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0013035C; } }
L_00130338:
    set32(c.r[6], c.r[5].w[0] - 48u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[8], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 9;
L_0013035C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_00130390; }
    c.r[1].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013038C; } }
    c.r[3].d[0] = c.r[7].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130338u | kUnwind; return; } goto L_00130338; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013038C; } }
L_0013038C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 1;
L_00130390:
    c.r[3].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001303A8; } }
    c.r[1].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013038Cu | kUnwind; return; } goto L_0013038C; }
L_001303A8:
    c.f[0] = c.r[8].w[0];
    set32(c.r[3], 0u + 101u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00130450; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 45ull;
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_00130410; }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130410; } }
L_001303FC:
    set32(c.r[3], c.r[3].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_00130410:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013042C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001303FCu | kUnwind; return; } goto L_001303FC; }
L_0013042C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00130438; } }
    set32(c.r[6], 0u - c.r[6].w[0]);
    c.budget -= 1;
L_00130438:
    c.f[0] = c.r[6].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013044Cu); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0013044Cu) [[unlikely]] return; }
L_0013044C:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 1;
L_00130450:
    c.f[0] = c.f[20];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00130470:
    c.f[4] = ld32((c.r[28].w[0] - 32228u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = 0u;
    c.f[2] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[12], c.f[4]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = ld32((c.r[28].w[0] - 32288u));
    c.facc = fp::add(c.f[0], c.f[12]);
    c.f[12] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 14;
    if (!(c.fcr31 & kFpuCondition)) { c.f[3] = ld32((c.r[28].w[0] - 32228u));  goto L_001304B0; }
    c.f[12] = fp::add(c.f[12], c.f[4]);
    c.f[3] = ld32((c.r[28].w[0] - 32228u));
    c.budget -= 2;
L_001304B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[28].w[0] - 32288u));
    fpu_div(c, 2u, c.f[13], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[13]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001304EC; } }
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.budget -= 1;
L_001304EC:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = fp::sub(c.f[12], c.f[2]);  goto L_00130524; }
    c.f[0] = fp::sub(c.f[2], c.f[12]);
    c.f[1] = ld32((c.r[28].w[0] - 32288u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0013051C; } }
    c.f[0] = ld32((c.r[28].w[0] - 32228u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[12]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 4;
L_0013051C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130544; } }
L_00130524:
    c.f[0] = ld32((c.r[28].w[0] - 32288u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1] ^ fp::kSign;  goto L_00130544; }
    c.f[0] = ld32((c.r[28].w[0] - 32228u));
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[2]);  if (t) { goto L_00130544; } }
L_00130544:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00130550:
    c.facc = fp::mul(c.f[13], c.f[13]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[12]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00130570:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00AE(c, 84u, depth); }
L_00130580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001305A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130624; } }
L_001305A8:
    set32(c.r[16], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 92u)));  goto L_001305BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130624; } }
L_001305BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_001305F0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001305EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001305EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001305EC; } }
    set32(c.r[17], 0u - 105u);
    c.budget -= 1;
L_001305EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_001305F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001305F8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x001305F8u) [[unlikely]] return; }
L_001305F8:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00130614; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130610u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00A4(c, 103u, depth + 1u); else { c.pc = 0x00393460u; return; } if (c.pc != 0x00130610u) [[unlikely]] return; }
L_00130610:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00130614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013061Cu); st32((c.r[16].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0013061Cu) [[unlikely]] return; }
L_0013061C:
    st32((c.r[18].w[0] + 132u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00130624:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00130640:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 132u)));  goto L_00130650; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130668; } }
L_00130650:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 92u)));  goto L_00130660; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130668; } }
L_00130660:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00130668:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00130670:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 132u)));  goto L_00130680; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130690; } }
L_00130680:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  goto L_00130690; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130690; } }
L_00130690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001306A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001306D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130980; } }
L_001306D0:
    set32(c.r[19], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_001306E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130980; } }
L_001306E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001306F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_00130980; } }
L_001306F4:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { st32((c.r[19].w[0] + 16u), c.r[5].w[0]);  goto L_00130704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00130980; } }
L_00130704:
    st32((c.r[19].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_0013072C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00130728; } }
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 1;
L_00130728:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0013072C:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  goto L_0013096C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00130968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00130968; } }
L_00130754:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 104u)));  goto L_001307F8; }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001307F4; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(16384ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], 0u + 16384u);  if (t) { goto L_00130778; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00130778:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 60u)));  goto L_00130788; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00130980; } }
L_00130788:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001307A4u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_000A(c, 482u, depth + 1u); else { c.pc = 0x0012BDF0u; return; } if (c.pc != 0x001307A4u) [[unlikely]] return; }
L_001307A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_001307B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00130980; } }
L_001307B4:
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001307C4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001307C4u) [[unlikely]] return; }
L_001307C4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  goto L_001307D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00130980; } }
L_001307D4:
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    st32((c.r[19].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 8;
L_001307F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 1;
L_001307F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00130810; }
L_00130800:
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 24u)));  goto L_001308E4; }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00130810:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 20u)));  goto L_0013083C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00130838; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00130830; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00130830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00130980; } }
L_00130838:
    set32(c.r[18], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_0013083C:
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[18].d[0] = c.r[3].d[0] + 0ull;  goto L_00130848; }
L_00130848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00130868; } }
L_00130850:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00130868:
    c.r[2].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130850u | kUnwind; return; } goto L_00130850; }
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 92u)));  goto L_00130898; }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130890u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 11u, depth + 1u); else { c.pc = 0x003907E0u; return; } if (c.pc != 0x00130890u) [[unlikely]] return; }
L_00130890:
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    c.budget -= 2;
L_00130898:
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    st32((c.r[19].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00130968; } }
L_001308E4:
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[20], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001308F4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00A4(c, 106u, depth + 1u); else { c.pc = 0x003934E0u; return; } if (c.pc != 0x001308F4u) [[unlikely]] return; }
L_001308F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].sd[0] < 0) { set32(c.r[3], ld32((c.r[19].w[0] + 24u)));  goto L_00130914; }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00130910; } }
    set32(c.r[17], 0u - 3u);
    c.budget -= 1;
L_00130910:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_00130914:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] - c.r[18].w[0]);  if (t) { goto L_00130934; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130930u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A4(c, 11u, depth + 1u); else { c.pc = 0x003907E0u; return; } if (c.pc != 0x00130930u) [[unlikely]] return; }
L_00130930:
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_00130934:
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[19].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_00130960; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00130958; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00130958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00130980; } }
L_00130960:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00130974; } }
L_00130968:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_0013096C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130754u | kUnwind; return; } goto L_00130754; }
L_00130974:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00130980; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00130980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001309A0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[8].d[0] = 0ull + 0ull;  goto L_001309C0; }
L_001309C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[8].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001309F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130BC8; } }
L_001309F4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  goto L_00130A04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130BC8; } }
L_00130A04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00130A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00130BC8; } }
L_00130A14:
    set32(c.r[2], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00130A2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130A28u);  if (depth < kMaxDepth) unit_000C(c, 31u, depth + 1u); else { c.pc = 0x00130580u; return; } if (c.pc != 0x00130A28u) [[unlikely]] return; }
L_00130A28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00130A2C:
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[6], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130A3Cu); set32(c.r[7], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_000C(c, 54u, depth + 1u); else { c.pc = 0x00130BF0u; return; } if (c.pc != 0x00130A3Cu) [[unlikely]] return; }
L_00130A3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_00130A4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 103u);  if (t) { goto L_00130BC8; } }
L_00130A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130A54u); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00130A54u) [[unlikely]] return; }
L_00130A54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_00130A68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 104u);  if (t) { goto L_00130BC8; } }
L_00130A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130A70u); set32(c.r[4], 0u + 16384u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00130A70u) [[unlikely]] return; }
L_00130A70:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 112u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_00130AA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130AA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00130AA0u) [[unlikely]] return; }
L_00130AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 104u);  if (t) { goto L_00130BC8; } }
L_00130AA8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00130AB8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00130AB8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 68u)));  goto L_00130B08; }
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[19].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[4].d[0] = c.r[2].d[0] & 6ull;
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 9u);  goto L_00130B00; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[19].w[0]), c.r[3].w[0]);  goto L_00130B04; }
    c.budget -= 2;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00130AF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130B04; } }
L_00130AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_00130B04; } }
L_00130B00:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00130B04:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_00130B08:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 13;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 72u)));  goto L_00130B9C; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00130B98; } }
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[5], 0u - 15u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[6], c.r[6].w[0] - 6824u);
    set32(c.r[7], 0u + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130B70u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00A5(c, 50u, depth + 1u); else { c.pc = 0x00394DF0u; return; } if (c.pc != 0x00130B70u) [[unlikely]] return; }
L_00130B70:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00130B88; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00130B98; } }
L_00130B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130B90u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00130B90u) [[unlikely]] return; }
L_00130B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00130BC8; } }
L_00130B98:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_00130B9C:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], c.r[4].w[0] + 30u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 132u), c.r[16].w[0]);
    c.budget -= 11;
L_00130BC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00130BF0:
    set32(c.r[29], c.r[29].w[0] - 192u);
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
    st32((c.r[5].w[0]), 0u);
    st32((c.r[6].w[0]), 0u);
    st32((c.r[7].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[29].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[7].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130C5Cu); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_000A(c, 482u, depth + 1u); else { c.pc = 0x0012BDF0u; return; } if (c.pc != 0x00130C5Cu) [[unlikely]] return; }
L_00130C5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_00130C6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001311B4; } }
L_00130C6C:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130C78u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00130C78u) [[unlikely]] return; }
L_00130C78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 176u)));  goto L_00130C88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_00130C9C; } }
L_00130C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04030000u);
    c.r[2].d[0] = c.r[2].d[0] | 19280ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[21].w[0] + 8u)));  goto L_00130CA0; }
    set32(c.r[19], 0u - 103u);
    c.budget -= 1;
L_00130C9C:
    set32(c.r[18], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_00130CA0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 191u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130CB4u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00130CB4u) [[unlikely]] return; }
L_00130CB4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00130CCC; }
    c.r[17].d[0] = ld8((c.r[29].w[0] + 191u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00130CE0; } }
L_00130CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130CD4u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00130CD4u) [[unlikely]] return; }
L_00130CD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00130CE0; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_00130CE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 160u), c.r[17].w[0]);  if (t) { goto L_00130D2C; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 190u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130CFCu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00130CFCu) [[unlikely]] return; }
L_00130CFC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00130D14; }
    c.r[17].d[0] = ld8((c.r[29].w[0] + 190u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00130D2C; } }
L_00130D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130D1Cu);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00130D1Cu) [[unlikely]] return; }
L_00130D1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00130D2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00130D2C; } }
L_00130D2C:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], c.r[17].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00130D44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_00130D4C; } }
L_00130D44:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 2;
L_00130D4C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 8u)));  goto L_00130D5C; }
    set32(c.r[19], 0u - 1u);
    set32(c.r[17], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_00130D5C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 189u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130D70u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00130D70u) [[unlikely]] return; }
L_00130D70:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00130D88; }
    c.r[16].d[0] = ld8((c.r[29].w[0] + 189u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00130D9C; } }
L_00130D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130D90u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00130D90u) [[unlikely]] return; }
L_00130D90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00130D9C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00130D9C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00130DE8; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130DB8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00130DB8u) [[unlikely]] return; }
L_00130DB8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00130DD0; }
    c.r[16].d[0] = ld8((c.r[29].w[0] + 188u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00130DE8; } }
L_00130DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130DD8u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00130DD8u) [[unlikely]] return; }
L_00130DD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00130DE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00130DE8; } }
L_00130DE8:
    set32(c.r[2], c.r[16].w[0] << 8);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_00130DFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130E00; } }
L_00130DFC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00130E00:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], ld32((c.r[21].w[0] + 8u)));  goto L_00130E10; }
    set32(c.r[19], 0u - 1u);
    set32(c.r[17], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_00130E10:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 187u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E24u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00130E24u) [[unlikely]] return; }
L_00130E24:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00130E3C; }
    c.r[22].d[0] = ld8((c.r[29].w[0] + 187u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00130E50; } }
L_00130E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E44u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00130E44u) [[unlikely]] return; }
L_00130E44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00130E50; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_00130E50:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[18].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00130E9C; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 186u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E6Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00130E6Cu) [[unlikely]] return; }
L_00130E6C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00130E84; }
    c.r[22].d[0] = ld8((c.r[29].w[0] + 186u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00130E9C; } }
L_00130E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E8Cu);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00130E8Cu) [[unlikely]] return; }
L_00130E8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00130E9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00130E9C; } }
L_00130E9C:
    set32(c.r[2], c.r[22].w[0] << 8);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_00130EB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.r[3].w[0]);  if (t) { goto L_00130EB8; } }
L_00130EB0:
    c.r[3].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 2;
L_00130EB8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00130EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_00130EE0; } }
L_00130EC8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00130EE0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00130EE0; } }
    st32((c.r[21].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 1;
L_00130EE0:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_00130F08; }
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00130F04; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00130F04; } }
    set32(c.r[19], 0u - 103u);
    c.budget -= 1;
L_00130F04:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_00130F08:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F14u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00130F14u) [[unlikely]] return; }
L_00130F14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_00130F24; }
    set32(c.r[19], 0u - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_00130F24:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F30u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00130F30u) [[unlikely]] return; }
L_00130F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00130F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_00130F68; } }
L_00130F40:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_00130F6C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00130F68; } }
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00130F68; } }
    st32((c.r[21].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 1;
L_00130F68:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_00130F6C:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F78u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00130F78u) [[unlikely]] return; }
L_00130F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00130F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_00130FB0; } }
L_00130F88:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_00130FB4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00130FB0; } }
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00130FB0; } }
    st32((c.r[21].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 1;
L_00130FB0:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_00130FB4:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130FC0u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00130FC0u) [[unlikely]] return; }
L_00130FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00130FD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_00130FF8; } }
L_00130FD0:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  goto L_00130FFC; }
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00130FF8; } }
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00130FF8; } }
    st32((c.r[21].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 1;
L_00130FF8:
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_00130FFC:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 185u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131010u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131010u) [[unlikely]] return; }
L_00131010:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131028; }
    c.r[23].d[0] = ld8((c.r[29].w[0] + 185u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0013103C; } }
L_00131028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131030u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131030u) [[unlikely]] return; }
L_00131030:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0013103C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0013103C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_00131088; } }
    goto L_00131044;
L_00131040:
    c.r[17].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_00131044:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131058u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131058u) [[unlikely]] return; }
L_00131058:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131070; }
    c.r[23].d[0] = ld8((c.r[29].w[0] + 184u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00131088; } }
L_00131070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131078u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131078u) [[unlikely]] return; }
L_00131078:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131088; }
L_00131080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00131088; } }
L_00131088:
    set32(c.r[2], c.r[23].w[0] << 8);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_0013109C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001310A0; } }
L_0013109C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001310A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001310B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u - 1u);  if (t) { goto L_001310C8; } }
L_001310B0:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_001310CC; }
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001310C8; } }
    goto L_001310C4;
L_001310C0:
    c.budget -= 1;
L_001310C4:
    st32((c.r[21].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_001310C8:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_001310CC:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 183u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001310ECu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001310ECu) [[unlikely]] return; }
L_001310EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00131104; }
    c.r[30].d[0] = ld8((c.r[29].w[0] + 183u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00131118; } }
    goto L_00131104;
L_00131100:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00131104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013110Cu);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x0013110Cu) [[unlikely]] return; }
L_0013110C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131118; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00131118:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_00131164; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 182u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131134u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131134u) [[unlikely]] return; }
L_00131134:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0013114C; }
L_00131140:
    c.r[30].d[0] = ld8((c.r[29].w[0] + 182u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00131164; } }
L_0013114C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131154u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131154u) [[unlikely]] return; }
L_00131154:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131164; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00131164; } }
L_00131164:
    set32(c.r[2], c.r[30].w[0] << 8);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_00131178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013117C; } }
L_00131178:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0013117C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 128u)));  goto L_0013118C; }
    goto L_00131184;
L_00131180:
    set32(c.r[3], ld32((c.r[21].w[0] + 128u)));
    c.budget -= 1;
L_00131184:
    set32(c.r[19], 0u - 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 128u)));
    c.budget -= 2;
L_0013118C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 30u);
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 10;
L_001311B4:
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
L_001311F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  goto L_00131210; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_001312A8; } }
L_00131210:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_00131220; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_001312A8; } }
L_00131220:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_00131248; }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00131244; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_001312A8; } }
L_00131244:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_00131248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[6], c.r[16].w[0] + 128u);
    set32(c.r[8], c.r[2].w[0] + 46u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[8], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013129Cu); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_000C(c, 94u, depth + 1u); else { c.pc = 0x00131370u; return; } if (c.pc != 0x0013129Cu) [[unlikely]] return; }
L_0013129C:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 3;
L_001312A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001312C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 44u)));  goto L_001312E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00131318; } }
L_001312E0:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 128u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013130Cu); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_000C(c, 94u, depth + 1u); else { c.pc = 0x00131370u; return; } if (c.pc != 0x0013130Cu) [[unlikely]] return; }
L_0013130C:
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 3;
L_00131318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00131330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[11].d[0]);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131364u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 94u, depth + 1u); else { c.pc = 0x00131370u; return; } if (c.pc != 0x00131364u) [[unlikely]] return; }
L_00131364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00131370:
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
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 284u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 276u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[10].w[0]);
    c.budget -= 22;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[29].w[0] + 268u), c.r[11].w[0]);  if (t) { goto L_001313D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00131E50; } }
L_001313D0:
    set32(c.r[3], ld32((c.r[21].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001313F0u); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_000A(c, 482u, depth + 1u); else { c.pc = 0x0012BDF0u; return; } if (c.pc != 0x001313F0u) [[unlikely]] return; }
L_001313F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001313FC; } }
    set32(c.r[18], 0u - 1u);
    c.budget -= 1;
L_001313FC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  goto L_0013143C; }
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131414u); set32(c.r[6], c.r[29].w[0] + 372u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00131414u) [[unlikely]] return; }
L_00131414:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 372u)));  goto L_00131424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - 1u);  if (t) { goto L_00131438; } }
L_00131424:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x02010000u);
    c.r[2].d[0] = c.r[2].d[0] | 19280ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00131438; } }
    set32(c.r[18], 0u - 103u);
    c.budget -= 1;
L_00131438:
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_0013143C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 399u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131450u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131450u) [[unlikely]] return; }
L_00131450:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131468; }
    c.r[22].d[0] = ld8((c.r[29].w[0] + 399u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0013147C; } }
L_00131468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131470u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131470u) [[unlikely]] return; }
L_00131470:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0013147C; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0013147C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 264u), c.r[22].w[0]);  if (t) { goto L_001314C8; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 398u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131498u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131498u) [[unlikely]] return; }
L_00131498:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001314B0; }
    c.r[22].d[0] = ld8((c.r[29].w[0] + 398u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001314C8; } }
L_001314B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001314B8u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001314B8u) [[unlikely]] return; }
L_001314B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001314C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_001314C8; } }
L_001314C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[3], c.r[22].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001314E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_001314E4; } }
L_001314E0:
    st32((c.r[29].w[0] + 288u), 0u);
    c.budget -= 1;
L_001314E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  goto L_001314F4; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_001314F4:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 397u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131508u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131508u) [[unlikely]] return; }
L_00131508:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131520; }
    c.r[23].d[0] = ld8((c.r[29].w[0] + 397u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00131534; } }
L_00131520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131528u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131528u) [[unlikely]] return; }
L_00131528:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131534; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00131534:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_00131580; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 396u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131550u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131550u) [[unlikely]] return; }
L_00131550:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131568; }
    c.r[23].d[0] = ld8((c.r[29].w[0] + 396u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00131580; } }
L_00131568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131570u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131570u) [[unlikely]] return; }
L_00131570:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131580; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00131580; } }
L_00131580:
    set32(c.r[2], c.r[23].w[0] << 8);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);  if (t) { goto L_00131594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_00131598; } }
L_00131594:
    st32((c.r[29].w[0] + 292u), 0u);
    c.budget -= 1;
L_00131598:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  goto L_001315A8; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_001315A8:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 395u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001315BCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001315BCu) [[unlikely]] return; }
L_001315BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001315D4; }
    c.r[30].d[0] = ld8((c.r[29].w[0] + 395u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001315E8; } }
L_001315D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001315DCu);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001315DCu) [[unlikely]] return; }
L_001315DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001315E8; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001315E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_00131634; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 394u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131604u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131604u) [[unlikely]] return; }
L_00131604:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0013161C; }
    c.r[30].d[0] = ld8((c.r[29].w[0] + 394u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00131634; } }
L_0013161C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131624u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131624u) [[unlikely]] return; }
L_00131624:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131634; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00131634; } }
L_00131634:
    set32(c.r[2], c.r[30].w[0] << 8);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);  if (t) { goto L_00131648; } }
    goto L_00131640;
L_0013163C:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00131640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 296u), c.r[2].w[0]);  if (t) { goto L_0013164C; } }
L_00131648:
    st32((c.r[29].w[0] + 296u), 0u);
    c.budget -= 1;
L_0013164C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  goto L_0013165C; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_0013165C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 393u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131670u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131670u) [[unlikely]] return; }
L_00131670:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0013168C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 393u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_001316A0; } }
L_0013168C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131694u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131694u) [[unlikely]] return; }
L_00131694:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001316A0; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001316A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 240u)));  if (t) { goto L_001316F0; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001316BCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001316BCu) [[unlikely]] return; }
L_001316BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001316D8; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 392u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_001316F0; } }
L_001316D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001316E0u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001316E0u) [[unlikely]] return; }
L_001316E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001316F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001316F0; } }
L_001316F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);  if (t) { goto L_00131708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_0013170C; } }
L_00131708:
    st32((c.r[29].w[0] + 300u), 0u);
    c.budget -= 1;
L_0013170C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_0013171C; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_0013171C:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131728u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00131728u) [[unlikely]] return; }
L_00131728:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 304u)));  goto L_00131738; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[7], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 2;
L_00131738:
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[5], c.r[7].w[0] >> 16);
    c.r[2].d[0] = c.r[7].d[0] & 63488ull;
    c.r[3].d[0] = c.r[5].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] >> 11);
    st32((c.r[29].w[0] + 356u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] & 480ull;
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 5);
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[5].d[0] & 65024ull;
    st32((c.r[29].w[0] + 360u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 9);
    set32(c.r[3], c.r[2].w[0] + 1980u);
    c.r[2].d[0] = c.r[7].d[0] & 2016ull;
    st32((c.r[29].w[0] + 364u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 5);
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    c.budget -= 18;
L_00131780:
    c.r[2].d[0] = c.r[7].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131798u); set32(c.r[6], c.r[29].w[0] + 308u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00131798u) [[unlikely]] return; }
L_00131798:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_001317A8; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_001317A8:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001317B4u); set32(c.r[6], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x001317B4u) [[unlikely]] return; }
L_001317B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_001317C4; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_001317C4:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001317D0u); set32(c.r[6], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x001317D0u) [[unlikely]] return; }
L_001317D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  goto L_001317E0; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_001317E0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 391u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001317F4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001317F4u) [[unlikely]] return; }
L_001317F4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131810; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 391u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_00131824; } }
L_00131810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131818u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131818u) [[unlikely]] return; }
L_00131818:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131824; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00131824:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 224u)));  if (t) { goto L_00131874; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 390u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131840u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131840u) [[unlikely]] return; }
    goto L_00131840;
L_0013183C:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00131840:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0013185C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 390u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_00131874; } }
L_0013185C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131864u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131864u) [[unlikely]] return; }
L_00131864:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131874; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00131874; } }
L_00131874:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);  if (t) { goto L_0013188C; } }
    goto L_00131884;
L_00131880:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00131884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 320u), c.r[2].w[0]);  if (t) { goto L_00131890; } }
L_0013188C:
    st32((c.r[29].w[0] + 320u), 0u);
    c.budget -= 1;
L_00131890:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  goto L_001318A0; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_001318A0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 389u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001318B4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001318B4u) [[unlikely]] return; }
L_001318B4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001318D0; }
L_001318C0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 389u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_001318E4; } }
L_001318D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001318D8u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001318D8u) [[unlikely]] return; }
L_001318D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001318E4; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001318E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 208u)));  if (t) { goto L_00131934; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 388u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131900u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131900u) [[unlikely]] return; }
L_00131900:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0013191C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 388u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_00131934; } }
L_0013191C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131924u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131924u) [[unlikely]] return; }
L_00131924:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131934; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00131934; } }
L_00131934:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);  if (t) { goto L_0013194C; } }
    goto L_00131944;
L_00131940:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00131944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 324u), c.r[2].w[0]);  if (t) { goto L_00131950; } }
L_0013194C:
    st32((c.r[29].w[0] + 324u), 0u);
    c.budget -= 1;
L_00131950:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  goto L_00131960; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_00131960:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 387u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131974u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131974u) [[unlikely]] return; }
L_00131974:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131990; }
L_00131980:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 387u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_001319A4; } }
L_00131990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131998u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131998u) [[unlikely]] return; }
L_00131998:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001319A4; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_001319A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_001319F4; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 386u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001319C0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001319C0u) [[unlikely]] return; }
L_001319C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001319DC; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 386u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_001319F4; } }
L_001319DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001319E4u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001319E4u) [[unlikely]] return; }
L_001319E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001319F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001319F4; } }
L_001319F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);  if (t) { goto L_00131A0C; } }
    goto L_00131A04;
L_00131A00:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00131A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 328u), c.r[2].w[0]);  if (t) { goto L_00131A10; } }
L_00131A0C:
    st32((c.r[29].w[0] + 328u), 0u);
    c.budget -= 1;
L_00131A10:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  goto L_00131A20; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_00131A20:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 385u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131A34u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131A34u) [[unlikely]] return; }
L_00131A34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131A50; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 385u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00131A64; } }
L_00131A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131A58u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131A58u) [[unlikely]] return; }
L_00131A58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131A64; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00131A64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_00131AB4; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131A80u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131A80u) [[unlikely]] return; }
L_00131A80:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131A9C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 384u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_00131AB4; } }
L_00131A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131AA4u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131AA4u) [[unlikely]] return; }
L_00131AA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131AB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00131AB4; } }
L_00131AB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);  if (t) { goto L_00131ACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 332u), c.r[2].w[0]);  if (t) { goto L_00131AD0; } }
L_00131ACC:
    st32((c.r[29].w[0] + 332u), 0u);
    c.budget -= 1;
L_00131AD0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 8u)));  goto L_00131AE0; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_00131AE0:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 383u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131AF4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131AF4u) [[unlikely]] return; }
L_00131AF4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131B10; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 383u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_00131B24; } }
L_00131B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B18u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131B18u) [[unlikely]] return; }
L_00131B18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131B24; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00131B24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 160u)));  if (t) { goto L_00131B74; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 382u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B40u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131B40u) [[unlikely]] return; }
L_00131B40:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00131B5C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 382u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_00131B74; } }
L_00131B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B64u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00131B64u) [[unlikely]] return; }
L_00131B64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00131B74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00131B74; } }
L_00131B74:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);  if (t) { goto L_00131B8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_00131B90; } }
L_00131B8C:
    st32((c.r[29].w[0] + 336u), 0u);
    c.budget -= 1;
L_00131B90:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_00131BA0; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_00131BA0:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131BACu); set32(c.r[6], c.r[29].w[0] + 340u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00131BACu) [[unlikely]] return; }
L_00131BAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_00131BBC; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 2;
L_00131BBC:
    set32(c.r[4], c.r[21].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131BC8u); set32(c.r[6], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00131BC8u) [[unlikely]] return; }
L_00131BC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 320u)));  goto L_00131BD8; }
    set32(c.r[18], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 2;
L_00131BD8:
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[17].d[0] + c.r[2].d[0];  if (t) { goto L_00131C50; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00131C50; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00131C10; }
    set32(c.r[2], c.r[19].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00131C10:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_00131C48; }
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131C44; } }
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131C38u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131C38u) [[unlikely]] return; }
L_00131C38:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00131C44; } }
    set32(c.r[18], 0u - 1u);
    c.budget -= 1;
L_00131C44:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_00131C48:
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[17].d[0] = c.r[17].d[0] - c.r[2].d[0];
    c.budget -= 2;
L_00131C50:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = ld32((c.r[29].w[0] + 324u));  goto L_00131CF0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131CEC; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00131C78; }
L_00131C78:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 324u)));  goto L_00131CA0; }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131C90u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 482u, depth + 1u); else { c.pc = 0x0012BDF0u; return; } if (c.pc != 0x00131C90u) [[unlikely]] return; }
L_00131C90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], 0u - 1u);  goto L_00131C9C; }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00131C9C:
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 1;
L_00131CA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 324u)));  goto L_00131CD8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131CD4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131CC8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131CC8u) [[unlikely]] return; }
L_00131CC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00131CD4; } }
    set32(c.r[18], 0u - 1u);
    c.budget -= 1;
L_00131CD4:
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 1;
L_00131CD8:
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[17].d[0] + c.r[2].d[0];  if (t) { goto L_00131CF4; } }
L_00131CEC:
    c.r[2].d[0] = ld32((c.r[29].w[0] + 324u));
    c.budget -= 1;
L_00131CF0:
    c.r[17].d[0] = c.r[17].d[0] + c.r[2].d[0];
    c.budget -= 1;
L_00131CF4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00131D84; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131D84; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 400u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00131D28; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 3;
L_00131D28:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 328u)));  goto L_00131D50; }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131D40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 482u, depth + 1u); else { c.pc = 0x0012BDF0u; return; } if (c.pc != 0x00131D40u) [[unlikely]] return; }
L_00131D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131D4C; } }
    set32(c.r[18], 0u - 1u);
    c.budget -= 1;
L_00131D4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 1;
L_00131D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131D84; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131D84; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131D78u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00131D78u) [[unlikely]] return; }
L_00131D78:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00131D84; } }
    set32(c.r[18], 0u - 1u);
    c.budget -= 1;
L_00131D84:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00131E30; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00131E30; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[6], c.r[29].w[0] + 344u);
    set32(c.r[5], c.r[20].w[0] + 56u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    st32((c.r[20].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 340u)));
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 31;
L_00131E10:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131E10u | kUnwind; return; } goto L_00131E10; } }
L_00131E30:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00131E50; }
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 1;
L_00131E3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131E4C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 376u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00131E4C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00131E50:
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
L_00131E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00131E98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 102u);  if (t) { goto L_00131EC0; } }
L_00131E98:
    set32(c.r[2], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00131EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131EACu);  if (depth < kMaxDepth) unit_000C(c, 31u, depth + 1u); else { c.pc = 0x00130580u; return; } if (c.pc != 0x00131EACu) [[unlikely]] return; }
L_00131EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131EB4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x00131EB4u) [[unlikely]] return; }
L_00131EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131EBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00131EBCu) [[unlikely]] return; }
L_00131EBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00131EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00131ED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131EF4u); set32(c.r[5], c.r[5].w[0] - 6818u);  if (depth < kMaxDepth) unit_000A(c, 495u, depth + 1u); else { c.pc = 0x0012BFD0u; return; } if (c.pc != 0x00131EF4u) [[unlikely]] return; }
L_00131EF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0])));  goto L_00131F08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00131F2C; } }
L_00131F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F10u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00131F10u) [[unlikely]] return; }
L_00131F10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F24u); set32(c.r[6], 0u + 176u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00131F24u) [[unlikely]] return; }
L_00131F24:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00131F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00131F50:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  goto L_00131F60; }
L_00131F60:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.budget -= 8;
L_00131F80:
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 6912u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 32u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (t) { goto L_00131FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00132570; } }
L_00131FAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 192u), c.r[30].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131FBCu); set32(c.r[5], c.r[5].w[0] - 6818u);  if (depth < kMaxDepth) unit_000A(c, 495u, depth + 1u); else { c.pc = 0x0012BFD0u; return; } if (c.pc != 0x00131FBCu) [[unlikely]] return; }
L_00131FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_00131FCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00132570; } }
L_00131FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131FD4u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000C(c, 201u, depth + 1u); else { c.pc = 0x001325A0u; return; } if (c.pc != 0x00131FD4u) [[unlikely]] return; }
L_00131FD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 200u)));  goto L_00131FE8; }
    set32(c.r[21], 0u - 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 2;
L_00131FE8:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131FF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 482u, depth + 1u); else { c.pc = 0x0012BDF0u; return; } if (c.pc != 0x00131FF8u) [[unlikely]] return; }
L_00131FF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 200u)));  goto L_00132008; }
L_00132000:
    set32(c.r[21], 0u - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 2;
L_00132008:
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132014u); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00132014u) [[unlikely]] return; }
L_00132014:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], ld32((c.r[29].w[0] + 200u)));  goto L_00132024; }
    set32(c.r[21], 0u - 1u);
    set32(c.r[20], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 2;
L_00132024:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 383u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132038u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00132038u) [[unlikely]] return; }
L_00132038:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0013203C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00132050; }
    goto L_00132044;
L_00132040:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00132044:
    c.r[19].d[0] = ld8((c.r[29].w[0] + 383u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00132064; } }
L_00132050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132058u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00132058u) [[unlikely]] return; }
L_00132058:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00132064; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_00132064:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 188u), c.r[19].w[0]);  if (t) { goto L_001320B0; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 382u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132080u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00132080u) [[unlikely]] return; }
L_00132080:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00132098; }
    c.r[19].d[0] = ld8((c.r[29].w[0] + 382u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001320B0; } }
L_00132098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001320A0u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001320A0u) [[unlikely]] return; }
L_001320A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001320B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_001320B0; } }
L_001320B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[3], c.r[19].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001320C8; } }
L_001320C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001320CC; } }
L_001320C8:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001320CC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 200u)));  goto L_001320DC; }
    set32(c.r[21], 0u - 1u);
    set32(c.r[19], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 2;
L_001320DC:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 381u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001320F0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001320F0u) [[unlikely]] return; }
L_001320F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00132108; }
    c.r[18].d[0] = ld8((c.r[29].w[0] + 381u));
    c.budget -= 1;
L_00132100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0013211C; } }
L_00132108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132110u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00132110u) [[unlikely]] return; }
L_00132110:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0013211C; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0013211C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 184u), c.r[18].w[0]);  if (t) { goto L_00132168; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 380u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132138u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00132138u) [[unlikely]] return; }
L_00132138:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00132150; }
    goto L_00132144;
L_00132140:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00132144:
    c.r[18].d[0] = ld8((c.r[29].w[0] + 380u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00132168; } }
L_00132150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132158u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00132158u) [[unlikely]] return; }
L_00132158:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00132168; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00132168; } }
L_00132168:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[3], c.r[18].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00132180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00132184; } }
L_00132180:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00132184:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 200u)));  goto L_00132194; }
    set32(c.r[21], 0u - 1u);
    set32(c.r[18], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 2;
L_00132194:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 379u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001321A8u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001321A8u) [[unlikely]] return; }
L_001321A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001321C0; }
    c.r[17].d[0] = ld8((c.r[29].w[0] + 379u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001321D4; } }
L_001321C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001321C8u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001321C8u) [[unlikely]] return; }
L_001321C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001321D4; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_001321D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 180u), c.r[17].w[0]);  if (t) { goto L_00132220; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 378u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001321F0u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001321F0u) [[unlikely]] return; }
L_001321F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00132208; }
    c.r[17].d[0] = ld8((c.r[29].w[0] + 378u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00132220; } }
L_00132208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132210u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00132210u) [[unlikely]] return; }
L_00132210:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00132220; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_00132220; } }
L_00132220:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[3], c.r[17].w[0] << 8);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00132238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 204u), c.r[2].w[0]);  if (t) { goto L_0013223C; } }
L_00132238:
    st32((c.r[29].w[0] + 204u), 0u);
    c.budget -= 1;
L_0013223C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 200u)));  goto L_0013224C; }
    set32(c.r[21], 0u - 1u);
    set32(c.r[17], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 2;
L_0013224C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 377u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132260u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00132260u) [[unlikely]] return; }
L_00132260:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00132278; }
    c.r[22].d[0] = ld8((c.r[29].w[0] + 377u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0013228C; } }
L_00132278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132280u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x00132280u) [[unlikely]] return; }
L_00132280:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0013228C; }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0013228C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[18].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001322D8; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 376u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001322A8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001322A8u) [[unlikely]] return; }
L_001322A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001322C0; }
    c.r[22].d[0] = ld8((c.r[29].w[0] + 376u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001322D8; } }
L_001322C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001322C8u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001322C8u) [[unlikely]] return; }
L_001322C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001322D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_001322D8; } }
L_001322D8:
    set32(c.r[2], c.r[22].w[0] << 8);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_001322EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001322F0; } }
L_001322EC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001322F0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 204u)));  goto L_00132300; }
    set32(c.r[21], 0u - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 2;
L_00132300:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[21], 0u - 103u);  goto L_0013231C; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_00132318; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 200u)));  goto L_00132320; }
L_00132318:
    set32(c.r[21], 0u - 103u);
    c.budget -= 1;
L_0013231C:
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_00132320:
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013232Cu); set32(c.r[6], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x0013232Cu) [[unlikely]] return; }
L_0013232C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 200u)));  goto L_0013233C; }
    set32(c.r[21], 0u - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 2;
L_0013233C:
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132348u); set32(c.r[6], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_000C(c, 210u, depth + 1u); else { c.pc = 0x00132750u; return; } if (c.pc != 0x00132348u) [[unlikely]] return; }
L_00132348:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 200u)));  goto L_00132358; }
    set32(c.r[21], 0u - 1u);
    set32(c.r[18], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 2;
L_00132358:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 375u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013236Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x0013236Cu) [[unlikely]] return; }
L_0013236C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00132384; }
    c.r[23].d[0] = ld8((c.r[29].w[0] + 375u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00132398; } }
L_00132384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013238Cu);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x0013238Cu) [[unlikely]] return; }
L_0013238C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00132398; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00132398:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_001323E4; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 374u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001323B4u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001323B4u) [[unlikely]] return; }
L_001323B4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001323CC; }
    c.r[23].d[0] = ld8((c.r[29].w[0] + 374u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001323E4; } }
L_001323CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001323D4u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001323D4u) [[unlikely]] return; }
L_001323D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001323E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_001323E4; } }
L_001323E4:
    set32(c.r[2], c.r[23].w[0] << 8);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_001323F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_001323FC; } }
L_001323F8:
    st32((c.r[29].w[0] + 208u), 0u);
    c.budget -= 1;
L_001323FC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 236u)));  goto L_0013240C; }
    set32(c.r[21], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 2;
L_0013240C:
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0013242C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0013242C; } }
    set32(c.r[21], 0u - 103u);
    c.budget -= 1;
L_0013242C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);  goto L_00132444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013243Cu); set32(c.r[4], ld32((c.r[29].w[0] + 200u)));  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x0013243Cu) [[unlikely]] return; }
L_0013243C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00132570; } }
L_00132444:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    set32(c.r[4], 0u + 176u);
    st32((c.r[29].w[0] + 228u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 324u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132460u); st32((c.r[29].w[0] + 328u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00132460u) [[unlikely]] return; }
L_00132460:
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], 0u + 10u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 196u));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 204u));
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[2].w[0] + 12u), c.f[1]);
    st32((c.r[2].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 28;
L_001324D0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001324D0u | kUnwind; return; } goto L_001324D0; } }
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[6], c.r[16].w[0] + 128u);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 336u));
    c.r[3].d[0] = ld64((c.r[29].w[0] + 344u));
    c.r[2].d[0] = ld64((c.r[29].w[0] + 352u));
    st64((c.r[16].w[0] + 144u), c.r[4].d[0]);
    st64((c.r[16].w[0] + 152u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 160u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 168u), c.r[2].w[0]);  if (t) { goto L_0013256C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132560u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_000C(c, 94u, depth + 1u); else { c.pc = 0x00131370u; return; } if (c.pc != 0x00132560u) [[unlikely]] return; }
L_00132560:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
L_0013256C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00132570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_001325A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[6], 0u + 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001325E4u); c.r[17].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_000A(c, 482u, depth + 1u); else { c.pc = 0x0012BDF0u; return; } if (c.pc != 0x001325E4u) [[unlikely]] return; }
L_001325E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  goto L_001325F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00132718; } }
L_001325F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001325FCu);  if (depth < kMaxDepth) unit_000A(c, 483u, depth + 1u); else { c.pc = 0x0012BE20u; return; } if (c.pc != 0x001325FCu) [[unlikely]] return; }
L_001325FC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = 0ull | 65535ull;
    c.r[1].d[0] = c.r[19].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0])));  goto L_00132618; }
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 2;
L_00132618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132620u); set32(c.r[4], 0u + 1028u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00132620u) [[unlikely]] return; }
L_00132620:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[18], 0u + 4u);  goto L_001326FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00132718; } }
L_00132634:
    c.r[1].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00132644; } }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00132644:
    set32(c.r[23], c.r[19].w[0] - c.r[18].w[0]);
    set32(c.r[16], c.r[19].w[0] - c.r[23].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1029ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0013265C; } }
    set32(c.r[16], 0u + 1028u);
    c.budget -= 1;
L_0013265C:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[5].d[0] = c.r[23].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132670u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 482u, depth + 1u); else { c.pc = 0x0012BDF0u; return; } if (c.pc != 0x00132670u) [[unlikely]] return; }
L_00132670:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0013270C; }
    set32(c.r[7], ld32((c.r[21].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013268Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x0013268Cu) [[unlikely]] return; }
L_0013268C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00132708; } }
    set32(c.r[8], c.r[16].w[0] - 3u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 75u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 80u);  if (t) { goto L_001326E8; } }
L_001326AC:
    set32(c.r[7], c.r[20].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { c.r[2].d[0] = c.r[8].d[0] + 0ull;  goto L_001326EC; }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001326E8; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001326E8; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001326E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[23].w[0] + c.r[8].w[0]);  if (t) { goto L_001326F4; } }
L_001326E8:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_001326EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[8], c.r[8].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001326ACu | kUnwind; return; } goto L_001326AC; } }
L_001326F4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00132708; } }
L_001326FC:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1024u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132634u | kUnwind; return; } goto L_00132634; }
L_00132708:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0013270C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132714u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00132714u) [[unlikely]] return; }
L_00132714:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_00132718:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00132750:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 95u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132784u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x00132784u) [[unlikely]] return; }
L_00132784:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0013279C; }
    c.r[16].d[0] = ld8((c.r[29].w[0] + 95u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001327B0; } }
L_0013279C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001327A4u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001327A4u) [[unlikely]] return; }
L_001327A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001327B0; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_001327B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001327FC; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 94u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001327CCu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x001327CCu) [[unlikely]] return; }
L_001327CC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001327E4; }
    c.r[16].d[0] = ld8((c.r[29].w[0] + 94u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001327FC; } }
L_001327E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001327ECu);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x001327ECu) [[unlikely]] return; }
L_001327EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001327FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001327FC; } }
L_001327FC:
    set32(c.r[3], c.r[16].w[0] << 8);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_0013284C; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 93u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013281Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x0013281Cu) [[unlikely]] return; }
L_0013281C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00132834; }
    c.r[16].d[0] = ld8((c.r[29].w[0] + 93u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013284C; } }
L_00132834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013283Cu);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x0013283Cu) [[unlikely]] return; }
L_0013283C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0013284C; }
    goto L_00132844;
L_00132840:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00132844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0013284C; } }
L_0013284C:
    set32(c.r[3], c.r[16].w[0] << 16);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_0013289C; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013286Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012BE40u; return; } if (c.pc != 0x0013286Cu) [[unlikely]] return; }
L_0013286C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00132884; }
    c.r[16].d[0] = ld8((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013289C; } }
    goto L_00132884;
L_00132880:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00132884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013288Cu);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012BEA0u; return; } if (c.pc != 0x0013288Cu) [[unlikely]] return; }
L_0013288C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0013289C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0013289C; } }
L_0013289C:
    set32(c.r[3], c.r[16].w[0] << 24);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);  if (t) { goto L_001328B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_001328B4; } }
L_001328B0:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_001328B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 3;
L_001328C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001328D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_001328F8; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001328F8u); st32((c.r[4].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x001328F8u) [[unlikely]] return; }
L_001328F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00132900:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
    c.pc = 0x00132904u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00132910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132928u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0012(c, 390u, depth + 1u); else { c.pc = 0x0014B160u; return; } if (c.pc != 0x00132928u) [[unlikely]] return; }
L_00132928:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_00132948; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132940u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x00132940u) [[unlikely]] return; }
L_00132940:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_00132948:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00132970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001329AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132994u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0012(c, 468u, depth + 1u); else { c.pc = 0x0014B8D0u; return; } if (c.pc != 0x00132994u) [[unlikely]] return; }
L_00132994:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001329B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001329ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001329ACu) [[unlikely]] return; }
L_001329AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001329B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001329D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001329ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 471u, depth + 1u); else { c.pc = 0x0014B930u; return; } if (c.pc != 0x001329ECu) [[unlikely]] return; }
L_001329EC:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00132A10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_00132A20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00132A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132A4Cu);  if (depth < kMaxDepth) unit_0010(c, 113u, depth + 1u); else { c.pc = 0x00140D70u; return; } if (c.pc != 0x00132A4Cu) [[unlikely]] return; }
L_00132A4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132A58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x00132A58u) [[unlikely]] return; }
L_00132A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132A60u);  if (depth < kMaxDepth) unit_0010(c, 113u, depth + 1u); else { c.pc = 0x00140D70u; return; } if (c.pc != 0x00132A60u) [[unlikely]] return; }
L_00132A60:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132A6Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 158u, depth + 1u); else { c.pc = 0x00141210u; return; } if (c.pc != 0x00132A6Cu) [[unlikely]] return; }
L_00132A6C:
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00132A90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00132B30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00132ADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132AD0u);  if (depth < kMaxDepth) unit_0010(c, 113u, depth + 1u); else { c.pc = 0x00140D70u; return; } if (c.pc != 0x00132AD0u) [[unlikely]] return; }
L_00132AD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132ADCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 139u, depth + 1u); else { c.pc = 0x00141070u; return; } if (c.pc != 0x00132ADCu) [[unlikely]] return; }
L_00132ADC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00132B1C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00132B18; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00132B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B18u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00132B18u) [[unlikely]] return; }
L_00132B18:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00132B1C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00132B34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00132B30u) [[unlikely]] return; }
L_00132B30:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00132B34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00132B50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B70u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00132B70u) [[unlikely]] return; }
L_00132B70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00132B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00132B84u) [[unlikely]] return; }
L_00132B84:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00132B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B98u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00132B98u) [[unlikely]] return; }
L_00132B98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 4u)));  goto L_00132BF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132BD0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00132BD0u) [[unlikely]] return; }
L_00132BD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00132BEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132BE8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00132BE8u) [[unlikely]] return; }
L_00132BE8:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00132BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00132C18; } }
L_00132BF4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132C00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00132C00u) [[unlikely]] return; }
L_00132C00:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132C14u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00132C14u) [[unlikely]] return; }
L_00132C14:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_00132C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00132C5C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132C44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132C44u) [[unlikely]] return; }
L_00132C44:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132C58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132C58u) [[unlikely]] return; }
L_00132C58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00132C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00132C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00132CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132CA0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00132CA0u) [[unlikely]] return; }
L_00132CA0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00132CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132CB8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00132CB8u) [[unlikely]] return; }
L_00132CB8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00132CBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 25680u);
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00132D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00132D34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132D18u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00132D18u) [[unlikely]] return; }
L_00132D18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00132D38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132D30u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00132D30u) [[unlikely]] return; }
L_00132D30:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00132D34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00132D38:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00132D50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] <= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00132E54; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132D7Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 63u, depth + 1u); else { c.pc = 0x00134860u; return; } if (c.pc != 0x00132D7Cu) [[unlikely]] return; }
L_00132D7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[28].w[0] - 31224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132D9Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00132D9Cu) [[unlikely]] return; }
L_00132D9C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132DA8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 55u, depth + 1u); else { c.pc = 0x00134700u; return; } if (c.pc != 0x00132DA8u) [[unlikely]] return; }
L_00132DA8:
    set32(c.r[5], c.r[16].w[0] << 1);
    set32(c.r[16], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31232u)));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31228u));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 31226u));
    st32((c.r[29].w[0] + 72u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] <= 0; st16((c.r[29].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00132DE4; } }
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132DDCu); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_000C(c, 281u, depth + 1u); else { c.pc = 0x00132FC0u; return; } if (c.pc != 0x00132DDCu) [[unlikely]] return; }
L_00132DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00132DF8; } }
L_00132DE4:
    set32(c.r[4], c.r[17].w[0] + 40u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132DF4u); set32(c.r[6], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_000C(c, 281u, depth + 1u); else { c.pc = 0x00132FC0u; return; } if (c.pc != 0x00132DF4u) [[unlikely]] return; }
L_00132DF4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00132DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 40u);  if (t) { goto L_00132E1C; } }
L_00132E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132E08u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00132E08u) [[unlikely]] return; }
L_00132E08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132E14u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_000C(c, 279u, depth + 1u); else { c.pc = 0x00132F90u; return; } if (c.pc != 0x00132E14u) [[unlikely]] return; }
L_00132E14:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 2;
L_00132E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132E24u);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132F80u; return; } if (c.pc != 0x00132E24u) [[unlikely]] return; }
L_00132E24:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132E00u | kUnwind; return; } goto L_00132E00; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132E40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 277u, depth + 1u); else { c.pc = 0x00132F60u; return; } if (c.pc != 0x00132E40u) [[unlikely]] return; }
    goto L_00132E40;
L_00132E3C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00132E40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00132E58; }
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132E54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 273u, depth + 1u); else { c.pc = 0x00132E70u; return; } if (c.pc != 0x00132E54u) [[unlikely]] return; }
L_00132E54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00132E58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00132E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132EA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132EA4u) [[unlikely]] return; }
L_00132EA4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_00132ED4; } }
L_00132EB4:
    set32(c.r[5], c.r[9].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[9].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_00132ED4; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[9].d[0] = c.r[9].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_00132ED4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132EB4u | kUnwind; return; } goto L_00132EB4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    mmi::divu(c, 0, c.r[9].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00132F10; } }
L_00132EFC:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[4].d[0];  if (t) { goto L_00132F10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00132F10; } }
L_00132F10:
    set32(c.r[6], c.r[10].w[0] << 3);
    set32(c.r[5], c.r[7].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132EFCu | kUnwind; return; } goto L_00132EFC; }
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00132F60:
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00130000u < 16384u) { entry = entries_000C[(t - 0x00130000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00132F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00132F90:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00132FB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00132FC0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_000D(c, 73u, depth); }
L_00132FD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132FF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00133590u; return; } if (c.pc != 0x00132FF8u) [[unlikely]] return; }
L_00132FF8:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133004u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000D(c, 55u, depth + 1u); else { c.pc = 0x00134700u; return; } if (c.pc != 0x00133004u) [[unlikely]] return; }
L_00133004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00133080; } }
L_0013300C:
    set32(c.r[3], c.r[16].w[0] << 5);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133024u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133024u) [[unlikely]] return; }
L_00133024:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133034u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00133034u) [[unlikely]] return; }
L_00133034:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_00133070; }
L_0013303C:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00133040:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133050u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 301u, depth + 1u); else { c.pc = 0x00133170u; return; } if (c.pc != 0x00133050u) [[unlikely]] return; }
L_00133050:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013305Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0013305Cu) [[unlikely]] return; }
L_0013305C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133068u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00133068u) [[unlikely]] return; }
L_00133068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00133080; } }
L_00133070:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013307Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 295u, depth + 1u); else { c.pc = 0x001330C0u; return; } if (c.pc != 0x0013307Cu) [[unlikely]] return; }
L_0013307C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00133080:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013300Cu | kUnwind; return; } goto L_0013300C; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001330C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 26u)));
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[16].w[0] + 4u);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[16].w[0] + 4u)));  goto L_0013312C; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133108u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00133108u) [[unlikely]] return; }
L_00133108:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[17].w[0] + 4u);  goto L_00133124; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133120u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00133120u) [[unlikely]] return; }
L_00133120:
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00133124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00133150; } }
L_0013312C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133138u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00133138u) [[unlikely]] return; }
L_00133138:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00133140:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013314Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0013314Cu) [[unlikely]] return; }
L_0013314C:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_00133150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00133170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013319Cu); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0013319Cu) [[unlikely]] return; }
L_0013319C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 20u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 12;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_001331F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001331D4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001331D4u) [[unlikely]] return; }
L_001331D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] + 4u);  goto L_001331F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001331ECu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001331ECu) [[unlikely]] return; }
L_001331EC:
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_001331F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0013321C; } }
L_001331F8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133204u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00133204u) [[unlikely]] return; }
L_00133204:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133218u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00133218u) [[unlikely]] return; }
L_00133218:
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0013321C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133240u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133240u) [[unlikely]] return; }
L_00133240:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00133260:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133288u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132F80u; return; } if (c.pc != 0x00133288u) [[unlikely]] return; }
L_00133288:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 36u);  goto L_00133298; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00133344; } }
L_00133298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001332A0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 345u, depth + 1u); else { c.pc = 0x00133550u; return; } if (c.pc != 0x001332A0u) [[unlikely]] return; }
L_001332A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001332ACu); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132F80u; return; } if (c.pc != 0x001332ACu) [[unlikely]] return; }
L_001332AC:
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 40u);  if (t) { goto L_00133328; } }
L_001332BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001332C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x001332C4u) [[unlikely]] return; }
L_001332C4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_00133318; }
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001332DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x001332DCu) [[unlikely]] return; }
L_001332DC:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001332ECu); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_000C(c, 277u, depth + 1u); else { c.pc = 0x00132F60u; return; } if (c.pc != 0x001332ECu) [[unlikely]] return; }
L_001332EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001332F8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001332F8u) [[unlikely]] return; }
L_001332F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00133314; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013330Cu); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x0013330Cu) [[unlikely]] return; }
L_0013330C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_00133344; } }
L_00133314:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00133318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133320u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000C(c, 343u, depth + 1u); else { c.pc = 0x00133520u; return; } if (c.pc != 0x00133320u) [[unlikely]] return; }
L_00133320:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 2;
L_00133328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133330u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x00133330u) [[unlikely]] return; }
L_00133330:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001332BCu | kUnwind; return; } goto L_001332BC; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00133344:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (t) { goto L_001334F8; } }
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133358u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 345u, depth + 1u); else { c.pc = 0x00133550u; return; } if (c.pc != 0x00133358u) [[unlikely]] return; }
L_00133358:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133364u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132F80u; return; } if (c.pc != 0x00133364u) [[unlikely]] return; }
L_00133364:
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 40u);  if (t) { goto L_001333CC; } }
L_00133374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013337Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x0013337Cu) [[unlikely]] return; }
L_0013337C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001333BC; }
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133394u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00133394u) [[unlikely]] return; }
L_00133394:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001333A4u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_000C(c, 277u, depth + 1u); else { c.pc = 0x00132F60u; return; } if (c.pc != 0x001333A4u) [[unlikely]] return; }
L_001333A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001333B0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001333B0u) [[unlikely]] return; }
L_001333B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 40u);  goto L_001333E8; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001333BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001333C4u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000C(c, 343u, depth + 1u); else { c.pc = 0x00133520u; return; } if (c.pc != 0x001333C4u) [[unlikely]] return; }
L_001333C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 2;
L_001333CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001333D4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x001333D4u) [[unlikely]] return; }
L_001333D4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133374u | kUnwind; return; } goto L_00133374; }
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 1;
L_001333E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001333F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x001333F0u) [[unlikely]] return; }
L_001333F0:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 92u)));  goto L_001334BC; }
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013340Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 343u, depth + 1u); else { c.pc = 0x00133520u; return; } if (c.pc != 0x0013340Cu) [[unlikely]] return; }
L_0013340C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00133468; } }
L_00133414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013341Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x0013341Cu) [[unlikely]] return; }
L_0013341C:
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_0013345C; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133438u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00133438u) [[unlikely]] return; }
L_00133438:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133448u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00133448u) [[unlikely]] return; }
L_00133448:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133454u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 279u, depth + 1u); else { c.pc = 0x00132F90u; return; } if (c.pc != 0x00133454u) [[unlikely]] return; }
L_00133454:
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0013345C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133464u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_000C(c, 343u, depth + 1u); else { c.pc = 0x00133520u; return; } if (c.pc != 0x00133464u) [[unlikely]] return; }
L_00133464:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00133468:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133474u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00133474u) [[unlikely]] return; }
L_00133474:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[16].w[0] + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133414u | kUnwind; return; } goto L_00133414; }
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133490u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00133490u) [[unlikely]] return; }
L_00133490:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001334A4u); c.r[17].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x001334A4u) [[unlikely]] return; }
L_001334A4:
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001334B4u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x001334B4u) [[unlikely]] return; }
L_001334B4:
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 2;
L_001334BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001334D8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001334D8u) [[unlikely]] return; }
L_001334D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 92u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001334F8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x001334F8u) [[unlikely]] return; }
L_001334F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00133520:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00133534; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00133534:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133540:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00133550:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_0013357C; } }
L_0013355C:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_0013357C; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_0013357C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013355Cu | kUnwind; return; } goto L_0013355C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001335B0u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_000D(c, 76u, depth + 1u); else { c.pc = 0x00134AA0u; return; } if (c.pc != 0x001335B0u) [[unlikely]] return; }
L_001335B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001335C0u); st32((c.r[17].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_000C(c, 260u, depth + 1u); else { c.pc = 0x00132D50u; return; } if (c.pc != 0x001335C0u) [[unlikely]] return; }
L_001335C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001335E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001335F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x001335F4u) [[unlikely]] return; }
L_001335F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29084u)));  goto L_00133604; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00133718; } }
L_00133604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00133640; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013361Cu); set32(c.r[4], c.r[4].w[0] + 5856u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x0013361Cu) [[unlikely]] return; }
L_0013361C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5856u);
    set32(c.r[5], c.r[5].w[0] + 10896u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133638u); set32(c.r[6], c.r[6].w[0] + 5840u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x00133638u) [[unlikely]] return; }
L_00133638:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0013363C:
    st8((c.r[28].w[0] - 29084u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00133640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], 0u + 512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 6800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133658u); st16((c.r[2].w[0] + 5882u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00133658u) [[unlikely]] return; }
L_00133658:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 5860u);
    set32(c.r[4], ld32((c.r[2].w[0] + 5876u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_001336A4; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_001336A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013368Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013368Cu) [[unlikely]] return; }
L_0013368C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 5860u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 5876u), c.r[3].w[0]);  if (t) { goto L_001336A4; } }
L_001336A0:
    set32(c.r[17], ld32((c.r[2].w[0] + 5860u)));
    c.budget -= 1;
L_001336A4:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001336F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 5876u)));
    set32(c.r[3], c.r[3].w[0] + 5860u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001336D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001336D4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x001336D4u) [[unlikely]] return; }
L_001336D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 5880u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001336E4u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x001336E4u) [[unlikely]] return; }
L_001336E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 5876u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 5860u), c.r[4].w[0]);
    c.budget -= 5;
L_001336F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 5876u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013370Cu); set32(c.r[5], c.r[5].w[0] - 6800u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x0013370Cu) [[unlikely]] return; }
L_0013370C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 5856u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_00133718:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00133730:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133758u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132F80u; return; } if (c.pc != 0x00133758u) [[unlikely]] return; }
L_00133758:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 36u);  goto L_00133768; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00133814; } }
L_00133768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133770u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 345u, depth + 1u); else { c.pc = 0x00133550u; return; } if (c.pc != 0x00133770u) [[unlikely]] return; }
L_00133770:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013377Cu); set32(c.r[4], c.r[19].w[0] + 40u);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132F80u; return; } if (c.pc != 0x0013377Cu) [[unlikely]] return; }
L_0013377C:
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 40u);  if (t) { goto L_001337F8; } }
L_0013378C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133794u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x00133794u) [[unlikely]] return; }
L_00133794:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001337E8; }
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001337ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x001337ACu) [[unlikely]] return; }
L_001337AC:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001337BCu); set32(c.r[4], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_000C(c, 277u, depth + 1u); else { c.pc = 0x00132F60u; return; } if (c.pc != 0x001337BCu) [[unlikely]] return; }
L_001337BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001337C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x001337C8u) [[unlikely]] return; }
L_001337C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001337E4; } }
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001337DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x001337DCu) [[unlikely]] return; }
L_001337DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_00133814; } }
L_001337E4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001337E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001337F0u); set32(c.r[4], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_000C(c, 343u, depth + 1u); else { c.pc = 0x00133520u; return; } if (c.pc != 0x001337F0u) [[unlikely]] return; }
L_001337F0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 2;
L_001337F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133800u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x00133800u) [[unlikely]] return; }
L_00133800:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[19].w[0] + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013378Cu | kUnwind; return; } goto L_0013378C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00133814:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00133830:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.budget -= 3;
L_0013383C:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 1;
L_00133840:
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00133898; } }
L_00133860:
    set32(c.r[16], c.r[17].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133878u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133878u) [[unlikely]] return; }
L_00133878:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00133898; }
L_00133880:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[19].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00133894; }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);  if (t) { goto L_001339BC; } }
L_00133894:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00133898:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133860u | kUnwind; return; } goto L_00133860; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29088u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001338E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001338C4u); set32(c.r[4], c.r[4].w[0] + 5808u);  if (depth < kMaxDepth) unit_000C(c, 254u, depth + 1u); else { c.pc = 0x00132C80u; return; } if (c.pc != 0x001338C4u) [[unlikely]] return; }
L_001338C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5808u);
    set32(c.r[5], c.r[5].w[0] + 10896u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001338E0u); set32(c.r[6], c.r[6].w[0] + 5792u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x001338E0u) [[unlikely]] return; }
L_001338E0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29088u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001338E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], 0u + 512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 6800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133900u); st16((c.r[2].w[0] + 5834u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00133900u) [[unlikely]] return; }
L_00133900:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 5812u);
    set32(c.r[4], ld32((c.r[2].w[0] + 5828u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_0013394C; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_00133948; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133934u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00133934u) [[unlikely]] return; }
L_00133934:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 5812u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 5828u), c.r[3].w[0]);  if (t) { goto L_0013394C; } }
L_00133948:
    set32(c.r[17], ld32((c.r[2].w[0] + 5812u)));
    c.budget -= 1;
L_0013394C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001339A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 5828u)));
    set32(c.r[3], c.r[3].w[0] + 5812u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0013397C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013397Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0013397Cu) [[unlikely]] return; }
L_0013397C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 5832u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013398Cu); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0013398Cu) [[unlikely]] return; }
L_0013398C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    st32((c.r[3].w[0] + 5828u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 5812u), c.r[4].w[0]);
    c.budget -= 5;
L_001339A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 5828u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001339B4u); set32(c.r[5], c.r[5].w[0] - 6800u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x001339B4u) [[unlikely]] return; }
L_001339B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 5808u);
    c.budget -= 2;
L_001339BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001339E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132F80u; return; } if (c.pc != 0x00133A08u) [[unlikely]] return; }
L_00133A08:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + 36u);  goto L_00133A18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00133AC4; } }
L_00133A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A20u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 345u, depth + 1u); else { c.pc = 0x00133550u; return; } if (c.pc != 0x00133A20u) [[unlikely]] return; }
L_00133A20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A2Cu); set32(c.r[4], c.r[19].w[0] + 40u);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132F80u; return; } if (c.pc != 0x00133A2Cu) [[unlikely]] return; }
L_00133A2C:
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 40u);  if (t) { goto L_00133AA8; } }
L_00133A3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x00133A44u) [[unlikely]] return; }
L_00133A44:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00133A98; }
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x00133A5Cu) [[unlikely]] return; }
L_00133A5C:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A6Cu); set32(c.r[4], c.r[19].w[0] + 56u);  if (depth < kMaxDepth) unit_000C(c, 277u, depth + 1u); else { c.pc = 0x00132F60u; return; } if (c.pc != 0x00133A6Cu) [[unlikely]] return; }
L_00133A6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A78u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00133A78u) [[unlikely]] return; }
L_00133A78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00133A94; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A8Cu); set32(c.r[4], c.r[19].w[0] + 40u);  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x00133A8Cu) [[unlikely]] return; }
L_00133A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_00133AC4; } }
L_00133A94:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00133A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133AA0u); set32(c.r[4], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_000C(c, 343u, depth + 1u); else { c.pc = 0x00133520u; return; } if (c.pc != 0x00133AA0u) [[unlikely]] return; }
L_00133AA0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.budget -= 2;
L_00133AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133AB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 344u, depth + 1u); else { c.pc = 0x00133540u; return; } if (c.pc != 0x00133AB0u) [[unlikely]] return; }
L_00133AB0:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[19].w[0] + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133A3Cu | kUnwind; return; } goto L_00133A3C; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00133AC4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], c.r[2].w[0] << 5);  goto L_00133AD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00133ADC; } }
L_00133AD4:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00133ADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00133B00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00133B38; } }
    set32(c.r[21], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 1;
L_00133B38:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 28u)));  goto L_00133B70; }
    goto L_00133B44;
L_00133B40:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 1;
L_00133B44:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133B64u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 21u, depth + 1u); else { c.pc = 0x00134210u; return; } if (c.pc != 0x00133B64u) [[unlikely]] return; }
L_00133B64:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] - 1u);  if (t) { goto L_00133C28; } }
L_00133B70:
    set32(c.r[5], c.r[19].w[0] + 4u);
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 26u)));
    set32(c.r[18], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 13;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[16], ld32((c.r[19].w[0] + 4u)));  goto L_00133BD4; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133BB0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00133BB0u) [[unlikely]] return; }
L_00133BB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00133BCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133BC8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00133BC8u) [[unlikely]] return; }
L_00133BC8:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00133BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00133BF8; } }
L_00133BD4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133BE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00133BE0u) [[unlikely]] return; }
L_00133BE0:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133BF4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00133BF4u) [[unlikely]] return; }
L_00133BF4:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_00133BF8:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133C08u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133C08u) [[unlikely]] return; }
L_00133C08:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133C1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133C1Cu) [[unlikely]] return; }
L_00133C1C:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
L_00133C28:
    set32(c.r[17], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[21].d[0] != c.r[17].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  goto L_00133C48; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 36u)));  goto L_00133D10; }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_00133C48:
    set32(c.r[16], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], c.r[2].w[0] << 1);
    st32((c.r[20].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 31232u)));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31228u));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 31226u));
    st32((c.r[29].w[0] + 120u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 124u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] <= 0; st16((c.r[29].w[0] + 126u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00133C84; } }
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133C7Cu); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_000C(c, 281u, depth + 1u); else { c.pc = 0x00132FC0u; return; } if (c.pc != 0x00133C7Cu) [[unlikely]] return; }
L_00133C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00133C98; } }
L_00133C84:
    set32(c.r[5], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133C94u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_000C(c, 281u, depth + 1u); else { c.pc = 0x00132FC0u; return; } if (c.pc != 0x00133C94u) [[unlikely]] return; }
L_00133C94:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00133C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] + 40u);  if (t) { goto L_00133CBC; } }
L_00133CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133CA8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00133CA8u) [[unlikely]] return; }
L_00133CA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133CB4u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_000C(c, 279u, depth + 1u); else { c.pc = 0x00132F90u; return; } if (c.pc != 0x00133CB4u) [[unlikely]] return; }
L_00133CB4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 2;
L_00133CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133CC4u);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132F80u; return; } if (c.pc != 0x00133CC4u) [[unlikely]] return; }
L_00133CC4:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133CA0u | kUnwind; return; } goto L_00133CA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00133CFC; } }
L_00133CD8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133CE4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 277u, depth + 1u); else { c.pc = 0x00132F60u; return; } if (c.pc != 0x00133CE4u) [[unlikely]] return; }
L_00133CE4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00133CFC; }
    set32(c.r[4], c.r[20].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133CF8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 273u, depth + 1u); else { c.pc = 0x00132E70u; return; } if (c.pc != 0x00133CF8u) [[unlikely]] return; }
L_00133CF8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00133CFC:
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[20].w[0] + 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133CD8u | kUnwind; return; } goto L_00133CD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00133DA8; } }
L_00133D10:
    set32(c.r[4], c.r[20].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D1Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 277u, depth + 1u); else { c.pc = 0x00132F60u; return; } if (c.pc != 0x00133D1Cu) [[unlikely]] return; }
L_00133D1C:
    set32(c.r[4], c.r[20].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D28u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 345u, depth + 1u); else { c.pc = 0x00133550u; return; } if (c.pc != 0x00133D28u) [[unlikely]] return; }
L_00133D28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D34u); set32(c.r[4], c.r[20].w[0] + 40u);  if (depth < kMaxDepth) unit_000C(c, 278u, depth + 1u); else { c.pc = 0x00132F80u; return; } if (c.pc != 0x00133D34u) [[unlikely]] return; }
L_00133D34:
    mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00133D50; } }
L_00133D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D4Cu); set32(c.r[4], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_000C(c, 343u, depth + 1u); else { c.pc = 0x00133520u; return; } if (c.pc != 0x00133D4Cu) [[unlikely]] return; }
L_00133D4C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00133D50:
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D5Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00133D5Cu) [[unlikely]] return; }
L_00133D5C:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00133D44u | kUnwind; return; } goto L_00133D44; }
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D7Cu); c.r[21].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00133D7Cu) [[unlikely]] return; }
L_00133D7C:
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D8Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00133D8Cu) [[unlikely]] return; }
L_00133D8C:
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133DA0u); c.r[16].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000C(c, 280u, depth + 1u); else { c.pc = 0x00132FB0u; return; } if (c.pc != 0x00133DA0u) [[unlikely]] return; }
L_00133DA0:
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00133DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00133DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00133EA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 36u);
    set32(c.r[3], c.r[3].w[0] - 25656u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00133E24; } }
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_00133E28; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133E24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133E24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 84u, depth + 1u); else { c.pc = 0x00134BC0u; return; } if (c.pc != 0x00133E24u) [[unlikely]] return; }
L_00133E24:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_00133E28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_00133E68; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133E64; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133E64; } }
    goto L_00133E40;
L_00133E3C:
    c.budget -= 1;
L_00133E40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00133E64; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133E64; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133E64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E64u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00133E64u) [[unlikely]] return; }
L_00133E64:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00133E68:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00133E8C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133E88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00133E88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 79u, depth + 1u); else { c.pc = 0x00134B10u; return; } if (c.pc != 0x00133E88u) [[unlikely]] return; }
L_00133E88:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00133E8C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00133EA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133EA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00133EA0u) [[unlikely]] return; }
L_00133EA0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00133EA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00133EC0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 25656u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[21].w[0] + 4u);
    c.budget -= 22;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00133F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00133F20u) [[unlikely]] return; }
L_00133F20:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00133F38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F34u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00133F34u) [[unlikely]] return; }
L_00133F34:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00133F38:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_00133F4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F48u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00133F48u) [[unlikely]] return; }
L_00133F48:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00133F4C:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[18], c.r[21].w[0] + 20u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[19].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_00133F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00133F70u) [[unlikely]] return; }
L_00133F70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00133F88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F84u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00133F84u) [[unlikely]] return; }
L_00133F84:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00133F88:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_00133F9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F98u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00133F98u) [[unlikely]] return; }
L_00133F98:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00133F9C:
    set32(c.r[17], c.r[21].w[0] + 36u);
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[16], c.r[17].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st32((c.r[18].w[0] + 12u), 0u);  if (t) { goto L_00133FF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133FC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00133FC0u) [[unlikely]] return; }
L_00133FC0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00133FE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133FD8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00133FD8u) [[unlikely]] return; }
L_00133FD8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00133FE0:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[19].w[0]);  goto L_00133FF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133FF0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00133FF0u) [[unlikely]] return; }
L_00133FF0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00133FF4:
    st32((c.r[16].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_00133FF8:
    set32(c.r[5], c.r[20].w[0] << 1);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 2;
    [[clang::musttail]] return unit_000D(c, 1u, depth);
}

}
