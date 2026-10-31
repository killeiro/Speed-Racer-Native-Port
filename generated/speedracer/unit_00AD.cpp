#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AD[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 15, 16, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0,
    0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 77, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 253, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 317, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 361, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003B4000;
    case 2u: goto L_003B4004;
    case 3u: goto L_003B400C;
    case 4u: goto L_003B4028;
    case 5u: goto L_003B4030;
    case 6u: goto L_003B4038;
    case 7u: goto L_003B404C;
    case 8u: goto L_003B4058;
    case 9u: goto L_003B4088;
    case 10u: goto L_003B4094;
    case 11u: goto L_003B40B0;
    case 12u: goto L_003B40BC;
    case 13u: goto L_003B40C8;
    case 14u: goto L_003B4100;
    case 15u: goto L_003B4108;
    case 16u: goto L_003B410C;
    case 17u: goto L_003B411C;
    case 18u: goto L_003B4120;
    case 19u: goto L_003B417C;
    case 20u: goto L_003B4188;
    case 21u: goto L_003B419C;
    case 22u: goto L_003B41A8;
    case 23u: goto L_003B41B0;
    case 24u: goto L_003B41BC;
    case 25u: goto L_003B41C8;
    case 26u: goto L_003B41D4;
    case 27u: goto L_003B41F8;
    case 28u: goto L_003B4208;
    case 29u: goto L_003B421C;
    case 30u: goto L_003B423C;
    case 31u: goto L_003B4258;
    case 32u: goto L_003B428C;
    case 33u: goto L_003B429C;
    case 34u: goto L_003B436C;
    case 35u: goto L_003B43E0;
    case 36u: goto L_003B43F4;
    case 37u: goto L_003B4404;
    case 38u: goto L_003B4424;
    case 39u: goto L_003B443C;
    case 40u: goto L_003B444C;
    case 41u: goto L_003B446C;
    case 42u: goto L_003B44E0;
    case 43u: goto L_003B456C;
    case 44u: goto L_003B4588;
    case 45u: goto L_003B45A4;
    case 46u: goto L_003B45C4;
    case 47u: goto L_003B45E8;
    case 48u: goto L_003B4624;
    case 49u: goto L_003B4634;
    case 50u: goto L_003B4640;
    case 51u: goto L_003B4650;
    case 52u: goto L_003B4688;
    case 53u: goto L_003B46A4;
    case 54u: goto L_003B46C0;
    case 55u: goto L_003B46D0;
    case 56u: goto L_003B46E8;
    case 57u: goto L_003B46F4;
    case 58u: goto L_003B4704;
    case 59u: goto L_003B4718;
    case 60u: goto L_003B473C;
    case 61u: goto L_003B474C;
    case 62u: goto L_003B47D8;
    case 63u: goto L_003B47E8;
    case 64u: goto L_003B4878;
    case 65u: goto L_003B489C;
    case 66u: goto L_003B48BC;
    case 67u: goto L_003B48D4;
    case 68u: goto L_003B48EC;
    case 69u: goto L_003B48F8;
    case 70u: goto L_003B4920;
    case 71u: goto L_003B493C;
    case 72u: goto L_003B494C;
    case 73u: goto L_003B4974;
    case 74u: goto L_003B49B4;
    case 75u: goto L_003B49E0;
    case 76u: goto L_003B4A08;
    case 77u: goto L_003B4A14;
    case 78u: goto L_003B4A18;
    case 79u: goto L_003B4A20;
    case 80u: goto L_003B4A44;
    case 81u: goto L_003B4A48;
    case 82u: goto L_003B4A80;
    case 83u: goto L_003B4AF0;
    case 84u: goto L_003B4B10;
    case 85u: goto L_003B4BE0;
    case 86u: goto L_003B4C10;
    case 87u: goto L_003B4C2C;
    case 88u: goto L_003B4CAC;
    case 89u: goto L_003B4D08;
    case 90u: goto L_003B4D5C;
    case 91u: goto L_003B4D88;
    case 92u: goto L_003B4DA0;
    case 93u: goto L_003B4DBC;
    case 94u: goto L_003B4DC4;
    case 95u: goto L_003B4DCC;
    case 96u: goto L_003B4DD8;
    case 97u: goto L_003B4DE0;
    case 98u: goto L_003B4E20;
    case 99u: goto L_003B4E34;
    case 100u: goto L_003B4E38;
    case 101u: goto L_003B4E94;
    case 102u: goto L_003B4EA0;
    case 103u: goto L_003B4EC8;
    case 104u: goto L_003B4EEC;
    case 105u: goto L_003B4F00;
    case 106u: goto L_003B4F30;
    case 107u: goto L_003B4F58;
    case 108u: goto L_003B4F60;
    case 109u: goto L_003B4F74;
    case 110u: goto L_003B4F88;
    case 111u: goto L_003B5058;
    case 112u: goto L_003B5098;
    case 113u: goto L_003B50D8;
    case 114u: goto L_003B50E8;
    case 115u: goto L_003B50F8;
    case 116u: goto L_003B5118;
    case 117u: goto L_003B5170;
    case 118u: goto L_003B5194;
    case 119u: goto L_003B51B0;
    case 120u: goto L_003B51F4;
    case 121u: goto L_003B5204;
    case 122u: goto L_003B5240;
    case 123u: goto L_003B5250;
    case 124u: goto L_003B5278;
    case 125u: goto L_003B52B4;
    case 126u: goto L_003B52F8;
    case 127u: goto L_003B5308;
    case 128u: goto L_003B5338;
    case 129u: goto L_003B5384;
    case 130u: goto L_003B53D4;
    case 131u: goto L_003B53E4;
    case 132u: goto L_003B5418;
    case 133u: goto L_003B5440;
    case 134u: goto L_003B5498;
    case 135u: goto L_003B54C8;
    case 136u: goto L_003B551C;
    case 137u: goto L_003B5554;
    case 138u: goto L_003B5560;
    case 139u: goto L_003B5590;
    case 140u: goto L_003B55A0;
    case 141u: goto L_003B55E0;
    case 142u: goto L_003B5630;
    case 143u: goto L_003B56B0;
    case 144u: goto L_003B56E8;
    case 145u: goto L_003B5710;
    case 146u: goto L_003B5720;
    case 147u: goto L_003B5758;
    case 148u: goto L_003B57A4;
    case 149u: goto L_003B57BC;
    case 150u: goto L_003B57F4;
    case 151u: goto L_003B5820;
    case 152u: goto L_003B5878;
    case 153u: goto L_003B58D8;
    case 154u: goto L_003B5974;
    case 155u: goto L_003B59A4;
    case 156u: goto L_003B59B4;
    case 157u: goto L_003B59F8;
    case 158u: goto L_003B5A3C;
    case 159u: goto L_003B5A4C;
    case 160u: goto L_003B5A68;
    case 161u: goto L_003B5ACC;
    case 162u: goto L_003B5AF0;
    case 163u: goto L_003B5B20;
    case 164u: goto L_003B5B34;
    case 165u: goto L_003B5B64;
    case 166u: goto L_003B5B74;
    case 167u: goto L_003B5BB8;
    case 168u: goto L_003B5BEC;
    case 169u: goto L_003B5C00;
    case 170u: goto L_003B5C1C;
    case 171u: goto L_003B5C48;
    case 172u: goto L_003B5CA4;
    case 173u: goto L_003B5CC8;
    case 174u: goto L_003B5CF8;
    case 175u: goto L_003B5D08;
    case 176u: goto L_003B5D38;
    case 177u: goto L_003B5D48;
    case 178u: goto L_003B5D88;
    case 179u: goto L_003B5DCC;
    case 180u: goto L_003B5E14;
    case 181u: goto L_003B5E24;
    case 182u: goto L_003B5E58;
    case 183u: goto L_003B5EA8;
    case 184u: goto L_003B5ECC;
    case 185u: goto L_003B5EE8;
    case 186u: goto L_003B5F2C;
    case 187u: goto L_003B5F3C;
    case 188u: goto L_003B5F78;
    case 189u: goto L_003B5FB4;
    case 190u: goto L_003B5FF8;
    case 191u: goto L_003B6008;
    case 192u: goto L_003B6038;
    case 193u: goto L_003B6098;
    case 194u: goto L_003B60BC;
    case 195u: goto L_003B6178;
    case 196u: goto L_003B6184;
    case 197u: goto L_003B61B4;
    case 198u: goto L_003B61C4;
    case 199u: goto L_003B6208;
    case 200u: goto L_003B6260;
    case 201u: goto L_003B628C;
    case 202u: goto L_003B62B8;
    case 203u: goto L_003B62D4;
    case 204u: goto L_003B62E4;
    case 205u: goto L_003B6314;
    case 206u: goto L_003B6324;
    case 207u: goto L_003B6360;
    case 208u: goto L_003B63A4;
    case 209u: goto L_003B63EC;
    case 210u: goto L_003B63FC;
    case 211u: goto L_003B6430;
    case 212u: goto L_003B647C;
    case 213u: goto L_003B64A0;
    case 214u: goto L_003B64C4;
    case 215u: goto L_003B64F8;
    case 216u: goto L_003B6508;
    case 217u: goto L_003B6540;
    case 218u: goto L_003B6878;
    case 219u: goto L_003B6888;
    case 220u: goto L_003B6890;
    case 221u: goto L_003B68A4;
    case 222u: goto L_003B68B8;
    case 223u: goto L_003B68D8;
    case 224u: goto L_003B6930;
    case 225u: goto L_003B6948;
    case 226u: goto L_003B6954;
    case 227u: goto L_003B6964;
    case 228u: goto L_003B69A0;
    case 229u: goto L_003B69C4;
    case 230u: goto L_003B69F0;
    case 231u: goto L_003B6A00;
    case 232u: goto L_003B6A30;
    case 233u: goto L_003B6A44;
    case 234u: goto L_003B6A50;
    case 235u: goto L_003B6A80;
    case 236u: goto L_003B6A88;
    case 237u: goto L_003B6AD4;
    case 238u: goto L_003B6AF4;
    case 239u: goto L_003B6B0C;
    case 240u: goto L_003B6B34;
    case 241u: goto L_003B6B50;
    case 242u: goto L_003B6B68;
    case 243u: goto L_003B6B88;
    case 244u: goto L_003B6C00;
    case 245u: goto L_003B6C40;
    case 246u: goto L_003B6C50;
    case 247u: goto L_003B6C68;
    case 248u: goto L_003B6C98;
    case 249u: goto L_003B6CF8;
    case 250u: goto L_003B6D20;
    case 251u: goto L_003B6D4C;
    case 252u: goto L_003B6D68;
    case 253u: goto L_003B6D8C;
    case 254u: goto L_003B6D90;
    case 255u: goto L_003B6DA0;
    case 256u: goto L_003B6DCC;
    case 257u: goto L_003B6DE8;
    case 258u: goto L_003B6E40;
    case 259u: goto L_003B6E80;
    case 260u: goto L_003B6ECC;
    case 261u: goto L_003B6EE0;
    case 262u: goto L_003B6F00;
    case 263u: goto L_003B6F24;
    case 264u: goto L_003B6F38;
    case 265u: goto L_003B6F98;
    case 266u: goto L_003B6FC0;
    case 267u: goto L_003B6FD8;
    case 268u: goto L_003B6FF8;
    case 269u: goto L_003B700C;
    case 270u: goto L_003B7074;
    case 271u: goto L_003B7080;
    case 272u: goto L_003B70A8;
    case 273u: goto L_003B70D0;
    case 274u: goto L_003B70E0;
    case 275u: goto L_003B70F8;
    case 276u: goto L_003B711C;
    case 277u: goto L_003B7130;
    case 278u: goto L_003B7198;
    case 279u: goto L_003B71A8;
    case 280u: goto L_003B71C0;
    case 281u: goto L_003B71E8;
    case 282u: goto L_003B7204;
    case 283u: goto L_003B7240;
    case 284u: goto L_003B72A0;
    case 285u: goto L_003B72C0;
    case 286u: goto L_003B72D4;
    case 287u: goto L_003B72D8;
    case 288u: goto L_003B7324;
    case 289u: goto L_003B732C;
    case 290u: goto L_003B733C;
    case 291u: goto L_003B7374;
    case 292u: goto L_003B739C;
    case 293u: goto L_003B73A4;
    case 294u: goto L_003B73BC;
    case 295u: goto L_003B73E8;
    case 296u: goto L_003B7434;
    case 297u: goto L_003B7458;
    case 298u: goto L_003B7470;
    case 299u: goto L_003B749C;
    case 300u: goto L_003B74FC;
    case 301u: goto L_003B7530;
    case 302u: goto L_003B7564;
    case 303u: goto L_003B758C;
    case 304u: goto L_003B75E8;
    case 305u: goto L_003B7620;
    case 306u: goto L_003B7634;
    case 307u: goto L_003B765C;
    case 308u: goto L_003B76A0;
    case 309u: goto L_003B76B8;
    case 310u: goto L_003B76E0;
    case 311u: goto L_003B7710;
    case 312u: goto L_003B7770;
    case 313u: goto L_003B7790;
    case 314u: goto L_003B7798;
    case 315u: goto L_003B77D4;
    case 316u: goto L_003B77F0;
    case 317u: goto L_003B77F4;
    case 318u: goto L_003B7824;
    case 319u: goto L_003B7828;
    case 320u: goto L_003B784C;
    case 321u: goto L_003B7854;
    case 322u: goto L_003B7898;
    case 323u: goto L_003B78B4;
    case 324u: goto L_003B78B8;
    case 325u: goto L_003B78F8;
    case 326u: goto L_003B790C;
    case 327u: goto L_003B7944;
    case 328u: goto L_003B7968;
    case 329u: goto L_003B7984;
    case 330u: goto L_003B7990;
    case 331u: goto L_003B79C8;
    case 332u: goto L_003B79D4;
    case 333u: goto L_003B7A14;
    case 334u: goto L_003B7A28;
    case 335u: goto L_003B7A30;
    case 336u: goto L_003B7A44;
    case 337u: goto L_003B7A90;
    case 338u: goto L_003B7AB0;
    case 339u: goto L_003B7AD8;
    case 340u: goto L_003B7B08;
    case 341u: goto L_003B7B14;
    case 342u: goto L_003B7B28;
    case 343u: goto L_003B7B68;
    case 344u: goto L_003B7BB0;
    case 345u: goto L_003B7BF0;
    case 346u: goto L_003B7C08;
    case 347u: goto L_003B7C20;
    case 348u: goto L_003B7C38;
    case 349u: goto L_003B7C50;
    case 350u: goto L_003B7C68;
    case 351u: goto L_003B7CA0;
    case 352u: goto L_003B7CB4;
    case 353u: goto L_003B7CC4;
    case 354u: goto L_003B7CF0;
    case 355u: goto L_003B7D00;
    case 356u: goto L_003B7D28;
    case 357u: goto L_003B7D48;
    case 358u: goto L_003B7D74;
    case 359u: goto L_003B7DA0;
    case 360u: goto L_003B7DD8;
    case 361u: goto L_003B7DDC;
    case 362u: goto L_003B7E08;
    case 363u: goto L_003B7E24;
    case 364u: goto L_003B7E30;
    case 365u: goto L_003B7E88;
    case 366u: goto L_003B7ED8;
    case 367u: goto L_003B7EF0;
    case 368u: goto L_003B7F20;
    case 369u: goto L_003B7F80;
    case 370u: goto L_003B7FDC;
    default: bad_entry(c, 0x003B4000u); return;
    }
L_003B4000:
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.budget -= 1;
L_003B4004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 544u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B3F54u | kUnwind; return; } [[clang::musttail]] return unit_00AC(c, 224u, depth); } }
L_003B400C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 32376u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4028u); c.r[4].d[0] = ld64((c.r[29].w[0] + 528u));  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003B4028u) [[unlikely]] return; }
L_003B4028:
    st64((c.r[29].w[0] + 528u), c.r[2].d[0]);
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_003B4030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4038u); c.r[4].d[0] = ld64((c.r[29].w[0] + 544u));  if (depth < kMaxDepth) unit_00AB(c, 465u, depth + 1u); else { c.pc = 0x003AFA68u; return; } if (c.pc != 0x003B4038u) [[unlikely]] return; }
L_003B4038:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[29].w[0] + 544u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B404Cu); st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x003B404Cu) [[unlikely]] return; }
L_003B404C:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4058u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003B4058u) [[unlikely]] return; }
L_003B4058:
    c.r[3].d[0] = c.r[23].d[0] << 32;
    st64((c.r[29].w[0] + 544u), c.r[2].d[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[20].d[0] != c.r[18].d[0]; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B40EC; } }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[29].w[0] + 528u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4088u); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003B4088u) [[unlikely]] return; }
L_003B4088:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4094u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x003B4094u) [[unlikely]] return; }
L_003B4094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4254; } }
    c.r[5].d[0] = ld64((c.r[29].w[0] + 528u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 544u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B40B0u); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003B40B0u) [[unlikely]] return; }
L_003B40B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B40BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x003B40BCu) [[unlikely]] return; }
L_003B40BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4108; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 1;
L_003B40C8:
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B40C8u | kUnwind; return; } goto L_003B40C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B4A14; } }
L_003B40EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4100u); set32(c.r[20], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003B4100u) [[unlikely]] return; }
L_003B4100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 544u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4030u | kUnwind; return; } goto L_003B4030; } }
L_003B4108:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 1;
L_003B410C:
    set32(c.r[17], ld32((c.r[29].w[0] + 428u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 460u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 288u)));
    st64((c.r[29].w[0] + 544u), c.r[2].d[0]);
    c.budget -= 4;
L_003B411C:
    set32(c.r[3], ld32((c.r[29].w[0] + 552u)));
    c.budget -= 1;
L_003B4120:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[2], ld32((c.r[29].w[0] + 384u)));  goto L_003B42B0; }
    c.r[1].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B42AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 32368u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[22].d[0] = ld64((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 496u)));
    c.budget -= 8;
    if (c.r[2].sd[0] >= 0) { set32(c.r[20], 0u + 1u);  goto L_003B419C; }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] > 0;  if (t) { goto L_003B4198; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_003B463C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40140000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 544u));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B417Cu); c.r[4].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003B417Cu) [[unlikely]] return; }
L_003B417C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4188u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 214u, depth + 1u); else { c.pc = 0x003BDD10u; return; } if (c.pc != 0x003B4188u) [[unlikely]] return; }
L_003B4188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B464C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B463C; } }
L_003B4198:
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_003B419C:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 544u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41A8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003B41A8u) [[unlikely]] return; }
L_003B41A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 465u, depth + 1u); else { c.pc = 0x003AFA68u; return; } if (c.pc != 0x003B41B0u) [[unlikely]] return; }
L_003B41B0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41BCu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 436u, depth + 1u); else { c.pc = 0x003AF808u; return; } if (c.pc != 0x003B41BCu) [[unlikely]] return; }
L_003B41BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41C8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003B41C8u) [[unlikely]] return; }
L_003B41C8:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 544u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003B41D4u) [[unlikely]] return; }
L_003B41D4:
    c.r[3].d[0] = c.r[23].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 48u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] != c.r[18].d[0]; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B427C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B41F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003B41F8u) [[unlikely]] return; }
L_003B41F8:
    st64((c.r[29].w[0] + 544u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4208u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x003B4208u) [[unlikely]] return; }
L_003B4208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4254; } }
    c.r[4].d[0] = ld64((c.r[29].w[0] + 544u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B421Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 220u, depth + 1u); else { c.pc = 0x003BDD80u; return; } if (c.pc != 0x003B421Cu) [[unlikely]] return; }
L_003B421C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4A14; } }
    c.r[2].d[0] = c.r[23].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B4254; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 1;
L_003B423C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_003B4254; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003B4268; } }
L_003B4254:
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 1;
L_003B4258:
    set32(c.r[2], 0u + 57u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 288u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B423Cu | kUnwind; return; } goto L_003B423C; }
L_003B4268:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B4A14; } }
L_003B427C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B428Cu); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003B428Cu) [[unlikely]] return; }
L_003B428C:
    st64((c.r[29].w[0] + 544u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B429Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003BDD60u; return; } if (c.pc != 0x003B429Cu) [[unlikely]] return; }
L_003B429C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B419Cu | kUnwind; return; } goto L_003B419C; } }
L_003B42AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 1;
L_003B42B0:
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[23], ld32((c.r[29].w[0] + 464u)));
    st32((c.r[29].w[0] + 368u), c.r[30].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 292u), 0u);  if (t) { goto L_003B4370; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 1u);  goto L_003B4300; }
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 556u)));  goto L_003B42EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + 1075u);  if (t) { goto L_003B42F4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    c.budget -= 1;
L_003B42EC:
    set32(c.r[3], 0u + 54u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 2;
L_003B42F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);  if (t) { goto L_003B435C; } }
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_003B4300:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[23].d[0] + 0ull;  goto L_003B4320; }
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[2].w[0] - c.r[3].w[0]);  if (t) { goto L_003B4340; } }
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 1;
L_003B4320:
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    c.budget -= 8;
L_003B4340:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B4358; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003B4358:
    set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_003B435C:
    set32(c.r[22], c.r[22].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B436Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 175u, depth + 1u); else { c.pc = 0x003B3500u; return; } if (c.pc != 0x003B436Cu) [[unlikely]] return; }
L_003B436C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B4370:
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 464u)));  goto L_003B43B4; }
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_003B43B0; } }
    c.r[1].d[0] = c.r[2].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[3].d[0] = c.r[22].d[0] + 0ull;  goto L_003B439C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B439C; } }
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003B439C:
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[30], c.r[30].w[0] - c.r[3].w[0]);
    set32(c.r[22], c.r[22].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    c.budget -= 5;
L_003B43B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    c.budget -= 1;
L_003B43B4:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003B4444; }
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 464u)));  goto L_003B4430; }
    c.budget -= 2;
    if (c.r[23].sd[0] <= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 464u)));  goto L_003B440C; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B43E0u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 161u, depth + 1u); else { c.pc = 0x003B3100u; return; } if (c.pc != 0x003B43E0u) [[unlikely]] return; }
L_003B43E0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B43F4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 168u, depth + 1u); else { c.pc = 0x003B3230u; return; } if (c.pc != 0x003B43F4u) [[unlikely]] return; }
L_003B43F4:
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4404u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 124u, depth + 1u); else { c.pc = 0x003B28E0u; return; } if (c.pc != 0x003B4404u) [[unlikely]] return; }
L_003B4404:
    set32(c.r[16], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 464u)));
    c.budget -= 2;
L_003B440C:
    set32(c.r[6], c.r[2].w[0] - c.r[23].w[0]);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003B4440; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4424u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 161u, depth + 1u); else { c.pc = 0x003B3100u; return; } if (c.pc != 0x003B4424u) [[unlikely]] return; }
L_003B4424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003B4440; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 464u)));
    c.budget -= 1;
L_003B4430:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B443Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 161u, depth + 1u); else { c.pc = 0x003B3100u; return; } if (c.pc != 0x003B443Cu) [[unlikely]] return; }
L_003B443C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B4440:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003B4444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B444Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 175u, depth + 1u); else { c.pc = 0x003B3500u; return; } if (c.pc != 0x003B444Cu) [[unlikely]] return; }
L_003B444C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  goto L_003B4474; }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B446Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 161u, depth + 1u); else { c.pc = 0x003B3100u; return; } if (c.pc != 0x003B446Cu) [[unlikely]] return; }
L_003B446C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 2;
L_003B4474:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 336u), 0u);  if (t) { goto L_003B44C0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 352u)));  goto L_003B44C4; }
    set32(c.r[3], ld32((c.r[29].w[0] + 548u)));
    c.r[2].d[0] = c.r[3].d[0] << 44;
    c.r[2].d[0] = c.r[2].d[0] >> 44;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B44C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B44C0; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 4;
L_003B44C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.budget -= 1;
L_003B44C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003B44F0; }
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B44E0u); c.r[4].d[0] = ld64((c.r[2].w[0] + 16u));  if (depth < kMaxDepth) unit_00AC(c, 178u, depth + 1u); else { c.pc = 0x003B3610u; return; } if (c.pc != 0x003B44E0u) [[unlikely]] return; }
L_003B44E0:
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_003B44F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003B44F0:
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;  goto L_003B450C; }
    set32(c.r[2], 0u + 32u);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
L_003B450C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;  goto L_003B4534; }
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] - 4u);
    set32(c.r[30], c.r[30].w[0] + c.r[3].w[0]);
    set32(c.r[22], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 368u), c.r[2].w[0]);  if (t) { goto L_003B4554; } }
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 1;
L_003B4534:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003B4554; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] + 28u);
    set32(c.r[30], c.r[30].w[0] + c.r[3].w[0]);
    set32(c.r[22], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    c.budget -= 6;
L_003B4554:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] <= 0;  if (t) { goto L_003B4570; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B456Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 154u, depth + 1u); else { c.pc = 0x003B2FB0u; return; } if (c.pc != 0x003B456Cu) [[unlikely]] return; }
L_003B456C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B4570:
    c.budget -= 2;
    if (c.r[22].sd[0] <= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 400u)));  goto L_003B4590; }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4588u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 154u, depth + 1u); else { c.pc = 0x003B2FB0u; return; } if (c.pc != 0x003B4588u) [[unlikely]] return; }
L_003B4588:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    c.budget -= 2;
L_003B4590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B45F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B45A4u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 152u, depth + 1u); else { c.pc = 0x003B2F40u; return; } if (c.pc != 0x003B45A4u) [[unlikely]] return; }
L_003B45A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003B45F0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B45C4u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00AC(c, 179u, depth + 1u); else { c.pc = 0x003B36B0u; return; } if (c.pc != 0x003B45C4u) [[unlikely]] return; }
L_003B45C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 432u)));  goto L_003B45F0; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B45E8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 179u, depth + 1u); else { c.pc = 0x003B36B0u; return; } if (c.pc != 0x003B45E8u) [[unlikely]] return; }
L_003B45E8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 432u)));
    c.budget -= 2;
L_003B45F0:
    c.budget -= 2;
    if (c.r[18].sd[0] > 0) { set32(c.r[2], ld32((c.r[29].w[0] + 384u)));  goto L_003B4664; }
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003B4660; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_003B463C; } }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4624u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 179u, depth + 1u); else { c.pc = 0x003B36B0u; return; } if (c.pc != 0x003B4624u) [[unlikely]] return; }
L_003B4624:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4634u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 152u, depth + 1u); else { c.pc = 0x003B2F40u; return; } if (c.pc != 0x003B4634u) [[unlikely]] return; }
L_003B4634:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_003B464C; } }
L_003B463C:
    set32(c.r[2], ld32((c.r[29].w[0] + 496u)));
    c.budget -= 1;
L_003B4640:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_003B49D4; } }
L_003B464C:
    set32(c.r[2], 0u + 49u);
    c.budget -= 1;
L_003B4650:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B49D4; } }
L_003B4660:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 1;
L_003B4664:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[30], 0u + 1u);  goto L_003B48EC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 336u)));  goto L_003B4690; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4688u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 154u, depth + 1u); else { c.pc = 0x003B2FB0u; return; } if (c.pc != 0x003B4688u) [[unlikely]] return; }
L_003B4688:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 2;
L_003B4690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 292u), c.r[20].w[0]);  if (t) { goto L_003B46D4; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B46A4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 125u, depth + 1u); else { c.pc = 0x003B2920u; return; } if (c.pc != 0x003B46A4u) [[unlikely]] return; }
L_003B46A4:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 12u);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], c.r[22].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B46C0u); set32(c.r[6], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003B46C0u) [[unlikely]] return; }
L_003B46C0:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B46D0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 154u, depth + 1u); else { c.pc = 0x003B2FB0u; return; } if (c.pc != 0x003B46D0u) [[unlikely]] return; }
L_003B46D0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B46D4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 544u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 5;
L_003B46E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B46F4u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 82u, depth + 1u); else { c.pc = 0x003B4A80u; return; } if (c.pc != 0x003B46F4u) [[unlikely]] return; }
L_003B46F4:
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[22], c.r[2].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 152u, depth + 1u); else { c.pc = 0x003B2F40u; return; } if (c.pc != 0x003B4704u) [[unlikely]] return; }
L_003B4704:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4718u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 145u, depth + 1u); else { c.pc = 0x003B2D80u; return; } if (c.pc != 0x003B4718u) [[unlikely]] return; }
L_003B4718:
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 296u)));  goto L_003B4734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 1u);  if (t) { goto L_003B4740; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 1;
L_003B4734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B473Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 152u, depth + 1u); else { c.pc = 0x003B2F40u; return; } if (c.pc != 0x003B473Cu) [[unlikely]] return; }
L_003B473C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B4740:
    set32(c.r[5], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B474Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 124u, depth + 1u); else { c.pc = 0x003B28E0u; return; } if (c.pc != 0x003B474Cu) [[unlikely]] return; }
L_003B474C:
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  goto L_003B4798; }
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4794; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4794; } }
    set32(c.r[2], 0u + 57u);
    c.budget -= 3;
    if (c.r[22].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 57u);  goto L_003B4838; }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));  goto L_003B478C; }
    set32(c.r[22], c.r[22].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 2;
L_003B478C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B49D4; } }
L_003B4794:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 1;
L_003B4798:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003B47C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4820; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4820; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4820; } }
L_003B47C0:
    c.budget -= 2;
    if (c.r[30].sd[0] <= 0) { st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));  goto L_003B4818; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B47D8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 154u, depth + 1u); else { c.pc = 0x003B2FB0u; return; } if (c.pc != 0x003B47D8u) [[unlikely]] return; }
L_003B47D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B47E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 152u, depth + 1u); else { c.pc = 0x003B2F40u; return; } if (c.pc != 0x003B47E8u) [[unlikely]] return; }
L_003B47E8:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[3].d[0] = c.r[22].d[0] + 0ull;  goto L_003B4808; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4814; } }
    c.r[2].d[0] = c.r[22].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B4814; } }
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003B4808:
    set32(c.r[2], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { goto L_003B4834; } }
L_003B4814:
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 1;
L_003B4818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B49D4; } }
L_003B4820:
    c.budget -= 2;
    if (c.r[30].sd[0] <= 0) { set32(c.r[2], ld32((c.r[29].w[0] + 272u)));  goto L_003B4858; }
    set32(c.r[2], 0u + 57u);
    c.budget -= 3;
    if (c.r[22].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[22].w[0] + 1u);  goto L_003B4848; }
L_003B4834:
    set32(c.r[2], 0u + 57u);
    c.budget -= 1;
L_003B4838:
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B4990; } }
    set32(c.r[2], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_003B4848:
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B49D4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 1;
L_003B4858:
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B492C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4878u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 179u, depth + 1u); else { c.pc = 0x003B36B0u; return; } if (c.pc != 0x003B4878u) [[unlikely]] return; }
L_003B4878:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[20].d[0]) { c.r[5].d[0] = c.r[2].d[0] + 0ull;  goto L_003B48AC; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B489Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 179u, depth + 1u); else { c.pc = 0x003B36B0u; return; } if (c.pc != 0x003B489Cu) [[unlikely]] return; }
L_003B489C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_003B48D8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B48AC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B48BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 179u, depth + 1u); else { c.pc = 0x003B36B0u; return; } if (c.pc != 0x003B48BCu) [[unlikely]] return; }
L_003B48BC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B48D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 179u, depth + 1u); else { c.pc = 0x003B36B0u; return; } if (c.pc != 0x003B48D4u) [[unlikely]] return; }
L_003B48D4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B48D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B46E8u | kUnwind; return; } goto L_003B46E8; } }
    set32(c.r[30], 0u + 1u);
    c.budget -= 1;
L_003B48EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B48F8u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 82u, depth + 1u); else { c.pc = 0x003B4A80u; return; } if (c.pc != 0x003B48F8u) [[unlikely]] return; }
L_003B48F8:
    set32(c.r[22], c.r[2].w[0] + 48u);
    c.r[1].d[0] = c.r[30].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B492C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4920u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 179u, depth + 1u); else { c.pc = 0x003B36B0u; return; } if (c.pc != 0x003B4920u) [[unlikely]] return; }
L_003B4920:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[30], c.r[30].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B48ECu | kUnwind; return; } goto L_003B48EC; } }
L_003B492C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B493Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AC(c, 154u, depth + 1u); else { c.pc = 0x003B2FB0u; return; } if (c.pc != 0x003B493Cu) [[unlikely]] return; }
L_003B493C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B494Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 152u, depth + 1u); else { c.pc = 0x003B2F40u; return; } if (c.pc != 0x003B494Cu) [[unlikely]] return; }
L_003B494C:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { set32(c.r[21], c.r[21].w[0] - 1u);  goto L_003B4994; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] - 1u);  goto L_003B49B8; }
    c.r[2].d[0] = c.r[22].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B49B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B4990; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 1;
L_003B4974:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0];  if (t) { goto L_003B4990; } }
    set32(c.r[2], 0u + 49u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B49D4; } }
L_003B4990:
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 1;
L_003B4994:
    set32(c.r[2], 0u + 57u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 288u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4974u | kUnwind; return; } goto L_003B4974; }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 1u);  if (t) { goto L_003B49D4; } }
L_003B49B4:
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.budget -= 1;
L_003B49B8:
    set32(c.r[2], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B49B4u | kUnwind; return; } goto L_003B49B4; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_003B49D4:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B49E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 124u, depth + 1u); else { c.pc = 0x003B28E0u; return; } if (c.pc != 0x003B49E0u) [[unlikely]] return; }
L_003B49E0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003B4A14; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_003B4A0C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_003B4A08; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A08u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 124u, depth + 1u); else { c.pc = 0x003B28E0u; return; } if (c.pc != 0x003B4A08u) [[unlikely]] return; }
L_003B4A08:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003B4A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A14u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 124u, depth + 1u); else { c.pc = 0x003B28E0u; return; } if (c.pc != 0x003B4A14u) [[unlikely]] return; }
L_003B4A14:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003B4A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4A20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 124u, depth + 1u); else { c.pc = 0x003B28E0u; return; } if (c.pc != 0x003B4A20u) [[unlikely]] return; }
L_003B4A20:
    set32(c.r[2], ld32((c.r[29].w[0] + 492u)));
    set32(c.r[3], c.r[17].w[0] + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 488u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 288u)));  goto L_003B4A44; }
    st32((c.r[2].w[0]), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 2;
L_003B4A44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003B4A48:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_003B4A80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B4AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B4CD8; } }
L_003B4AC8:
    set32(c.r[20], c.r[3].w[0] - 1u);
    set32(c.r[16], c.r[22].w[0] + 24u);
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[18], c.r[21].w[0] + 24u);
    set32(c.r[17], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[23], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[23].w[0]));
    c.r[4].d[0] = ld64((c.r[17].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4AF0u); c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_00AC(c, 19u, depth + 1u); else { c.pc = 0x003B0BD8u; return; } if (c.pc != 0x003B4AF0u) [[unlikely]] return; }
L_003B4AF0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_003B4C08; }
    c.r[9].d[0] = c.r[19].d[0] << 32;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.budget -= 5;
L_003B4B10:
    c.r[2].d[0] = ld64((c.r[16].w[0]));
    c.r[12].d[0] = ld64((c.r[18].w[0]));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.r[3].d[0] = c.r[4].d[0] << 32;
    c.r[13].d[0] = c.r[12].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] >> 16;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    mmi::mult(c, 1, c.r[7].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[1];
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[12].d[0] = c.r[12].d[0] >> 16;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    mmi::multu(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::multu(c, 1, c.r[4].w[0], c.r[9].w[0]);
    c.r[14].d[0] = c.lo.d[1];
    c.r[1].d[0] = c.r[23].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.hi.d[1];
    mmi::pextlw(c.r[3], c.r[3], c.r[14]);
    c.r[14].d[0] = c.hi.d[0];
    mmi::mult(c, 1, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[9].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[8], c.r[14], c.r[8]);
    c.r[5].d[0] = c.r[6].d[0] + c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] + c.r[8].d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[11].d[0] + c.r[5].d[0];
    c.r[2].d[0] = c.r[8].d[0] + c.r[2].d[0];
    c.r[4].d[0] = c.r[5].d[0] >> 16;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[5].d[0] = c.r[13].d[0] - c.r[5].d[0];
    c.r[2].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.r[6].d[0] = c.r[10].d[0] + c.r[5].d[0];
    c.r[11].d[0] = c.r[2].d[0] >> 16;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[12].d[0] - c.r[2].d[0];
    c.r[2].d[0] = c.r[5].d[0] + c.r[2].d[0];
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 16);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 47;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4B10u | kUnwind; return; } goto L_003B4B10; } }
    c.r[2].d[0] = ld64((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4C04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[21].w[0] + 24u);  if (t) { goto L_003B4BE0; } }
L_003B4BE0:
    set32(c.r[17], c.r[17].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { st32((c.r[21].w[0] + 16u), c.r[20].w[0]);  goto L_003B4C04; }
    c.r[2].d[0] = ld64((c.r[17].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4BE0u | kUnwind; return; } goto L_003B4BE0; }
    st32((c.r[21].w[0] + 16u), c.r[20].w[0]);
    c.budget -= 1;
L_003B4C04:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003B4C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4C10u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 152u, depth + 1u); else { c.pc = 0x003B2F40u; return; } if (c.pc != 0x003B4C10u) [[unlikely]] return; }
L_003B4C10:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { c.r[2].d[0] = c.r[19].d[0] << 32;  goto L_003B4CD4; }
    set32(c.r[2], c.r[22].w[0] + 24u);
    c.r[19].d[0] = c.r[19].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[21].w[0] + 24u);
    c.budget -= 5;
L_003B4C2C:
    c.r[4].d[0] = ld64((c.r[2].w[0]));
    c.r[5].d[0] = ld64((c.r[10].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[3].d[0] = c.r[3].d[0] + c.r[8].d[0];
    c.r[6].d[0] = c.r[4].d[0] >> 16;
    c.r[4].d[0] = c.r[3].d[0] >> 16;
    c.r[1].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[6].d[0] + c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    c.r[8].d[0] = c.r[7].d[0] >> 16;
    c.r[3].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[6].d[0] = c.r[9].d[0] + c.r[3].d[0];
    c.r[4].d[0] = c.r[5].d[0] >> 16;
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 16);
    c.r[3].d[0] = c.r[4].d[0] - c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    st16((c.r[10].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 16);
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4C2Cu | kUnwind; return; } goto L_003B4C2C; } }
    set32(c.r[3], c.r[21].w[0] + 24u);
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003B4CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 8u);  if (t) { goto L_003B4CB0; } }
L_003B4CAC:
    set32(c.r[4], c.r[4].w[0] - 8u);
    c.budget -= 1;
L_003B4CB0:
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[21].w[0] + 16u), c.r[20].w[0]);  goto L_003B4CD0; }
    c.r[2].d[0] = ld64((c.r[4].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4CACu | kUnwind; return; } goto L_003B4CAC; }
    st32((c.r[21].w[0] + 16u), c.r[20].w[0]);
    c.budget -= 1;
L_003B4CD0:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.budget -= 1;
L_003B4CD4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 1;
L_003B4CD8:
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
L_003B4D08:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 30196u)));
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (t) { goto L_003B4DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 32072u);
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D5Cu); set32(c.r[18], 0u - 1u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003B4D5Cu) [[unlikely]] return; }
L_003B4D5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; st32((c.r[20].w[0] + 30196u), c.r[2].w[0]);  if (t) { goto L_003B4D6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 101u);  if (t) { goto L_003B4F0C; } }
L_003B4D6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[29].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] - 32056u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4D88u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x003B4D88u) [[unlikely]] return; }
L_003B4D88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[18].d[0]; st32((c.r[2].w[0] + 30200u), c.r[16].w[0]);  if (t) { goto L_003B4DAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4DA0u); set32(c.r[4], ld32((c.r[20].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003B4DA0u) [[unlikely]] return; }
L_003B4DA0:
    st32((c.r[20].w[0] + 30196u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 101u);  if (t) { goto L_003B4F0C; } }
L_003B4DAC:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4DBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 147u, depth + 1u); else { c.pc = 0x003B5758u; return; } if (c.pc != 0x003B4DBCu) [[unlikely]] return; }
L_003B4DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4DC4u); set32(c.r[4], ld32((c.r[20].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003B4DC4u) [[unlikely]] return; }
L_003B4DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4DCCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x003B4DCCu) [[unlikely]] return; }
L_003B4DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B4E0C; } }
    c.budget -= 1;
L_003B4DD8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 2;
L_003B4DE0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4DE0u | kUnwind; return; } goto L_003B4DE0; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003B4EF8; } }
L_003B4E0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[16].w[0] - 7680u);
    c.r[5].d[0] = c.r[5].d[0] | 1024ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 76u, depth + 1u); else { c.pc = 0x0039CB88u; return; } if (c.pc != 0x003B4E20u) [[unlikely]] return; }
L_003B4E20:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[18], c.r[16].w[0] - 7680u);  if (t) { goto L_003B4E54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E34u); set32(c.r[4], c.r[4].w[0] - 32032u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003B4E34u) [[unlikely]] return; }
L_003B4E34:
    c.budget -= 1;
L_003B4E38:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4E38u | kUnwind; return; } goto L_003B4E38; } }
L_003B4E54:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B4DD8u | kUnwind; return; } goto L_003B4DD8; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[21].w[0] - 2112u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 7552u);
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 254u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    set32(c.r[10], 0u + 12u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4E94u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B4E94u) [[unlikely]] return; }
L_003B4E94:
    set32(c.r[4], ld32((c.r[20].w[0] + 30196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4EA0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B4EA0u) [[unlikely]] return; }
L_003B4EA0:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_003B4EB4; }
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B4F0C; } }
L_003B4EB4:
    c.r[2].d[0] = c.r[2].sd[0] < 522ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003B4ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4EC8u); set32(c.r[4], c.r[4].w[0] - 32008u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003B4EC8u) [[unlikely]] return; }
L_003B4EC8:
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 120u);  if (t) { goto L_003B4F0C; } }
L_003B4ED4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 526ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003B4F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4EECu); set32(c.r[4], c.r[4].w[0] - 31968u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003B4EECu) [[unlikely]] return; }
L_003B4EEC:
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 121u);  if (t) { goto L_003B4F0C; } }
L_003B4EF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F00u); set32(c.r[4], c.r[4].w[0] - 32032u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003B4F00u) [[unlikely]] return; }
L_003B4F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B4F0C; } }
L_003B4F08:
    set32(c.r[2], ld32((c.r[21].w[0] - 2112u)));
    c.budget -= 1;
L_003B4F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003B4F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 30196u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003B4F74; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 147u, depth + 1u); else { c.pc = 0x003B5758u; return; } if (c.pc != 0x003B4F58u) [[unlikely]] return; }
L_003B4F58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F60u); set32(c.r[4], ld32((c.r[16].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003B4F60u) [[unlikely]] return; }
L_003B4F60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 30200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B4F74u); st32((c.r[16].w[0] + 30196u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x003B4F74u) [[unlikely]] return; }
L_003B4F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B4F88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] + 30200u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398E50u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 156u, depth); }
L_003B5058:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[3].w[0] - 7680u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B508C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B50FC; } }
L_003B508C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5098u); set32(c.r[4], ld32((c.r[16].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B5098u) [[unlikely]] return; }
L_003B5098:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B50A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B50FC; } }
L_003B50A8:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] - 7552u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[7].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[5], 0u + 21u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    set32(c.r[9], c.r[19].w[0] - 2112u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B50D8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B50D8u) [[unlikely]] return; }
L_003B50D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B50F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B50E8u); set32(c.r[4], ld32((c.r[16].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B50E8u) [[unlikely]] return; }
L_003B50E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B50FC; } }
L_003B50F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B50F8u); set32(c.r[4], ld32((c.r[16].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B50F8u) [[unlikely]] return; }
L_003B50F8:
    set32(c.r[2], ld32((c.r[19].w[0] - 2112u)));
    c.budget -= 1;
L_003B50FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B5118:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    set32(c.r[22], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B5164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B5218; } }
L_003B5164:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5170u); set32(c.r[4], ld32((c.r[18].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B5170u) [[unlikely]] return; }
L_003B5170:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B5218; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003B518C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B519C; } }
L_003B518C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5194u); set32(c.r[4], ld32((c.r[18].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5194u) [[unlikely]] return; }
L_003B5194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_003B5218; } }
L_003B519C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 7484u);
    set32(c.r[6], 0u + 1023u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B51B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003B51B0u) [[unlikely]] return; }
L_003B51B0:
    set32(c.r[3], c.r[16].w[0] - 20u);
    st32((c.r[16].w[0] - 20u), c.r[20].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[3].w[0] + 8u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[3].w[0] + 4u), c.r[21].w[0]);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[3].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B51F4u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B51F4u) [[unlikely]] return; }
L_003B51F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003B520C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5204u); set32(c.r[4], ld32((c.r[18].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5204u) [[unlikely]] return; }
L_003B5204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B5218; } }
L_003B520C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B5218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003B5240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5250u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_00AD(c, 116u, depth + 1u); else { c.pc = 0x003B5118u; return; } if (c.pc != 0x003B5250u) [[unlikely]] return; }
L_003B5250:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B5268; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u + 11u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.budget -= 3;
L_003B5268:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B5278:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[17], c.r[3].w[0] - 7680u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B52A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B531C; } }
L_003B52A8:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B52B4u); set32(c.r[4], ld32((c.r[18].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B52B4u) [[unlikely]] return; }
L_003B52B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B52C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B531C; } }
L_003B52C4:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[7].w[0] - 7552u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 7552u);
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B52F8u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B52F8u) [[unlikely]] return; }
L_003B52F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003B5310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5308u); set32(c.r[4], ld32((c.r[18].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5308u) [[unlikely]] return; }
L_003B5308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B531C; } }
L_003B5310:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B531C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B5338:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[19], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B5378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B53F8; } }
L_003B5378:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5384u); set32(c.r[4], ld32((c.r[20].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B5384u) [[unlikely]] return; }
L_003B5384:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B5394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B53F8; } }
L_003B5394:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[3].w[0] - 7552u);
    st32((c.r[3].w[0] - 7552u), c.r[16].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53D4u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B53D4u) [[unlikely]] return; }
L_003B53D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003B53EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B53E4u); set32(c.r[4], ld32((c.r[20].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B53E4u) [[unlikely]] return; }
L_003B53E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B53F8; } }
L_003B53EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B53F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003B5418:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003B5470; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[7].d[0] = c.r[6].d[0] | c.r[3].d[0];  if (t) { goto L_003B5470; } }
    set32(c.r[8], c.r[4].w[0] + 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 2;
L_003B5440:
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5440u | kUnwind; return; } goto L_003B5440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_003B5478; } }
L_003B5470:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 2;
L_003B5478:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_003B54C0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[7].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_003B54C0; } }
    set32(c.r[8], c.r[4].w[0] + 80u);
    c.budget -= 2;
L_003B5498:
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B5498u | kUnwind; return; } goto L_003B5498; } }
L_003B54C0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[9].w[0] + 30200u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398E50u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 156u, depth); }
L_003B54C8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[21], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B5510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B55B4; } }
L_003B5510:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B551Cu); set32(c.r[4], ld32((c.r[22].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B551Cu) [[unlikely]] return; }
L_003B551C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B552C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B55B4; } }
L_003B552C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[2].w[0] - 7552u);
    set32(c.r[16], c.r[16].w[0] - 6400u);
    st32((c.r[2].w[0] - 7552u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5554u); st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003B5554u) [[unlikely]] return; }
L_003B5554:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5560u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003B5560u) [[unlikely]] return; }
L_003B5560:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 21528u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5590u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B5590u) [[unlikely]] return; }
L_003B5590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003B55A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B55A0u); set32(c.r[4], ld32((c.r[22].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B55A0u) [[unlikely]] return; }
L_003B55A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B55B4; } }
L_003B55A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B55B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003B55E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], c.r[20].w[0] - 7680u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B5624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B5734; } }
L_003B5624:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5630u); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B5630u) [[unlikely]] return; }
L_003B5630:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B5640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B5734; } }
L_003B5640:
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    set32(c.r[6], c.r[19].w[0] - 7552u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] - 7552u), c.r[18].w[0]);  if (t) { goto L_003B5660; } }
    st32((c.r[6].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[6].w[0] + 24u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), 0u);  if (t) { goto L_003B568C; } }
L_003B5660:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    set32(c.r[4], c.r[17].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 11;
L_003B568C:
    set32(c.r[2], c.r[19].w[0] - 7552u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003B56D8; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[7].w[0] - 7552u);
    c.budget -= 4;
L_003B56B0:
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B56B0u | kUnwind; return; } goto L_003B56B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003B56E0; } }
L_003B56D8:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 2;
L_003B56E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B56E8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x003B56E8u) [[unlikely]] return; }
L_003B56E8:
    set32(c.r[4], c.r[20].w[0] - 7680u);
    set32(c.r[7], c.r[19].w[0] - 7552u);
    set32(c.r[9], c.r[18].w[0] - 2112u);
    set32(c.r[11], c.r[16].w[0] + 20360u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5710u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B5710u) [[unlikely]] return; }
L_003B5710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_003B5728; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5720u); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5720u) [[unlikely]] return; }
L_003B5720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B5734; } }
L_003B5728:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B5734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003B5758:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 30192u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003B5798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B57F8; } }
L_003B5798:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B57A4u); set32(c.r[4], ld32((c.r[17].w[0] + 30200u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B57A4u) [[unlikely]] return; }
L_003B57A4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_003B57BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 30200u)));  if (t) { goto L_003B57BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B57BCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 158u, depth + 1u); else { c.pc = 0x00398E60u; return; } if (c.pc != 0x003B57BCu) [[unlikely]] return; }
L_003B57BC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003B57CC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 30192u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003B57CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B57F8; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[19].w[0] + 30192u), 0u);  if (t) { goto L_003B57E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 2112u)));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_003B57E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B57F4u); set32(c.r[4], ld32((c.r[2].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B57F4u) [[unlikely]] return; }
L_003B57F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B57F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003B5820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 7640u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];  if (t) { goto L_003B583C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003B583C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7636u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B5858; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.budget -= 3;
L_003B5858:
    set32(c.r[3], ld32((c.r[2].w[0] - 7632u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_003B5870; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
L_003B5870:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[2].w[0] + 30200u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398E50u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 156u, depth); }
L_003B5878:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], c.r[22].w[0] - 7680u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003B58CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B59C8; } }
L_003B58CC:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B58D8u); set32(c.r[4], ld32((c.r[23].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B58D8u) [[unlikely]] return; }
L_003B58D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B58E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B59C8; } }
L_003B58E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[17].w[0] - 7552u);
    set32(c.r[2], c.r[4].w[0] - 6400u);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[3].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003B5910; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_003B5914; } }
L_003B5910:
    st32((c.r[3].w[0] + 20u), 0u);
    c.budget -= 1;
L_003B5914:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] - 7552u);  if (t) { goto L_003B5928; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003B5930; } }
L_003B5928:
    set32(c.r[2], c.r[17].w[0] - 7552u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 2;
L_003B5930:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] - 7552u);  if (t) { goto L_003B5944; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003B594C; } }
L_003B5944:
    set32(c.r[2], c.r[17].w[0] - 7552u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 2;
L_003B594C:
    set32(c.r[16], c.r[4].w[0] - 6400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[2].w[0] - 7640u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] - 7636u), c.r[20].w[0]);
    set32(c.r[5], 0u + 192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5974u); st32((c.r[6].w[0] - 7632u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003B5974u) [[unlikely]] return; }
L_003B5974:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[4], c.r[22].w[0] - 7680u);
    set32(c.r[7], c.r[17].w[0] - 7552u);
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 22560u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59A4u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B59A4u) [[unlikely]] return; }
L_003B59A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003B59BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B59B4u); set32(c.r[4], ld32((c.r[23].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B59B4u) [[unlikely]] return; }
L_003B59B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B59C8; } }
L_003B59BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B59C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003B59F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 7680u);
    set32(c.r[7], c.r[7].w[0] - 7552u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 53u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    set32(c.r[9], c.r[16].w[0] - 2112u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5A3Cu); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B5A3Cu) [[unlikely]] return; }
L_003B5A3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003B5A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5A4Cu); set32(c.r[4], c.r[4].w[0] - 31928u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x003B5A4Cu) [[unlikely]] return; }
L_003B5A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B5A58; } }
L_003B5A54:
    set32(c.r[2], ld32((c.r[16].w[0] - 2112u)));
    c.budget -= 1;
L_003B5A58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B5A68:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    set32(c.r[23], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 36u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B5AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B5B88; } }
L_003B5AC0:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5ACCu); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B5ACCu) [[unlikely]] return; }
L_003B5ACC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B5B88; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B5AE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B5AF8; } }
L_003B5AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5AF0u); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5AF0u) [[unlikely]] return; }
L_003B5AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_003B5B88; } }
L_003B5AF8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 7504u);
    st32((c.r[2].w[0] - 7504u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[6], 0u + 1023u);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B20u); st32((c.r[16].w[0] + 16u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003B5B20u) [[unlikely]] return; }
L_003B5B20:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003B5B34; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B34u); set32(c.r[5], c.r[17].w[0] << 6);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003B5B34u) [[unlikely]] return; }
L_003B5B34:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B64u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B5B64u) [[unlikely]] return; }
L_003B5B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_003B5B7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5B74u); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5B74u) [[unlikely]] return; }
L_003B5B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B5B88; } }
L_003B5B7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B5B88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003B5BB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_003B5C24; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[18].w[0] - 6208u);
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5BECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003B5BECu) [[unlikely]] return; }
L_003B5BEC:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 1023u);  goto L_003B5C04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5C00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003B5C00u) [[unlikely]] return; }
L_003B5C00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B5C04:
    set32(c.r[2], c.r[18].w[0] - 6208u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5C1Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003B5C1Cu) [[unlikely]] return; }
L_003B5C1C:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003B5C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[4], ld32((c.r[2].w[0] + 30200u)));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00398E50u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 156u, depth); }
L_003B5C48:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    set32(c.r[23], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 36u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B5C98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B5D5C; } }
L_003B5C98:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5CA4u); set32(c.r[4], ld32((c.r[19].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B5CA4u) [[unlikely]] return; }
L_003B5CA4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B5D5C; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003B5CC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B5CD0; } }
L_003B5CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5CC8u); set32(c.r[4], ld32((c.r[19].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5CC8u) [[unlikely]] return; }
L_003B5CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_003B5D5C; } }
L_003B5CD0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[17], c.r[2].w[0] - 7504u);
    set32(c.r[16], c.r[16].w[0] - 6208u);
    st32((c.r[2].w[0] - 7504u), c.r[20].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[21].w[0]);
    set32(c.r[4], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5CF8u); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003B5CF8u) [[unlikely]] return; }
L_003B5CF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[17].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D08u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_00A7(c, 16u, depth + 1u); else { c.pc = 0x0039C330u; return; } if (c.pc != 0x003B5D08u) [[unlikely]] return; }
L_003B5D08:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[29].w[0]), c.r[22].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 23480u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D38u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B5D38u) [[unlikely]] return; }
L_003B5D38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_003B5D50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5D48u); set32(c.r[4], ld32((c.r[19].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5D48u) [[unlikely]] return; }
L_003B5D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B5D5C; } }
L_003B5D50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B5D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003B5D88:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B5DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B5E38; } }
L_003B5DC0:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5DCCu); set32(c.r[4], ld32((c.r[19].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B5DCCu) [[unlikely]] return; }
L_003B5DCC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B5DDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B5E38; } }
L_003B5DDC:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] - 7552u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[7].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[7].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E14u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B5E14u) [[unlikely]] return; }
L_003B5E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_003B5E2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5E24u); set32(c.r[4], ld32((c.r[19].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5E24u) [[unlikely]] return; }
L_003B5E24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B5E38; } }
L_003B5E2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B5E38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B5E58:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[21], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B5E9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B5F50; } }
L_003B5E9C:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5EA8u); set32(c.r[4], ld32((c.r[18].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B5EA8u) [[unlikely]] return; }
L_003B5EA8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B5F50; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003B5EC4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B5ED4; } }
L_003B5EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5ECCu); set32(c.r[4], ld32((c.r[18].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5ECCu) [[unlikely]] return; }
L_003B5ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_003B5F50; } }
L_003B5ED4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 7484u);
    set32(c.r[6], 0u + 1023u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5EE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003B5EE8u) [[unlikely]] return; }
L_003B5EE8:
    set32(c.r[3], c.r[16].w[0] - 20u);
    st32((c.r[16].w[0] - 20u), c.r[20].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[3].w[0] + 4u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[3].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    set32(c.r[5], 0u + 15u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F2Cu); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B5F2Cu) [[unlikely]] return; }
L_003B5F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_003B5F44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5F3Cu); set32(c.r[4], ld32((c.r[18].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B5F3Cu) [[unlikely]] return; }
L_003B5F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B5F50; } }
L_003B5F44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B5F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003B5F78:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[17], c.r[3].w[0] - 7680u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B5FA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B601C; } }
L_003B5FA8:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5FB4u); set32(c.r[4], ld32((c.r[18].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B5FB4u) [[unlikely]] return; }
L_003B5FB4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B5FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B601C; } }
L_003B5FC4:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[7].w[0] - 7552u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 7552u);
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B5FF8u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B5FF8u) [[unlikely]] return; }
L_003B5FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_003B6010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6008u); set32(c.r[4], ld32((c.r[18].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B6008u) [[unlikely]] return; }
L_003B6008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B601C; } }
L_003B6010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B601C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B6038:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    set32(c.r[23], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 36u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003B608C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B61D8; } }
L_003B608C:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6098u); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B6098u) [[unlikely]] return; }
L_003B6098:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B61D8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003B60B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B60C4; } }
L_003B60B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B60BCu); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B60BCu) [[unlikely]] return; }
L_003B60BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_003B61D8; } }
L_003B60C4:
    c.r[17].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[16], c.r[2].w[0] - 7504u);
    st32((c.r[2].w[0] - 7504u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] - 7616u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[9], c.r[2].w[0] - 7616u);
    ldl(c.r[6], (c.r[22].w[0] + 7u));
    ldr(c.r[6], (c.r[22].w[0]));
    ldl(c.r[7], (c.r[22].w[0] + 15u));
    ldr(c.r[7], (c.r[22].w[0] + 8u));
    ldl(c.r[8], (c.r[22].w[0] + 23u));
    ldr(c.r[8], (c.r[22].w[0] + 16u));
    sdl(c.r[6], (c.r[9].w[0] + 7u));
    sdr(c.r[6], (c.r[9].w[0]));
    sdl(c.r[7], (c.r[9].w[0] + 15u));
    sdr(c.r[7], (c.r[9].w[0] + 8u));
    sdl(c.r[8], (c.r[9].w[0] + 23u));
    sdr(c.r[8], (c.r[9].w[0] + 16u));
    ldl(c.r[6], (c.r[22].w[0] + 31u));
    ldr(c.r[6], (c.r[22].w[0] + 24u));
    ldl(c.r[7], (c.r[22].w[0] + 39u));
    ldr(c.r[7], (c.r[22].w[0] + 32u));
    ldl(c.r[8], (c.r[22].w[0] + 47u));
    ldr(c.r[8], (c.r[22].w[0] + 40u));
    sdl(c.r[6], (c.r[9].w[0] + 31u));
    sdr(c.r[6], (c.r[9].w[0] + 24u));
    sdl(c.r[7], (c.r[9].w[0] + 39u));
    sdr(c.r[7], (c.r[9].w[0] + 32u));
    sdl(c.r[8], (c.r[9].w[0] + 47u));
    sdr(c.r[8], (c.r[9].w[0] + 40u));
    ldl(c.r[6], (c.r[22].w[0] + 55u));
    ldr(c.r[6], (c.r[22].w[0] + 48u));
    ldl(c.r[7], (c.r[22].w[0] + 63u));
    ldr(c.r[7], (c.r[22].w[0] + 56u));
    sdl(c.r[6], (c.r[9].w[0] + 55u));
    sdr(c.r[6], (c.r[9].w[0] + 48u));
    sdl(c.r[7], (c.r[9].w[0] + 63u));
    sdr(c.r[7], (c.r[9].w[0] + 56u));
    set32(c.r[6], 0u + 1023u);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6178u); st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003B6178u) [[unlikely]] return; }
L_003B6178:
    st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6184u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x003B6184u) [[unlikely]] return; }
L_003B6184:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B61B4u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B61B4u) [[unlikely]] return; }
L_003B61B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_003B61CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B61C4u); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B61C4u) [[unlikely]] return; }
L_003B61C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B61D8; } }
L_003B61CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B61D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003B6208:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[22], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B6254; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B6338; } }
L_003B6254:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6260u); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B6260u) [[unlikely]] return; }
L_003B6260:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B6338; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B6284; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003B6284; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B6294; } }
L_003B6284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B628Cu); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B628Cu) [[unlikely]] return; }
L_003B628C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_003B6338; } }
L_003B6294:
    set32(c.r[3], 0u + 16u);
    set32(c.r[17], c.r[2].w[0] - 7504u);
    st32((c.r[2].w[0] - 7504u), c.r[20].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62B8u); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003B62B8u) [[unlikely]] return; }
L_003B62B8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 7584u);
    st8((c.r[17].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62D4u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003B62D4u) [[unlikely]] return; }
L_003B62D4:
    set32(c.r[16], c.r[16].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B62E4u); st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 166u, depth + 1u); else { c.pc = 0x003990A0u; return; } if (c.pc != 0x003B62E4u) [[unlikely]] return; }
L_003B62E4:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6314u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B6314u) [[unlikely]] return; }
L_003B6314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_003B632C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6324u); set32(c.r[4], ld32((c.r[21].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B6324u) [[unlikely]] return; }
L_003B6324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B6338; } }
L_003B632C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B6338:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003B6360:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B6398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B6410; } }
L_003B6398:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63A4u); set32(c.r[4], ld32((c.r[19].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B63A4u) [[unlikely]] return; }
L_003B63A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B63B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B6410; } }
L_003B63B4:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[7], c.r[7].w[0] - 7552u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[7].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[7].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63ECu); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B63ECu) [[unlikely]] return; }
L_003B63EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_003B6404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B63FCu); set32(c.r[4], ld32((c.r[19].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B63FCu) [[unlikely]] return; }
L_003B63FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B6410; } }
L_003B6404:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B6410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003B6430:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[20], c.r[2].w[0] - 7680u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B6470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_003B651C; } }
L_003B6470:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B647Cu); set32(c.r[4], ld32((c.r[17].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 160u, depth + 1u); else { c.pc = 0x00398E70u; return; } if (c.pc != 0x003B647Cu) [[unlikely]] return; }
L_003B647C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_003B651C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003B6498; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);  if (t) { goto L_003B64A8; } }
L_003B6498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64A0u); set32(c.r[4], ld32((c.r[17].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B64A0u) [[unlikely]] return; }
L_003B64A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_003B651C; } }
L_003B64A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 7504u);
    st32((c.r[2].w[0] - 7504u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64C4u); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x003B64C4u) [[unlikely]] return; }
L_003B64C4:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 2112u);
    set32(c.r[11], c.r[11].w[0] + 20360u);
    set32(c.r[5], 0u + 18u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B64F8u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_00A7(c, 88u, depth + 1u); else { c.pc = 0x0039CD68u; return; } if (c.pc != 0x003B64F8u) [[unlikely]] return; }
L_003B64F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_003B6510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6508u); set32(c.r[4], ld32((c.r[17].w[0] + 30196u)));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x003B6508u) [[unlikely]] return; }
L_003B6508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_003B651C; } }
L_003B6510:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[3].w[0] + 30192u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003B651C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003B6540:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[29], c.r[29].w[0] - 16u);  if (t) { goto L_003B6550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B6870; } }
L_003B6550:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B6564; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B6870; } }
L_003B6564:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 2u);  goto L_003B6578; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 36867ull;  if (t) { goto L_003B6870; } }
L_003B6578:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 3u);  goto L_003B658C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 47ull;  if (t) { goto L_003B6870; } }
L_003B658C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 4u);  goto L_003B65AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.r[4].d[0] = c.r[4].d[0] ^ 5ull;
    set32(c.r[3], 0u + 5u);
    c.r[2].d[0] = c.r[2].d[0] | 28ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003B6870; } }
L_003B65AC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 5u);  if (t) { goto L_003B6664; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003B6604; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003B6604; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003B6604; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003B6604; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 19u);  goto L_003B65FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 17ull;  if (t) { goto L_003B6870; } }
L_003B65FC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 10u);  goto L_003B6610; }
L_003B6604:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 2ull;  if (t) { goto L_003B6870; } }
L_003B6610:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003B6630; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003B6630; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_003B663C; } }
L_003B6630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 9ull;  if (t) { goto L_003B6870; } }
L_003B663C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[2].d[0] | 9ull;  if (t) { goto L_003B6870; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.r[4].d[0] = c.r[4].d[0] ^ 6ull;
    c.r[3].d[0] = c.r[3].d[0] | 9ull;
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003B6870; } }
L_003B6664:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 6u);  if (t) { goto L_003B66C4; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003B6690; } }
    set32(c.r[2], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003B6690; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_003B669C; } }
L_003B6690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 13ull;  if (t) { goto L_003B6870; } }
L_003B669C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[2].d[0] | 13ull;  if (t) { goto L_003B6870; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.r[4].d[0] = c.r[4].d[0] ^ 6ull;
    c.r[3].d[0] = c.r[3].d[0] | 13ull;
    c.r[2].d[0] = c.r[2].d[0] | 111ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003B6870; } }
L_003B66C4:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 7u);  goto L_003B66F8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[2].d[0] | 5ull;  if (t) { goto L_003B6870; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.r[4].d[0] = c.r[4].d[0] ^ 12ull;
    c.r[3].d[0] = c.r[3].d[0] | 5ull;
    c.r[2].d[0] = c.r[2].d[0] | 90ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_003B6870; } }
L_003B66F8:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 8u);  goto L_003B670C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 24ull;  if (t) { goto L_003B6870; } }
L_003B670C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003B6834; } }
    set32(c.r[2], 0u - 100u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 101u);  goto L_003B672C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32769ull;  if (t) { goto L_003B6870; } }
L_003B672C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 91u);  goto L_003B6740; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32771ull;  if (t) { goto L_003B6870; } }
L_003B6740:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 120u);  goto L_003B6754; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32778ull;  if (t) { goto L_003B6870; } }
L_003B6754:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003B6768; } }
    set32(c.r[2], 0u - 121u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 200u);  goto L_003B6774; }
L_003B6768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32777ull;  if (t) { goto L_003B6870; } }
L_003B6774:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 210u);  goto L_003B6788; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 16ull;  if (t) { goto L_003B6870; } }
L_003B6788:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003B679C; } }
    set32(c.r[2], 0u - 403u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 9u);  goto L_003B67A8; }
L_003B679C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 22ull;  if (t) { goto L_003B6870; } }
L_003B67A8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_003B6834; } }
    set32(c.r[2], 0u - 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 11u);  if (t) { goto L_003B67C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 19ull;  if (t) { goto L_003B6870; } }
L_003B67C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 12u);  if (t) { goto L_003B67DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 19ull;  if (t) { goto L_003B6870; } }
L_003B67DC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 13u);  if (t) { goto L_003B67F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 19ull;  if (t) { goto L_003B6870; } }
L_003B67F0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 14u);  if (t) { goto L_003B6804; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 19ull;  if (t) { goto L_003B6870; } }
L_003B6804:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 15u);  if (t) { goto L_003B6818; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 19ull;  if (t) { goto L_003B6870; } }
L_003B6818:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 40u);  if (t) { goto L_003B682C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 19ull;  if (t) { goto L_003B6870; } }
L_003B682C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 41u);  goto L_003B6840; }
L_003B6834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 5ull;  if (t) { goto L_003B6870; } }
L_003B6840:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 42u);  if (t) { goto L_003B6854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 19ull;  if (t) { goto L_003B6870; } }
L_003B6854:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003B6868; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 19ull;  if (t) { goto L_003B6870; } }
L_003B6868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81080000u);
    c.r[2].d[0] = c.r[2].d[0] | 19ull;
    c.budget -= 2;
L_003B6870:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B6878:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6888u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_00AE(c, 117u, depth + 1u); else { c.pc = 0x003B9308u; return; } if (c.pc != 0x003B6888u) [[unlikely]] return; }
L_003B6888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6890u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 12u, depth + 1u); else { c.pc = 0x00100218u; return; } if (c.pc != 0x003B6890u) [[unlikely]] return; }
L_003B6890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B68A4u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_00AE(c, 296u, depth + 1u); else { c.pc = 0x003BAD48u; return; } if (c.pc != 0x003B68A4u) [[unlikely]] return; }
L_003B68A4:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B68B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00AE(c, 296u, depth); }
L_003B68D8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[6].d[0] == 0ull; c.r[23].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B6960; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B6964; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003B6968; } }
    set32(c.r[15], c.r[19].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_003B6930:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[16], c.r[15].w[0] >> 1);
    mmi::mult(c, 0, c.r[16].w[0], c.r[20].w[0]);
    c.r[14].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[22].w[0] + c.r[14].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[21].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6948u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B6948u) [[unlikely]] return; }
L_003B6948:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003B6990; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003B6954:
    c.r[15].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], c.r[19].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6930u | kUnwind; return; } goto L_003B6930; } }
L_003B6960:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B6964:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B6968:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B6990:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[19], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6954u | kUnwind; return; } goto L_003B6954; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6964u | kUnwind; return; } goto L_003B6964; } }
L_003B69A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 20784u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B69C4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 219u, depth + 1u); else { c.pc = 0x00399508u; return; } if (c.pc != 0x003B69C4u) [[unlikely]] return; }
L_003B69C4:
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[15].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B69E0; }
    set32(c.r[15], ld32((c.r[16].w[0] + 20784u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[15].w[0]);  goto L_003B69DC; }
L_003B69DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B69E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B69F0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[15].w[0] + 30960u)));  c.pc = t; return; }
L_003B6A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    set32(c.r[18], ld32((c.r[14].w[0] + 328u)));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B6A68; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003B6A30:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[15], c.r[17].w[0] << 2);  if (t) { goto L_003B6A58; } }
    set32(c.r[15], c.r[15].w[0] + c.r[18].w[0]);
    set32(c.r[16], c.r[15].w[0] + 8u);
    c.budget -= 2;
L_003B6A44:
    set32(c.r[15], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[15].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A50u); set32(c.r[17], c.r[17].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B6A50u) [[unlikely]] return; }
L_003B6A50:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6A44u | kUnwind; return; } goto L_003B6A44; } }
L_003B6A58:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6A30u | kUnwind; return; } goto L_003B6A30; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 1;
L_003B6A68:
    set32(c.r[4], ld32((c.r[15].w[0] + 30960u)));
    set32(c.r[15], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003B6A80; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[15].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B6A80u) [[unlikely]] return; }
L_003B6A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6A88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 12u, depth + 1u); else { c.pc = 0x00100218u; return; } if (c.pc != 0x003B6A88u) [[unlikely]] return; }
L_003B6A88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B6B74; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[15], ld32((c.r[4].w[0] + 56u)));  goto L_003B6AC4; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    st32((c.r[16].w[0] + 84u), c.r[14].w[0]);
    c.r[4].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[15], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
L_003B6AC4:
    c.budget -= 2;
    if (c.r[15].d[0] != 0ull) { c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003B6AD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AD4u);  if (depth < kMaxDepth) unit_00AD(c, 259u, depth + 1u); else { c.pc = 0x003B6E80u; return; } if (c.pc != 0x003B6AD4u) [[unlikely]] return; }
L_003B6AD4:
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003B6AD8:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B6B74; } }
    c.r[15].d[0] = c.r[15].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003B6AF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6AF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003B6AF4u) [[unlikely]] return; }
L_003B6AF4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003B6AF8:
    set32(c.r[15], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003B6B1C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[15].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B6B0Cu) [[unlikely]] return; }
L_003B6B0C:
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[15], 0u - 1u);
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[15].d[0];
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 4;
L_003B6B1C:
    c.r[15].d[0] = c.r[15].d[0] & 128ull;
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  goto L_003B6B38; }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B34u); set32(c.r[5], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x001002A0u; return; } if (c.pc != 0x003B6B34u) [[unlikely]] return; }
L_003B6B34:
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_003B6B38:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[15], c.r[16].w[0] + 64u);  if (t) { goto L_003B6B54; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[15].d[0]) { st32((c.r[16].w[0] + 48u), 0u);  goto L_003B6B54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B50u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x001002A0u; return; } if (c.pc != 0x003B6B50u) [[unlikely]] return; }
L_003B6B50:
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_003B6B54:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));  goto L_003B6B70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6B68u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x001002A0u; return; } if (c.pc != 0x003B6B68u) [[unlikely]] return; }
L_003B6B68:
    st32((c.r[16].w[0] + 68u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_003B6B70:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003B6B74:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6B88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B6BD0; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[15].w[0] + 30960u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 27528u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_003B7AD8; }
L_003B6BD0:
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[15], ld32((c.r[4].w[0] + 56u)));  goto L_003B6BF0; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    st32((c.r[17].w[0] + 84u), c.r[14].w[0]);
    c.r[4].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[15], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
L_003B6BF0:
    c.budget -= 2;
    if (c.r[15].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));  goto L_003B6C04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C00u);  if (depth < kMaxDepth) unit_00AD(c, 259u, depth + 1u); else { c.pc = 0x003B6E80u; return; } if (c.pc != 0x003B6C00u) [[unlikely]] return; }
L_003B6C00:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003B6C04:
    c.r[15].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003B6C68; }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[14].d[0] = c.r[2].d[0] & 3ull;  if (t) { goto L_003B6C64; } }
    set32(c.r[15], ld32((c.r[17].w[0])));
    c.r[13].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[16], c.r[15].w[0] - c.r[18].w[0]);  if (t) { goto L_003B6C34; } }
    set32(c.r[13], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003B6C34:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[17].w[0] + 8u), c.r[13].w[0]);  if (t) { goto L_003B6C64; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_003B6C40:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6C50u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B6C50u) [[unlikely]] return; }
L_003B6C50:
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_003B6C80; } }
    c.budget -= 2;
    if (c.r[16].sd[0] > 0) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6C40u | kUnwind; return; } goto L_003B6C40; }
L_003B6C64:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B6C68:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6C80:
    c.r[15].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[2], 0u - 1u);
    c.r[15].d[0] = c.r[15].d[0] | 64ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6C68u | kUnwind; return; } goto L_003B6C68; } }
    c.budget -= 1;
L_003B6C98:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[4].w[0] + 84u), c.r[7].w[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[15], c.r[15].w[0] - 26880u);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[14], c.r[14].w[0] - 26784u);
    st32((c.r[4].w[0] + 32u), c.r[15].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[14].w[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[4].w[0]), 0u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[15], c.r[15].w[0] - 26656u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[14], c.r[14].w[0] - 26552u);
    st32((c.r[4].w[0] + 40u), c.r[15].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[14].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[4].w[0]);  c.pc = t; return; }
L_003B6CF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[16], 0u + 88u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6D20u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0000(c, 23u, depth + 1u); else { c.pc = 0x001002B0u; return; } if (c.pc != 0x003B6D20u) [[unlikely]] return; }
L_003B6D20:
    set32(c.r[15], c.r[2].w[0] + 12u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[15].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B6D50; } }
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6D4Cu); st32((c.r[17].w[0] + 8u), c.r[15].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x003B6D4Cu) [[unlikely]] return; }
L_003B6D4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003B6D50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6D68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[15], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B6D8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6D8Cu);  if (depth < kMaxDepth) unit_00AD(c, 259u, depth + 1u); else { c.pc = 0x003B6E80u; return; } if (c.pc != 0x003B6D8Cu) [[unlikely]] return; }
L_003B6D8C:
    set32(c.r[16], c.r[17].w[0] + 472u);
    c.budget -= 1;
L_003B6D90:
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[14].sd[0] < 0; set32(c.r[13], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_003B6DB4; } }
L_003B6DA0:
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], c.r[14].w[0] - 1u);  if (t) { goto L_003B6DFC; } }
    c.budget -= 2;
    { const bool t = c.r[14].sd[0] >= 0; set32(c.r[13], c.r[13].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6DA0u | kUnwind; return; } goto L_003B6DA0; } }
L_003B6DB4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6D90u | kUnwind; return; } goto L_003B6D90; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6DCCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00AD(c, 249u, depth + 1u); else { c.pc = 0x003B6CF8u; return; } if (c.pc != 0x003B6DCCu) [[unlikely]] return; }
L_003B6DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003B6DDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6D90u | kUnwind; return; } goto L_003B6D90; } }
L_003B6DDC:
    set32(c.r[15], 0u + 12u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[15].w[0]);
    c.budget -= 3;
L_003B6DE8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B6DFC:
    set32(c.r[15], 0u + 1u);
    st32((c.r[13].w[0] + 84u), c.r[17].w[0]);
    st16((c.r[13].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[2].d[0] = c.r[13].d[0] + 0ull;
    st32((c.r[13].w[0]), 0u);
    set32(c.r[15], 0u - 1u);
    st32((c.r[13].w[0] + 8u), 0u);
    st16((c.r[13].w[0] + 14u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[13].w[0] + 4u), 0u);
    st32((c.r[13].w[0] + 16u), 0u);
    st32((c.r[13].w[0] + 20u), 0u);
    st32((c.r[13].w[0] + 24u), 0u);
    st32((c.r[13].w[0] + 48u), 0u);
    st32((c.r[13].w[0] + 52u), 0u);
    st32((c.r[13].w[0] + 68u), 0u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6DE8u | kUnwind; return; } goto L_003B6DE8; } }
L_003B6E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 27528u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_003B7AD8; }
L_003B6E80:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 472u), 0u);
    set32(c.r[15], c.r[15].w[0] + 28224u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    st32((c.r[4].w[0] + 60u), c.r[15].w[0]);
    set32(c.r[14], c.r[4].w[0] + 484u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[15], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st32((c.r[4].w[0] + 56u), c.r[15].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 480u), c.r[14].w[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[15], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 476u), c.r[15].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6ECCu); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AD(c, 248u, depth + 1u); else { c.pc = 0x003B6C98u; return; } if (c.pc != 0x003B6ECCu) [[unlikely]] return; }
L_003B6ECC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6EE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00AD(c, 248u, depth + 1u); else { c.pc = 0x003B6C98u; return; } if (c.pc != 0x003B6EE0u) [[unlikely]] return; }
L_003B6EE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 10u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 2u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6C98u | kUnwind; return; } goto L_003B6C98; }
L_003B6F00:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[15], 0u + 114u);
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[14].sd[0] < 115ll ? 1ull : 0ull;  if (t) { goto L_003B6F88; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 97u);  if (t) { goto L_003B6F6C; } }
    c.budget -= 2;
    if (c.r[14].d[0] == c.r[15].d[0]) { set32(c.r[2], 0u + 264u);  goto L_003B6F30; }
    set32(c.r[15], 0u + 22u);
    c.budget -= 1;
L_003B6F24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[15].w[0]);  c.pc = t; return; }
L_003B6F30:
    set32(c.r[12], 0u + 1u);
    set32(c.r[13], 0u + 520u);
    c.budget -= 2;
L_003B6F38:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], 0u + 43u);  if (t) { goto L_003B6F60; } }
    c.budget -= 2;
    if (c.r[15].d[0] == c.r[14].d[0]) { set32(c.r[2], 0u + 16u);  goto L_003B6F5C; }
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != c.r[14].d[0]; c.r[15].d[0] = c.r[12].d[0] | c.r[13].d[0];  if (t) { goto L_003B6F64; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_003B6F5C:
    set32(c.r[12], 0u + 2u);
    c.budget -= 1;
L_003B6F60:
    c.r[15].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.budget -= 1;
L_003B6F64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[15].w[0]);  c.pc = t; return; }
L_003B6F6C:
    set32(c.r[15], 0u + 119u);
    c.budget -= 3;
    { const bool t = c.r[14].d[0] != c.r[15].d[0]; set32(c.r[15], 0u + 22u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6F24u | kUnwind; return; } goto L_003B6F24; } }
    set32(c.r[2], 0u + 8u);
    set32(c.r[12], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[13], 0u + 1536u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6F38u | kUnwind; return; } goto L_003B6F38; } }
L_003B6F88:
    set32(c.r[2], 0u + 4u);
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6F38u | kUnwind; return; } goto L_003B6F38; } }
L_003B6F98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FC0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 262u, depth + 1u); else { c.pc = 0x003B6F00u; return; } if (c.pc != 0x003B6FC0u) [[unlikely]] return; }
L_003B6FC0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B700C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FD8u);  if (depth < kMaxDepth) unit_00AD(c, 252u, depth + 1u); else { c.pc = 0x003B6D68u; return; } if (c.pc != 0x003B6FD8u) [[unlikely]] return; }
L_003B6FD8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 438u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B700C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B6FF8u); set32(c.r[6], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 18u, depth + 1u); else { c.pc = 0x003B8310u; return; } if (c.pc != 0x003B6FF8u) [[unlikely]] return; }
L_003B6FF8:
    c.r[15].d[0] = c.r[2].d[0] + 0ull;
    c.r[13].d[0] = c.r[17].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[15].sd[0] >= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003B7024; } }
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_003B700C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B7024:
    st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[14], c.r[14].w[0] - 26784u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[16].w[0] + 36u), c.r[14].w[0]);
    set32(c.r[15], c.r[15].w[0] - 26880u);
    st32((c.r[16].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[15].w[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[14], c.r[14].w[0] - 26552u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st32((c.r[16].w[0] + 44u), c.r[14].w[0]);
    set32(c.r[15], c.r[15].w[0] - 26656u);
    c.budget -= 16;
    { const bool t = c.r[13].d[0] == 0ull; st32((c.r[16].w[0] + 40u), c.r[15].w[0]);  if (t) { goto L_003B7074; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7074u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00AD(c, 283u, depth + 1u); else { c.pc = 0x003B7240u; return; } if (c.pc != 0x003B7074u) [[unlikely]] return; }
L_003B7074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B700Cu | kUnwind; return; } goto L_003B700C; } }
    c.budget -= 1;
L_003B7080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[14].w[0] + 30960u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B6F98u | kUnwind; return; } goto L_003B6F98; }
L_003B70A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 32u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[10].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B70D0u); st64((c.r[29].w[0] + 56u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_00AE(c, 330u, depth + 1u); else { c.pc = 0x003BB388u; return; } if (c.pc != 0x003B70D0u) [[unlikely]] return; }
L_003B70D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B70E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B70F8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003B70F8u) [[unlikely]] return; }
L_003B70F8:
    set32(c.r[15], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[15].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[15], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B711Cu); st32((c.r[29].w[0] + 4u), c.r[15].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 311u, depth + 1u); else { c.pc = 0x003B7710u; return; } if (c.pc != 0x003B711Cu) [[unlikely]] return; }
L_003B711C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B7130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == 0ull; c.r[21].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B7204; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003B7184; } }
    st32((c.r[7].w[0] + 4u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_003B7184:
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[15].d[0] = c.r[6].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[22].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003B71D8; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003B7198:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B71A8u); set32(c.r[18], c.r[18].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003B71A8u) [[unlikely]] return; }
L_003B71A8:
    set32(c.r[19], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[15], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[15], c.r[15].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B71C0u); st32((c.r[17].w[0]), c.r[15].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003B71C0u) [[unlikely]] return; }
L_003B71C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[15], c.r[22].w[0] - c.r[18].w[0]);  if (t) { goto L_003B722C; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[15].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7198u | kUnwind; return; } goto L_003B7198; }
L_003B71D8:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B71E8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x003B71E8u) [[unlikely]] return; }
L_003B71E8:
    set32(c.r[14], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[15], ld32((c.r[17].w[0])));
    set32(c.r[14], c.r[14].w[0] - c.r[18].w[0]);
    set32(c.r[15], c.r[15].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[14].w[0]);
    st32((c.r[17].w[0]), c.r[15].w[0]);
    c.budget -= 7;
L_003B7204:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B722C:
    mmi::divu(c, 0, c.r[15].w[0], c.r[20].w[0]);
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { breakpoint(c, 0x003B7234u);  goto L_003B7238; }
L_003B7238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.lo.d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7204u | kUnwind; return; } goto L_003B7204; } }
L_003B7240:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[21].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 120u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 15;
    { const bool t = c.r[17].d[0] != 0ull; c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B728C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[14], ld32((c.r[15].w[0] + 30960u)));
    st32((c.r[4].w[0] + 84u), c.r[14].w[0]);
    c.r[17].d[0] = c.r[14].d[0] + 0ull;
    c.budget -= 4;
L_003B728C:
    set32(c.r[15], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[15], ld32((c.r[16].w[0] + 12u)));  goto L_003B72A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B72A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 259u, depth + 1u); else { c.pc = 0x003B6E80u; return; } if (c.pc != 0x003B72A0u) [[unlikely]] return; }
L_003B72A0:
    set32(c.r[17], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[15], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 2;
L_003B72A8:
    set32(c.r[14], 0u + 264u);
    c.r[15].d[0] = c.r[15].d[0] & 264ull;
    c.budget -= 4;
    if (c.r[15].d[0] != c.r[14].d[0]) { set32(c.r[20], ld32((c.r[16].w[0] + 40u)));  goto L_003B72C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B72C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003B72C0u) [[unlikely]] return; }
L_003B72C0:
    set32(c.r[20], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_003B72C4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[15], 0u + 1u);  if (t) { goto L_003B7304; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[15], 0u + 29u);
    c.budget -= 2;
L_003B72D4:
    st32((c.r[17].w[0]), c.r[15].w[0]);
    c.budget -= 1;
L_003B72D8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 136u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 152u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 168u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003B7304:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003B7618; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 2u);  if (t) { goto L_003B7608; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B7324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[15], 0u + 22u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B72D4u | kUnwind; return; } goto L_003B72D4; } }
L_003B7324:
    set32(c.r[11], ld32((c.r[16].w[0] + 16u)));
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003B732C:
    c.budget -= 2;
    if (c.r[11].d[0] != 0ull) { c.r[12].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003B7340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B733Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 359u, depth + 1u); else { c.pc = 0x003B7DA0u; return; } if (c.pc != 0x003B733Cu) [[unlikely]] return; }
L_003B733C:
    c.r[12].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003B7340:
    c.r[15].d[0] = c.r[12].d[0] & 2074ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].d[0] = c.r[12].d[0] & 1024ull;  if (t) { goto L_003B739C; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);  if (t) { goto L_003B741C; } }
    set32(c.r[15], c.r[15].w[0] - 26656u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[15].d[0]; c.r[15].d[0] = c.r[12].d[0] | 2048ull;  if (t) { goto L_003B7398; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003B7398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7374u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 309u, depth + 1u); else { c.pc = 0x003B76B8u; return; } if (c.pc != 0x003B7374u) [[unlikely]] return; }
L_003B7374:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[12].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003B7394; }
    set32(c.r[15], ld32((c.r[29].w[0] + 4u)));
    c.r[14].d[0] = 0ull | 32768ull;
    c.r[15].d[0] = c.r[15].d[0] & 61440ull;
    c.budget -= 5;
    if (c.r[15].d[0] == c.r[14].d[0]) { c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_003B740C; }
    c.r[12].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003B7394:
    c.r[15].d[0] = c.r[12].d[0] | 2048ull;
    c.budget -= 1;
L_003B7398:
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.budget -= 1;
L_003B739C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B73A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003B73A4u) [[unlikely]] return; }
L_003B73A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B72D8u | kUnwind; return; } goto L_003B72D8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B73BCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B73BCu) [[unlikely]] return; }
L_003B73BC:
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[15].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  goto L_003B73D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B72D8u | kUnwind; return; } goto L_003B72D8; } }
L_003B73D0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[15], c.r[16].w[0] + 64u);  if (t) { goto L_003B73EC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[15].d[0]) { st32((c.r[16].w[0] + 48u), 0u);  goto L_003B73EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B73E8u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x001002A0u; return; } if (c.pc != 0x003B73E8u) [[unlikely]] return; }
L_003B73E8:
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_003B73EC:
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[14], ld32((c.r[16].w[0] + 16u)));
    c.r[15].d[0] = c.r[15].d[0] & 65503ull;
    st32((c.r[16].w[0] + 4u), 0u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B72D8u | kUnwind; return; } goto L_003B72D8; } }
L_003B740C:
    set32(c.r[14], 0u + 1024u);
    st32((c.r[16].w[0] + 76u), c.r[14].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | 1024ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.budget -= 4;
L_003B741C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[22].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003B7440; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7434u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 309u, depth + 1u); else { c.pc = 0x003B76B8u; return; } if (c.pc != 0x003B7434u) [[unlikely]] return; }
L_003B7434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[15].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B739Cu | kUnwind; return; } goto L_003B739C; } }
    c.r[22].d[0] = c.r[15].d[0] + c.r[21].d[0];
    c.budget -= 1;
L_003B7440:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; c.r[12].d[0] = ld16((c.r[16].w[0] + 12u));  if (t) { goto L_003B75FC; } }
    c.r[15].d[0] = c.r[12].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  goto L_003B75DC; }
    set32(c.r[19], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_003B7458:
    set32(c.r[13], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[19].d[0] = c.r[19].d[0] - c.r[13].d[0];  if (t) { goto L_003B75BC; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 60u)));
    c.r[19].d[0] = c.r[19].d[0] - c.r[15].d[0];
    c.budget -= 2;
L_003B7470:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[14], ld32((c.r[16].w[0])));  goto L_003B75C0; }
    set32(c.r[15], ld32((c.r[16].w[0] + 56u)));
    c.r[19].d[0] = c.r[13].d[0] + c.r[19].d[0];
    set32(c.r[11], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[13], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[17], c.r[15].w[0] - c.r[11].w[0]);
    c.r[14].d[0] = c.r[17].d[0] << 32;
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    set32(c.r[17], c.r[17].w[0] + c.r[13].w[0]);
    c.r[19].d[0] = c.r[19].d[0] - c.r[14].d[0];
    c.budget -= 9;
L_003B749C:
    c.r[15].d[0] = c.r[12].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[15], ld32((c.r[16].w[0] + 76u)));  goto L_003B7518; }
    c.r[15].d[0] = c.r[22].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[15], ld32((c.r[16].w[0] + 76u)));  goto L_003B7518; }
    c.r[15].d[0] = c.r[17].d[0] << 32;
    c.r[15].d[0] = c.r[15].d[0] >> 32;
    c.r[15].d[0] = c.r[19].d[0] + c.r[15].d[0];
    c.r[15].d[0] = c.r[22].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].d[0] = c.r[22].d[0] - c.r[19].d[0];  if (t) { goto L_003B7514; } }
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[15].sd[0] >> 32);
    set32(c.r[14], c.r[17].w[0] - c.r[15].w[0]);
    set32(c.r[15], c.r[11].w[0] + c.r[15].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[14].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[16].w[0]), c.r[15].w[0]);  if (t) { goto L_003B7504; } }
    set32(c.r[15], c.r[16].w[0] + 64u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[15].d[0]) { st32((c.r[16].w[0] + 48u), 0u);  goto L_003B7504; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B74FCu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x001002A0u; return; } if (c.pc != 0x003B74FCu) [[unlikely]] return; }
L_003B74FC:
    c.r[12].d[0] = ld16((c.r[16].w[0] + 12u));
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 2;
L_003B7504:
    c.r[15].d[0] = c.r[12].d[0] & 65503ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B72D8u | kUnwind; return; } goto L_003B72D8; } }
L_003B7514:
    set32(c.r[15], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_003B7518:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[15], 0u - c.r[15].w[0]);
    c.r[19].d[0] = c.r[15].d[0] & c.r[22].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7530u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B7530u) [[unlikely]] return; }
L_003B7530:
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B739Cu | kUnwind; return; } goto L_003B739C; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.r[15].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[15], c.r[16].w[0] + 64u);  if (t) { goto L_003B7568; } }
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[15].d[0]) { st32((c.r[16].w[0] + 48u), 0u);  goto L_003B7568; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7564u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_0000(c, 22u, depth + 1u); else { c.pc = 0x001002A0u; return; } if (c.pc != 0x003B7564u) [[unlikely]] return; }
L_003B7564:
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_003B7568:
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[14].d[0] = c.r[22].d[0] - c.r[19].d[0];
    c.r[17].d[0] = c.r[14].d[0] << 32;
    c.r[15].d[0] = c.r[15].d[0] & 65503ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));  if (t) { goto L_003B75B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B758Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 90u, depth + 1u); else { c.pc = 0x003B8E38u; return; } if (c.pc != 0x003B758Cu) [[unlikely]] return; }
L_003B758C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B739Cu | kUnwind; return; } goto L_003B739C; } }
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    c.r[15].d[0] = c.r[14].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] - c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B739Cu | kUnwind; return; } goto L_003B739C; } }
    set32(c.r[15], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0] + 4u), c.r[14].w[0]);
    set32(c.r[15], c.r[15].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[15].w[0]);
    c.budget -= 4;
L_003B75B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B72D8u | kUnwind; return; } goto L_003B72D8; } }
L_003B75BC:
    set32(c.r[14], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003B75C0:
    set32(c.r[11], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[17], c.r[14].w[0] - c.r[11].w[0]);
    c.r[15].d[0] = c.r[17].d[0] << 32;
    c.r[15].d[0] = c.r[15].d[0] >> 32;
    set32(c.r[17], c.r[17].w[0] + c.r[13].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] - c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B749Cu | kUnwind; return; } goto L_003B749C; } }
L_003B75DC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B75E8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B75E8u) [[unlikely]] return; }
L_003B75E8:
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[15].d[0]; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B739Cu | kUnwind; return; } goto L_003B739C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = ld16((c.r[16].w[0] + 12u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7458u | kUnwind; return; } goto L_003B7458; } }
L_003B75FC:
    set32(c.r[13], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 48u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7470u | kUnwind; return; } goto L_003B7470; } }
L_003B7608:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[15].d[0]; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7324u | kUnwind; return; } goto L_003B7324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[15], 0u + 22u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B72D4u | kUnwind; return; } goto L_003B72D4; } }
L_003B7618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7620u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003B7620u) [[unlikely]] return; }
L_003B7620:
    c.r[12].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[15].d[0] = c.r[12].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[15].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  goto L_003B7694; }
    set32(c.r[19], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_003B7634:
    c.r[15].d[0] = c.r[12].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].d[0] = c.r[12].d[0] & 8ull;  if (t) { goto L_003B7674; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[19].d[0] = c.r[19].d[0] - c.r[15].d[0];  if (t) { goto L_003B766C; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[11], ld32((c.r[16].w[0] + 16u)));
    c.r[19].d[0] = c.r[19].d[0] - c.r[15].d[0];
    c.budget -= 3;
L_003B765C:
    c.r[21].d[0] = c.r[21].d[0] + c.r[19].d[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B732Cu | kUnwind; return; } goto L_003B732C; } }
L_003B766C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[16].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B765Cu | kUnwind; return; } goto L_003B765C; } }
L_003B7674:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[11], ld32((c.r[16].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B765Cu | kUnwind; return; } goto L_003B765C; } }
    set32(c.r[15], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B765Cu | kUnwind; return; } goto L_003B765C; } }
    set32(c.r[15], c.r[15].w[0] - c.r[11].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[19].d[0] + c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B765Cu | kUnwind; return; } goto L_003B765C; } }
L_003B7694:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76A0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B76A0u) [[unlikely]] return; }
L_003B76A0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[15], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[15].d[0]; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B72D8u | kUnwind; return; } goto L_003B72D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = ld16((c.r[16].w[0] + 12u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7634u | kUnwind; return; } goto L_003B7634; } }
L_003B76B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 20784u), 0u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B76E0u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 226u, depth + 1u); else { c.pc = 0x003995D8u; return; } if (c.pc != 0x003B76E0u) [[unlikely]] return; }
L_003B76E0:
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[15].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B76FC; }
    set32(c.r[15], ld32((c.r[16].w[0] + 20784u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[15].w[0]);  goto L_003B76F8; }
L_003B76F8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B76FC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7710:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[14].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 15;
    { const bool t = c.r[18].d[0] == 0ull; c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B77F4; } }
    c.r[14].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[15].d[0] = c.r[14].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003B7768; } }
    set32(c.r[15], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[17], ld32((c.r[21].w[0])));  goto L_003B7780; }
L_003B7768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7770u);  if (depth < kMaxDepth) unit_00AF(c, 207u, depth + 1u); else { c.pc = 0x003BDBD8u; return; } if (c.pc != 0x003B7770u) [[unlikely]] return; }
L_003B7770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[14], 0u - 1u);  if (t) { goto L_003B77F4; } }
    c.r[14].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[17], ld32((c.r[21].w[0])));
    c.budget -= 2;
L_003B7780:
    c.r[15].d[0] = c.r[14].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003B7838; } }
    set32(c.r[22], 0u + 1024u);
    c.budget -= 1;
L_003B7790:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[15].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_003B77BC; } }
L_003B7798:
    set32(c.r[20], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7798u | kUnwind; return; } goto L_003B7798; } }
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[15].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 2;
L_003B77BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    if (c.r[15].d[0] != 0) c.r[6].d[0] = c.r[18].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B77D4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B77D4u) [[unlikely]] return; }
L_003B77D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_003B7824; } }
    set32(c.r[15], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    set32(c.r[15], c.r[15].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[21].w[0] + 8u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7790u | kUnwind; return; } goto L_003B7790; } }
L_003B77F0:
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B77F4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[14].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003B7824:
    c.r[15].d[0] = ld16((c.r[19].w[0] + 12u));
    c.budget -= 1;
L_003B7828:
    set32(c.r[14], 0u - 1u);
    c.r[15].d[0] = c.r[15].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B77F4u | kUnwind; return; } goto L_003B77F4; } }
L_003B7838:
    c.r[15].d[0] = c.r[14].d[0] & 1ull;
    set32(c.r[15], c.r[15].w[0] << 16);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_003B7984; } }
L_003B784C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[15].d[0] = c.r[14].d[0] & 512ull;  if (t) { goto L_003B7878; } }
L_003B7854:
    set32(c.r[20], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7854u | kUnwind; return; } goto L_003B7854; } }
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[15].d[0] = c.r[14].d[0] & 512ull;
    c.budget -= 2;
L_003B7878:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_003B78D4; } }
    c.r[15].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[19].w[0])));
    if (c.r[15].d[0] != 0) c.r[16].d[0] = c.r[18].d[0];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7898u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003B8148u; return; } if (c.pc != 0x003B7898u) [[unlikely]] return; }
L_003B7898:
    set32(c.r[15], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[14], ld32((c.r[19].w[0])));
    set32(c.r[15], c.r[15].w[0] - c.r[16].w[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[16].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[15].w[0]);
    st32((c.r[19].w[0]), c.r[14].w[0]);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
L_003B78B4:
    set32(c.r[15], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003B78B8:
    set32(c.r[20], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] - c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; st32((c.r[21].w[0] + 8u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B77F0u | kUnwind; return; } goto L_003B77F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = ld16((c.r[19].w[0] + 12u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B784Cu | kUnwind; return; } goto L_003B784C; } }
L_003B78D4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[15], ld32((c.r[19].w[0] + 16u)));
    c.r[15].d[0] = c.r[15].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;  if (t) { goto L_003B7920; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003B7920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B78F8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003B8148u; return; } if (c.pc != 0x003B78F8u) [[unlikely]] return; }
L_003B78F8:
    set32(c.r[15], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[15], c.r[15].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B790Cu); st32((c.r[19].w[0]), c.r[15].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003B790Cu) [[unlikely]] return; }
L_003B790C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[15], ld32((c.r[21].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B78B8u | kUnwind; return; } goto L_003B78B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = ld16((c.r[19].w[0] + 12u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7828u | kUnwind; return; } goto L_003B7828; } }
    c.budget -= 1;
L_003B7920:
    set32(c.r[16], ld32((c.r[19].w[0] + 20u)));
    c.r[15].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003B7958; }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7944u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B7944u) [[unlikely]] return; }
L_003B7944:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B78B4u | kUnwind; return; } goto L_003B78B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = ld16((c.r[19].w[0] + 12u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7828u | kUnwind; return; } goto L_003B7828; } }
    c.budget -= 1;
L_003B7958:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7968u); c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003B8148u; return; } if (c.pc != 0x003B7968u) [[unlikely]] return; }
L_003B7968:
    set32(c.r[15], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[14], ld32((c.r[19].w[0])));
    set32(c.r[15], c.r[15].w[0] - c.r[18].w[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[15].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B78B4u | kUnwind; return; } goto L_003B78B4; } }
L_003B7984:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003B79B0; } }
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003B7990:
    set32(c.r[20], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7990u | kUnwind; return; } goto L_003B7990; } }
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003B79B0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; c.r[15].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;  if (t) { goto L_003B79DC; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B79C8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 368u, depth + 1u); else { c.pc = 0x003B7F20u; return; } if (c.pc != 0x003B79C8u) [[unlikely]] return; }
L_003B79C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[15], c.r[2].w[0] - c.r[20].w[0]);  if (t) { goto L_003B7ACC; } }
    set32(c.r[22], c.r[15].w[0] + 1u);
    c.budget -= 1;
L_003B79D4:
    set32(c.r[23], 0u + 1u);
    c.r[15].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003B79DC:
    set32(c.r[14], ld32((c.r[19].w[0] + 8u)));
    c.r[13].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[12], ld32((c.r[19].w[0] + 20u)));
    if (c.r[15].d[0] == 0) c.r[13].d[0] = c.r[22].d[0];
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[15], ld32((c.r[19].w[0] + 16u)));
    c.r[15].d[0] = c.r[15].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[16], c.r[14].w[0] + c.r[12].w[0]);  if (t) { goto L_003B7A70; } }
    c.r[15].d[0] = c.r[16].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003B7A70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A14u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003B8148u; return; } if (c.pc != 0x003B7A14u) [[unlikely]] return; }
L_003B7A14:
    set32(c.r[15], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[15], c.r[15].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A28u); st32((c.r[19].w[0]), c.r[15].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003B7A28u) [[unlikely]] return; }
L_003B7A28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[15].d[0] = ld16((c.r[19].w[0] + 12u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7828u | kUnwind; return; } goto L_003B7828; }
L_003B7A30:
    set32(c.r[22], c.r[22].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[22].d[0] != 0ull) { set32(c.r[15], ld32((c.r[21].w[0] + 8u)));  goto L_003B7A50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 243u, depth + 1u); else { c.pc = 0x003B6B88u; return; } if (c.pc != 0x003B7A44u) [[unlikely]] return; }
L_003B7A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7824u | kUnwind; return; } goto L_003B7824; } }
    set32(c.r[15], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003B7A50:
    set32(c.r[20], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[15], c.r[15].w[0] - c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[21].w[0] + 8u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7984u | kUnwind; return; } goto L_003B7984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B77F4u | kUnwind; return; } goto L_003B77F4; } }
    c.budget -= 1;
L_003B7A70:
    c.r[15].d[0] = c.r[13].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003B7AA0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[6].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7A90u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B7A90u) [[unlikely]] return; }
L_003B7A90:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7A30u | kUnwind; return; } goto L_003B7A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = ld16((c.r[19].w[0] + 12u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7828u | kUnwind; return; } goto L_003B7828; } }
L_003B7AA0:
    c.r[16].d[0] = c.r[13].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7AB0u); c.r[6].d[0] = c.r[13].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 9u, depth + 1u); else { c.pc = 0x003B8148u; return; } if (c.pc != 0x003B7AB0u) [[unlikely]] return; }
L_003B7AB0:
    set32(c.r[15], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[14], ld32((c.r[19].w[0])));
    set32(c.r[15], c.r[15].w[0] - c.r[16].w[0]);
    set32(c.r[14], c.r[14].w[0] + c.r[16].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[15].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7A30u | kUnwind; return; } goto L_003B7A30; } }
L_003B7ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B79D4u | kUnwind; return; } goto L_003B79D4; } }
    c.budget -= 1;
L_003B7AD8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    set32(c.r[18], c.r[4].w[0] + 472u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B7B44; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003B7B08:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[16], ld32((c.r[18].w[0] + 8u)));  if (t) { goto L_003B7B38; } }
L_003B7B14:
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_003B7B30; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[20].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7B28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003B7B28u) [[unlikely]] return; }
L_003B7B28:
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 2;
L_003B7B30:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7B14u | kUnwind; return; } goto L_003B7B14; } }
L_003B7B38:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7B08u | kUnwind; return; } goto L_003B7B08; }
L_003B7B44:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B7B68:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[15], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0]), c.r[15].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[15], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[15].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7BB0u); st32((c.r[29].w[0] + 8u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 311u, depth + 1u); else { c.pc = 0x003B7710u; return; } if (c.pc != 0x003B7BB0u) [[unlikely]] return; }
L_003B7BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[15].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B7BD0; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { breakpoint(c, 0x003B7BBCu);  goto L_003B7BC0; }
L_003B7BC0:
    set32(c.r[15], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[15], c.r[17].w[0] - c.r[15].w[0]);
    mmi::divu(c, 0, c.r[15].w[0], c.r[18].w[0]);
    c.r[15].d[0] = c.lo.d[0];
    c.budget -= 4;
L_003B7BD0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003B7BF0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[15].w[0] - 31768u);
    set32(c.r[4], c.r[4].w[0] + c.r[15].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 7ull;  c.pc = t; return; }
L_003B7C08:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[15].w[0] - 31768u);
    set32(c.r[4], c.r[4].w[0] + c.r[15].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 3ull;  c.pc = t; return; }
L_003B7C20:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[15].w[0] - 31768u);
    set32(c.r[4], c.r[4].w[0] + c.r[15].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 4ull;  c.pc = t; return; }
L_003B7C38:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[15].w[0] - 31768u);
    set32(c.r[4], c.r[4].w[0] + c.r[15].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 8ull;  c.pc = t; return; }
L_003B7C50:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[15], c.r[15].w[0] - 31768u);
    set32(c.r[4], c.r[4].w[0] + c.r[15].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 68ull;  c.pc = t; return; }
L_003B7C68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003B7CE8; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7CA0u); set32(c.r[5], c.r[19].w[0] - 31440u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003B7CA0u) [[unlikely]] return; }
L_003B7CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003B7CBC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7CB4u); set32(c.r[5], c.r[5].w[0] - 31496u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003B7CB4u) [[unlikely]] return; }
L_003B7CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[15].d[0] = 0ull + 0ull;  if (t) { goto L_003B7CC8; } }
L_003B7CBC:
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[18].w[0]);
    c.budget -= 2;
L_003B7CC4:
    set32(c.r[15], c.r[19].w[0] - 31440u);
    c.budget -= 1;
L_003B7CC8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[15].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003B7CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7CC4u | kUnwind; return; } goto L_003B7CC4; } }
L_003B7CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 31488u);  c.pc = t; return; }
L_003B7D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[15].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[14].w[0] + 30960u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7C68u | kUnwind; return; } goto L_003B7C68; }
L_003B7D28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[15].w[0] + 30960u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7CF0u | kUnwind; return; } goto L_003B7CF0; }
L_003B7D48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 20784u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7D74u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 220u, depth + 1u); else { c.pc = 0x00399518u; return; } if (c.pc != 0x003B7D74u) [[unlikely]] return; }
L_003B7D74:
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[15].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_003B7D90; }
    set32(c.r[15], ld32((c.r[16].w[0] + 20784u)));
    c.budget -= 3;
    if (c.r[15].d[0] != 0ull) { st32((c.r[17].w[0]), c.r[15].w[0]);  goto L_003B7D8C; }
L_003B7D8C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003B7D90:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003B7DA0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[31].d[0]);
    c.r[14].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[15].d[0] = c.r[14].d[0] & 2ull;
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B7DF0; } }
    set32(c.r[14], c.r[4].w[0] + 67u);
    set32(c.r[15], 0u + 1u);
    st32((c.r[4].w[0] + 20u), c.r[15].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[14].w[0]);
    st32((c.r[4].w[0]), c.r[14].w[0]);
    c.budget -= 5;
L_003B7DD8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_003B7DDC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 120u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 136u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003B7DF0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; c.r[15].d[0] = c.r[14].d[0] | 2048ull;  if (t) { goto L_003B7E18; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7E08u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 309u, depth + 1u); else { c.pc = 0x003B76B8u; return; } if (c.pc != 0x003B7E08u) [[unlikely]] return; }
L_003B7E08:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[15], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003B7EA0; } }
    c.r[14].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[15].d[0] = c.r[14].d[0] | 2048ull;
    c.budget -= 2;
L_003B7E18:
    c.r[18].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    set32(c.r[17], 0u + 1024u);
    c.budget -= 3;
L_003B7E24:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7E30u); set32(c.r[5], 0u + 1024u);  if (depth < kMaxDepth) unit_0000(c, 23u, depth + 1u); else { c.pc = 0x001002B0u; return; } if (c.pc != 0x003B7E30u) [[unlikely]] return; }
L_003B7E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));  if (t) { goto L_003B7E58; } }
    set32(c.r[13], c.r[16].w[0] + 67u);
    set32(c.r[14], 0u + 1u);
    st32((c.r[16].w[0] + 16u), c.r[13].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | 2ull;
    st32((c.r[16].w[0] + 20u), c.r[14].w[0]);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7DD8u | kUnwind; return; } goto L_003B7DD8; } }
L_003B7E58:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[13], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[14], c.r[14].w[0] + 28224u);
    c.r[15].d[0] = c.r[15].d[0] | 128ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[13].w[0] + 60u), c.r[14].w[0]);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[16].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7DD8u | kUnwind; return; } goto L_003B7DD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003B7E88u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 14u)));  if (depth < kMaxDepth) unit_00A6(c, 225u, depth + 1u); else { c.pc = 0x003995D0u; return; } if (c.pc != 0x003B7E88u) [[unlikely]] return; }
L_003B7E88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7DDCu | kUnwind; return; } goto L_003B7DDC; }
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[15].d[0] = c.r[15].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7DD8u | kUnwind; return; } goto L_003B7DD8; } }
L_003B7EA0:
    set32(c.r[17], 0u + 1024u);
    c.r[13].d[0] = 0ull | 32768ull;
    c.r[15].d[0] = c.r[15].d[0] & 61440ull;
    c.r[14].d[0] = c.r[15].d[0] ^ 8192ull;
    c.budget -= 6;
    { const bool t = c.r[15].d[0] != c.r[13].d[0]; c.r[18].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003B7EE0; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[14], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[15], c.r[15].w[0] - 26656u);
    c.budget -= 5;
    { const bool t = c.r[14].d[0] != c.r[15].d[0]; c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));  if (t) { goto L_003B7EE4; } }
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | 1024ull;
    c.budget -= 3;
L_003B7ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[15].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7E24u | kUnwind; return; } goto L_003B7E24; } }
L_003B7EE0:
    c.r[15].d[0] = ld16((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_003B7EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[15].d[0] | 2048ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7ED8u | kUnwind; return; } goto L_003B7ED8; } }
    c.budget -= 1;
L_003B7EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; if (c.r[5].d[0] == 0) c.r[5].d[0] = c.r[29].d[0];  if (t) { goto L_003B7F18; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003B7F18; } }
    c.r[15].d[0] = ld8((c.r[6].w[0]));
    st32((c.r[5].w[0]), c.r[15].w[0]);
    c.r[14].d[0] = ld8((c.r[6].w[0]));
    c.r[2].d[0] = 0ull < c.r[14].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_003B7F18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003B7F20:
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_003B7FC0; } }
    c.r[2].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003B7FC0; } }
    c.r[3].d[0] = c.r[5].d[0] << 8;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01010000u);
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 257ull;
    c.r[10].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    mmi::pcpyh(c.r[8], c.r[10]);
    mmi::pcpyld(c.r[9], c.r[8], c.r[8]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    mmi::pcpyld(c.r[8], c.r[3], c.r[3]);
    c.budget -= 18;
L_003B7F80:
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    mmi::pxor(c.r[2], c.r[2], c.r[9]);
    mmi::pcpyld(c.r[10], c.r[4], c.r[4]);
    mmi::pnor(c.r[3], c.r[0], c.r[2]);
    mmi::psubb(c.r[2], c.r[2], c.r[10]);
    mmi::pand(c.r[2], c.r[2], c.r[3]);
    mmi::pand(c.r[2], c.r[2], c.r[8]);
    mmi::pcpyud(c.r[3], c.r[2], c.r[9]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[7].d[0] + 0ull;  goto L_003B7FC0; }
    set32(c.r[6], c.r[6].w[0] - 16u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7F80u | kUnwind; return; } goto L_003B7F80; } }
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003B7FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_003B7FF0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 2;
L_003B7FDC:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[6], c.r[6].w[0] - 1u);  if (t) { goto L_003B7FF8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003B7FDCu | kUnwind; return; } goto L_003B7FDC; } }
L_003B7FF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003B7FF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
}

}
