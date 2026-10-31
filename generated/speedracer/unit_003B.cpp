#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003B[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0,
    0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0,
    0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001EC000;
    case 2u: goto L_001EC018;
    case 3u: goto L_001EC074;
    case 4u: goto L_001EC0C0;
    case 5u: goto L_001EC1B8;
    case 6u: goto L_001EC1BC;
    case 7u: goto L_001EC250;
    case 8u: goto L_001EC2E0;
    case 9u: goto L_001EC2F0;
    case 10u: goto L_001EC310;
    case 11u: goto L_001EC320;
    case 12u: goto L_001EC338;
    case 13u: goto L_001EC380;
    case 14u: goto L_001EC3D0;
    case 15u: goto L_001EC440;
    case 16u: goto L_001EC670;
    case 17u: goto L_001EC68C;
    case 18u: goto L_001EC6A8;
    case 19u: goto L_001EC6D0;
    case 20u: goto L_001EC728;
    case 21u: goto L_001EC72C;
    case 22u: goto L_001EC784;
    case 23u: goto L_001EC81C;
    case 24u: goto L_001EC860;
    case 25u: goto L_001EC870;
    case 26u: goto L_001EC878;
    case 27u: goto L_001EC888;
    case 28u: goto L_001EC8BC;
    case 29u: goto L_001EC8CC;
    case 30u: goto L_001EC8DC;
    case 31u: goto L_001EC8F0;
    case 32u: goto L_001EC908;
    case 33u: goto L_001EC964;
    case 34u: goto L_001EC974;
    case 35u: goto L_001EC990;
    case 36u: goto L_001EC9D0;
    case 37u: goto L_001ECA18;
    case 38u: goto L_001ECA34;
    case 39u: goto L_001ECA78;
    case 40u: goto L_001ECA84;
    case 41u: goto L_001ECAB0;
    case 42u: goto L_001ECB20;
    case 43u: goto L_001ECB5C;
    case 44u: goto L_001ECBB4;
    case 45u: goto L_001ECBE8;
    case 46u: goto L_001ECC60;
    case 47u: goto L_001ECC90;
    case 48u: goto L_001ECD48;
    case 49u: goto L_001ECD60;
    case 50u: goto L_001ECEC8;
    case 51u: goto L_001ECED8;
    case 52u: goto L_001ED000;
    case 53u: goto L_001ED00C;
    case 54u: goto L_001ED01C;
    case 55u: goto L_001ED154;
    case 56u: goto L_001ED164;
    case 57u: goto L_001ED214;
    case 58u: goto L_001ED220;
    case 59u: goto L_001ED228;
    case 60u: goto L_001ED234;
    case 61u: goto L_001ED2D0;
    case 62u: goto L_001ED368;
    case 63u: goto L_001ED3F0;
    case 64u: goto L_001ED4B8;
    case 65u: goto L_001ED580;
    case 66u: goto L_001ED614;
    case 67u: goto L_001ED630;
    case 68u: goto L_001ED690;
    case 69u: goto L_001ED774;
    case 70u: goto L_001ED780;
    case 71u: goto L_001ED7CC;
    case 72u: goto L_001ED7EC;
    case 73u: goto L_001ED808;
    case 74u: goto L_001ED830;
    case 75u: goto L_001ED84C;
    case 76u: goto L_001ED858;
    case 77u: goto L_001ED878;
    case 78u: goto L_001ED88C;
    case 79u: goto L_001ED8A4;
    case 80u: goto L_001ED8C8;
    case 81u: goto L_001ED8E0;
    case 82u: goto L_001ED8F0;
    case 83u: goto L_001ED904;
    case 84u: goto L_001ED91C;
    case 85u: goto L_001ED928;
    case 86u: goto L_001ED934;
    case 87u: goto L_001ED960;
    case 88u: goto L_001ED9A8;
    case 89u: goto L_001ED9CC;
    case 90u: goto L_001ED9E8;
    case 91u: goto L_001EDA04;
    case 92u: goto L_001EDA14;
    case 93u: goto L_001EDA20;
    case 94u: goto L_001EDA34;
    case 95u: goto L_001EDA48;
    case 96u: goto L_001EDA80;
    case 97u: goto L_001EDAA0;
    case 98u: goto L_001EDACC;
    case 99u: goto L_001EDADC;
    case 100u: goto L_001EDAF8;
    case 101u: goto L_001EDB04;
    case 102u: goto L_001EDB34;
    case 103u: goto L_001EDB44;
    case 104u: goto L_001EDB50;
    case 105u: goto L_001EDB68;
    case 106u: goto L_001EDB90;
    case 107u: goto L_001EDBD0;
    case 108u: goto L_001EDBF4;
    case 109u: goto L_001EDC10;
    case 110u: goto L_001EDC2C;
    case 111u: goto L_001EDC3C;
    case 112u: goto L_001EDC48;
    case 113u: goto L_001EDC5C;
    case 114u: goto L_001EDC70;
    case 115u: goto L_001EDCA4;
    case 116u: goto L_001EDCC0;
    case 117u: goto L_001EDCCC;
    case 118u: goto L_001EDCE8;
    case 119u: goto L_001EDD00;
    case 120u: goto L_001EDD10;
    case 121u: goto L_001EDD1C;
    case 122u: goto L_001EDD34;
    case 123u: goto L_001EDD60;
    case 124u: goto L_001EDD98;
    case 125u: goto L_001EDDC4;
    case 126u: goto L_001EDDD0;
    case 127u: goto L_001EDE0C;
    case 128u: goto L_001EDE18;
    case 129u: goto L_001EDE28;
    case 130u: goto L_001EDE38;
    case 131u: goto L_001EDE44;
    case 132u: goto L_001EDE98;
    case 133u: goto L_001EDEB0;
    case 134u: goto L_001EDEF8;
    case 135u: goto L_001EDF18;
    case 136u: goto L_001EDF24;
    case 137u: goto L_001EDF50;
    case 138u: goto L_001EDF5C;
    case 139u: goto L_001EDF70;
    case 140u: goto L_001EDF8C;
    case 141u: goto L_001EDFA8;
    case 142u: goto L_001EDFB8;
    case 143u: goto L_001EDFC4;
    case 144u: goto L_001EDFD8;
    case 145u: goto L_001EDFF0;
    case 146u: goto L_001EE014;
    case 147u: goto L_001EE01C;
    case 148u: goto L_001EE044;
    case 149u: goto L_001EE068;
    case 150u: goto L_001EE088;
    case 151u: goto L_001EE09C;
    case 152u: goto L_001EE0B4;
    case 153u: goto L_001EE0C0;
    case 154u: goto L_001EE0DC;
    case 155u: goto L_001EE0E8;
    case 156u: goto L_001EE110;
    case 157u: goto L_001EE160;
    case 158u: goto L_001EE180;
    case 159u: goto L_001EE18C;
    case 160u: goto L_001EE1B8;
    case 161u: goto L_001EE1C4;
    case 162u: goto L_001EE1D8;
    case 163u: goto L_001EE1F4;
    case 164u: goto L_001EE210;
    case 165u: goto L_001EE220;
    case 166u: goto L_001EE22C;
    case 167u: goto L_001EE240;
    case 168u: goto L_001EE254;
    case 169u: goto L_001EE290;
    case 170u: goto L_001EE29C;
    case 171u: goto L_001EE33C;
    case 172u: goto L_001EE37C;
    case 173u: goto L_001EE388;
    case 174u: goto L_001EE3AC;
    case 175u: goto L_001EE3B8;
    case 176u: goto L_001EE3EC;
    case 177u: goto L_001EE404;
    case 178u: goto L_001EE414;
    case 179u: goto L_001EE41C;
    case 180u: goto L_001EE42C;
    case 181u: goto L_001EE460;
    case 182u: goto L_001EE46C;
    case 183u: goto L_001EE478;
    case 184u: goto L_001EE4B4;
    case 185u: goto L_001EE4C0;
    case 186u: goto L_001EE4CC;
    case 187u: goto L_001EE500;
    case 188u: goto L_001EE538;
    case 189u: goto L_001EE558;
    case 190u: goto L_001EE564;
    case 191u: goto L_001EE590;
    case 192u: goto L_001EE59C;
    case 193u: goto L_001EE5C0;
    case 194u: goto L_001EE5CC;
    case 195u: goto L_001EE5DC;
    case 196u: goto L_001EE5EC;
    case 197u: goto L_001EE5F8;
    case 198u: goto L_001EE660;
    case 199u: goto L_001EE680;
    case 200u: goto L_001EE6B8;
    case 201u: goto L_001EE6D8;
    case 202u: goto L_001EE6E4;
    case 203u: goto L_001EE710;
    case 204u: goto L_001EE71C;
    case 205u: goto L_001EE740;
    case 206u: goto L_001EE74C;
    case 207u: goto L_001EE75C;
    case 208u: goto L_001EE76C;
    case 209u: goto L_001EE778;
    case 210u: goto L_001EE7E0;
    case 211u: goto L_001EE800;
    case 212u: goto L_001EE83C;
    case 213u: goto L_001EE85C;
    case 214u: goto L_001EE868;
    case 215u: goto L_001EE884;
    case 216u: goto L_001EE890;
    case 217u: goto L_001EE8BC;
    case 218u: goto L_001EE8C8;
    case 219u: goto L_001EE904;
    case 220u: goto L_001EE910;
    case 221u: goto L_001EE918;
    case 222u: goto L_001EE924;
    case 223u: goto L_001EE934;
    case 224u: goto L_001EE96C;
    case 225u: goto L_001EE984;
    case 226u: goto L_001EE9A0;
    case 227u: goto L_001EE9DC;
    case 228u: goto L_001EE9FC;
    case 229u: goto L_001EEA08;
    case 230u: goto L_001EEA34;
    case 231u: goto L_001EEA40;
    case 232u: goto L_001EEA70;
    case 233u: goto L_001EEA7C;
    case 234u: goto L_001EEAC8;
    case 235u: goto L_001EEAD4;
    case 236u: goto L_001EEAE8;
    case 237u: goto L_001EEAF8;
    case 238u: goto L_001EEB04;
    case 239u: goto L_001EEB54;
    case 240u: goto L_001EEC20;
    case 241u: goto L_001EEC40;
    case 242u: goto L_001EEC78;
    case 243u: goto L_001EEC98;
    case 244u: goto L_001EECA4;
    case 245u: goto L_001EECD0;
    case 246u: goto L_001EECDC;
    case 247u: goto L_001EED14;
    case 248u: goto L_001EED38;
    case 249u: goto L_001EED44;
    case 250u: goto L_001EED64;
    case 251u: goto L_001EED70;
    case 252u: goto L_001EED88;
    case 253u: goto L_001EED9C;
    case 254u: goto L_001EEDC8;
    case 255u: goto L_001EEDD4;
    case 256u: goto L_001EEDEC;
    case 257u: goto L_001EEE00;
    case 258u: goto L_001EEE68;
    case 259u: goto L_001EEE74;
    case 260u: goto L_001EEE84;
    case 261u: goto L_001EEE94;
    case 262u: goto L_001EEEC0;
    case 263u: goto L_001EEECC;
    case 264u: goto L_001EEEE0;
    case 265u: goto L_001EEF00;
    case 266u: goto L_001EEF20;
    case 267u: goto L_001EEF60;
    case 268u: goto L_001EEF80;
    case 269u: goto L_001EEF8C;
    case 270u: goto L_001EEFA0;
    case 271u: goto L_001EEFBC;
    case 272u: goto L_001EEFCC;
    case 273u: goto L_001EEFD8;
    case 274u: goto L_001EEFEC;
    case 275u: goto L_001EF000;
    case 276u: goto L_001EF038;
    case 277u: goto L_001EF040;
    case 278u: goto L_001EF048;
    case 279u: goto L_001EF094;
    case 280u: goto L_001EF0A4;
    case 281u: goto L_001EF0D0;
    case 282u: goto L_001EF0E0;
    case 283u: goto L_001EF1C0;
    case 284u: goto L_001EF1CC;
    case 285u: goto L_001EF1D8;
    case 286u: goto L_001EF200;
    case 287u: goto L_001EF244;
    case 288u: goto L_001EF264;
    case 289u: goto L_001EF270;
    case 290u: goto L_001EF28C;
    case 291u: goto L_001EF2B8;
    case 292u: goto L_001EF2C4;
    case 293u: goto L_001EF2D8;
    case 294u: goto L_001EF2F4;
    case 295u: goto L_001EF304;
    case 296u: goto L_001EF310;
    case 297u: goto L_001EF324;
    case 298u: goto L_001EF338;
    case 299u: goto L_001EF370;
    case 300u: goto L_001EF380;
    case 301u: goto L_001EF3A0;
    case 302u: goto L_001EF3CC;
    case 303u: goto L_001EF400;
    case 304u: goto L_001EF410;
    case 305u: goto L_001EF470;
    case 306u: goto L_001EF480;
    case 307u: goto L_001EF498;
    case 308u: goto L_001EF4A4;
    case 309u: goto L_001EF4D0;
    case 310u: goto L_001EF508;
    case 311u: goto L_001EF528;
    case 312u: goto L_001EF534;
    case 313u: goto L_001EF550;
    case 314u: goto L_001EF57C;
    case 315u: goto L_001EF588;
    case 316u: goto L_001EF5AC;
    case 317u: goto L_001EF5B8;
    case 318u: goto L_001EF5C8;
    case 319u: goto L_001EF5D8;
    case 320u: goto L_001EF5E4;
    case 321u: goto L_001EF60C;
    case 322u: goto L_001EF654;
    case 323u: goto L_001EF670;
    case 324u: goto L_001EF7E0;
    case 325u: goto L_001EF7F0;
    case 326u: goto L_001EF810;
    case 327u: goto L_001EF880;
    case 328u: goto L_001EF8A0;
    case 329u: goto L_001EF8AC;
    case 330u: goto L_001EF8C8;
    case 331u: goto L_001EF900;
    case 332u: goto L_001EF90C;
    case 333u: goto L_001EF930;
    case 334u: goto L_001EF93C;
    case 335u: goto L_001EF950;
    case 336u: goto L_001EF960;
    case 337u: goto L_001EF998;
    case 338u: goto L_001EF9A8;
    case 339u: goto L_001EFA1C;
    case 340u: goto L_001EFA28;
    case 341u: goto L_001EFA3C;
    case 342u: goto L_001EFA4C;
    case 343u: goto L_001EFA84;
    case 344u: goto L_001EFA94;
    case 345u: goto L_001EFB08;
    case 346u: goto L_001EFB14;
    case 347u: goto L_001EFB28;
    case 348u: goto L_001EFB38;
    case 349u: goto L_001EFB70;
    case 350u: goto L_001EFB80;
    case 351u: goto L_001EFBF4;
    case 352u: goto L_001EFC00;
    case 353u: goto L_001EFC14;
    case 354u: goto L_001EFC24;
    case 355u: goto L_001EFC60;
    case 356u: goto L_001EFC70;
    case 357u: goto L_001EFCEC;
    case 358u: goto L_001EFCF8;
    case 359u: goto L_001EFD08;
    case 360u: goto L_001EFD34;
    case 361u: goto L_001EFD60;
    case 362u: goto L_001EFD8C;
    case 363u: goto L_001EFDB8;
    case 364u: goto L_001EFDE4;
    case 365u: goto L_001EFE10;
    case 366u: goto L_001EFE3C;
    case 367u: goto L_001EFFB0;
    case 368u: goto L_001EFFB8;
    case 369u: goto L_001EFFC4;
    case 370u: goto L_001EFFD0;
    case 371u: goto L_001EFFDC;
    default: bad_entry(c, 0x001EC000u); return;
    }
L_001EC000:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001EC1B8; } }
    set32(c.r[7], ld32((c.r[20].w[0] + 488u)));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 492u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001EC060; } }
L_001EC018:
    set32(c.r[3], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[3], ld32((c.r[20].w[0] + 580u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
L_001EC060:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[8].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC018u | kUnwind; return; } goto L_001EC018; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC1B8; } }
L_001EC074:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001EC1B8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001EC1B8; } }
    c.r[6].d[0] = ld16((c.r[20].w[0] + 526u));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[20].w[0] + 528u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 530u));
    st8((c.r[29].w[0] + 168u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 169u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 170u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[9].d[0] = ld16((c.r[20].w[0] + 494u));
    set32(c.r[8], ld32((c.r[20].w[0] + 488u)));
    c.r[7].d[0] = ld8((c.r[29].w[0] + 168u));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 169u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 170u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 255u);  if (t) { goto L_001EC1AC; } }
L_001EC0C0:
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.r[12].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_001EC0F8; } }
    set32(c.r[3], c.r[10].w[0] << 1);
    c.r[12].d[0] = ld8((c.r[29].w[0] + 168u));
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.r[11].d[0] = ld8((c.r[29].w[0] + 169u));
    set32(c.r[13], c.r[8].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 170u));
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001EC1A8; } }
L_001EC0F8:
    c.budget -= 2;
    if (c.r[12].d[0] == c.r[4].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_001EC1AC; }
    set32(c.r[3], c.r[4].w[0] - c.r[12].w[0]);
    set32(c.r[11], c.r[10].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[11], c.r[11].w[0] + c.r[10].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[8].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[3].w[0]));
    mmi::maddu(c, 0, c.r[11].w[0], c.r[12].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[11], c.r[11].w[0] + 128u);
    c.r[12].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 8));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[12], ld32((c.r[20].w[0] + 616u)));
    c.r[11].d[0] = ld8((c.r[3].w[0] + 1u));
    set32(c.r[12], c.r[12].w[0] + c.r[10].w[0]);
    c.r[13].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[12], c.r[4].w[0] - c.r[13].w[0]);
    c.r[12].d[0] = c.r[12].d[0] & 65535ull;
    mmi::mult(c, 1, c.r[6].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[1];
    mmi::maddu(c, 1, c.r[11].w[0], c.r[13].w[0]);
    c.r[11].d[0] = c.lo.d[1];
    set32(c.r[11], c.r[11].w[0] + 128u);
    c.r[12].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 8));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[12], ld32((c.r[20].w[0] + 616u)));
    c.r[11].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[12], c.r[12].w[0] + c.r[10].w[0]);
    c.r[13].d[0] = ld8((c.r[12].w[0]));
    set32(c.r[12], c.r[4].w[0] - c.r[13].w[0]);
    c.r[12].d[0] = c.r[12].d[0] & 65535ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[12].w[0]);
    c.r[12].d[0] = c.lo.d[0];
    mmi::maddu(c, 0, c.r[11].w[0], c.r[13].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[11], c.r[11].w[0] + 128u);
    c.r[12].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 8));
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 8));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 42;
L_001EC1A8:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_001EC1AC:
    c.r[3].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 616u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC0C0u | kUnwind; return; } goto L_001EC0C0; }
L_001EC1B8:
    c.r[3].d[0] = ld64((c.r[20].w[0] + 264u));
    c.budget -= 1;
L_001EC1BC:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_001EC2B0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_001EC2AC; } }
    c.r[6].d[0] = ld8((c.r[20].w[0] + 604u));
    set32(c.r[5], 0u + 8u);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 605u));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 606u));
    set32(c.r[8], c.r[5].w[0] - c.r[6].w[0]);
    c.r[7].d[0] = ld16((c.r[20].w[0] + 492u));
    set32(c.r[6], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[8].sd[0] < 0; set32(c.r[4], c.r[5].w[0] - c.r[3].w[0]);  if (t) { goto L_001EC204; } }
    c.r[1].d[0] = c.r[8].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EC208; } }
L_001EC204:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EC208:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { c.r[6].d[0] = 0ull + 0ull;  goto L_001EC220; }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EC220; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EC220:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { c.r[4].d[0] = 0ull + 0ull;  goto L_001EC238; }
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[7].d[0] & 65535ull;  goto L_001EC23C; }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EC238:
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    c.budget -= 1;
L_001EC23C:
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_001EC29C; } }
L_001EC250:
    set32(c.r[6], ld32((c.r[20].w[0] + 488u)));
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[4], c.r[11].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[11].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] >> (c.r[8].w[0] & 31u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 488u)));
    set32(c.r[6], c.r[4].w[0] + c.r[9].w[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] >> (c.r[7].w[0] & 31u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 488u)));
    set32(c.r[6], c.r[4].w[0] + c.r[9].w[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 2u));
    set32(c.r[4], c.r[4].w[0] >> (c.r[5].w[0] & 31u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 19;
L_001EC29C:
    c.r[4].d[0] = c.r[11].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { c.r[10].d[0] = c.r[11].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC250u | kUnwind; return; } goto L_001EC250; }
L_001EC2AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_001EC2B0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001EC2E0:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] | 4096ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 264u), c.r[3].d[0]);  c.pc = t; return; }
L_001EC2F0:
    c.r[5].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 264u), c.r[3].d[0]);  c.pc = t; return; }
L_001EC310:
    c.r[3].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st64((c.r[4].w[0] + 264u), c.r[3].d[0]);  c.pc = t; return; }
L_001EC320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 276u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC338u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 102u, depth + 1u); else { c.pc = 0x001EB420u; return; } if (c.pc != 0x001EC338u) [[unlikely]] return; }
L_001EC338:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 503u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[16].w[0] + 368u));  goto L_001EC448; }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[16].w[0] + 368u));  goto L_001EC388; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = ld64((c.r[16].w[0] + 368u));
    set32(c.r[5], ld32((c.r[2].w[0] - 15104u)));
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] + c.r[5].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    set32(c.r[2], ld32((c.r[2].w[0] - 15136u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC380u); c.r[4].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x001EC380u) [[unlikely]] return; }
L_001EC380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 376u), c.r[2].d[0]);  if (t) { goto L_001EC38C; } }
L_001EC388:
    st64((c.r[16].w[0] + 376u), c.r[2].d[0]);
    c.budget -= 1;
L_001EC38C:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 504u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] - 15168u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[2]);
    c.r[4].d[0] = ld64((c.r[16].w[0] + 360u));
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15200u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC3D0u); c.r[4].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x001EC3D0u) [[unlikely]] return; }
L_001EC3D0:
    st64((c.r[16].w[0] + 408u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 408u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 509u));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    mmi::multu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[3], c.r[3], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[2].d[0] = c.r[2].d[0] >> 3;
    c.r[3].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st64((c.r[16].w[0] + 400u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 400u));
    c.budget -= 24;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld64((c.r[16].w[0] + 264u));  goto L_001EC464; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC440u); set32(c.r[5], c.r[5].w[0] - 19952u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EC440u) [[unlikely]] return; }
L_001EC440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EC460; } }
L_001EC448:
    st64((c.r[16].w[0] + 376u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 360u));
    st64((c.r[16].w[0] + 408u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[16].w[0] + 400u), c.r[2].d[0]);
    c.budget -= 6;
L_001EC460:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 264u));
    c.budget -= 1;
L_001EC464:
    c.r[4].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 509u));  if (t) { goto L_001EC484; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 507u));
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[7].d[0] = c.r[2].d[0] & 4096ull;  goto L_001EC488; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_001EC484:
    c.r[7].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 1;
L_001EC488:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[6].d[0] = c.r[2].d[0] & 32768ull;  goto L_001EC504; }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 506u));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_001EC4B4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 494u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 24u);  goto L_001EC500; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_001EC500; } }
L_001EC4B4:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  goto L_001EC4E0; }
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = ld16((c.r[16].w[0] + 494u));  goto L_001EC4D0; }
    set32(c.r[3], 0u + 8u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 494u));
    c.budget -= 2;
L_001EC4D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EC500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] << 1);  if (t) { goto L_001EC500; } }
L_001EC4E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_001EC500; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 494u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EC500; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
L_001EC500:
    c.r[6].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 1;
L_001EC504:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] & 16384ull;  goto L_001EC55C; }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 506u));
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001EC524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_001EC558; } }
L_001EC524:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[4], 0u + 2u);  goto L_001EC540; }
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 32u);  goto L_001EC558; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 16u);  if (t) { goto L_001EC558; } }
L_001EC540:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001EC558; } }
    c.r[1].d[0] = c.r[3].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 64u);  goto L_001EC558; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_001EC558:
    c.r[4].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 1;
L_001EC55C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);  goto L_001EC5D0; }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 494u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001EC578; } }
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;  goto L_001EC594; }
L_001EC578:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001EC590; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 506u));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[4].d[0]) { c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;  goto L_001EC5A4; }
L_001EC590:
    c.r[1].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 1;
L_001EC594:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 64u);  goto L_001EC5CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_001EC5CC; } }
L_001EC5A4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 6u);  goto L_001EC5C0; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 24u);  goto L_001EC5CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_001EC5CC; } }
L_001EC5C0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 48u);  goto L_001EC5CC; }
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_001EC5CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_001EC5D0:
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 8u);  goto L_001EC5FC; }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 244u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 245u));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EC5F8; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001EC5F8:
    set32(c.r[2], 0u - 8u);
    c.budget -= 1;
L_001EC5FC:
    c.r[5].d[0] = ld64((c.r[16].w[0] + 360u));
    mmi::pcpyld(c.r[4], c.r[0], c.r[2]);
    c.r[8].d[0] = c.r[3].d[0] << 32;
    set32(c.r[2], c.r[3].w[0] + 7u);
    c.r[3].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(7ll);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC670u); c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(64ll);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001EC670u) [[unlikely]] return; }
L_001EC670:
    st32((c.r[16].w[0] + 852u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[16].w[0] + 428u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 392u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC68Cu); c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001EC68Cu) [[unlikely]] return; }
L_001EC68C:
    st32((c.r[16].w[0] + 424u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[16].w[0] + 392u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC6A8u); c.r[7].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0038(c, 534u, depth + 1u); else { c.pc = 0x001E3DF0u; return; } if (c.pc != 0x001EC6A8u) [[unlikely]] return; }
L_001EC6A8:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 256u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st64((c.r[16].w[0] + 256u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001EC6D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 416u));
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[4].w[0] + 416u), c.r[3].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 416u));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 376u));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001ECA90; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 503u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[16].w[0] + 256u));  goto L_001EC840; }
    st64((c.r[16].w[0] + 416u), 0ull);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[16].w[0] + 392u));
    set32(c.r[5], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC728u); c.r[7].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0038(c, 534u, depth + 1u); else { c.pc = 0x001E3DF0u; return; } if (c.pc != 0x001EC728u) [[unlikely]] return; }
L_001EC728:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 504u));
    c.budget -= 1;
L_001EC72C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 504u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 504u));
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 504u));  goto L_001EC830; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 15168u);
    c.r[4].d[0] = ld64((c.r[16].w[0] + 360u));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] + c.r[5].d[0];
    mmi::pcpyld(c.r[3], c.r[0], c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] - 15200u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC784u); c.r[4].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x001EC784u) [[unlikely]] return; }
L_001EC784:
    st64((c.r[16].w[0] + 408u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 408u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 509u));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::multu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    st64((c.r[16].w[0] + 400u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001EC82C; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 504u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] - 15104u);
    mmi::pcpyld(c.r[3], c.r[0], c.r[2]);
    c.r[4].d[0] = ld64((c.r[16].w[0] + 368u));
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15136u);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC81Cu); c.r[4].d[0] = c.r[3].d[0] - c.r[2].d[0];  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x001EC81Cu) [[unlikely]] return; }
L_001EC81C:
    st64((c.r[16].w[0] + 376u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 408u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 504u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC72Cu | kUnwind; return; } goto L_001EC72C; }
L_001EC82C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 504u));
    c.budget -= 1;
L_001EC830:
    c.r[3].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001ECA94; }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 256u));
    c.budget -= 1;
L_001EC840:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[16].w[0] + 472u));  goto L_001ECA54; }
    set32(c.r[3], c.r[29].w[0] + 79u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 284u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 5;
L_001EC860:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 272u);  goto L_001EC988; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[16].w[0] + 472u));  if (t) { goto L_001EC90C; } }
L_001EC870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EC878u) [[unlikely]] return; }
L_001EC878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC888u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EC888u) [[unlikely]] return; }
L_001EC888:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 72u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[29].w[0] + 73u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 74u));
    c.r[6].d[0] = c.r[2].d[0] << 24;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 75u));
    c.r[5].d[0] = c.r[6].d[0] + c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC8BCu); st64((c.r[16].w[0] + 472u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_003C(c, 460u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x001EC8BCu) [[unlikely]] return; }
L_001EC8BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC8CCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EC8CCu) [[unlikely]] return; }
L_001EC8CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC8DCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EC8DCu) [[unlikely]] return; }
L_001EC8DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[16].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC8F0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001EC8F0u) [[unlikely]] return; }
L_001EC8F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC908; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC908u); set32(c.r[5], c.r[5].w[0] - 19912u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EC908u) [[unlikely]] return; }
L_001EC908:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 472u));
    c.budget -= 1;
L_001EC90C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC870u | kUnwind; return; } goto L_001EC870; }
    set32(c.r[2], ld32((c.r[16].w[0] + 332u)));
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 472u));
    c.r[2].d[0] = ld32((c.r[16].w[0] + 332u));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 276u)));  goto L_001EC950; }
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 4;
L_001EC950:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 328u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC964u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EC964u) [[unlikely]] return; }
L_001EC964:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC974u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EC974u) [[unlikely]] return; }
L_001EC974:
    c.r[3].d[0] = ld32((c.r[16].w[0] + 276u));
    c.r[2].d[0] = ld64((c.r[16].w[0] + 472u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];
    st64((c.r[16].w[0] + 472u), c.r[2].d[0]);
    set32(c.r[4], c.r[16].w[0] + 272u);
    c.budget -= 5;
L_001EC988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC990u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A4(c, 106u, depth + 1u); else { c.pc = 0x003934E0u; return; } if (c.pc != 0x001EC990u) [[unlikely]] return; }
L_001EC990:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001EC9EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EC9C0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EC9C0; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 472u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[16].w[0] + 248u));  goto L_001EC9D4; }
L_001EC9C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EC9D0u); set32(c.r[5], c.r[5].w[0] - 19890u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EC9D0u) [[unlikely]] return; }
L_001EC9D0:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 248u));
    c.budget -= 1;
L_001EC9D4:
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st64((c.r[16].w[0] + 248u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[16].w[0] + 256u), c.r[2].d[0]);  if (t) { goto L_001ECA4C; } }
L_001EC9EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 288u)));  goto L_001ECA1C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 296u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001ECA08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001ECA10; } }
L_001ECA08:
    set32(c.r[5], c.r[5].w[0] - 19868u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001ECA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA18u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001ECA18u) [[unlikely]] return; }
L_001ECA18:
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    c.budget -= 1;
L_001ECA1C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 276u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EC860u | kUnwind; return; } goto L_001EC860; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA34u); set32(c.r[5], c.r[5].w[0] - 19848u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001ECA34u) [[unlikely]] return; }
L_001ECA34:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st64((c.r[16].w[0] + 248u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st64((c.r[16].w[0] + 256u), c.r[2].d[0]);
    c.budget -= 6;
L_001ECA4C:
    st32((c.r[16].w[0] + 288u), 0u);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 472u));
    c.budget -= 2;
L_001ECA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ECA68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 272u);  goto L_001ECA7C; }
L_001ECA68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA78u); set32(c.r[5], c.r[5].w[0] - 19825u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001ECA78u) [[unlikely]] return; }
L_001ECA78:
    set32(c.r[4], c.r[16].w[0] + 272u);
    c.budget -= 1;
L_001ECA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECA84u);  if (depth < kMaxDepth) unit_00A5(c, 53u, depth + 1u); else { c.pc = 0x00394F70u; return; } if (c.pc != 0x001ECA84u) [[unlikely]] return; }
L_001ECA84:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 248u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st64((c.r[16].w[0] + 248u), c.r[3].d[0]);
    c.budget -= 3;
L_001ECA90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001ECA94:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001ECAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001ECC30; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { c.r[6].d[0] = ld8((c.r[5].w[0] + 19u));  goto L_001ECB8C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { c.r[5].d[0] = ld64((c.r[5].w[0] + 8u));  goto L_001ECB50; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[5].w[0] + 19u));  goto L_001ECB00; }
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_001ECD50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECD3C; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 19u));
    c.budget -= 1;
L_001ECB00:
    c.r[6].d[0] = ld64((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[16].w[0] + c.r[7].w[0]);  if (t) { goto L_001ECB38; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_001ECB20:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_001ECB38:
    c.r[3].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECB20u | kUnwind; return; } goto L_001ECB20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECD4C; } }
    c.r[5].d[0] = ld64((c.r[5].w[0] + 8u));
    c.budget -= 1;
L_001ECB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001ECB74; } }
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 1;
L_001ECB5C:
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
L_001ECB74:
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[7].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECB5Cu | kUnwind; return; } goto L_001ECB5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECD4C; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 19u));
    c.budget -= 1;
L_001ECB8C:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[6].w[0] + 7u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] - c.r[8].d[0];  if (t) { goto L_001ECBD0; } }
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 1;
L_001ECBB4:
    c.r[9].d[0] = c.r[9].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[5], c.r[5].w[0] >> 1);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
L_001ECBD0:
    c.r[4].d[0] = c.r[9].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[7].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECBB4u | kUnwind; return; } goto L_001ECBB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_001ECC1C; } }
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 1;
L_001ECBE8:
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_001ECC00; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 2;
L_001ECC00:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 7;
L_001ECC1C:
    c.r[4].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[7].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECBE8u | kUnwind; return; } goto L_001ECBE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECD4C; } }
L_001ECC30:
    c.r[6].d[0] = ld8((c.r[5].w[0] + 19u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 7u);
    c.r[5].d[0] = ld64((c.r[5].w[0] + 8u));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[5].d[0] - c.r[8].d[0];  if (t) { goto L_001ECC78; } }
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 1;
L_001ECC60:
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[6].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
L_001ECC78:
    c.r[5].d[0] = c.r[10].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[7].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECC60u | kUnwind; return; } goto L_001ECC60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_001ECD28; } }
    c.r[13].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 1;
L_001ECC90:
    c.r[12].d[0] = ld8((c.r[3].w[0]));
    c.r[14].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[13].w[0] - c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[11], c.r[14].w[0] - c.r[12].w[0]);  if (t) { goto L_001ECCB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u - c.r[5].w[0]);  if (t) { goto L_001ECCBC; } }
L_001ECCB8:
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_001ECCBC:
    c.budget -= 2;
    if (c.r[11].sd[0] >= 0) { c.r[6].d[0] = c.r[11].d[0] + 0ull;  goto L_001ECCD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u - c.r[11].w[0]);  if (t) { goto L_001ECCD0; } }
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 1;
L_001ECCD0:
    set32(c.r[5], c.r[5].w[0] + c.r[11].w[0]);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001ECCE0; } }
    set32(c.r[5], 0u - c.r[5].w[0]);
    c.budget -= 1;
L_001ECCE0:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;  goto L_001ECCFC; }
    c.r[1].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[16].w[0]));  goto L_001ECD18; }
    c.r[1].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001ECCFC:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[13].d[0] = c.r[12].d[0] + 0ull;  goto L_001ECD10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_001ECD14; } }
    c.r[13].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 1;
L_001ECD10:
    c.r[14].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 1;
L_001ECD14:
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_001ECD18:
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + c.r[14].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_001ECD28:
    c.r[5].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[13].d[0] = ld8((c.r[7].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECC90u | kUnwind; return; } goto L_001ECC90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ECD4C; } }
L_001ECD3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ECD48u); set32(c.r[5], c.r[5].w[0] - 19802u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001ECD48u) [[unlikely]] return; }
L_001ECD48:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001ECD4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_001ECD50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001ECD60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[4].w[0] + 448u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 428u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 504u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 16;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = ld64((c.r[4].w[0] + 264u));  if (t) { goto L_001ED29C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_001ED2A0; }
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[9], 0u + 4u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 15168u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0]));
    set32(c.r[17], ld32((c.r[6].w[0])));
    c.r[10].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    mmi::multu(c, 0, c.r[10].w[0], c.r[17].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[8].w[0], c.r[10].w[0]);
    c.r[8].d[0] = c.lo.d[1];
    c.r[6].d[0] = ld8((c.r[18].w[0] + 19u));
    c.r[10].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[7].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[10], c.r[10], c.r[11]);
    c.r[7].d[0] = c.r[8].d[0] + c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.budget -= 22;
    { const bool t = c.r[6].d[0] == c.r[9].d[0]; c.r[16].d[0] = c.r[7].d[0] + c.r[10].d[0];  if (t) { goto L_001ED094; } }
    set32(c.r[8], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[8].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_001ECF50; }
    set32(c.r[9], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[9].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_001ECE20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 3));  if (t) { goto L_001ED1DC; } }
L_001ECE20:
    set32(c.r[8], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    mmi::pcpyld(c.r[6], c.r[0], c.r[8]);
    c.r[7].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[6].d[0] = c.r[16].d[0] + c.r[6].d[0];
    c.r[7].d[0] = c.r[7].d[0] >> 3;
    c.r[6].d[0] = c.r[6].d[0] >> 3;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[14], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[13], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_001ECE84; } }
    c.r[4].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    set32(c.r[10], 0u + 7u);
    c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[4].d[0] = c.r[4].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    c.r[12].d[0] = c.r[4].d[0] << 32;
    c.r[11].d[0] = c.r[3].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_001ECEB8; } }
L_001ECE84:
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[9], 0u + 7u);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[12], c.r[9].w[0] - c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[11], c.r[9].w[0] - c.r[3].w[0]);
    c.budget -= 13;
L_001ECEB8:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32639u);  if (t) { goto L_001ECF38; } }
L_001ECEC8:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[12].w[0] & 31u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 1ull;  if (t) { goto L_001ECF18; } }
L_001ECED8:
    c.r[20].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[15].w[0] & 31u)));
    set32(c.r[15], c.r[5].w[0] << (c.r[11].w[0] & 31u));
    c.r[21].d[0] = c.r[19].d[0] & 255ull;
    c.r[19].d[0] = c.r[15].d[0] & 255ull;
    c.r[15].d[0] = c.r[20].d[0] & c.r[21].d[0];
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    c.r[15].d[0] = c.r[15].d[0] | c.r[19].d[0];
    c.budget -= 11;
    { const bool t = c.r[11].d[0] != c.r[9].d[0]; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));  if (t) { goto L_001ECF10; } }
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[13].w[0] - 1u);  if (t) { goto L_001ECF14; } }
L_001ECF10:
    set32(c.r[11], c.r[11].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_001ECF14:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001ECF18:
    c.r[15].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[15], c.r[4].w[0] - c.r[11].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECED8u | kUnwind; return; } goto L_001ECED8; }
    c.budget -= 2;
    if (c.r[12].d[0] != c.r[9].d[0]) { set32(c.r[12], c.r[12].w[0] + c.r[8].w[0]);  goto L_001ECF34; }
    c.r[12].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.budget -= 2;
L_001ECF34:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001ECF38:
    c.r[5].d[0] = ld64((c.r[18].w[0]));
    c.r[5].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[14].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ECEC8u | kUnwind; return; } goto L_001ECEC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0]), c.r[16].d[0]);  if (t) { goto L_001ED264; } }
L_001ECF50:
    set32(c.r[7], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    mmi::pcpyld(c.r[6], c.r[0], c.r[7]);
    c.r[7].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[6].d[0] = c.r[16].d[0] + c.r[6].d[0];
    c.r[7].d[0] = c.r[7].d[0] >> 2;
    c.r[6].d[0] = c.r[6].d[0] >> 2;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[14], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[13], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_001ECFC0; } }
    c.r[4].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(3ll);
    set32(c.r[10], 0u + 6u);
    c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(3ll);
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[4].d[0] = c.r[4].d[0] << 1;
    c.r[3].d[0] = c.r[3].d[0] << 1;
    c.r[12].d[0] = c.r[4].d[0] << 32;
    c.r[11].d[0] = c.r[3].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u - 2u);  if (t) { goto L_001ECFFC; } }
L_001ECFC0:
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(3ll);
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(3ll);
    c.r[4].d[0] = c.r[5].d[0] - c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[4].d[0] = c.r[4].d[0] << 1;
    c.r[3].d[0] = c.r[5].d[0] - c.r[3].d[0];
    c.r[12].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 1;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[11].d[0] = c.r[3].d[0] << 32;
    set32(c.r[9], 0u + 6u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.budget -= 15;
L_001ECFFC:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001ED000:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 16191u);  if (t) { goto L_001ED07C; } }
L_001ED00C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[12].w[0] & 31u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 3ull;  if (t) { goto L_001ED05C; } }
L_001ED01C:
    c.r[20].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[15].w[0] & 31u)));
    set32(c.r[15], c.r[5].w[0] << (c.r[11].w[0] & 31u));
    c.r[21].d[0] = c.r[19].d[0] & 255ull;
    c.r[19].d[0] = c.r[15].d[0] & 255ull;
    c.r[15].d[0] = c.r[20].d[0] & c.r[21].d[0];
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    c.r[15].d[0] = c.r[15].d[0] | c.r[19].d[0];
    c.budget -= 11;
    { const bool t = c.r[11].d[0] != c.r[9].d[0]; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));  if (t) { goto L_001ED054; } }
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[13].w[0] - 1u);  if (t) { goto L_001ED058; } }
L_001ED054:
    set32(c.r[11], c.r[11].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_001ED058:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001ED05C:
    c.r[15].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[15], c.r[4].w[0] - c.r[11].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED01Cu | kUnwind; return; } goto L_001ED01C; }
    c.budget -= 2;
    if (c.r[12].d[0] != c.r[9].d[0]) { set32(c.r[12], c.r[12].w[0] + c.r[8].w[0]);  goto L_001ED078; }
    c.r[12].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.budget -= 2;
L_001ED078:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001ED07C:
    c.r[5].d[0] = ld64((c.r[18].w[0]));
    c.r[5].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[14].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED00Cu | kUnwind; return; } goto L_001ED00C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED260; } }
L_001ED094:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    mmi::pcpyld(c.r[6], c.r[0], c.r[7]);
    c.r[7].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[6].d[0] = c.r[16].d[0] + c.r[6].d[0];
    c.r[7].d[0] = c.r[7].d[0] >> 1;
    c.r[6].d[0] = c.r[6].d[0] >> 1;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[14], c.r[5].w[0] + c.r[7].w[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[13], c.r[5].w[0] + c.r[6].w[0]);  if (t) { goto L_001ED108; } }
    c.r[4].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] << 2;
    c.r[3].d[0] = c.r[3].d[0] << 2;
    c.r[12].d[0] = c.r[4].d[0] << 32;
    c.r[11].d[0] = c.r[3].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    set32(c.r[8], 0u - 4u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_001ED144; } }
L_001ED108:
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[5].d[0] - c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] << 2;
    c.r[3].d[0] = c.r[5].d[0] - c.r[3].d[0];
    c.r[12].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 2;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.r[11].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.budget -= 15;
L_001ED144:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3855u);  if (t) { goto L_001ED1C4; } }
L_001ED154:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> (c.r[12].w[0] & 31u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 15ull;  if (t) { goto L_001ED1A4; } }
L_001ED164:
    c.r[20].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[15].w[0] & 31u)));
    set32(c.r[15], c.r[5].w[0] << (c.r[11].w[0] & 31u));
    c.r[21].d[0] = c.r[19].d[0] & 255ull;
    c.r[19].d[0] = c.r[15].d[0] & 255ull;
    c.r[15].d[0] = c.r[20].d[0] & c.r[21].d[0];
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld8((c.r[13].w[0]));
    c.r[15].d[0] = c.r[15].d[0] | c.r[19].d[0];
    c.budget -= 11;
    { const bool t = c.r[11].d[0] != c.r[9].d[0]; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));  if (t) { goto L_001ED19C; } }
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[13].w[0] - 1u);  if (t) { goto L_001ED1A0; } }
L_001ED19C:
    set32(c.r[11], c.r[11].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_001ED1A0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001ED1A4:
    c.r[15].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[15], c.r[4].w[0] - c.r[11].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED164u | kUnwind; return; } goto L_001ED164; }
    c.budget -= 2;
    if (c.r[12].d[0] != c.r[9].d[0]) { set32(c.r[12], c.r[12].w[0] + c.r[8].w[0]);  goto L_001ED1C0; }
    c.r[12].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.budget -= 2;
L_001ED1C0:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001ED1C4:
    c.r[5].d[0] = ld64((c.r[18].w[0]));
    c.r[5].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[14].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED154u | kUnwind; return; } goto L_001ED154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED260; } }
L_001ED1DC:
    set32(c.r[4], 0u - 1u);
    mmi::pcpyld(c.r[6], c.r[0], c.r[4]);
    c.r[4].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[22].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[16].d[0] + c.r[6].d[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    mmi::mult(c, 0, c.r[4].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::mult(c, 1, c.r[3].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[19], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_001ED250; } }
L_001ED214:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED220u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001ED220u) [[unlikely]] return; }
L_001ED220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_001ED23C; } }
L_001ED228:
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED234u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001ED234u) [[unlikely]] return; }
L_001ED234:
    set32(c.r[19], c.r[19].w[0] - c.r[21].w[0]);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 2;
L_001ED23C:
    c.r[3].d[0] = c.r[23].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED228u | kUnwind; return; } goto L_001ED228; }
    set32(c.r[20], c.r[20].w[0] - c.r[21].w[0]);
    c.r[22].d[0] = c.r[22].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001ED250:
    c.r[3].d[0] = ld64((c.r[18].w[0]));
    c.r[3].d[0] = c.r[22].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 152u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED214u | kUnwind; return; } goto L_001ED214; }
L_001ED260:
    st64((c.r[18].w[0]), c.r[16].d[0]);
    c.budget -= 1;
L_001ED264:
    c.r[4].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = ld8((c.r[18].w[0] + 19u));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    mmi::multu(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[4], c.r[4], c.r[5]);
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    st64((c.r[18].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 14;
L_001ED29C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_001ED2A0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001ED2D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { const bool t = c.r[21].d[0] != c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001ED370; } }
    c.r[2].d[0] = ld64((c.r[4].w[0] + 360u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 467u));
    set32(c.r[7], ld32((c.r[4].w[0] + 428u)));
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[5], c.r[7].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[2].d[0] = c.r[2].d[0] >> 3;
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED368u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001ED368u) [[unlikely]] return; }
L_001ED368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_001ED664; } }
L_001ED370:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 467u));
    set32(c.r[11], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[11].d[0]) { set32(c.r[7], ld32((c.r[4].w[0] + 428u)));  goto L_001ED530; }
    set32(c.r[10], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[10].d[0]) { set32(c.r[7], ld32((c.r[4].w[0] + 428u)));  goto L_001ED468; }
    set32(c.r[12], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[12].d[0]) { set32(c.r[7], ld32((c.r[4].w[0] + 428u)));  goto L_001ED3A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_001ED5F8; } }
L_001ED3A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 360u));
    set32(c.r[9], 0u + 128u);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[13], c.r[7].w[0] + 1u);  if (t) { goto L_001ED3C8; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 7u);  if (t) { goto L_001ED3D4; } }
L_001ED3C8:
    set32(c.r[11], 0u + 7u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[12], 0u - 1u);
    c.budget -= 3;
L_001ED3D4:
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], 0u + 32639u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[15], 0u + 128u);  if (t) { goto L_001ED454; } }
L_001ED3F0:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_001ED430; } }
    set32(c.r[14], c.r[4].w[0] - c.r[8].w[0]);
    c.r[18].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[14].w[0] & 31u)));
    c.r[14].d[0] = ld8((c.r[5].w[0]));
    c.r[17].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> (c.r[8].w[0] & 31u)));
    c.r[14].d[0] = c.r[14].d[0] & c.r[17].d[0];
    c.r[17].d[0] = c.r[18].d[0] & 1ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[14], c.r[17].w[0] << (c.r[8].w[0] & 31u));
    c.r[17].d[0] = c.r[14].d[0] & 255ull;
    c.r[14].d[0] = ld8((c.r[5].w[0]));
    c.r[14].d[0] = c.r[14].d[0] | c.r[17].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.budget -= 14;
L_001ED430:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[10].d[0]) { set32(c.r[8], c.r[8].w[0] + c.r[12].w[0]);  goto L_001ED444; }
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_001ED444:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[16].d[0]) { set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  goto L_001ED450; }
    c.r[9].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 1;
L_001ED450:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001ED454:
    c.r[14].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[14].d[0] != 0ull) { c.r[14].d[0] = c.r[9].d[0] & c.r[21].d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED3F0u | kUnwind; return; } goto L_001ED3F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED660; } }
L_001ED468:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 360u));
    set32(c.r[9], 0u + 128u);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[13], c.r[7].w[0] + 1u);  if (t) { goto L_001ED490; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 6u);  if (t) { goto L_001ED49C; } }
L_001ED490:
    set32(c.r[12], 0u + 6u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 2u);
    c.budget -= 3;
L_001ED49C:
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 16191u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[15], 0u + 128u);  if (t) { goto L_001ED51C; } }
L_001ED4B8:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_001ED4F8; } }
    set32(c.r[14], c.r[4].w[0] - c.r[8].w[0]);
    c.r[18].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[14].w[0] & 31u)));
    c.r[14].d[0] = ld8((c.r[5].w[0]));
    c.r[17].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> (c.r[8].w[0] & 31u)));
    c.r[14].d[0] = c.r[14].d[0] & c.r[17].d[0];
    c.r[17].d[0] = c.r[18].d[0] & 3ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[14], c.r[17].w[0] << (c.r[8].w[0] & 31u));
    c.r[17].d[0] = c.r[14].d[0] & 255ull;
    c.r[14].d[0] = ld8((c.r[5].w[0]));
    c.r[14].d[0] = c.r[14].d[0] | c.r[17].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.budget -= 14;
L_001ED4F8:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[11].d[0]) { set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);  goto L_001ED50C; }
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_001ED50C:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[16].d[0]) { set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  goto L_001ED518; }
    c.r[9].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 1;
L_001ED518:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001ED51C:
    c.r[14].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[14].d[0] != 0ull) { c.r[14].d[0] = c.r[9].d[0] & c.r[21].d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED4B8u | kUnwind; return; } goto L_001ED4B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED660; } }
L_001ED530:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 360u));
    set32(c.r[9], 0u + 128u);
    c.r[4].d[0] = ld64((c.r[4].w[0] + 264u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[13], c.r[7].w[0] + 1u);  if (t) { goto L_001ED558; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_001ED564; } }
L_001ED558:
    c.r[12].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[10], 0u - 4u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001ED564:
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 3855u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[15], 0u + 128u);  if (t) { goto L_001ED5E4; } }
L_001ED580:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { goto L_001ED5C0; } }
    set32(c.r[14], c.r[4].w[0] - c.r[8].w[0]);
    c.r[18].d[0] = ld8((c.r[13].w[0]));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[14].w[0] & 31u)));
    c.r[14].d[0] = ld8((c.r[5].w[0]));
    c.r[17].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> (c.r[8].w[0] & 31u)));
    c.r[14].d[0] = c.r[14].d[0] & c.r[17].d[0];
    c.r[17].d[0] = c.r[18].d[0] & 15ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[14], c.r[17].w[0] << (c.r[8].w[0] & 31u));
    c.r[17].d[0] = c.r[14].d[0] & 255ull;
    c.r[14].d[0] = ld8((c.r[5].w[0]));
    c.r[14].d[0] = c.r[14].d[0] | c.r[17].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.budget -= 14;
L_001ED5C0:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[11].d[0]) { set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);  goto L_001ED5D4; }
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_001ED5D4:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[16].d[0]) { set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  goto L_001ED5E0; }
    c.r[9].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 1;
L_001ED5E0:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001ED5E4:
    c.r[14].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[14].d[0] != 0ull) { c.r[14].d[0] = c.r[9].d[0] & c.r[21].d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED580u | kUnwind; return; } goto L_001ED580; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED660; } }
L_001ED5F8:
    c.r[23].d[0] = ld64((c.r[4].w[0] + 360u));
    set32(c.r[3], ld32((c.r[4].w[0] + 428u)));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[3].w[0] + 1u);  if (t) { goto L_001ED654; } }
L_001ED614:
    c.r[3].d[0] = c.r[22].d[0] & c.r[21].d[0];
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_001ED634; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED630u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001ED630u) [[unlikely]] return; }
L_001ED630:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_001ED634:
    set32(c.r[20], c.r[20].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[3].d[0]; set32(c.r[19], c.r[19].w[0] + c.r[18].w[0]);  if (t) { goto L_001ED648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_001ED650; } }
L_001ED648:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_001ED650:
    c.r[17].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001ED654:
    c.r[3].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[22].d[0] = c.r[16].d[0] & 255ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001ED614u | kUnwind; return; } goto L_001ED614; }
L_001ED660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_001ED664:
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
L_001ED690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED768; } }
    c.r[1].d[0] = c.r[6].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED768; } }
    c.r[1].d[0] = c.r[6].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));  goto L_001ED6D0; }
    c.r[3].d[0] = c.r[6].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED768; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 1;
L_001ED6D0:
    c.r[3].d[0] = c.r[6].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED768; } }
    c.r[1].d[0] = c.r[6].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED768; } }
    c.r[1].d[0] = c.r[6].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));  goto L_001ED704; }
    c.r[3].d[0] = c.r[6].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED768; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 1;
L_001ED704:
    c.r[3].d[0] = c.r[6].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED768; } }
    c.r[1].d[0] = c.r[6].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED768; } }
    c.r[1].d[0] = c.r[6].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[5].w[0] + 3u));  goto L_001ED738; }
    c.r[3].d[0] = c.r[6].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED768; } }
    c.r[5].d[0] = ld8((c.r[5].w[0] + 3u));
    c.budget -= 1;
L_001ED738:
    c.r[3].d[0] = c.r[5].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ED768; } }
    c.r[1].d[0] = c.r[5].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED768; } }
    c.r[1].d[0] = c.r[5].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001ED778; }
    c.r[1].d[0] = c.r[5].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001ED774; } }
L_001ED768:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED774u); set32(c.r[5], c.r[5].w[0] - 19768u);  if (depth < kMaxDepth) unit_0038(c, 515u, depth + 1u); else { c.pc = 0x001E3A40u; return; } if (c.pc != 0x001ED774u) [[unlikely]] return; }
L_001ED774:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001ED778:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001ED780:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001ED7E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[19].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED7CCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001ED7CCu) [[unlikely]] return; }
L_001ED7CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_001ED7E4; }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st64((c.r[19].w[0] + 248u), c.r[2].d[0]);
    c.budget -= 3;
L_001ED7E0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001ED7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED7ECu); set32(c.r[5], c.r[19].w[0] + 496u);  if (depth < kMaxDepth) unit_003B(c, 68u, depth + 1u); else { c.pc = 0x001ED690u; return; } if (c.pc != 0x001ED7ECu) [[unlikely]] return; }
L_001ED7EC:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 496u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[19].w[0] + 256u));  goto L_001ED834; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED808u); set32(c.r[5], c.r[19].w[0] + 496u);  if (depth < kMaxDepth) unit_003C(c, 420u, depth + 1u); else { c.pc = 0x001F3600u; return; } if (c.pc != 0x001ED808u) [[unlikely]] return; }
L_001ED808:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001ED830; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ED830; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED830u); set32(c.r[5], c.r[5].w[0] - 19749u);  if (depth < kMaxDepth) unit_0038(c, 515u, depth + 1u); else { c.pc = 0x001E3A40u; return; } if (c.pc != 0x001ED830u) [[unlikely]] return; }
L_001ED830:
    c.r[2].d[0] = ld64((c.r[19].w[0] + 256u));
    c.budget -= 1;
L_001ED834:
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[17].d[0] + 0ull;  goto L_001ED928; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED84Cu); set32(c.r[5], c.r[19].w[0] + 496u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x001ED84Cu) [[unlikely]] return; }
L_001ED84C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED858u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001ED858u) [[unlikely]] return; }
L_001ED858:
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED878u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001ED878u) [[unlikely]] return; }
L_001ED878:
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED88Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001ED88Cu) [[unlikely]] return; }
L_001ED88C:
    set32(c.r[2], ld32((c.r[19].w[0] + 780u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001ED90C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8A4u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ED8A4u) [[unlikely]] return; }
L_001ED8A4:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[5], ld32((c.r[29].w[0] + 104u)));  goto L_001ED920; }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 496u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[18].d[0] + 0ull;  goto L_001ED8F4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8C8u); set32(c.r[5], c.r[19].w[0] + 496u);  if (depth < kMaxDepth) unit_003C(c, 420u, depth + 1u); else { c.pc = 0x001F3600u; return; } if (c.pc != 0x001ED8C8u) [[unlikely]] return; }
L_001ED8C8:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001ED8F0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001ED8E0u) [[unlikely]] return; }
L_001ED8E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED8F0u); set32(c.r[5], c.r[5].w[0] - 19749u);  if (depth < kMaxDepth) unit_0038(c, 515u, depth + 1u); else { c.pc = 0x001E3A40u; return; } if (c.pc != 0x001ED8F0u) [[unlikely]] return; }
L_001ED8F0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001ED8F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED904u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 133u, depth + 1u); else { c.pc = 0x001F10A0u; return; } if (c.pc != 0x001ED904u) [[unlikely]] return; }
L_001ED904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ED91C; } }
L_001ED90C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED91Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 133u, depth + 1u); else { c.pc = 0x001F10A0u; return; } if (c.pc != 0x001ED91Cu) [[unlikely]] return; }
L_001ED91C:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_001ED920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED928u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001ED928u) [[unlikely]] return; }
L_001ED928:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED934u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001ED934u) [[unlikely]] return; }
L_001ED934:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001ED960:
    set32(c.r[29], c.r[29].w[0] - 144u);
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
    c.r[2].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001ED9A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9A8u); set32(c.r[5], c.r[5].w[0] - 19726u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001ED9A8u) [[unlikely]] return; }
L_001ED9A8:
    c.r[3].d[0] = ld64((c.r[21].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(1ll);  goto L_001ED9C4; }
    c.r[2].d[0] = c.r[3].d[0] | 8ull;
    st64((c.r[21].w[0] + 248u), c.r[2].d[0]);
    c.r[5].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
L_001ED9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9CCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001ED9CCu) [[unlikely]] return; }
L_001ED9CC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { c.r[16].d[0] = c.r[19].d[0] << 32;  goto L_001ED9F0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ED9E8u); set32(c.r[5], c.r[5].w[0] - 19701u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001ED9E8u) [[unlikely]] return; }
L_001ED9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001EDB6C; } }
L_001ED9F0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA04u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EDA04u) [[unlikely]] return; }
L_001EDA04:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA14u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EDA14u) [[unlikely]] return; }
L_001EDA14:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EDA20u) [[unlikely]] return; }
L_001EDA20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  goto L_001EDA3C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA34u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EDA34u) [[unlikely]] return; }
L_001EDA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDB68; } }
L_001EDA3C:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EDA4C; } }
L_001EDA48:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001EDA4C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EDA48u | kUnwind; return; } goto L_001EDA48; } }
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));  goto L_001EDA88; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDA80u); set32(c.r[16], 0u - 1u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDA80u) [[unlikely]] return; }
L_001EDA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - c.r[18].w[0]);  if (t) { goto L_001EDAAC; } }
L_001EDA88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[22], c.r[17].w[0] + 1u);  if (t) { goto L_001EDAA4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDAA0u); set32(c.r[5], c.r[5].w[0] - 19641u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDAA0u) [[unlikely]] return; }
L_001EDAA0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001EDAA4:
    set32(c.r[17], c.r[22].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] - c.r[18].w[0]);
    c.budget -= 2;
L_001EDAAC:
    c.r[7].d[0] = c.r[19].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDACCu); set32(c.r[9], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_003C(c, 85u, depth + 1u); else { c.pc = 0x001F0A50u; return; } if (c.pc != 0x001EDACCu) [[unlikely]] return; }
L_001EDACC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDADCu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001EDADCu) [[unlikely]] return; }
L_001EDADC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { st32((c.r[19].w[0]), c.r[16].w[0]);  goto L_001EDB0C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDAF8u); set32(c.r[5], c.r[5].w[0] - 19602u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDAF8u) [[unlikely]] return; }
L_001EDAF8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EDB04u) [[unlikely]] return; }
L_001EDB04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDB68; } }
L_001EDB0C:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB34u); st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003C(c, 161u, depth + 1u); else { c.pc = 0x001F1550u; return; } if (c.pc != 0x001EDB34u) [[unlikely]] return; }
L_001EDB34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB44u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EDB44u) [[unlikely]] return; }
L_001EDB44:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB50u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EDB50u) [[unlikely]] return; }
L_001EDB50:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001EDB68; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDB68u); set32(c.r[5], c.r[5].w[0] - 19561u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EDB68u) [[unlikely]] return; }
L_001EDB68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001EDB6C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001EDB90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EDBD0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBD0u); set32(c.r[5], c.r[5].w[0] - 19520u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EDBD0u) [[unlikely]] return; }
L_001EDBD0:
    c.r[3].d[0] = ld64((c.r[20].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);  goto L_001EDBEC; }
    c.r[2].d[0] = c.r[3].d[0] | 8ull;
    st64((c.r[20].w[0] + 248u), c.r[2].d[0]);
    c.r[5].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
L_001EDBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDBF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001EDBF4u) [[unlikely]] return; }
L_001EDBF4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] << 32;  goto L_001EDC18; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC10u); set32(c.r[5], c.r[5].w[0] - 19495u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDC10u) [[unlikely]] return; }
L_001EDC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001EDD38; } }
L_001EDC18:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC2Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EDC2Cu) [[unlikely]] return; }
L_001EDC2C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC3Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EDC3Cu) [[unlikely]] return; }
L_001EDC3C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EDC48u) [[unlikely]] return; }
L_001EDC48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);  goto L_001EDC64; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDC5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EDC5Cu) [[unlikely]] return; }
L_001EDC5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDD34; } }
L_001EDC64:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EDC74; } }
L_001EDC70:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001EDC74:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EDC70u | kUnwind; return; } goto L_001EDC70; } }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001EDC9C; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_001EDC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCA4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001EDCA4u) [[unlikely]] return; }
L_001EDCA4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_001EDCD4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCC0u); set32(c.r[5], c.r[5].w[0] - 19462u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDCC0u) [[unlikely]] return; }
L_001EDCC0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCCCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EDCCCu) [[unlikely]] return; }
L_001EDCCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDD34; } }
L_001EDCD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDCE8u); st32((c.r[18].w[0] + 8u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x001EDCE8u) [[unlikely]] return; }
L_001EDCE8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD00u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 161u, depth + 1u); else { c.pc = 0x001F1550u; return; } if (c.pc != 0x001EDD00u) [[unlikely]] return; }
L_001EDD00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EDD10u) [[unlikely]] return; }
L_001EDD10:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD1Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EDD1Cu) [[unlikely]] return; }
L_001EDD1C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001EDD34; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD34u); set32(c.r[5], c.r[5].w[0] - 19421u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDD34u) [[unlikely]] return; }
L_001EDD34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001EDD38:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EDD60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EDDA0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDD98u); set32(c.r[5], c.r[5].w[0] - 19378u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EDD98u) [[unlikely]] return; }
L_001EDD98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld64((c.r[18].w[0] + 248u));  if (t) { goto L_001EDDDC; } }
L_001EDDA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EDDD8; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDDD8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDC4u); set32(c.r[5], c.r[5].w[0] - 19354u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDDC4u) [[unlikely]] return; }
L_001EDDC4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDDD0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EDDD0u) [[unlikely]] return; }
L_001EDDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001EDE9C; } }
L_001EDDD8:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 248u));
    c.budget -= 1;
L_001EDDDC:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], 0u + 7u);  goto L_001EDDF4; }
    c.r[2].d[0] = c.r[3].d[0] | 8ull;
    st64((c.r[18].w[0] + 248u), c.r[2].d[0]);
    set32(c.r[6], 0u + 7u);
    c.budget -= 3;
L_001EDDF4:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001EDE20; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE0Cu); set32(c.r[5], c.r[5].w[0] - 19333u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDE0Cu) [[unlikely]] return; }
L_001EDE0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EDE18u) [[unlikely]] return; }
L_001EDE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EDE98; } }
L_001EDE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE28u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EDE28u) [[unlikely]] return; }
L_001EDE28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE38u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EDE38u) [[unlikely]] return; }
L_001EDE38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EDE44u) [[unlikely]] return; }
L_001EDE44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EDE98; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 77u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 76u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 78u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    st8((c.r[29].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 74u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 72u));
    st8((c.r[29].w[0] + 70u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 75u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 73u));
    st8((c.r[29].w[0] + 67u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDE98u); st16((c.r[29].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003C(c, 159u, depth + 1u); else { c.pc = 0x001F14F0u; return; } if (c.pc != 0x001EDE98u) [[unlikely]] return; }
L_001EDE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001EDE9C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EDEB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
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
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EDF00; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDEF8u); set32(c.r[5], c.r[5].w[0] - 19305u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EDEF8u) [[unlikely]] return; }
L_001EDEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001EDF68; } }
L_001EDF00:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDF2C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF18u); set32(c.r[5], c.r[5].w[0] - 19280u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDF18u) [[unlikely]] return; }
L_001EDF18:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EDF24u) [[unlikely]] return; }
L_001EDF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001EE0EC; } }
L_001EDF2C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001EDF64; } }
    c.r[2].d[0] = ld64((c.r[20].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EDF64; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF50u); set32(c.r[5], c.r[5].w[0] - 19256u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDF50u) [[unlikely]] return; }
L_001EDF50:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EDF5Cu) [[unlikely]] return; }
L_001EDF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE0E8; } }
L_001EDF64:
    c.r[5].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001EDF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF70u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001EDF70u) [[unlikely]] return; }
L_001EDF70:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] << 32;  goto L_001EDF94; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDF8Cu); set32(c.r[5], c.r[5].w[0] - 19235u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EDF8Cu) [[unlikely]] return; }
L_001EDF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE0E8; } }
L_001EDF94:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFA8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EDFA8u) [[unlikely]] return; }
L_001EDFA8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFB8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EDFB8u) [[unlikely]] return; }
L_001EDFB8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EDFC4u) [[unlikely]] return; }
L_001EDFC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[22], c.r[19].w[0] + c.r[16].w[0]);  goto L_001EDFE0; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFD8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EDFD8u) [[unlikely]] return; }
L_001EDFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE0E8; } }
L_001EDFE0:
    set32(c.r[4], c.r[19].w[0] + 1u);
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EDFF0u); st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0012(c, 380u, depth + 1u); else { c.pc = 0x0014AF00u; return; } if (c.pc != 0x001EDFF0u) [[unlikely]] return; }
L_001EDFF0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[19].d[0] + 0ull;  goto L_001EE020; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE014u); set32(c.r[5], c.r[5].w[0] - 19193u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE014u) [[unlikely]] return; }
L_001EE014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE0E8; } }
L_001EE01C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001EE020:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EE01Cu | kUnwind; return; } goto L_001EE01C; } }
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE044u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0012(c, 380u, depth + 1u); else { c.pc = 0x0014AF00u; return; } if (c.pc != 0x001EE044u) [[unlikely]] return; }
L_001EE044:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_001EE070; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE068u); set32(c.r[5], c.r[5].w[0] - 19156u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE068u) [[unlikely]] return; }
L_001EE068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE0E8; } }
L_001EE070:
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE0A4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 214u, depth + 1u); else { c.pc = 0x003BDD10u; return; } if (c.pc != 0x001EE088u) [[unlikely]] return; }
L_001EE088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE0A4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE09Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 214u, depth + 1u); else { c.pc = 0x003BDD10u; return; } if (c.pc != 0x001EE09Cu) [[unlikely]] return; }
L_001EE09C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  goto L_001EE0C8; }
L_001EE0A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0B4u); set32(c.r[5], c.r[5].w[0] - 19118u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE0B4u) [[unlikely]] return; }
L_001EE0B4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0C0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EE0C0u) [[unlikely]] return; }
L_001EE0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE0E8; } }
L_001EE0C8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0DCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 213u, depth + 1u); else { c.pc = 0x001F1CB0u; return; } if (c.pc != 0x001EE0DCu) [[unlikely]] return; }
L_001EE0DC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE0E8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EE0E8u) [[unlikely]] return; }
L_001EE0E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001EE0EC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001EE110:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EE168; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE160u); set32(c.r[5], c.r[5].w[0] - 19100u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EE160u) [[unlikely]] return; }
L_001EE160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001EE1D0; } }
L_001EE168:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE194; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE180u); set32(c.r[5], c.r[5].w[0] - 19075u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE180u) [[unlikely]] return; }
L_001EE180:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE18Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE18Cu) [[unlikely]] return; }
L_001EE18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_001EE4D0; } }
L_001EE194:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_001EE1CC; } }
    c.r[2].d[0] = ld64((c.r[23].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE1CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1B8u); set32(c.r[5], c.r[5].w[0] - 19051u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE1B8u) [[unlikely]] return; }
L_001EE1B8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE1C4u) [[unlikely]] return; }
L_001EE1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE4CC; } }
L_001EE1CC:
    c.r[5].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001EE1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1D8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001EE1D8u) [[unlikely]] return; }
L_001EE1D8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { c.r[16].d[0] = c.r[16].d[0] << 32;  goto L_001EE1FC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE1F4u); set32(c.r[5], c.r[5].w[0] - 19030u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE1F4u) [[unlikely]] return; }
L_001EE1F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE4CC; } }
L_001EE1FC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE210u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EE210u) [[unlikely]] return; }
L_001EE210:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE220u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EE220u) [[unlikely]] return; }
L_001EE220:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE22Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE22Cu) [[unlikely]] return; }
L_001EE22C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[20].w[0] + c.r[16].w[0]);  goto L_001EE248; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE240u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EE240u) [[unlikely]] return; }
L_001EE240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE4CC; } }
L_001EE248:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EE258; } }
L_001EE254:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_001EE258:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EE254u | kUnwind; return; } goto L_001EE254; } }
    set32(c.r[3], c.r[2].w[0] + 12u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));  goto L_001EE2A4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE290u); set32(c.r[5], c.r[5].w[0] - 19002u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE290u) [[unlikely]] return; }
L_001EE290:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE29Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EE29Cu) [[unlikely]] return; }
L_001EE29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE4CC; } }
L_001EE2A4:
    set32(c.r[30], c.r[2].w[0] + 11u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 3u));
    c.r[7].d[0] = c.r[3].d[0] << 24;
    c.r[19].d[0] = ld8((c.r[2].w[0] + 10u));
    c.r[6].d[0] = c.r[4].d[0] << 16;
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 5u));
    c.r[6].d[0] = c.r[7].d[0] + c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 8;
    c.r[17].d[0] = ld8((c.r[2].w[0] + 9u));
    c.r[6].d[0] = c.r[5].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[5].d[0] = ld8((c.r[2].w[0] + 6u));
    c.r[6].d[0] = c.r[4].d[0] << 24;
    st64((c.r[29].w[0] + 192u), c.r[3].d[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 7u));
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[5].d[0] = c.r[6].d[0] + c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 8;
    c.r[2].d[0] = c.r[4].d[0] + c.r[5].d[0];
    c.r[2].d[0] = c.r[3].d[0] + c.r[2].d[0];
    c.budget -= 25;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 176u), c.r[2].d[0]);  if (t) { goto L_001EE318; } }
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EE36C; } }
L_001EE318:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_001EE338; }
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EE36C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001EE338:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 3u);  goto L_001EE354; }
    goto L_001EE340;
L_001EE33C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001EE340:
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EE36C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001EE354:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;  goto L_001EE394; }
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001EE390; } }
L_001EE36C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE37Cu); set32(c.r[5], c.r[5].w[0] - 18984u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE37Cu) [[unlikely]] return; }
L_001EE37C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE388u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EE388u) [[unlikely]] return; }
L_001EE388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE4CC; } }
L_001EE390:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_001EE394:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[30].d[0] + 0ull;  goto L_001EE3BC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE3ACu); set32(c.r[5], c.r[5].w[0] - 18942u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE3ACu) [[unlikely]] return; }
L_001EE3AC:
    c.r[16].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE3BC; } }
L_001EE3B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001EE3BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EE3B8u | kUnwind; return; } goto L_001EE3B8; } }
    c.r[22].d[0] = c.r[19].d[0] & 255ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[22].w[0] << 2);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE3ECu); c.r[5].d[0] = c.r[5].d[0] >> 32;  if (depth < kMaxDepth) unit_0038(c, 540u, depth + 1u); else { c.pc = 0x001E3ED0u; return; } if (c.pc != 0x001EE3ECu) [[unlikely]] return; }
L_001EE3EC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001EE480; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE404u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EE404u) [[unlikely]] return; }
L_001EE404:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE414u); set32(c.r[5], c.r[5].w[0] - 18900u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE414u) [[unlikely]] return; }
L_001EE414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE4CC; } }
L_001EE41C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { goto L_001EE42C; } }
L_001EE42C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;  goto L_001EE448; }
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EE42Cu | kUnwind; return; } goto L_001EE42C; }
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001EE448:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_001EE480; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE460u); set32(c.r[5], c.r[5].w[0] - 19002u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE460u) [[unlikely]] return; }
L_001EE460:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE46Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EE46Cu) [[unlikely]] return; }
L_001EE46C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE478u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EE478u) [[unlikely]] return; }
L_001EE478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE4CC; } }
L_001EE480:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EE41Cu | kUnwind; return; } goto L_001EE41C; }
    c.r[7].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[11].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE4B4u); st64((c.r[29].w[0]), c.r[19].d[0]);  if (depth < kMaxDepth) unit_003C(c, 214u, depth + 1u); else { c.pc = 0x001F1CF0u; return; } if (c.pc != 0x001EE4B4u) [[unlikely]] return; }
L_001EE4B4:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE4C0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EE4C0u) [[unlikely]] return; }
L_001EE4C0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE4CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EE4CCu) [[unlikely]] return; }
L_001EE4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_001EE4D0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001EE500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EE540; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE538u); set32(c.r[5], c.r[5].w[0] - 18873u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EE538u) [[unlikely]] return; }
L_001EE538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 9u);  if (t) { goto L_001EE5A8; } }
L_001EE540:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE56C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE558u); set32(c.r[5], c.r[5].w[0] - 18848u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE558u) [[unlikely]] return; }
L_001EE558:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE564u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE564u) [[unlikely]] return; }
L_001EE564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001EE664; } }
L_001EE56C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EE5A4; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE5A4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE590u); set32(c.r[5], c.r[5].w[0] - 18824u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE590u) [[unlikely]] return; }
L_001EE590:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE59Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE59Cu) [[unlikely]] return; }
L_001EE59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE660; } }
L_001EE5A4:
    set32(c.r[6], 0u + 9u);
    c.budget -= 1;
L_001EE5A8:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001EE5D4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5C0u); set32(c.r[5], c.r[5].w[0] - 18803u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE5C0u) [[unlikely]] return; }
L_001EE5C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE5CCu) [[unlikely]] return; }
L_001EE5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE660; } }
L_001EE5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5DCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EE5DCu) [[unlikely]] return; }
L_001EE5DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5ECu); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EE5ECu) [[unlikely]] return; }
L_001EE5EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE5F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE5F8u) [[unlikely]] return; }
L_001EE5F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE660; } }
    c.r[6].d[0] = ld8((c.r[29].w[0] + 64u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 65u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 66u));
    c.r[8].d[0] = c.r[6].d[0] << 24;
    c.r[7].d[0] = c.r[3].d[0] << 16;
    c.r[6].d[0] = ld8((c.r[29].w[0] + 67u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 68u));
    c.r[7].d[0] = c.r[8].d[0] + c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[7].d[0] = c.r[2].d[0] + c.r[7].d[0];
    c.r[8].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 69u));
    c.r[6].d[0] = c.r[6].d[0] + c.r[7].d[0];
    c.r[3].d[0] = ld8((c.r[29].w[0] + 70u));
    c.r[7].d[0] = c.r[2].d[0] << 16;
    c.r[7].d[0] = c.r[8].d[0] + c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 71u));
    c.r[3].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.r[8].d[0] = ld8((c.r[29].w[0] + 72u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE660u); c.r[7].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (depth < kMaxDepth) unit_003C(c, 230u, depth + 1u); else { c.pc = 0x001F1F30u; return; } if (c.pc != 0x001EE660u) [[unlikely]] return; }
L_001EE660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001EE664:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EE680:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EE6C0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6B8u); set32(c.r[5], c.r[5].w[0] - 18775u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EE6B8u) [[unlikely]] return; }
L_001EE6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 9u);  if (t) { goto L_001EE728; } }
L_001EE6C0:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE6EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6D8u); set32(c.r[5], c.r[5].w[0] - 18750u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE6D8u) [[unlikely]] return; }
L_001EE6D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE6E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE6E4u) [[unlikely]] return; }
L_001EE6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001EE7E4; } }
L_001EE6EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EE724; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE724; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE710u); set32(c.r[5], c.r[5].w[0] - 18726u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE710u) [[unlikely]] return; }
L_001EE710:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE71Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE71Cu) [[unlikely]] return; }
L_001EE71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE7E0; } }
L_001EE724:
    set32(c.r[6], 0u + 9u);
    c.budget -= 1;
L_001EE728:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001EE754; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE740u); set32(c.r[5], c.r[5].w[0] - 18705u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE740u) [[unlikely]] return; }
L_001EE740:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE74Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE74Cu) [[unlikely]] return; }
L_001EE74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE7E0; } }
L_001EE754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE75Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EE75Cu) [[unlikely]] return; }
L_001EE75C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE76Cu); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EE76Cu) [[unlikely]] return; }
L_001EE76C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE778u) [[unlikely]] return; }
L_001EE778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE7E0; } }
    c.r[6].d[0] = ld8((c.r[29].w[0] + 64u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 65u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 66u));
    c.r[8].d[0] = c.r[6].d[0] << 24;
    c.r[7].d[0] = c.r[3].d[0] << 16;
    c.r[6].d[0] = ld8((c.r[29].w[0] + 67u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 68u));
    c.r[7].d[0] = c.r[8].d[0] + c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 8;
    c.r[7].d[0] = c.r[2].d[0] + c.r[7].d[0];
    c.r[8].d[0] = c.r[3].d[0] << 24;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 69u));
    c.r[6].d[0] = c.r[6].d[0] + c.r[7].d[0];
    c.r[3].d[0] = ld8((c.r[29].w[0] + 70u));
    c.r[7].d[0] = c.r[2].d[0] << 16;
    c.r[7].d[0] = c.r[8].d[0] + c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 71u));
    c.r[3].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.r[8].d[0] = ld8((c.r[29].w[0] + 72u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE7E0u); c.r[7].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (depth < kMaxDepth) unit_003C(c, 211u, depth + 1u); else { c.pc = 0x001F1C70u; return; } if (c.pc != 0x001EE7E0u) [[unlikely]] return; }
L_001EE7E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001EE7E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EE800:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EE844; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE83Cu); set32(c.r[5], c.r[5].w[0] - 18677u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EE83Cu) [[unlikely]] return; }
L_001EE83C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] << 32;  if (t) { goto L_001EE8D4; } }
L_001EE844:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_001EE870; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE85Cu); set32(c.r[5], c.r[5].w[0] - 18652u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE85Cu) [[unlikely]] return; }
L_001EE85C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE868u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE868u) [[unlikely]] return; }
L_001EE868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001EE988; } }
L_001EE870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE898; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE884u); set32(c.r[5], c.r[5].w[0] - 18628u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE884u) [[unlikely]] return; }
L_001EE884:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE890u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE890u) [[unlikely]] return; }
L_001EE890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE984; } }
L_001EE898:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001EE8D0; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EE8D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8BCu); set32(c.r[5], c.r[5].w[0] - 18603u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE8BCu) [[unlikely]] return; }
L_001EE8BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE8C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE8C8u) [[unlikely]] return; }
L_001EE8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE984; } }
L_001EE8D0:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_001EE8D4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_001EE8E8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_001EE8E8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 492u));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[17].d[0] = 0ull + 0ull;  goto L_001EE954; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE904u); set32(c.r[5], c.r[5].w[0] - 18582u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE904u) [[unlikely]] return; }
L_001EE904:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE910u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE910u) [[unlikely]] return; }
L_001EE910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EE984; } }
L_001EE918:
    set32(c.r[5], c.r[29].w[0] + 604u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE924u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EE924u) [[unlikely]] return; }
L_001EE924:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 604u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE934u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EE934u) [[unlikely]] return; }
L_001EE934:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 604u));
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 605u));
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_001EE954:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EE918u | kUnwind; return; } goto L_001EE918; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE96Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EE96Cu) [[unlikely]] return; }
L_001EE96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EE984; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE984u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003C(c, 244u, depth + 1u); else { c.pc = 0x001F2350u; return; } if (c.pc != 0x001EE984u) [[unlikely]] return; }
L_001EE984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001EE988:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_001EE9A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EE9E4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9DCu); set32(c.r[5], c.r[5].w[0] - 18554u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EE9DCu) [[unlikely]] return; }
L_001EE9DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 506u));  if (t) { goto L_001EEA88; } }
L_001EE9E4:
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[18].w[0] + 506u));  goto L_001EEA10; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EE9FCu); set32(c.r[5], c.r[5].w[0] - 18529u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EE9FCu) [[unlikely]] return; }
L_001EE9FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA08u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEA08u) [[unlikely]] return; }
L_001EEA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001EEC24; } }
L_001EEA10:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001EEA48; } }
    c.r[2].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EEA48; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA34u); set32(c.r[5], c.r[5].w[0] - 18505u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EEA34u) [[unlikely]] return; }
L_001EEA34:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA40u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEA40u) [[unlikely]] return; }
L_001EEA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEC20; } }
L_001EEA48:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EEA84; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEA84; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA70u); set32(c.r[5], c.r[5].w[0] - 18480u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EEA70u) [[unlikely]] return; }
L_001EEA70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEA7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEA7Cu) [[unlikely]] return; }
L_001EEA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEC20; } }
L_001EEA84:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 506u));
    c.budget -= 1;
L_001EEA88:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_001EEA9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 1u);  if (t) { goto L_001EEAA8; } }
L_001EEA9C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], 0u + 2u);  goto L_001EEAA8; }
    set32(c.r[19], 0u + 6u);
    c.budget -= 1;
L_001EEAA8:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001EEADC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEAC8u); set32(c.r[5], c.r[5].w[0] - 18459u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EEAC8u) [[unlikely]] return; }
L_001EEAC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEAD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEAD4u) [[unlikely]] return; }
L_001EEAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEC20; } }
L_001EEADC:
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEAE8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EEAE8u) [[unlikely]] return; }
L_001EEAE8:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEAF8u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EEAF8u) [[unlikely]] return; }
L_001EEAF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEB04u) [[unlikely]] return; }
L_001EEB04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EEC20; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 506u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_001EEBAC; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 88u));
    st8((c.r[18].w[0] + 524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 36u));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001EEC14; }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 88u));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 488u)));  goto L_001EEB5C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEB54u); set32(c.r[5], c.r[5].w[0] - 18431u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EEB54u) [[unlikely]] return; }
L_001EEB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEC20; } }
L_001EEB5C:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st16((c.r[18].w[0] + 526u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 88u));
    set32(c.r[4], ld32((c.r[18].w[0] + 488u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    st16((c.r[18].w[0] + 528u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 88u));
    set32(c.r[4], ld32((c.r[18].w[0] + 488u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 530u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EEC10; } }
L_001EEBAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 88u));  goto L_001EEBD8; }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 88u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 89u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[18].w[0] + 532u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 530u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 528u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 526u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EEC10; } }
L_001EEBD8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 89u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[18].w[0] + 526u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 90u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 91u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[18].w[0] + 528u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 92u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 93u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[18].w[0] + 530u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 14;
L_001EEC10:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001EEC14:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC20u); set32(c.r[6], c.r[18].w[0] + 524u);  if (depth < kMaxDepth) unit_003C(c, 386u, depth + 1u); else { c.pc = 0x001F2E80u; return; } if (c.pc != 0x001EEC20u) [[unlikely]] return; }
L_001EEC20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001EEC24:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001EEC40:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EEC80; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC78u); set32(c.r[5], c.r[5].w[0] - 18398u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EEC78u) [[unlikely]] return; }
L_001EEC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 506u));  if (t) { goto L_001EECE8; } }
L_001EEC80:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EECAC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEC98u); set32(c.r[5], c.r[5].w[0] - 18373u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EEC98u) [[unlikely]] return; }
L_001EEC98:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EECA4u) [[unlikely]] return; }
L_001EECA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001EEF04; } }
L_001EECAC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EECE4; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EECE4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECD0u); set32(c.r[5], c.r[5].w[0] - 18349u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EECD0u) [[unlikely]] return; }
L_001EECD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EECDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EECDCu) [[unlikely]] return; }
L_001EECDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEF00; } }
L_001EECE4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 506u));
    c.budget -= 1;
L_001EECE8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], 0u + 2u);  goto L_001EEDA4; }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 492u));  goto L_001EED1C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED14u); set32(c.r[5], c.r[5].w[0] - 18328u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EED14u) [[unlikely]] return; }
L_001EED14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EED4C; } }
L_001EED1C:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EED4C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED38u); set32(c.r[5], c.r[5].w[0] - 18303u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EED38u) [[unlikely]] return; }
L_001EED38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EED44u) [[unlikely]] return; }
L_001EED44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEF00; } }
L_001EED4C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[6].d[0] = c.r[16].d[0] << 32;  goto L_001EED78; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED64u); set32(c.r[5], c.r[5].w[0] - 18275u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EED64u) [[unlikely]] return; }
L_001EED64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED70u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EED70u) [[unlikely]] return; }
L_001EED70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEF00; } }
L_001EED78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED88u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EED88u) [[unlikely]] return; }
L_001EED88:
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EED9Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EED9Cu) [[unlikely]] return; }
L_001EED9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 494u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_001EEED4; } }
L_001EEDA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_001EEE48; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[6].d[0] = c.r[16].d[0] << 32;  goto L_001EEDDC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEDC8u); set32(c.r[5], c.r[5].w[0] - 18303u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EEDC8u) [[unlikely]] return; }
L_001EEDC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEDD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEDD4u) [[unlikely]] return; }
L_001EEDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEF00; } }
L_001EEDDC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEDECu); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EEDECu) [[unlikely]] return; }
L_001EEDEC:
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE00u); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EEE00u) [[unlikely]] return; }
L_001EEE00:
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 494u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 328u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 329u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[18].w[0] + 622u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 330u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 331u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[18].w[0] + 624u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 332u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 333u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 626u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EEED4; } }
L_001EEE48:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001EEEB4; }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001EEE7C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE68u); set32(c.r[5], c.r[5].w[0] - 18303u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EEE68u) [[unlikely]] return; }
L_001EEE68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEE74u) [[unlikely]] return; }
L_001EEE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEF00; } }
L_001EEE7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE84u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EEE84u) [[unlikely]] return; }
L_001EEE84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEE94u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EEE94u) [[unlikely]] return; }
L_001EEE94:
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 494u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 320u));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 321u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 628u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001EEED4; } }
L_001EEEB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEC0u); set32(c.r[5], c.r[5].w[0] - 18252u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EEEC0u) [[unlikely]] return; }
L_001EEEC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEECCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEECCu) [[unlikely]] return; }
L_001EEECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EEF00; } }
L_001EEED4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEEE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEEE0u) [[unlikely]] return; }
L_001EEEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EEF00; } }
    c.r[7].d[0] = ld16((c.r[18].w[0] + 494u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], c.r[18].w[0] + 620u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF00u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_003C(c, 154u, depth + 1u); else { c.pc = 0x001F1410u; return; } if (c.pc != 0x001EEF00u) [[unlikely]] return; }
L_001EEF00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001EEF04:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_001EEF20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EEF68; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF60u); set32(c.r[5], c.r[5].w[0] - 18210u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EEF60u) [[unlikely]] return; }
L_001EEF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001EEF98; } }
L_001EEF68:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EEF94; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF80u); set32(c.r[5], c.r[5].w[0] - 18185u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EEF80u) [[unlikely]] return; }
L_001EEF80:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEF8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEF8Cu) [[unlikely]] return; }
L_001EEF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_001EF1DC; } }
L_001EEF94:
    c.r[5].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001EEF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001EEFA0u) [[unlikely]] return; }
L_001EEFA0:
    c.r[20].d[0] = c.r[16].d[0] << 32;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFBCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EEFBCu) [[unlikely]] return; }
L_001EEFBC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFCCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EEFCCu) [[unlikely]] return; }
L_001EEFCC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EEFD8u) [[unlikely]] return; }
L_001EEFD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + c.r[20].w[0]);  goto L_001EEFF4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EEFECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EEFECu) [[unlikely]] return; }
L_001EEFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF1D8; } }
L_001EEFF4:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EF004; } }
L_001EF000:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001EF004:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF000u | kUnwind; return; } goto L_001EF000; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));  goto L_001EF050; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF038u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EF038u) [[unlikely]] return; }
L_001EF038:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001EF040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF048u); set32(c.r[5], c.r[5].w[0] - 18161u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF048u) [[unlikely]] return; }
L_001EF048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF1D8; } }
L_001EF050:
    set32(c.r[2], 0u + 8u);
    st8((c.r[29].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 100u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { goto L_001EF06C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 6u);  if (t) { goto L_001EF070; } }
L_001EF06C:
    set32(c.r[4], 0u + 10u);
    c.budget -= 1;
L_001EF070:
    set32(c.r[2], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[20].w[0] - c.r[2].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { mmi::div(c, 0, c.r[3].w[0], c.r[4].w[0]);  goto L_001EF0AC; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF094u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EF094u) [[unlikely]] return; }
L_001EF094:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF0A4u); set32(c.r[5], c.r[5].w[0] - 18140u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF0A4u) [[unlikely]] return; }
L_001EF0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF1D8; } }
L_001EF0AC:
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[3].d[0] << 2;
    st64((c.r[29].w[0] + 112u), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF0D0u); c.r[5].d[0] = c.r[2].d[0] << 1;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001EF0D0u) [[unlikely]] return; }
L_001EF0D0:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_001EF190; } }
L_001EF0E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 100u));
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_001EF120; } }
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_001EF174; } }
L_001EF120:
    c.r[6].d[0] = ld8((c.r[16].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 6u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 7u));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 8u);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 21;
L_001EF174:
    c.r[6].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] << 8);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 2u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 7;
L_001EF190:
    c.r[3].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[4].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF0E0u | kUnwind; return; } goto L_001EF0E0; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF1C0u); st32((c.r[29].w[0] + 96u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_003C(c, 143u, depth + 1u); else { c.pc = 0x001F1250u; return; } if (c.pc != 0x001EF1C0u) [[unlikely]] return; }
L_001EF1C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF1CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EF1CCu) [[unlikely]] return; }
L_001EF1CC:
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF1D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EF1D8u) [[unlikely]] return; }
L_001EF1D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_001EF1DC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001EF200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001EF24C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF244u); set32(c.r[5], c.r[5].w[0] - 18114u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EF244u) [[unlikely]] return; }
L_001EF244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001EF2D0; } }
L_001EF24C:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_001EF278; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF264u); set32(c.r[5], c.r[5].w[0] - 18089u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF264u) [[unlikely]] return; }
L_001EF264:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF270u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EF270u) [[unlikely]] return; }
L_001EF270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001EF4A8; } }
L_001EF278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF294; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF28Cu); set32(c.r[5], c.r[5].w[0] - 18065u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF28Cu) [[unlikely]] return; }
L_001EF28C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF2CC; } }
L_001EF294:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EF2CC; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF2CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF2B8u); set32(c.r[5], c.r[5].w[0] - 18041u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF2B8u) [[unlikely]] return; }
L_001EF2B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF2C4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EF2C4u) [[unlikely]] return; }
L_001EF2C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF4A4; } }
L_001EF2CC:
    c.r[5].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001EF2D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF2D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001EF2D8u) [[unlikely]] return; }
L_001EF2D8:
    c.r[21].d[0] = c.r[19].d[0] << 32;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 32);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF2F4u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EF2F4u) [[unlikely]] return; }
L_001EF2F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF304u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EF304u) [[unlikely]] return; }
L_001EF304:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF310u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EF310u) [[unlikely]] return; }
L_001EF310:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + c.r[21].w[0]);  goto L_001EF32C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF324u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EF324u) [[unlikely]] return; }
L_001EF324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF4A4; } }
L_001EF32C:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001EF33C; } }
L_001EF338:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001EF33C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001EF338u | kUnwind; return; } goto L_001EF338; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));  goto L_001EF388; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF370u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EF370u) [[unlikely]] return; }
L_001EF370:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF380u); set32(c.r[5], c.r[5].w[0] - 18020u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF380u) [[unlikely]] return; }
L_001EF380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF4A4; } }
L_001EF388:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 2u);  goto L_001EF3A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF3A0u); set32(c.r[5], c.r[5].w[0] - 17999u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF3A0u) [[unlikely]] return; }
L_001EF3A0:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[19].w[0] + 2u);
    c.budget -= 2;
L_001EF3A8:
    c.r[20].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[19], c.r[2].w[0] - c.r[16].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF3CCu); set32(c.r[9], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_003C(c, 85u, depth + 1u); else { c.pc = 0x001F0A50u; return; } if (c.pc != 0x001EF3CCu) [[unlikely]] return; }
L_001EF3CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - c.r[19].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = c.r[2].d[0] << 32;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[9].d[0] = c.r[9].d[0] >> 32;  if (t) { goto L_001EF3F4; } }
    c.r[1].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[8], c.r[16].w[0] + c.r[19].w[0]);  goto L_001EF418; }
L_001EF3F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF400u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EF400u) [[unlikely]] return; }
L_001EF400:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF410u); set32(c.r[5], c.r[5].w[0] - 17951u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF410u) [[unlikely]] return; }
L_001EF410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF4A4; } }
L_001EF418:
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 2u));
    set32(c.r[5], c.r[2].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[8].w[0] + 3u));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[1].d[0] = c.r[2].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[9].d[0] < c.r[2].d[0] ? 1ull : 0ull;  goto L_001EF45C; }
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[9].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001EF45C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_001EF488; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF470u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EF470u) [[unlikely]] return; }
L_001EF470:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF480u); set32(c.r[5], c.r[5].w[0] - 17908u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF480u) [[unlikely]] return; }
L_001EF480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF4A4; } }
L_001EF488:
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF498u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 174u, depth + 1u); else { c.pc = 0x001F1800u; return; } if (c.pc != 0x001EF498u) [[unlikely]] return; }
L_001EF498:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF4A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001EF4A4u) [[unlikely]] return; }
L_001EF4A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001EF4A8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001EF4D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EF510; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF508u); set32(c.r[5], c.r[5].w[0] - 17874u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EF508u) [[unlikely]] return; }
L_001EF508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_001EF594; } }
L_001EF510:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_001EF53C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF528u); set32(c.r[5], c.r[5].w[0] - 17849u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF528u) [[unlikely]] return; }
L_001EF528:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF534u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EF534u) [[unlikely]] return; }
L_001EF534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001EF7F4; } }
L_001EF53C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF558; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF550u); set32(c.r[5], c.r[5].w[0] - 17825u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF550u) [[unlikely]] return; }
L_001EF550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF590; } }
L_001EF558:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001EF590; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF590; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF57Cu); set32(c.r[5], c.r[5].w[0] - 17801u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF57Cu) [[unlikely]] return; }
L_001EF57C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF588u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EF588u) [[unlikely]] return; }
L_001EF588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF7F0; } }
L_001EF590:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_001EF594:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[6].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001EF5C0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5ACu); set32(c.r[5], c.r[5].w[0] - 17780u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF5ACu) [[unlikely]] return; }
L_001EF5AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EF5B8u) [[unlikely]] return; }
L_001EF5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF7F0; } }
L_001EF5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5C8u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EF5C8u) [[unlikely]] return; }
L_001EF5C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EF5D8u) [[unlikely]] return; }
L_001EF5D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF5E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EF5E4u) [[unlikely]] return; }
L_001EF5E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EF7F0; } }
    c.r[16].d[0] = ld8((c.r[29].w[0] + 76u));
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));  goto L_001EF614; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF60Cu); set32(c.r[5], c.r[5].w[0] - 17752u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF60Cu) [[unlikely]] return; }
L_001EF60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF7F0; } }
L_001EF614:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));  goto L_001EF674; }
    set32(c.r[3], ld32((c.r[17].w[0] + 328u)));
    c.r[2].d[0] = 0ull | 45000ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EF644; } }
    c.r[1].d[0] = 0ull | 46001ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EF670; } }
L_001EF644:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF654u); set32(c.r[5], c.r[5].w[0] - 17732u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF654u) [[unlikely]] return; }
L_001EF654:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 808u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF670u); set32(c.r[5], c.r[5].w[0] - 17676u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001EF670u) [[unlikely]] return; }
L_001EF670:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 16u));
    c.budget -= 1;
L_001EF674:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001EF7E4; }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 336u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-31270ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EF6A0; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EF6A0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EF7D0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 344u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-32768ll);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-132ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 7;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EF6CC; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EF6CC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EF7D0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 352u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-32768ll);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-31232ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 7;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EF6F8; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EF6F8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EF7D0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 360u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-32768ll);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-232ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 7;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EF724; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EF724:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EF7D0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 368u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-30000ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EF74C; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EF74C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EF7D0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 376u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-32768ll);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-27232ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 7;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EF778; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EF778:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EF7D0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 384u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-15000ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EF7A0; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EF7A0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EF7D0; } }
    c.r[2].d[0] = ld64((c.r[17].w[0] + 392u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-6000ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EF7C8; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EF7C8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001EF7E0; } }
L_001EF7D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7E0u); set32(c.r[5], c.r[5].w[0] - 17647u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF7E0u) [[unlikely]] return; }
L_001EF7E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001EF7E4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF7F0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 181u, depth + 1u); else { c.pc = 0x001F1920u; return; } if (c.pc != 0x001EF7F0u) [[unlikely]] return; }
L_001EF7F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001EF7F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001EF810:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[27]);
    st32((c.r[29].w[0] + 40u), c.f[26]);
    st32((c.r[29].w[0] + 36u), c.f[25]);
    st32((c.r[29].w[0] + 32u), c.f[24]);
    st32((c.r[29].w[0] + 28u), c.f[23]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 248u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001EF888; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF880u); set32(c.r[5], c.r[5].w[0] - 17591u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001EF880u) [[unlikely]] return; }
L_001EF880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_001EF918; } }
L_001EF888:
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2ull;  goto L_001EF8B4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8A0u); set32(c.r[5], c.r[5].w[0] - 17566u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF8A0u) [[unlikely]] return; }
L_001EF8A0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EF8ACu) [[unlikely]] return; }
L_001EF8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  if (t) { [[clang::musttail]] return unit_003C(c, 22u, depth); } }
L_001EF8B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF8D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF8C8u); set32(c.r[5], c.r[5].w[0] - 17542u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF8C8u) [[unlikely]] return; }
L_001EF8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001EF914; } }
L_001EF8D0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001EF914; } }
    c.r[3].d[0] = ld64((c.r[20].w[0] + 16u));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001EF914; } }
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001EF914; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF900u); set32(c.r[5], c.r[5].w[0] - 17517u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF900u) [[unlikely]] return; }
L_001EF900:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF90Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EF90Cu) [[unlikely]] return; }
L_001EF90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 21u, depth); } }
L_001EF914:
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_001EF918:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001EF944; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF930u); set32(c.r[5], c.r[5].w[0] - 17496u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EF930u) [[unlikely]] return; }
L_001EF930:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF93Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EF93Cu) [[unlikely]] return; }
L_001EF93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 21u, depth); } }
L_001EF944:
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF950u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EF950u) [[unlikely]] return; }
L_001EF950:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF960u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EF960u) [[unlikely]] return; }
L_001EF960:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 348u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 349u));
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 350u));
    set32(c.r[6], 0u + 4u);
    c.r[8].d[0] = c.r[2].d[0] << 24;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 351u));
    c.r[7].d[0] = c.r[8].d[0] + c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF998u); c.r[22].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EF998u) [[unlikely]] return; }
L_001EF998:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EF9A8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EF9A8u) [[unlikely]] return; }
L_001EF9A8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 348u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 349u));
    c.r[1].d[0] = c.r[1].d[0] | 14465ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 350u));
    c.r[1].d[0] = c.r[22].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 24;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 351u));
    c.r[4].d[0] = c.r[5].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (t) { goto L_001EFA0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 14465ull;
    c.r[1].d[0] = c.r[19].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFA0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[22].d[0] + c.r[19].d[0];
    c.r[1].d[0] = c.r[1].d[0] | 34465ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001EFA30; }
L_001EFA0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA1Cu); set32(c.r[5], c.r[5].w[0] - 17468u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EFA1Cu) [[unlikely]] return; }
L_001EFA1C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA28u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EFA28u) [[unlikely]] return; }
L_001EFA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 21u, depth); } }
L_001EFA30:
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA3Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EFA3Cu) [[unlikely]] return; }
L_001EFA3C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA4Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EFA4Cu) [[unlikely]] return; }
L_001EFA4C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 348u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 349u));
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 350u));
    set32(c.r[6], 0u + 4u);
    c.r[8].d[0] = c.r[2].d[0] << 24;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 351u));
    c.r[7].d[0] = c.r[8].d[0] + c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA84u); c.r[23].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EFA84u) [[unlikely]] return; }
L_001EFA84:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFA94u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EFA94u) [[unlikely]] return; }
L_001EFA94:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 348u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 349u));
    c.r[1].d[0] = c.r[1].d[0] | 14465ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 350u));
    c.r[1].d[0] = c.r[23].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 24;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 351u));
    c.r[4].d[0] = c.r[5].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (t) { goto L_001EFAF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 14465ull;
    c.r[1].d[0] = c.r[18].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFAF8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[23].d[0] + c.r[18].d[0];
    c.r[1].d[0] = c.r[1].d[0] | 34465ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001EFB1C; }
L_001EFAF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB08u); set32(c.r[5], c.r[5].w[0] - 17443u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EFB08u) [[unlikely]] return; }
L_001EFB08:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB14u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EFB14u) [[unlikely]] return; }
L_001EFB14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 21u, depth); } }
L_001EFB1C:
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB28u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EFB28u) [[unlikely]] return; }
L_001EFB28:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB38u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EFB38u) [[unlikely]] return; }
L_001EFB38:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 348u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 349u));
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 350u));
    set32(c.r[6], 0u + 4u);
    c.r[8].d[0] = c.r[2].d[0] << 24;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 351u));
    c.r[7].d[0] = c.r[8].d[0] + c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB70u); c.r[30].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EFB70u) [[unlikely]] return; }
L_001EFB70:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFB80u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EFB80u) [[unlikely]] return; }
L_001EFB80:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 348u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 349u));
    c.r[1].d[0] = c.r[1].d[0] | 14465ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 350u));
    c.r[1].d[0] = c.r[30].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 24;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 351u));
    c.r[4].d[0] = c.r[5].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (t) { goto L_001EFBE4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 14465ull;
    c.r[1].d[0] = c.r[17].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFBE4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[30].d[0] + c.r[17].d[0];
    c.r[1].d[0] = c.r[1].d[0] | 34465ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001EFC08; }
L_001EFBE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFBF4u); set32(c.r[5], c.r[5].w[0] - 17420u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EFBF4u) [[unlikely]] return; }
L_001EFBF4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC00u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EFC00u) [[unlikely]] return; }
L_001EFC00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 21u, depth); } }
L_001EFC08:
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC14u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EFC14u) [[unlikely]] return; }
L_001EFC14:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC24u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EFC24u) [[unlikely]] return; }
L_001EFC24:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 348u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[29].w[0] + 349u));
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 350u));
    set32(c.r[6], 0u + 4u);
    c.r[8].d[0] = c.r[2].d[0] << 24;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 351u));
    c.r[7].d[0] = c.r[8].d[0] + c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] + c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC60u); st64((c.r[29].w[0] + 320u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001EFC60u) [[unlikely]] return; }
L_001EFC60:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFC70u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 458u, depth + 1u); else { c.pc = 0x001F3C90u; return; } if (c.pc != 0x001EFC70u) [[unlikely]] return; }
L_001EFC70:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 348u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 349u));
    c.r[1].d[0] = c.r[1].d[0] | 14465ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 350u));
    c.r[6].d[0] = c.r[2].d[0] << 24;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 351u));
    c.r[4].d[0] = c.r[6].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 8;
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[16].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFCDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 14465ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFCDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] + c.r[16].d[0];
    c.r[1].d[0] = c.r[1].d[0] | 34465ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_001EFD00; }
L_001EFCDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFCECu); set32(c.r[5], c.r[5].w[0] - 17395u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EFCECu) [[unlikely]] return; }
L_001EFCEC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFCF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001EFCF8u) [[unlikely]] return; }
L_001EFCF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 21u, depth); } }
L_001EFD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD08u);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001EFD08u) [[unlikely]] return; }
L_001EFD08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 24u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD34u);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001EFD34u) [[unlikely]] return; }
L_001EFD34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 23u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD60u);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001EFD60u) [[unlikely]] return; }
L_001EFD60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 22u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFD8Cu);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001EFD8Cu) [[unlikely]] return; }
L_001EFD8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 21u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFDB8u);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001EFDB8u) [[unlikely]] return; }
L_001EFDB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFDE4u);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001EFDE4u) [[unlikely]] return; }
L_001EFDE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 27u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE10u);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001EFE10u) [[unlikely]] return; }
L_001EFE10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 34464ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 26u, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFE3Cu);  if (depth < kMaxDepth) unit_00AB(c, 443u, depth + 1u); else { c.pc = 0x003AF8A0u; return; } if (c.pc != 0x001EFE3Cu) [[unlikely]] return; }
L_001EFE3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = ld64((c.r[20].w[0] + 16u));
    c.r[3].d[0] = c.r[3].d[0] | 34464ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    fpu_div(c, 25u, c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_003C(c, 10u, depth); } }
    c.r[2].d[0] = c.r[22].d[0] + static_cast<std::uint64_t>(-31270ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EFE88; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EFE88:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFFA0; } }
    c.r[2].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(-32768ll);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-132ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EFEB0; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EFEB0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFFA0; } }
    c.r[2].d[0] = c.r[23].d[0] + static_cast<std::uint64_t>(-32768ll);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-31232ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EFED8; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EFED8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFFA0; } }
    c.r[2].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(-32768ll);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-232ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EFF00; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EFF00:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFFA0; } }
    c.r[2].d[0] = c.r[30].d[0] + static_cast<std::uint64_t>(-30000ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EFF24; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EFF24:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFFA0; } }
    c.r[2].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(-32768ll);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-27232ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EFF4C; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EFF4C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFFA0; } }
    c.r[2].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(-15000ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EFF74; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EFF74:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001EFFA0; } }
    c.r[2].d[0] = c.r[16].d[0] + static_cast<std::uint64_t>(-6000ll);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[2].sd[0] >= 0) { c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;  goto L_001EFF98; }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 1001ll ? 1ull : 0ull;
    c.budget -= 2;
L_001EFF98:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  [[clang::musttail]] return unit_003C(c, 8u, depth); }
L_001EFFA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFB0u); set32(c.r[5], c.r[5].w[0] - 17647u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001EFFB0u) [[unlikely]] return; }
L_001EFFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFB8u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EFFB8u) [[unlikely]] return; }
L_001EFFB8:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFC4u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EFFC4u) [[unlikely]] return; }
L_001EFFC4:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFD0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EFFD0u) [[unlikely]] return; }
L_001EFFD0:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001EFFDCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001EFFDCu) [[unlikely]] return; }
L_001EFFDC:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0004u); set32(c.r[5], c.r[5].w[0] - 17371u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001F0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_003C(c, 2u, depth);
}

}
