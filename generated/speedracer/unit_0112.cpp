#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0112[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0,
    0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 90, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    233, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241,
    0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249,
    0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0,
    275, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287,
    0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0,
    0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0,
    311, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326,
    0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 345,
    0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0,
    356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0,
    0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
};

void unit_0112(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00548000;
    case 2u: goto L_00548028;
    case 3u: goto L_00548030;
    case 4u: goto L_00548060;
    case 5u: goto L_0054807C;
    case 6u: goto L_00548080;
    case 7u: goto L_005480A4;
    case 8u: goto L_005480D0;
    case 9u: goto L_00548100;
    case 10u: goto L_0054813C;
    case 11u: goto L_00548158;
    case 12u: goto L_00548170;
    case 13u: goto L_0054818C;
    case 14u: goto L_005481CC;
    case 15u: goto L_005481FC;
    case 16u: goto L_00548214;
    case 17u: goto L_00548258;
    case 18u: goto L_0054826C;
    case 19u: goto L_00548298;
    case 20u: goto L_005482CC;
    case 21u: goto L_005482F0;
    case 22u: goto L_0054830C;
    case 23u: goto L_00548338;
    case 24u: goto L_0054836C;
    case 25u: goto L_005483B8;
    case 26u: goto L_005483DC;
    case 27u: goto L_00548410;
    case 28u: goto L_00548448;
    case 29u: goto L_00548458;
    case 30u: goto L_0054849C;
    case 31u: goto L_005484AC;
    case 32u: goto L_005484C0;
    case 33u: goto L_005484F4;
    case 34u: goto L_00548520;
    case 35u: goto L_0054853C;
    case 36u: goto L_00548578;
    case 37u: goto L_005485D0;
    case 38u: goto L_005485F4;
    case 39u: goto L_00548614;
    case 40u: goto L_00548668;
    case 41u: goto L_00548688;
    case 42u: goto L_005486AC;
    case 43u: goto L_005486CC;
    case 44u: goto L_0054873C;
    case 45u: goto L_0054875C;
    case 46u: goto L_005487C0;
    case 47u: goto L_005487DC;
    case 48u: goto L_00548800;
    case 49u: goto L_00548870;
    case 50u: goto L_00548894;
    case 51u: goto L_005488D4;
    case 52u: goto L_00548900;
    case 53u: goto L_00548960;
    case 54u: goto L_00548998;
    case 55u: goto L_00548A10;
    case 56u: goto L_00548A3C;
    case 57u: goto L_00548A74;
    case 58u: goto L_00548A7C;
    case 59u: goto L_00548A9C;
    case 60u: goto L_00548B04;
    case 61u: goto L_00548B24;
    case 62u: goto L_00548B90;
    case 63u: goto L_00548BA0;
    case 64u: goto L_00548BE0;
    case 65u: goto L_00548BF4;
    case 66u: goto L_00548C04;
    case 67u: goto L_00548C0C;
    case 68u: goto L_00548C30;
    case 69u: goto L_00548C48;
    case 70u: goto L_00548CE0;
    case 71u: goto L_00548D00;
    case 72u: goto L_00548D20;
    case 73u: goto L_00548D40;
    case 74u: goto L_00548D5C;
    case 75u: goto L_00548D70;
    case 76u: goto L_00548D90;
    case 77u: goto L_00548DC0;
    case 78u: goto L_00548DD8;
    case 79u: goto L_00548E94;
    case 80u: goto L_00548EBC;
    case 81u: goto L_00548EE4;
    case 82u: goto L_00548EF8;
    case 83u: goto L_00548F50;
    case 84u: goto L_00548F90;
    case 85u: goto L_00549024;
    case 86u: goto L_00549040;
    case 87u: goto L_00549074;
    case 88u: goto L_005490E4;
    case 89u: goto L_00549130;
    case 90u: goto L_00549184;
    case 91u: goto L_00549188;
    case 92u: goto L_005491E0;
    case 93u: goto L_00549218;
    case 94u: goto L_005492BC;
    case 95u: goto L_005492CC;
    case 96u: goto L_00549340;
    case 97u: goto L_00549380;
    case 98u: goto L_00549410;
    case 99u: goto L_00549428;
    case 100u: goto L_00549448;
    case 101u: goto L_00549460;
    case 102u: goto L_00549488;
    case 103u: goto L_005494B0;
    case 104u: goto L_005494D0;
    case 105u: goto L_005494E8;
    case 106u: goto L_00549508;
    case 107u: goto L_00549520;
    case 108u: goto L_00549538;
    case 109u: goto L_00549558;
    case 110u: goto L_00549570;
    case 111u: goto L_00549588;
    case 112u: goto L_005495A8;
    case 113u: goto L_005495C0;
    case 114u: goto L_005495D8;
    case 115u: goto L_005495F8;
    case 116u: goto L_00549610;
    case 117u: goto L_00549630;
    case 118u: goto L_00549654;
    case 119u: goto L_00549670;
    case 120u: goto L_00549698;
    case 121u: goto L_005496C0;
    case 122u: goto L_005496E0;
    case 123u: goto L_00549708;
    case 124u: goto L_00549730;
    case 125u: goto L_00549750;
    case 126u: goto L_00549770;
    case 127u: goto L_00549794;
    case 128u: goto L_005497B0;
    case 129u: goto L_005497C8;
    case 130u: goto L_005497E8;
    case 131u: goto L_00549800;
    case 132u: goto L_00549810;
    case 133u: goto L_00549824;
    case 134u: goto L_00549830;
    case 135u: goto L_00549840;
    case 136u: goto L_00549868;
    case 137u: goto L_00549890;
    case 138u: goto L_005498B0;
    case 139u: goto L_00549954;
    case 140u: goto L_00549980;
    case 141u: goto L_00549A60;
    case 142u: goto L_00549A88;
    case 143u: goto L_00549A94;
    case 144u: goto L_00549AB8;
    case 145u: goto L_00549AC8;
    case 146u: goto L_00549AE4;
    case 147u: goto L_00549B0C;
    case 148u: goto L_00549B28;
    case 149u: goto L_00549B60;
    case 150u: goto L_00549BA4;
    case 151u: goto L_00549BC8;
    case 152u: goto L_00549BD8;
    case 153u: goto L_00549BF4;
    case 154u: goto L_00549C1C;
    case 155u: goto L_00549C50;
    case 156u: goto L_00549C60;
    case 157u: goto L_00549C7C;
    case 158u: goto L_00549CB0;
    case 159u: goto L_00549CD0;
    case 160u: goto L_00549CE0;
    case 161u: goto L_00549D00;
    case 162u: goto L_00549D20;
    case 163u: goto L_00549D88;
    case 164u: goto L_00549E38;
    case 165u: goto L_00549E48;
    case 166u: goto L_00549E74;
    case 167u: goto L_00549EC4;
    case 168u: goto L_00549F48;
    case 169u: goto L_00549F54;
    case 170u: goto L_00549FA4;
    case 171u: goto L_0054A0A0;
    case 172u: goto L_0054A0D0;
    case 173u: goto L_0054A0E8;
    case 174u: goto L_0054A100;
    case 175u: goto L_0054A150;
    case 176u: goto L_0054A170;
    case 177u: goto L_0054A184;
    case 178u: goto L_0054A190;
    case 179u: goto L_0054A1A0;
    case 180u: goto L_0054A1B4;
    case 181u: goto L_0054A230;
    case 182u: goto L_0054A280;
    case 183u: goto L_0054A370;
    case 184u: goto L_0054A390;
    case 185u: goto L_0054A3C4;
    case 186u: goto L_0054A3DC;
    case 187u: goto L_0054A3F4;
    case 188u: goto L_0054A410;
    case 189u: goto L_0054A54C;
    case 190u: goto L_0054A558;
    case 191u: goto L_0054A568;
    case 192u: goto L_0054A57C;
    case 193u: goto L_0054A5E8;
    case 194u: goto L_0054A610;
    case 195u: goto L_0054A67C;
    case 196u: goto L_0054A698;
    case 197u: goto L_0054A6E0;
    case 198u: goto L_0054A710;
    case 199u: goto L_0054A738;
    case 200u: goto L_0054A780;
    case 201u: goto L_0054A7B0;
    case 202u: goto L_0054A7D8;
    case 203u: goto L_0054A85C;
    case 204u: goto L_0054A86C;
    case 205u: goto L_0054A940;
    case 206u: goto L_0054A960;
    case 207u: goto L_0054A970;
    case 208u: goto L_0054A990;
    case 209u: goto L_0054A9A0;
    case 210u: goto L_0054AA40;
    case 211u: goto L_0054AB0C;
    case 212u: goto L_0054AB38;
    case 213u: goto L_0054AB90;
    case 214u: goto L_0054AC68;
    case 215u: goto L_0054AC74;
    case 216u: goto L_0054ACB0;
    case 217u: goto L_0054ACC0;
    case 218u: goto L_0054ACE0;
    case 219u: goto L_0054AD64;
    case 220u: goto L_0054AE54;
    case 221u: goto L_0054AF54;
    case 222u: goto L_0054AF9C;
    case 223u: goto L_0054AFE0;
    case 224u: goto L_0054B024;
    case 225u: goto L_0054B030;
    case 226u: goto L_0054B07C;
    case 227u: goto L_0054B0A4;
    case 228u: goto L_0054B100;
    case 229u: goto L_0054B130;
    case 230u: goto L_0054B158;
    case 231u: goto L_0054B190;
    case 232u: goto L_0054B1F8;
    case 233u: goto L_0054B200;
    case 234u: goto L_0054B214;
    case 235u: goto L_0054B21C;
    case 236u: goto L_0054B234;
    case 237u: goto L_0054B23C;
    case 238u: goto L_0054B254;
    case 239u: goto L_0054B25C;
    case 240u: goto L_0054B274;
    case 241u: goto L_0054B27C;
    case 242u: goto L_0054B294;
    case 243u: goto L_0054B29C;
    case 244u: goto L_0054B2B4;
    case 245u: goto L_0054B2BC;
    case 246u: goto L_0054B2D4;
    case 247u: goto L_0054B2DC;
    case 248u: goto L_0054B2F4;
    case 249u: goto L_0054B2FC;
    case 250u: goto L_0054B314;
    case 251u: goto L_0054B31C;
    case 252u: goto L_0054B330;
    case 253u: goto L_0054B338;
    case 254u: goto L_0054B350;
    case 255u: goto L_0054B358;
    case 256u: goto L_0054B360;
    case 257u: goto L_0054B418;
    case 258u: goto L_0054B420;
    case 259u: goto L_0054B450;
    case 260u: goto L_0054B458;
    case 261u: goto L_0054B490;
    case 262u: goto L_0054B498;
    case 263u: goto L_0054B4AC;
    case 264u: goto L_0054B4B4;
    case 265u: goto L_0054B4C8;
    case 266u: goto L_0054B4D0;
    case 267u: goto L_0054B508;
    case 268u: goto L_0054B510;
    case 269u: goto L_0054B520;
    case 270u: goto L_0054B528;
    case 271u: goto L_0054B540;
    case 272u: goto L_0054B548;
    case 273u: goto L_0054B560;
    case 274u: goto L_0054B568;
    case 275u: goto L_0054B580;
    case 276u: goto L_0054B588;
    case 277u: goto L_0054B59C;
    case 278u: goto L_0054B5A4;
    case 279u: goto L_0054B5B8;
    case 280u: goto L_0054B5C0;
    case 281u: goto L_0054B5D4;
    case 282u: goto L_0054B5DC;
    case 283u: goto L_0054B60C;
    case 284u: goto L_0054B614;
    case 285u: goto L_0054B644;
    case 286u: goto L_0054B64C;
    case 287u: goto L_0054B67C;
    case 288u: goto L_0054B684;
    case 289u: goto L_0054B6B4;
    case 290u: goto L_0054B6BC;
    case 291u: goto L_0054B6EC;
    case 292u: goto L_0054B6F4;
    case 293u: goto L_0054B724;
    case 294u: goto L_0054B72C;
    case 295u: goto L_0054B75C;
    case 296u: goto L_0054B764;
    case 297u: goto L_0054B794;
    case 298u: goto L_0054B79C;
    case 299u: goto L_0054B7B0;
    case 300u: goto L_0054B7B8;
    case 301u: goto L_0054B7EC;
    case 302u: goto L_0054B7F4;
    case 303u: goto L_0054B80C;
    case 304u: goto L_0054B814;
    case 305u: goto L_0054B82C;
    case 306u: goto L_0054B834;
    case 307u: goto L_0054B848;
    case 308u: goto L_0054B850;
    case 309u: goto L_0054B864;
    case 310u: goto L_0054B86C;
    case 311u: goto L_0054B880;
    case 312u: goto L_0054B888;
    case 313u: goto L_0054B89C;
    case 314u: goto L_0054B8A4;
    case 315u: goto L_0054B8BC;
    case 316u: goto L_0054B8E8;
    case 317u: goto L_0054B960;
    case 318u: goto L_0054B9C0;
    case 319u: goto L_0054B9C8;
    case 320u: goto L_0054BA50;
    case 321u: goto L_0054BAB4;
    case 322u: goto L_0054BAC0;
    case 323u: goto L_0054BACC;
    case 324u: goto L_0054BAD8;
    case 325u: goto L_0054BAEC;
    case 326u: goto L_0054BAFC;
    case 327u: goto L_0054BB10;
    case 328u: goto L_0054BB20;
    case 329u: goto L_0054BB34;
    case 330u: goto L_0054BB44;
    case 331u: goto L_0054BB50;
    case 332u: goto L_0054BB88;
    case 333u: goto L_0054BBC0;
    case 334u: goto L_0054BBF8;
    case 335u: goto L_0054BC04;
    case 336u: goto L_0054BC10;
    case 337u: goto L_0054BC1C;
    case 338u: goto L_0054BC94;
    case 339u: goto L_0054BCA4;
    case 340u: goto L_0054BCB8;
    case 341u: goto L_0054BCC4;
    case 342u: goto L_0054BCD0;
    case 343u: goto L_0054BCE4;
    case 344u: goto L_0054BCF0;
    case 345u: goto L_0054BCFC;
    case 346u: goto L_0054BD08;
    case 347u: goto L_0054BD14;
    case 348u: goto L_0054BD20;
    case 349u: goto L_0054BD2C;
    case 350u: goto L_0054BD38;
    case 351u: goto L_0054BD44;
    case 352u: goto L_0054BD50;
    case 353u: goto L_0054BD5C;
    case 354u: goto L_0054BD68;
    case 355u: goto L_0054BD74;
    case 356u: goto L_0054BD80;
    case 357u: goto L_0054BD8C;
    case 358u: goto L_0054BD98;
    case 359u: goto L_0054BDA4;
    case 360u: goto L_0054BDB0;
    case 361u: goto L_0054BDC8;
    case 362u: goto L_0054BDD4;
    case 363u: goto L_0054BDE0;
    case 364u: goto L_0054BDEC;
    case 365u: goto L_0054BDF8;
    case 366u: goto L_0054BE04;
    case 367u: goto L_0054BE4C;
    case 368u: goto L_0054BEC0;
    case 369u: goto L_0054BF20;
    case 370u: goto L_0054BF28;
    case 371u: goto L_0054BFB0;
    case 372u: goto L_0054BFC4;
    case 373u: goto L_0054BFD0;
    case 374u: goto L_0054BFF0;
    default: bad_entry(c, 0x00548000u); return;
    }
L_00548000:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00548010; }
    set32(c.r[17], c.r[17].w[0] - 4u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_00548010:
    set32(c.r[5], c.r[18].w[0] + 1u);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00548028u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00548028u) [[unlikely]] return; }
L_00548028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005480A4; } }
L_00548030:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_00548040; }
    set32(c.r[2], c.r[17].w[0] - 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00548040:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005480A4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00548058; }
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00548058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548060u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0111(c, 230u, depth + 1u); else { c.pc = 0x00546E40u; return; } if (c.pc != 0x00548060u) [[unlikely]] return; }
L_00548060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00548070; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005480A4; } }
L_00548070:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005480A4; } }
L_0054807C:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00548080:
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548098; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_00548098:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547F90u | kUnwind; return; } [[clang::musttail]] return unit_0111(c, 311u, depth); } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_005480A4:
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
L_005480D0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_005480E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_005480E0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005480F4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_005480F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00548100:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0054813Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0054813Cu) [[unlikely]] return; }
L_0054813C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[20].w[0] + 48u)));  goto L_0054814C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_005483E4; } }
L_0054814C:
    set32(c.r[2], c.r[20].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_005481E8; } }
L_00548158:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_005481C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00548170:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_005481A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054818Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0114(c, 212u, depth + 1u); else { c.pc = 0x005536B0u; return; } if (c.pc != 0x0054818Cu) [[unlikely]] return; }
L_0054818C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_0054819C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005483E0; } }
L_0054819C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 3;
L_005481A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548170u | kUnwind; return; } goto L_00548170; } }
    c.budget -= 1;
L_005481C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005481CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0114(c, 212u, depth + 1u); else { c.pc = 0x005536B0u; return; } if (c.pc != 0x005481CCu) [[unlikely]] return; }
L_005481CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] + 48u);  goto L_005481DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005483E0; } }
L_005481DC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[19].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548158u | kUnwind; return; } goto L_00548158; } }
    c.budget -= 1;
L_005481E8:
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00548248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_00548228; } }
L_005481FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00548208; } }
    set32(c.r[4], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_00548208:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548214u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0112(c, 9u, depth + 1u); else { c.pc = 0x00548100u; return; } if (c.pc != 0x00548214u) [[unlikely]] return; }
L_00548214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00548224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005483E0; } }
L_00548224:
    c.budget -= 1;
L_00548228:
    set32(c.r[4], ld32((c.r[20].w[0] + 36u)));
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00548240; } }
    set32(c.r[3], c.r[4].w[0] + 4u);
    c.budget -= 1;
L_00548240:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005481FCu | kUnwind; return; } goto L_005481FC; } }
L_00548248:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 60u)));  goto L_00548260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548258u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 9u, depth + 1u); else { c.pc = 0x00548100u; return; } if (c.pc != 0x00548258u) [[unlikely]] return; }
L_00548258:
    st32((c.r[20].w[0] + 36u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 2;
L_00548260:
    set32(c.r[2], c.r[20].w[0] + 60u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_005482A8; } }
L_0054826C:
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548298u); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0116(c, 150u, depth + 1u); else { c.pc = 0x00559890u; return; } if (c.pc != 0x00548298u) [[unlikely]] return; }
L_00548298:
    set32(c.r[2], c.r[20].w[0] + 60u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054826Cu | kUnwind; return; } goto L_0054826C; } }
    c.budget -= 1;
L_005482A8:
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 84u)));  goto L_005482D0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 862u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005482CCu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x005482CCu) [[unlikely]] return; }
L_005482CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 1;
L_005482D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 88u)));  goto L_005482F4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 867u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005482F0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x005482F0u) [[unlikely]] return; }
L_005482F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.budget -= 1;
L_005482F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 4u)));  goto L_00548370; }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00548350; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054830C:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00548338; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 876u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548338u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x00548338u) [[unlikely]] return; }
L_00548338:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054830Cu | kUnwind; return; } goto L_0054830C; } }
    c.budget -= 1;
L_00548350:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 88u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 880u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054836Cu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x0054836Cu) [[unlikely]] return; }
L_0054836C:
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_00548370:
    set32(c.r[2], c.r[20].w[0] + 4u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_005483B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 887u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005483B8u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x005483B8u) [[unlikely]] return; }
L_005483B8:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005483E0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 892u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005483DCu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x005483DCu) [[unlikely]] return; }
L_005483DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005483E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_005483E4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00548410:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 108u), 0u);  if (t) { goto L_00548450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548448u);  if (depth < kMaxDepth) unit_0116(c, 106u, depth + 1u); else { c.pc = 0x005591E0u; return; } if (c.pc != 0x00548448u) [[unlikely]] return; }
L_00548448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005484AC; } }
L_00548450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548458u); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 228u, depth + 1u); else { c.pc = 0x00512980u; return; } if (c.pc != 0x00548458u) [[unlikely]] return; }
L_00548458:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20720u)));
    set32(c.r[3], c.r[3].w[0] + 20720u);
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0054848C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20724u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00548488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0054848C; } }
L_00548488:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054848C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  goto L_005484A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054849Cu); set32(c.r[4], ld32((c.r[28].w[0] - 21888u)));  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x0054849Cu) [[unlikely]] return; }
L_0054849C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_00548794; } }
L_005484A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005484ACu);  if (depth < kMaxDepth) unit_0104(c, 226u, depth + 1u); else { c.pc = 0x00512920u; return; } if (c.pc != 0x005484ACu) [[unlikely]] return; }
L_005484AC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 48u)));  goto L_005484E4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005484C0u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x005484C0u) [[unlikely]] return; }
L_005484C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 108u)));  goto L_005484D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00548798; } }
L_005484D0:
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] + 0ull;  goto L_005484DC; }
L_005484DC:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 2;
L_005484E4:
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_005485A0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_005484F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00548508; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_00548510; } }
    c.budget -= 1;
L_00548508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548590; } }
L_00548510:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00548570; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00548520:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00548558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054853Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0114(c, 212u, depth + 1u); else { c.pc = 0x005536B0u; return; } if (c.pc != 0x0054853Cu) [[unlikely]] return; }
L_0054853C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_0054854C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00548794; } }
L_0054854C:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 3;
L_00548558:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548520u | kUnwind; return; } goto L_00548520; } }
    c.budget -= 1;
L_00548570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548578u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 179u, depth + 1u); else { c.pc = 0x0054F440u; return; } if (c.pc != 0x00548578u) [[unlikely]] return; }
L_00548578:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_00548588; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00548794; } }
L_00548588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005485A0; } }
L_00548590:
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005484F4u | kUnwind; return; } goto L_005484F4; }
L_005485A0:
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 48u)));  goto L_00548658; }
    set32(c.r[3], ld32((c.r[5].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_00548720; }
    set32(c.r[2], ld32((c.r[5].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00548640; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005485D0:
    set32(c.r[2], ld32((c.r[5].w[0] + 380u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 768ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 108u)));  goto L_00548628; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005485F4u);  if (depth < kMaxDepth) unit_0116(c, 72u, depth + 1u); else { c.pc = 0x00558C10u; return; } if (c.pc != 0x005485F4u) [[unlikely]] return; }
L_005485F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 108u)));  goto L_00548604; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00548794; } }
L_00548604:
    set32(c.r[2], ld32((c.r[5].w[0] + 380u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548614u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0115(c, 316u, depth + 1u); else { c.pc = 0x00557A00u; return; } if (c.pc != 0x00548614u) [[unlikely]] return; }
L_00548614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00548624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00548794; } }
L_00548624:
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_00548628:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 376u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005485D0u | kUnwind; return; } goto L_005485D0; } }
    c.budget -= 1;
L_00548640:
    set32(c.r[3], ld32((c.r[5].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_0054871C; } }
L_00548658:
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00548718; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.budget -= 1;
L_00548668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00548708; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_005486F0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00548688:
    set32(c.r[2], ld32((c.r[19].w[0] + 380u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 768ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 376u)));  goto L_005486E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005486ACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 72u, depth + 1u); else { c.pc = 0x00558C10u; return; } if (c.pc != 0x005486ACu) [[unlikely]] return; }
L_005486AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 380u)));  goto L_005486BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00548794; } }
L_005486BC:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005486CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 316u, depth + 1u); else { c.pc = 0x00557A00u; return; } if (c.pc != 0x005486CCu) [[unlikely]] return; }
L_005486CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005486DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00548794; } }
L_005486DC:
    set32(c.r[2], ld32((c.r[19].w[0] + 376u)));
    c.budget -= 1;
L_005486E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548688u | kUnwind; return; } goto L_00548688; } }
L_005486F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 6;
L_00548708:
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[16].w[0] + 48u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 304u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00548668u | kUnwind; return; } goto L_00548668; }
L_00548718:
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0054871C:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_00548720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548790; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00548790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00548770; } }
L_0054873C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00548748; } }
    set32(c.r[4], c.r[17].w[0] - 4u);
    c.budget -= 1;
L_00548748:
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0054875Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0054875Cu) [[unlikely]] return; }
L_0054875C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_0054876C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00548794; } }
L_0054876C:
    c.budget -= 1;
L_00548770:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548788; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_00548788:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054873Cu | kUnwind; return; } goto L_0054873C; } }
L_00548790:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00548794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00548798:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_005487C0:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 30u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_005487F8; } }
L_005487DC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 30u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[5].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005487DCu | kUnwind; return; } goto L_005487DC; } }
L_005487F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00548800:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00548848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00548B64; } }
L_00548848:
    c.r[3].d[0] = c.r[4].d[0] | 2ull;
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 32u), 0u);  if (t) { goto L_00548934; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { c.r[19].d[0] = c.r[20].d[0] + 0ull;  goto L_00548864; }
L_00548864:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548870u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0111(c, 230u, depth + 1u); else { c.pc = 0x00546E40u; return; } if (c.pc != 0x00548870u) [[unlikely]] return; }
L_00548870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548B50; } }
    c.r[17].d[0] = c.r[17].d[0] & 255ull;
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 304u)));  goto L_005488A0; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548894u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0114(c, 203u, depth + 1u); else { c.pc = 0x00553430u; return; } if (c.pc != 0x00548894u) [[unlikely]] return; }
L_00548894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548B50; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 304u)));
    c.budget -= 1;
L_005488A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00548B50; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 376u)));  goto L_005488C8; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_00548B50; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 376u)));
    c.budget -= 1;
L_005488C8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00548920; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005488D4:
    set32(c.r[3], ld32((c.r[19].w[0] + 380u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 768ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00548908; } }
    set32(c.r[7], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548900u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 343u, depth + 1u); else { c.pc = 0x00557DB0u; return; } if (c.pc != 0x00548900u) [[unlikely]] return; }
L_00548900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548B50; } }
L_00548908:
    set32(c.r[3], ld32((c.r[19].w[0] + 376u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005488D4u | kUnwind; return; } goto L_005488D4; } }
    c.budget -= 1;
L_00548920:
    set32(c.r[4], ld32((c.r[19].w[0] + 304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_00548B50; } }
L_00548934:
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_005489E8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0xDFFF0000u);
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[8], 0u + 2u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[10].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 304u)));
    c.budget -= 7;
L_00548960:
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    st32((c.r[5].w[0] + 304u), c.r[6].w[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_005489D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00548988; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_005489D8; } }
    c.budget -= 1;
L_00548988:
    set32(c.r[6], ld32((c.r[5].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_005489D8; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00548998:
    set32(c.r[6], ld32((c.r[5].w[0] + 380u)));
    set32(c.r[6], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & 768ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_005489C0; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 304u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[5].w[0] + 304u), c.r[6].w[0]);
    c.budget -= 3;
L_005489C0:
    set32(c.r[6], ld32((c.r[5].w[0] + 376u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[6].d[0] = c.r[12].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548998u | kUnwind; return; } goto L_00548998; } }
    c.budget -= 1;
L_005489D8:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[4].d[0]) { set32(c.r[6], ld32((c.r[5].w[0] + 304u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00548960u | kUnwind; return; } goto L_00548960; }
    c.budget -= 1;
L_005489E8:
    c.r[20].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 80u)));  goto L_00548A04; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00548A60; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_00548A04:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00548A60; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00548A10:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 768ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00548A48; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548A3Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 343u, depth + 1u); else { c.pc = 0x00557DB0u; return; } if (c.pc != 0x00548A3Cu) [[unlikely]] return; }
L_00548A3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548B50; } }
    c.budget -= 1;
L_00548A48:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548A10u | kUnwind; return; } goto L_00548A10; } }
    c.budget -= 1;
L_00548A60:
    set32(c.r[19], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[3].d[0];  if (t) { goto L_00548AF0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00548A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548A7Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0111(c, 230u, depth + 1u); else { c.pc = 0x00546E40u; return; } if (c.pc != 0x00548A7Cu) [[unlikely]] return; }
L_00548A7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548B50; } }
    c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00548AA8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548A9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0114(c, 203u, depth + 1u); else { c.pc = 0x00553430u; return; } if (c.pc != 0x00548A9Cu) [[unlikely]] return; }
L_00548A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548B50; } }
    c.budget -= 1;
L_00548AA8:
    set32(c.r[4], ld32((c.r[19].w[0] + 304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00548AE0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00548AD0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00548AE0; } }
L_00548AD0:
    set32(c.r[4], ld32((c.r[19].w[0] + 304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 4;
L_00548AE0:
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[18].w[0] + 48u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00548A74u | kUnwind; return; } goto L_00548A74; }
L_00548AF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00548B50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_00548B30; } }
L_00548B04:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00548B10; } }
    set32(c.r[4], c.r[19].w[0] - 4u);
    c.budget -= 1;
L_00548B10:
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00548B24u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00548B24u) [[unlikely]] return; }
L_00548B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548B50; } }
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_00548B30:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00548B48; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 1;
L_00548B48:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548B04u | kUnwind; return; } goto L_00548B04; } }
L_00548B50:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 5;
L_00548B64:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00548B90:
    c.budget -= 2;
    { c.r[7].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00548800u | kUnwind; return; } goto L_00548800; }
L_00548BA0:
    set32(c.r[29], c.r[29].w[0] - 1104u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00548BE4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 244u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548BE0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x00548BE0u) [[unlikely]] return; }
L_00548BE0:
    st32((c.r[19].w[0] + 84u), 0u);
    c.budget -= 1;
L_00548BE4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548BF4u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00548BF4u) [[unlikely]] return; }
L_00548BF4:
    set32(c.r[16], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00548CC0; } }
L_00548C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548C0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 41u, depth + 1u); else { c.pc = 0x0054CC30u; return; } if (c.pc != 0x00548C0Cu) [[unlikely]] return; }
L_00548C0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 376u)));  goto L_00548C1C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00548F30; } }
L_00548C1C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00548CB0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 3;
L_00548C30:
    set32(c.r[2], ld32((c.r[16].w[0] + 380u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_00548C48:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00548C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00548C90; } }
    c.budget -= 1;
L_00548C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548C80; } }
    set32(c.r[2], c.r[9].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 80u), c.r[4].w[0]);  if (t) { goto L_00548C90; } }
L_00548C80:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548C48u | kUnwind; return; } goto L_00548C48; } }
L_00548C90:
    c.budget -= 2;
    if (c.r[8].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 376u)));  goto L_00548CA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00548F2C; } }
L_00548CA0:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548C30u | kUnwind; return; } goto L_00548C30; } }
L_00548CB0:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548C04u | kUnwind; return; } goto L_00548C04; } }
L_00548CC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[16], c.r[17].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 293u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548CE0u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x00548CE0u) [[unlikely]] return; }
L_00548CE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_00548CF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00548F2C; } }
L_00548CF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548D00u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00548D00u) [[unlikely]] return; }
L_00548D00:
    st32((c.r[19].w[0] + 80u), c.r[17].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 304u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548D20u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x00548D20u) [[unlikely]] return; }
L_00548D20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_00548D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00548F2C; } }
L_00548D30:
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00548ED0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00548D40:
    set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[5], 0u - 1u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548D5Cu); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00548D5Cu) [[unlikely]] return; }
L_00548D5C:
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00548E70; } }
    set32(c.r[10], 0u - 1u);
    c.budget -= 1;
L_00548D70:
    set32(c.r[6], ld32((c.r[3].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00548E60; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 380u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 5;
L_00548D90:
    set32(c.r[4], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_00548E50; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 392u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[10].d[0]; set32(c.r[5], ld32((c.r[5].w[0] + 216u)));  if (t) { goto L_00548E60; } }
    c.budget -= 1;
L_00548DC0:
    set32(c.r[8], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[9], ld32((c.r[4].w[0])));
    c.r[11].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[8].w[0] + 220u);  if (t) { goto L_00548DE0; } }
L_00548DD8:
    set32(c.r[12], c.r[12].w[0] + 4u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 2;
L_00548DE0:
    set32(c.r[6], ld32((c.r[12].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[6].d[0];  if (t) { goto L_00548E08; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[10].d[0];  if (t) { goto L_00548E08; } }
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[6].d[0] = c.r[11].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548DD8u | kUnwind; return; } goto L_00548DD8; } }
    c.budget -= 1;
L_00548E08:
    set32(c.r[6], ld32((c.r[8].w[0] + 220u)));
    c.r[6].d[0] = c.r[11].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[6].d[0] != 0ull) { set32(c.r[6], c.r[11].w[0] << 2);  goto L_00548E20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 83u);  if (t) { goto L_00548F2C; } }
L_00548E20:
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[10].d[0];  if (t) { goto L_00548E38; } }
    st32((c.r[7].w[0]), c.r[9].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00548E38:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[10].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548DC0u | kUnwind; return; } goto L_00548DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00548E60; } }
L_00548E50:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548D90u | kUnwind; return; } goto L_00548D90; } }
L_00548E60:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548D70u | kUnwind; return; } goto L_00548D70; } }
    c.budget -= 1;
L_00548E70:
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[17], c.r[2].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 356u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548E94u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00548E94u) [[unlikely]] return; }
L_00548E94:
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548EBCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00548EBCu) [[unlikely]] return; }
L_00548EBC:
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548D40u | kUnwind; return; } goto L_00548D40; } }
L_00548ED0:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00548F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00548F08; } }
L_00548EE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00548EF0; } }
    set32(c.r[4], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_00548EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548EF8u);  if (depth < kMaxDepth) unit_0112(c, 63u, depth + 1u); else { c.pc = 0x00548BA0u; return; } if (c.pc != 0x00548EF8u) [[unlikely]] return; }
L_00548EF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_00548F08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00548F2C; } }
L_00548F08:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00548F20; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_00548F20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00548EE4u | kUnwind; return; } goto L_00548EE4; } }
L_00548F28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00548F2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00548F30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_00548F50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0054902C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 92u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 207u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00548F90u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x00548F90u) [[unlikely]] return; }
L_00548F90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  goto L_0054901C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 19488u);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 19568u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 48u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[3], c.r[2].w[0] + 60u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[2].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 56u), 0u);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 68u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st16((c.r[2].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 30u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 72u), 0u);
    st32((c.r[2].w[0] + 76u), 0u);
    st32((c.r[2].w[0] + 80u), 0u);
    st32((c.r[2].w[0] + 84u), 0u);
    st32((c.r[2].w[0] + 88u), 0u);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 33;
L_0054901C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005490A8; } }
L_00549024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0054910C; } }
L_0054902C:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005490A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_00549088; } }
L_00549040:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00549050; } }
    set32(c.r[2], c.r[16].w[0] - 4u);
    c.budget -= 2;
L_00549050:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_00549088; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00549068; } }
    set32(c.r[2], c.r[16].w[0] - 4u);
    c.budget -= 1;
L_00549068:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549074u); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x00549074u) [[unlikely]] return; }
L_00549074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00549084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054910C; } }
L_00549084:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00549088:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005490A0; } }
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 1;
L_005490A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00549040u | kUnwind; return; } goto L_00549040; } }
L_005490A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  goto L_005490B8; }
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_005490B8:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00549100; } }
L_005490E4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005490E4u | kUnwind; return; } goto L_005490E4; } }
L_00549100:
    set32(c.r[2], c.r[5].w[0] - 1u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0054910C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00549130:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 16;
    { const bool t = c.r[22].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00549174; } }
    st32((c.r[22].w[0]), 0u);
    c.budget -= 1;
L_00549174:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00549188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0]), 0u);  if (t) { goto L_00549188; } }
L_00549184:
    c.budget -= 1;
L_00549188:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005491B0; } }
    c.r[3].d[0] = c.r[4].d[0] << 56;
    set32(c.r[2], 0u + 47u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00549184u | kUnwind; return; } goto L_00549184; }
L_005491B0:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 47u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00549298; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00549298; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[20].w[0] - c.r[19].w[0]);  if (t) { goto L_00549268; } }
L_005491E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_005491F0; } }
    set32(c.r[2], c.r[17].w[0] - 4u);
    c.budget -= 2;
L_005491F0:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00549260; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00549208; } }
    set32(c.r[2], c.r[17].w[0] - 4u);
    c.budget -= 1;
L_00549208:
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549218u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 295u, depth + 1u); else { c.pc = 0x00537CB0u; return; } if (c.pc != 0x00549218u) [[unlikely]] return; }
L_00549218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00549260; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00549230; } }
    set32(c.r[2], c.r[17].w[0] - 4u);
    c.budget -= 2;
L_00549230:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00549260; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00549250; } }
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 1;
L_00549250:
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00549288; } }
    c.budget -= 1;
L_00549260:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_00549268:
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00549280; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_00549280:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005491E0u | kUnwind; return; } goto L_005491E0; } }
L_00549288:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[19], c.r[20].w[0] + 1u);  goto L_00549298; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 87u);  if (t) { goto L_0054930C; } }
L_00549298:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));
    set32(c.r[2], 0u + 47u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00549188u | kUnwind; return; } goto L_00549188; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 48u)));
    set32(c.r[2], c.r[21].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00549308; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_005492BC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_005492FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005492CCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x005492CCu) [[unlikely]] return; }
L_005492CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005492F8; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_005492E0; } }
    st32((c.r[22].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_005492E0:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0054930C; }
    st32((c.r[23].w[0]), c.r[21].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054930C; } }
L_005492F8:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_005492FC:
    set32(c.r[2], c.r[21].w[0] + 48u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005492BCu | kUnwind; return; } goto L_005492BC; }
L_00549308:
    set32(c.r[2], 0u + 87u);
    c.budget -= 1;
L_0054930C:
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
L_00549340:
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), 0u);  c.pc = t; return; }
L_00549380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 19488u);
    set32(c.r[5], c.r[4].w[0] + 48u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 19568u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], c.r[4].w[0] + 60u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 30u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 88u), 0u);  c.pc = t; return; }
L_00549410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549428u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549428u) [[unlikely]] return; }
L_00549428:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_00549438; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0054944C; } }
L_00549438:
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00549448u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00549448u) [[unlikely]] return; }
L_00549448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0054944C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00549460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549488u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549488u) [[unlikely]] return; }
L_00549488:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_00549498; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_005494B4; } }
L_00549498:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005494B0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005494B0u) [[unlikely]] return; }
L_005494B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_005494B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005494D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005494E8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x005494E8u) [[unlikely]] return; }
L_005494E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_005494F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0054950C; } }
L_005494F8:
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00549508u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00549508u) [[unlikely]] return; }
L_00549508:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0054950C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00549520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549538u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549538u) [[unlikely]] return; }
L_00549538:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_00549548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0054955C; } }
L_00549548:
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00549558u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00549558u) [[unlikely]] return; }
L_00549558:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0054955C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00549570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549588u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549588u) [[unlikely]] return; }
L_00549588:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_00549598; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_005495AC; } }
L_00549598:
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005495A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005495A8u) [[unlikely]] return; }
L_005495A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_005495AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005495C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005495D8u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x005495D8u) [[unlikely]] return; }
L_005495D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_005495E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_005495FC; } }
L_005495E8:
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005495F8u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005495F8u) [[unlikely]] return; }
L_005495F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_005495FC:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00549610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549630u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549630u) [[unlikely]] return; }
L_00549630:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_00549640; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00549658; } }
L_00549640:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00549654u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00549654u) [[unlikely]] return; }
L_00549654:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00549658:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00549670:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549698u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549698u) [[unlikely]] return; }
L_00549698:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_005496A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_005496C4; } }
L_005496A8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005496C0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005496C0u) [[unlikely]] return; }
L_005496C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_005496C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005496E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549708u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549708u) [[unlikely]] return; }
L_00549708:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_00549718; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00549734; } }
L_00549718:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00549730u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00549730u) [[unlikely]] return; }
L_00549730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00549734:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00549750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549770u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549770u) [[unlikely]] return; }
L_00549770:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_00549780; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00549798; } }
L_00549780:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00549794u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00549794u) [[unlikely]] return; }
L_00549794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00549798:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_005497B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005497C8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x005497C8u) [[unlikely]] return; }
L_005497C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  goto L_005497D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_005497EC; } }
L_005497D8:
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005497E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005497E8u) [[unlikely]] return; }
L_005497E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_005497EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00549800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549810u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549810u) [[unlikely]] return; }
L_00549810:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 28u)));  goto L_00549820; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00549834; } }
L_00549820:
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    c.budget -= 1;
L_00549824:
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00549830u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00549830u) [[unlikely]] return; }
L_00549830:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00549834:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00549840:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549868u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549868u) [[unlikely]] return; }
L_00549868:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 76u)));  goto L_00549878; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00549894; } }
L_00549878:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00549890u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00549890u) [[unlikely]] return; }
L_00549890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00549894:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_005498B0:
    set32(c.r[2], c.r[4].w[0] >> 11);
    set32(c.r[3], c.r[4].w[0] >> 19);
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 8191ull;
    set32(c.r[2], c.r[4].w[0] >> 7);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[8].d[0] = c.r[2].d[0] & 15ull;
    c.r[6].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 15;
    if (c.r[7].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  goto L_005498F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00549910; } }
L_005498F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  goto L_00549904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_00549978; } }
L_00549904:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00549910:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  goto L_00549920; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_00549978; } }
L_00549920:
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 336u)));  goto L_00549934; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_00549978; } }
L_00549934:
    set32(c.r[2], c.r[4].w[0] + 336u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00549948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00549970; } }
L_00549948:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_00549970; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_00549954:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[8], c.r[8].w[0] - 1u);  goto L_00549964; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00549970; } }
L_00549964:
    c.budget -= 2;
    if (c.r[8].sd[0] > 0) { set32(c.r[3], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00549954u | kUnwind; return; } goto L_00549954; }
    c.budget -= 1;
L_00549970:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00549978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00549980:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], c.r[4].w[0] >> 19);  goto L_00549990; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_00549A4C; } }
L_00549990:
    set32(c.r[2], c.r[4].w[0] >> 11);
    c.r[6].d[0] = c.r[4].d[0] & 2047ull;
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    c.r[3].d[0] = c.r[3].d[0] & 8191ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 72u)));  goto L_005499BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_00549A4C; } }
L_005499BC:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 12u)));  goto L_005499D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_00549A4C; } }
L_005499D8:
    c.r[4].d[0] = c.r[7].d[0] ^ c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  goto L_005499F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00549A18; } }
L_005499F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 16u)));  goto L_00549A00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_00549A4C; } }
L_00549A00:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[7].w[0] << 2);  goto L_00549A10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_00549A4C; } }
L_00549A10:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_00549A18:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00549A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_00549A4C; } }
L_00549A28:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { st32((c.r[5].w[0]), c.r[3].w[0]);  goto L_00549A48; }
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00549A44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 36u);  if (t) { goto L_00549A4C; } }
L_00549A44:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00549A48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00549A4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00549A60:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549A88u); set32(c.r[5], c.r[29].w[0] + 348u);  if (depth < kMaxDepth) unit_0105(c, 104u, depth + 1u); else { c.pc = 0x00515380u; return; } if (c.pc != 0x00549A88u) [[unlikely]] return; }
L_00549A88:
    set32(c.r[4], ld32((c.r[29].w[0] + 348u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549A94u); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0112(c, 140u, depth + 1u); else { c.pc = 0x00549980u; return; } if (c.pc != 0x00549A94u) [[unlikely]] return; }
L_00549A94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_00549AA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00549B3C; } }
L_00549AA4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00549B14; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549AB8u); set32(c.r[5], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_0105(c, 106u, depth + 1u); else { c.pc = 0x005153B0u; return; } if (c.pc != 0x00549AB8u) [[unlikely]] return; }
L_00549AB8:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549AC8u); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0105(c, 110u, depth + 1u); else { c.pc = 0x00515410u; return; } if (c.pc != 0x00549AC8u) [[unlikely]] return; }
L_00549AC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[5], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[7], 0u + 256u);
    set32(c.r[8], c.r[29].w[0] + 340u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549AE4u); set32(c.r[9], 0u + 2u);  if (depth < kMaxDepth) unit_0105(c, 108u, depth + 1u); else { c.pc = 0x005153E0u; return; } if (c.pc != 0x00549AE4u) [[unlikely]] return; }
L_00549AE4:
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 364u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00549B3C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 368u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 340u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00549B0Cu); set32(c.r[6], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00549B0Cu) [[unlikely]] return; }
L_00549B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00549B38; } }
L_00549B14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00549B38; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549B28u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0112(c, 371u, depth + 1u); else { c.pc = 0x0054BFB0u; return; } if (c.pc != 0x00549B28u) [[unlikely]] return; }
L_00549B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00549B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00549B40; } }
L_00549B38:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00549B3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00549B40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_00549B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00549B88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00549C94; } }
L_00549B88:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[28].w[0] - 29352u);  goto L_00549B9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_00549C94; } }
L_00549B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549BA4u);  if (depth < kMaxDepth) unit_010E(c, 105u, depth + 1u); else { c.pc = 0x00538BE0u; return; } if (c.pc != 0x00549BA4u) [[unlikely]] return; }
L_00549BA4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 224u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 12019u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549BC8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x00549BC8u) [[unlikely]] return; }
L_00549BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00549BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549BD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0117(c, 269u, depth + 1u); else { c.pc = 0x0055ED30u; return; } if (c.pc != 0x00549BD8u) [[unlikely]] return; }
L_00549BD8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00549BDC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);  goto L_00549BEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00549C94; } }
L_00549BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549BF4u); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_010D(c, 278u, depth + 1u); else { c.pc = 0x005379F0u; return; } if (c.pc != 0x00549BF4u) [[unlikely]] return; }
L_00549BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00549C04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00549C94; } }
L_00549C04:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 16u);  goto L_00549C14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[18].w[0]);  if (t) { goto L_00549C2C; } }
L_00549C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549C1Cu);  if (depth < kMaxDepth) unit_0105(c, 112u, depth + 1u); else { c.pc = 0x00515440u; return; } if (c.pc != 0x00549C1Cu) [[unlikely]] return; }
L_00549C1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_00549C30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00549C98; } }
L_00549C2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 1;
L_00549C30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 12044u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549C50u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x00549C50u) [[unlikely]] return; }
L_00549C50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  goto L_00549C64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549C60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 166u, depth + 1u); else { c.pc = 0x00569570u; return; } if (c.pc != 0x00549C60u) [[unlikely]] return; }
L_00549C60:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00549C64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  goto L_00549C74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00549C94; } }
L_00549C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549C7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_011A(c, 165u, depth + 1u); else { c.pc = 0x00569560u; return; } if (c.pc != 0x00549C7Cu) [[unlikely]] return; }
L_00549C7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 21868u), c.r[17].w[0]);  goto L_00549C8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00549C94; } }
L_00549C8C:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 2;
L_00549C94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00549C98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00549CB0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 408u)));  goto L_00549CC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00549CC8; } }
L_00549CC0:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00549CC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00549CD0:
    st32((c.r[4].w[0] + 408u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00549CE0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 372u)));  goto L_00549CF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00549CF8; } }
L_00549CF0:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00549CF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00549D00:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 60u)));  goto L_00549D10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00549D18; } }
L_00549D10:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00549D18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00549D20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[19].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00549D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054A080; } }
L_00549D50:
    st32((c.r[19].w[0]), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 320u)));  goto L_00549DD8; }
    set32(c.r[2], 0u + 32u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00549DD0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00549DD0; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00549D88:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00549DC0; }
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00549DBC; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_00549DD0; } }
L_00549DBC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00549DC0:
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00549D88u | kUnwind; return; } goto L_00549D88; } }
L_00549DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054A080; } }
L_00549DD8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_00549DF0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 320u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 304u)));  goto L_00549E0C; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00549DF0:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 320u)));  goto L_0054A080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0054A084; } }
L_00549E0C:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[20].w[0] + 324u)));  goto L_00549E28; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[20].w[0] + 324u)));
    c.budget -= 4;
L_00549E28:
    set32(c.r[2], c.r[20].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0054A048; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 1;
L_00549E38:
    set32(c.r[2], c.r[18].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0054A038; } }
    c.budget -= 1;
L_00549E48:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00549E68; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00549F38; } }
    c.budget -= 1;
L_00549E68:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549E74u); set32(c.r[5], c.r[29].w[0] + 111u);  if (depth < kMaxDepth) unit_0105(c, 201u, depth + 1u); else { c.pc = 0x005161F0u; return; } if (c.pc != 0x00549E74u) [[unlikely]] return; }
L_00549E74:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00549E90; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00549E98; } }
    c.budget -= 1;
L_00549E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00549EA8; } }
L_00549E98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_00549EAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054A080; } }
L_00549EA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00549EAC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));  goto L_00549F1C; }
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549EC4u); set32(c.r[7], c.r[29].w[0] + 110u);  if (depth < kMaxDepth) unit_010B(c, 239u, depth + 1u); else { c.pc = 0x0052F510u; return; } if (c.pc != 0x00549EC4u) [[unlikely]] return; }
L_00549EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00549F10; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 110u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00549EE8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00549EE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00549F18; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00549F18; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_00549F18; } }
L_00549F10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054A080; } }
L_00549F18:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 1;
L_00549F1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054A028; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0054A038; } }
    c.budget -= 1;
L_00549F38:
    set32(c.r[16], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[2], c.r[17].w[0] + 120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0054A028; } }
L_00549F48:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549F54u); set32(c.r[5], c.r[29].w[0] + 111u);  if (depth < kMaxDepth) unit_0105(c, 201u, depth + 1u); else { c.pc = 0x005161F0u; return; } if (c.pc != 0x00549F54u) [[unlikely]] return; }
L_00549F54:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00549F70; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00549F78; } }
    c.budget -= 1;
L_00549F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00549F88; } }
L_00549F78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  goto L_00549F8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054A080; } }
L_00549F88:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00549F8C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));  goto L_00549FFC; }
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00549FA4u); set32(c.r[7], c.r[29].w[0] + 109u);  if (depth < kMaxDepth) unit_010B(c, 239u, depth + 1u); else { c.pc = 0x0052F510u; return; } if (c.pc != 0x00549FA4u) [[unlikely]] return; }
L_00549FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00549FF0; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 109u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00549FC8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00549FC8:
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00549FF8; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00549FF8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_00549FF8; } }
L_00549FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054A080; } }
L_00549FF8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 1;
L_00549FFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054A018; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_0054A028; } }
    c.budget -= 1;
L_0054A018:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] + 120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00549F48u | kUnwind; return; } goto L_00549F48; } }
L_0054A028:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[18].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00549E48u | kUnwind; return; } goto L_00549E48; } }
L_0054A038:
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[20].w[0] + 324u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[18].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00549E38u | kUnwind; return; } goto L_00549E38; }
L_0054A048:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 20ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 304u)));  goto L_0054A064; }
    c.r[2].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 304u)));
    c.budget -= 3;
L_0054A064:
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0054A080; }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0054A080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0054A084:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0054A0A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0054A0B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054A0EC; } }
L_0054A0B4:
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_0054A0D8; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A0D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0054A0D0u) [[unlikely]] return; }
L_0054A0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054A0EC; } }
L_0054A0D8:
    set32(c.r[6], 0u + 72u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A0E8u); set32(c.r[5], c.r[5].w[0] - 32080u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0054A0E8u) [[unlikely]] return; }
L_0054A0E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054A0EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054A100:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0054A160; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 72u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 11628u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A150u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x0054A150u) [[unlikely]] return; }
L_0054A150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_0054A160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_0054A20C; } }
L_0054A160:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A170u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0054A170u) [[unlikely]] return; }
L_0054A170:
    set32(c.r[19], ld32((c.r[20].w[0] + 324u)));
    set32(c.r[2], c.r[20].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0054A208; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 1;
L_0054A184:
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0054A1F8; } }
L_0054A190:
    set32(c.r[17], ld32((c.r[18].w[0] + 120u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 120u);
    c.budget -= 4;
L_0054A1A0:
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0054A1E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A1B4u); set32(c.r[5], ld32((c.r[20].w[0] + 240u)));  if (depth < kMaxDepth) unit_0105(c, 234u, depth + 1u); else { c.pc = 0x00516520u; return; } if (c.pc != 0x0054A1B4u) [[unlikely]] return; }
L_0054A1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054A1DC; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054A1DC; } }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054A1DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0054A210; } }
L_0054A1DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0054A1E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; set32(c.r[17], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054A1A0u | kUnwind; return; } goto L_0054A1A0; } }
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054A190u | kUnwind; return; } goto L_0054A190; } }
L_0054A1F8:
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[20].w[0] + 324u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[18], ld32((c.r[19].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054A184u | kUnwind; return; } goto L_0054A184; }
L_0054A208:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054A20C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0054A210:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0054A230:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0054A248; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0054A248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054A26C; } }
L_0054A248:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0054A258; } }
    c.f[0] = ld32((c.r[4].w[0] + 244u));
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 2;
L_0054A258:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0054A26C; }
    c.f[0] = ld32((c.r[4].w[0] + 248u));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0054A26C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054A280:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[4].w[0] + 244u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0054A2B0; } }
    c.f[0] = ld32((c.r[3].w[0] + 248u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0054A2B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054A384; } }
L_0054A2B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0054A2B4:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054A2CC; } }
    c.f[0] = c.f[12];
    c.budget -= 1;
L_0054A2CC:
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0054A2E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0054A304; } }
L_0054A2E8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = c.f[0];  goto L_0054A2FC; }
L_0054A2FC:
    c.f[2] = c.f[12];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0054A304:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054A31C; } }
    c.f[1] = c.f[13];
    c.budget -= 1;
L_0054A31C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0054A338; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 244u), c.f[2]);  if (t) { goto L_0054A354; } }
L_0054A338:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[13] = c.f[0];  goto L_0054A34C; }
L_0054A34C:
    c.f[0] = c.f[13];
    st32((c.r[3].w[0] + 244u), c.f[2]);
    c.budget -= 2;
L_0054A354:
    st32((c.r[3].w[0] + 248u), c.f[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 372u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0054A384; }
    c.f[13] = ld32((c.r[3].w[0] + 248u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A370u); c.f[12] = ld32((c.r[3].w[0] + 244u));  if (depth < kMaxDepth) unit_0106(c, 243u, depth + 1u); else { c.pc = 0x0051B890u; return; } if (c.pc != 0x0054A370u) [[unlikely]] return; }
L_0054A370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054A380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0054A388; } }
L_0054A380:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054A384:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0054A388:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054A390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0054A3C4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A3C4u); set32(c.r[5], c.r[18].w[0] + 120u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0054A3C4u) [[unlikely]] return; }
L_0054A3C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0054A3DC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A3DCu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0054A3DCu) [[unlikely]] return; }
L_0054A3DC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0054A3F8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A3F4u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0054A3F4u) [[unlikely]] return; }
L_0054A3F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0054A3F8:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0054A410:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0054A4F8; } }
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[2] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 120u), c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 136u), c.f[1]);  if (t) { goto L_0054A4AC; } }
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.budget -= 12;
L_0054A4AC:
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 304u)));  goto L_0054A4EC; }
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054A4E8; } }
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0054A4F8; } }
L_0054A4E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 1;
L_0054A4EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0054A4F8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0054A518; } }
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[16].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[16].w[0] + 156u), c.f[0]);
    c.budget -= 6;
L_0054A518:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[21], ld32((c.r[16].w[0] + 324u)));  goto L_0054A53C; }
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[16].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[16].w[0] + 168u), c.f[0]);
    set32(c.r[21], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 7;
L_0054A53C:
    set32(c.r[2], c.r[16].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_0054A658; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 1;
L_0054A54C:
    set32(c.r[2], c.r[21].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0054A648; } }
L_0054A558:
    set32(c.r[18], ld32((c.r[20].w[0] + 120u)));
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[20].w[0] + 120u);
    c.budget -= 4;
L_0054A568:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[19].d[0] = c.r[18].d[0] + 0ull;  goto L_0054A630; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A57Cu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x0054A57Cu) [[unlikely]] return; }
L_0054A57C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 140u)));  goto L_0054A59C; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054A598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0054A6C0; } }
L_0054A598:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_0054A59C:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054A62C; } }
    c.f[1] = ld32((c.r[16].w[0] + 108u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[0] = ld32((c.r[19].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = ld32((c.r[19].w[0] + 92u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = ld32((c.r[19].w[0] + 96u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A5E8u); set32(c.r[6], c.r[16].w[0] + 148u);  if (depth < kMaxDepth) unit_0105(c, 222u, depth + 1u); else { c.pc = 0x005163F0u; return; } if (c.pc != 0x0054A5E8u) [[unlikely]] return; }
L_0054A5E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  goto L_0054A608; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054A604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054A6BC; } }
L_0054A604:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_0054A608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A610u); set32(c.r[5], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_0105(c, 213u, depth + 1u); else { c.pc = 0x00516300u; return; } if (c.pc != 0x0054A610u) [[unlikely]] return; }
L_0054A610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054A62C; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0054A62C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054A6BC; } }
L_0054A62C:
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0054A630:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[17].d[0]; set32(c.r[18], ld32((c.r[18].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054A568u | kUnwind; return; } goto L_0054A568; } }
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[21].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054A558u | kUnwind; return; } goto L_0054A558; } }
L_0054A648:
    set32(c.r[21], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[16].w[0] + 324u);
    c.budget -= 4;
    if (c.r[21].d[0] != c.r[2].d[0]) { set32(c.r[20], ld32((c.r[21].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054A54Cu | kUnwind; return; } goto L_0054A54C; }
L_0054A658:
    set32(c.r[2], ld32((c.r[16].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0054A6B8; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 336u)));
    set32(c.r[2], c.r[16].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0054A6B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0054A67C:
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_0054A6AC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A698u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0118(c, 158u, depth + 1u); else { c.pc = 0x00562180u; return; } if (c.pc != 0x0054A698u) [[unlikely]] return; }
L_0054A698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054A6A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054A6BC; } }
L_0054A6A8:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0054A6AC:
    set32(c.r[2], c.r[16].w[0] + 336u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054A67Cu | kUnwind; return; } goto L_0054A67C; }
L_0054A6B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054A6BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0054A6C0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0054A6E0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 304u)));  goto L_0054A6F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054A700; } }
L_0054A6F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0054A700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054A710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 372u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0054A748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A738u);  if (depth < kMaxDepth) unit_0106(c, 237u, depth + 1u); else { c.pc = 0x0051B7F0u; return; } if (c.pc != 0x0054A738u) [[unlikely]] return; }
L_0054A738:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 304u)));  goto L_0054A74C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0054A770; } }
L_0054A748:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.budget -= 1;
L_0054A74C:
    set32(c.r[2], 0u - 16385u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_0054A768; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0054A768:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0054A770:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0054A780:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 304u)));  goto L_0054A790; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054A7A0; } }
L_0054A790:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0054A7A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054A7B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 372u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0054A7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A7D8u);  if (depth < kMaxDepth) unit_0106(c, 240u, depth + 1u); else { c.pc = 0x0051B840u; return; } if (c.pc != 0x0054A7D8u) [[unlikely]] return; }
L_0054A7D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 304u)));  goto L_0054A7EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0054A924; } }
L_0054A7E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 1;
L_0054A7EC:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054A810; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0054A810; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[2].d[0] = ld64((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[17].w[0] + 264u), c.r[2].d[0]);  if (t) { goto L_0054A8FC; } }
L_0054A810:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 304u)));  goto L_0054A900; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0054A8FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_0054A8CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A85Cu); c.f[13] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0054A85Cu) [[unlikely]] return; }
L_0054A85C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054A86Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 469u, depth + 1u); else { c.pc = 0x003AFAD8u; return; } if (c.pc != 0x0054A86Cu) [[unlikely]] return; }
L_0054A86C:
    c.r[6].d[0] = ld64((c.r[17].w[0] + 264u));
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 272u));
    c.r[4].d[0] = c.r[4].d[0] - c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[7].d[0] = c.r[4].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    mmi::multu(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[5].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[5], c.r[5], c.r[6]);
    c.r[3].d[0] = c.r[4].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st64((c.r[17].w[0] + 272u), c.r[2].d[0]);  if (t) { goto L_0054A8E4; } }
L_0054A8CC:
    c.r[4].d[0] = ld64((c.r[17].w[0] + 264u));
    c.r[3].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[2].d[0] = ld64((c.r[17].w[0] + 272u));
    c.r[3].d[0] = c.r[3].d[0] - c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    st64((c.r[17].w[0] + 272u), c.r[2].d[0]);
    c.budget -= 6;
L_0054A8E4:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[17].w[0] + 264u), c.r[2].d[0]);  if (t) { goto L_0054A8FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054A920; } }
L_0054A8FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 1;
L_0054A900:
    set32(c.r[2], 0u - 8193u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_0054A91C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    st32((c.r[17].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 3;
L_0054A91C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054A920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0054A924:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0054A940:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 100u));  goto L_0054A950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054A958; } }
L_0054A950:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 2;
L_0054A958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054A960:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), c.f[12]);  c.pc = t; return; }
L_0054A970:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 96u));  goto L_0054A980; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054A988; } }
L_0054A980:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 2;
L_0054A988:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054A990:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), c.f[12]);  c.pc = t; return; }
L_0054A9A0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 92u));  goto L_0054A9B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054AA34; } }
L_0054A9B0:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0054AA18; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[5].w[0]));  goto L_0054AA00; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[5].w[0]));  goto L_0054A9E8; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0054AA34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054AA30; } }
L_0054A9E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0054AA30; } }
L_0054AA00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { goto L_0054AA30; } }
L_0054AA18:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 6;
L_0054AA30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054AA34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054AA40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0054AAD0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);  goto L_0054AAB4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  goto L_0054AA98; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0054AAE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054AAE0; } }
L_0054AA98:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054AAE0; } }
L_0054AAB4:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054AAE0; } }
L_0054AAD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 4;
L_0054AAE0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[18].w[0] + 92u), c.f[20]);  goto L_0054AB64; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 92u), c.f[20]);  goto L_0054AAFC; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 92u), c.f[20]);
    c.budget -= 2;
L_0054AAFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054AC84; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054AB0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054AB4C; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054AB48; } }
    c.f[12] = c.f[20];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054AB38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0112(c, 210u, depth + 1u); else { c.pc = 0x0054AA40u; return; } if (c.pc != 0x0054AB38u) [[unlikely]] return; }
L_0054AB38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054AB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054AC8C; } }
L_0054AB48:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0054AB4C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054AB0Cu | kUnwind; return; } goto L_0054AB0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054AC88; } }
L_0054AB64:
    set32(c.r[2], ld32((c.r[18].w[0] + 372u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054AC84; } }
    c.f[20] = ld32((c.r[18].w[0] + 96u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = ld32((c.r[18].w[0] + 92u));  if (t) { goto L_0054AC4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054AB90u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054AB90u) [[unlikely]] return; }
L_0054AB90:
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[4].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.f[3] = fp::mul(c.f[20], c.f[0]);  if (t) { goto L_0054AC48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0054AC24; }
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[5].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);  goto L_0054ABF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[3], c.f[20]);  if (t) { goto L_0054AC4C; } }
L_0054ABF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 3u, c.f[0], c.f[2]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054AC48; } }
L_0054AC24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 3u, c.f[0], c.f[2]);
    c.budget -= 9;
L_0054AC48:
    c.f[0] = fp::sub(c.f[3], c.f[20]);
    c.budget -= 1;
L_0054AC4C:
    c.f[1] = fp::add(c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054AC68u); c.f[13] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0054AC68u) [[unlikely]] return; }
L_0054AC68:
    set32(c.r[4], ld32((c.r[18].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054AC74u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0106(c, 246u, depth + 1u); else { c.pc = 0x0051B8E0u; return; } if (c.pc != 0x0054AC74u) [[unlikely]] return; }
L_0054AC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054AC84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054AC88; } }
L_0054AC84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054AC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0054AC8C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054ACB0:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054AA40u | kUnwind; return; } goto L_0054AA40; }
L_0054ACC0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.f[0] = ld32((c.r[4].w[0] + 88u));  goto L_0054ACD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054ACD8; } }
L_0054ACD0:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 2;
L_0054ACD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054ACE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[12];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[18].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0054AD20; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0054AD20:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0054AD38; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0054AD38:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { st32((c.r[19].w[0] + 84u), c.f[20]);  goto L_0054AE80; }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 84u), c.f[20]);  goto L_0054AD54; }
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 84u), c.f[20]);
    c.budget -= 2;
L_0054AD54:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054AFAC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054AD64:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_0054AE68; }
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054AE64; } }
    st32((c.r[2].w[0] + 84u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 372u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0054AE64; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0054ADB4; } }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 304u)));  if (t) { goto L_0054ADC4; } }
L_0054ADB4:
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.budget -= 4;
L_0054ADC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054ADF8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 314u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054AE40; } }
L_0054ADF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054AE38; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0054AE40; } }
    c.budget -= 1;
L_0054AE38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 2;
L_0054AE40:
    c.f[1] = ld32((c.r[5].w[0] + 84u));
    c.f[0] = ld32((c.r[5].w[0] + 88u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054AE54u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0054AE54u) [[unlikely]] return; }
L_0054AE54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054AE64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0054AFB4; } }
L_0054AE64:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0054AE68:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054AD64u | kUnwind; return; } goto L_0054AD64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054AFB0; } }
L_0054AE80:
    set32(c.r[2], ld32((c.r[19].w[0] + 372u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054AFAC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0054AEA4; } }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 304u)));  if (t) { goto L_0054AEB4; } }
L_0054AEA4:
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.budget -= 4;
L_0054AEB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);  goto L_0054AEE8; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 314u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054AF24; } }
L_0054AEE8:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0054AF20; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[0], c.f[1]);  if (t) { goto L_0054AF24; } }
L_0054AF20:
    c.f[2] = c.r[2].w[0];
    c.budget -= 1;
L_0054AF24:
    c.f[1] = ld32((c.r[19].w[0] + 84u));
    c.f[0] = ld32((c.r[19].w[0] + 88u));
    c.f[20] = ld32((c.r[19].w[0] + 100u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[21] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[19].w[0] + 372u)));  goto L_0054AF94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054AF54u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0054AF54u) [[unlikely]] return; }
L_0054AF54:
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 2u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[20]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 372u)));
    c.budget -= 16;
L_0054AF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054AF9Cu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0106(c, 252u, depth + 1u); else { c.pc = 0x0051B960u; return; } if (c.pc != 0x0054AF9Cu) [[unlikely]] return; }
L_0054AF9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054AFAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054AFB0; } }
L_0054AFAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054AFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0054AFB4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0054AFE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0054AFFC; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0054AFFC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[4].w[0] + 88u), c.f[12]);  goto L_0054B018; }
    c.f[12] = c.f[0];
    st32((c.r[4].w[0] + 88u), c.f[12]);
    c.budget -= 2;
L_0054B018:
    c.f[12] = ld32((c.r[4].w[0] + 84u));
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054ACE0u | kUnwind; return; } goto L_0054ACE0; }
L_0054B024:
    c.budget -= 3;
L_0054B030:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0054B0C8; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054B0C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0054B0C8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054B07C:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_0054B0B8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B0A4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0054B0A4u) [[unlikely]] return; }
L_0054B0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054B0B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0054B0D8; } }
L_0054B0B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_0054B0B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054B07Cu | kUnwind; return; } goto L_0054B07C; } }
L_0054B0C8:
    st32((c.r[20].w[0] + 364u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 368u), c.r[18].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 4;
L_0054B0D8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0054B100:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  if (t) { goto L_0054B110; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054B124; } }
L_0054B110:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_0054B118; }
L_0054B118:
    set32(c.r[3], ld32((c.r[2].w[0] + 360u)));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0054B124:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054B130:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_0054B13C; }
L_0054B13C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 348u)));  goto L_0054B14C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054B184; } }
L_0054B14C:
    set32(c.r[2], c.r[2].w[0] + 348u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0054B178; } }
L_0054B158:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054B158u | kUnwind; return; } goto L_0054B158; } }
    c.budget -= 1;
L_0054B178:
    set32(c.r[2], c.r[4].w[0] + 43u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0054B184:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054B190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0054B1A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0054B1B8; } }
L_0054B1A4:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_0054B1B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B1B8; } }
L_0054B1B8:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_0054B94C; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(43ll) ? 1ull : 0ull;  goto L_0054B1D4; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B1D4:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 348u)));  goto L_0054B8C8; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] - 19424u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00548000u < 16384u) { entry = entries_0112[(t - 0x00548000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0054B1F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 76u);  if (t) { goto L_0054B94C; } }
L_0054B200:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B214u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0112(c, 218u, depth + 1u); else { c.pc = 0x0054ACE0u; return; } if (c.pc != 0x0054B214u) [[unlikely]] return; }
L_0054B214:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B21C:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B234u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0112(c, 210u, depth + 1u); else { c.pc = 0x0054AA40u; return; } if (c.pc != 0x0054B234u) [[unlikely]] return; }
L_0054B234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B23C:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B254u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0112(c, 210u, depth + 1u); else { c.pc = 0x0054AA40u; return; } if (c.pc != 0x0054B254u) [[unlikely]] return; }
L_0054B254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B25C:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B274u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0112(c, 210u, depth + 1u); else { c.pc = 0x0054AA40u; return; } if (c.pc != 0x0054B274u) [[unlikely]] return; }
L_0054B274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B27C:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B294u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0112(c, 210u, depth + 1u); else { c.pc = 0x0054AA40u; return; } if (c.pc != 0x0054B294u) [[unlikely]] return; }
L_0054B294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B29C:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B2B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0113(c, 168u, depth + 1u); else { c.pc = 0x0054F0E0u; return; } if (c.pc != 0x0054B2B4u) [[unlikely]] return; }
L_0054B2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B2BC:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B2D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0113(c, 168u, depth + 1u); else { c.pc = 0x0054F0E0u; return; } if (c.pc != 0x0054B2D4u) [[unlikely]] return; }
L_0054B2D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B2DC:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B2F4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0113(c, 168u, depth + 1u); else { c.pc = 0x0054F0E0u; return; } if (c.pc != 0x0054B2F4u) [[unlikely]] return; }
L_0054B2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B2FC:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B314u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0113(c, 168u, depth + 1u); else { c.pc = 0x0054F0E0u; return; } if (c.pc != 0x0054B314u) [[unlikely]] return; }
L_0054B314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B31C:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B330u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 165u, depth + 1u); else { c.pc = 0x0054F020u; return; } if (c.pc != 0x0054B330u) [[unlikely]] return; }
L_0054B330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B338:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B350u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 162u, depth + 1u); else { c.pc = 0x0054EF60u; return; } if (c.pc != 0x0054B350u) [[unlikely]] return; }
L_0054B350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 76u);  if (t) { goto L_0054B94C; } }
L_0054B360:
    set32(c.r[5], ld32((c.r[2].w[0] + 304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    c.r[4].d[0] = c.r[3].d[0] | 61695ull;
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0] + 304u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[2].w[0] + 304u)));  goto L_0054B3EC; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[2].w[0] + 304u)));  goto L_0054B3E0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[2].w[0] + 304u)));  goto L_0054B3D4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[2].w[0] + 304u)));  goto L_0054B3C8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[2].w[0] + 304u)));  goto L_0054B3BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 304u)));  if (t) { goto L_0054B3FC; } }
L_0054B3BC:
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_0054B404; } }
L_0054B3C8:
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_0054B404; } }
L_0054B3D4:
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_0054B404; } }
L_0054B3E0:
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_0054B404; } }
L_0054B3EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_0054B404; } }
L_0054B3FC:
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 2;
L_0054B404:
    set32(c.r[5], ld32((c.r[2].w[0] + 304u)));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B418u); c.r[6].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 159u, depth + 1u); else { c.pc = 0x0054EE60u; return; } if (c.pc != 0x0054B418u) [[unlikely]] return; }
L_0054B418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B420:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[7], 0u - 25u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[5].d[0] & 24ull;
    c.r[3].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B450u); st32((c.r[2].w[0] + 172u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0113(c, 152u, depth + 1u); else { c.pc = 0x0054ED00u; return; } if (c.pc != 0x0054B450u) [[unlikely]] return; }
L_0054B450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B458:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFBCF0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 172u)));
    c.r[7].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x04300000u);
    c.r[6].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B490u); st32((c.r[2].w[0] + 172u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0113(c, 152u, depth + 1u); else { c.pc = 0x0054ED00u; return; } if (c.pc != 0x0054B490u) [[unlikely]] return; }
L_0054B490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B498:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 180u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B4ACu); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 135u, depth + 1u); else { c.pc = 0x0054E720u; return; } if (c.pc != 0x0054B4ACu) [[unlikely]] return; }
L_0054B4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B4B4:
    c.f[12] = ld32((c.r[2].w[0] + 176u));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[13] = ld32((c.r[6].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B4C8u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 135u, depth + 1u); else { c.pc = 0x0054E720u; return; } if (c.pc != 0x0054B4C8u) [[unlikely]] return; }
L_0054B4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B4D0:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFF30000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 172u)));
    c.r[7].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x000C0000u);
    c.r[6].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[2].w[0] + 172u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B508u); st32((c.r[2].w[0] + 172u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0113(c, 152u, depth + 1u); else { c.pc = 0x0054ED00u; return; } if (c.pc != 0x0054B508u) [[unlikely]] return; }
L_0054B508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B510:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[2].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B520u); c.r[6].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 143u, depth + 1u); else { c.pc = 0x0054E940u; return; } if (c.pc != 0x0054B520u) [[unlikely]] return; }
L_0054B520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B528:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 188u));
    c.f[14] = ld32((c.r[2].w[0] + 192u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B540u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 128u, depth + 1u); else { c.pc = 0x0054E580u; return; } if (c.pc != 0x0054B540u) [[unlikely]] return; }
L_0054B540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B548:
    c.f[13] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 184u));
    c.f[14] = ld32((c.r[2].w[0] + 192u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B560u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 128u, depth + 1u); else { c.pc = 0x0054E580u; return; } if (c.pc != 0x0054B560u) [[unlikely]] return; }
L_0054B560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B568:
    c.f[14] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 184u));
    c.f[13] = ld32((c.r[2].w[0] + 188u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B580u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 128u, depth + 1u); else { c.pc = 0x0054E580u; return; } if (c.pc != 0x0054B580u) [[unlikely]] return; }
L_0054B580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B588:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B59Cu); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 121u, depth + 1u); else { c.pc = 0x0054E410u; return; } if (c.pc != 0x0054B59Cu) [[unlikely]] return; }
L_0054B59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B5A4:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B5B8u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 101u, depth + 1u); else { c.pc = 0x0054DF70u; return; } if (c.pc != 0x0054B5B8u) [[unlikely]] return; }
L_0054B5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B5C0:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B5D4u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 99u, depth + 1u); else { c.pc = 0x0054DED0u; return; } if (c.pc != 0x0054B5D4u) [[unlikely]] return; }
L_0054B5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B5DC:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 204u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = ld32((c.r[2].w[0] + 208u));
    c.f[15] = ld32((c.r[2].w[0] + 212u));
    c.f[16] = ld32((c.r[2].w[0] + 216u));
    c.f[17] = ld32((c.r[2].w[0] + 220u));
    c.f[18] = ld32((c.r[2].w[0] + 224u));
    c.f[19] = ld32((c.r[2].w[0] + 228u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B60Cu); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 95u, depth + 1u); else { c.pc = 0x0054DC70u; return; } if (c.pc != 0x0054B60Cu) [[unlikely]] return; }
L_0054B60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B614:
    c.f[14] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 200u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 204u));
    c.f[15] = ld32((c.r[2].w[0] + 212u));
    c.f[16] = ld32((c.r[2].w[0] + 216u));
    c.f[17] = ld32((c.r[2].w[0] + 220u));
    c.f[18] = ld32((c.r[2].w[0] + 224u));
    c.f[19] = ld32((c.r[2].w[0] + 228u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B644u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 95u, depth + 1u); else { c.pc = 0x0054DC70u; return; } if (c.pc != 0x0054B644u) [[unlikely]] return; }
L_0054B644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B64C:
    c.f[13] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 200u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = ld32((c.r[2].w[0] + 208u));
    c.f[15] = ld32((c.r[2].w[0] + 212u));
    c.f[16] = ld32((c.r[2].w[0] + 216u));
    c.f[17] = ld32((c.r[2].w[0] + 220u));
    c.f[18] = ld32((c.r[2].w[0] + 224u));
    c.f[19] = ld32((c.r[2].w[0] + 228u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B67Cu); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 95u, depth + 1u); else { c.pc = 0x0054DC70u; return; } if (c.pc != 0x0054B67Cu) [[unlikely]] return; }
L_0054B67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B684:
    c.f[18] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 200u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 204u));
    c.f[14] = ld32((c.r[2].w[0] + 208u));
    c.f[15] = ld32((c.r[2].w[0] + 212u));
    c.f[16] = ld32((c.r[2].w[0] + 216u));
    c.f[17] = ld32((c.r[2].w[0] + 220u));
    c.f[19] = ld32((c.r[2].w[0] + 228u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B6B4u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 95u, depth + 1u); else { c.pc = 0x0054DC70u; return; } if (c.pc != 0x0054B6B4u) [[unlikely]] return; }
L_0054B6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B6BC:
    c.f[19] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 200u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 204u));
    c.f[14] = ld32((c.r[2].w[0] + 208u));
    c.f[15] = ld32((c.r[2].w[0] + 212u));
    c.f[16] = ld32((c.r[2].w[0] + 216u));
    c.f[17] = ld32((c.r[2].w[0] + 220u));
    c.f[18] = ld32((c.r[2].w[0] + 224u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B6ECu); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 95u, depth + 1u); else { c.pc = 0x0054DC70u; return; } if (c.pc != 0x0054B6ECu) [[unlikely]] return; }
L_0054B6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B6F4:
    c.f[16] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 200u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 204u));
    c.f[14] = ld32((c.r[2].w[0] + 208u));
    c.f[15] = ld32((c.r[2].w[0] + 212u));
    c.f[17] = ld32((c.r[2].w[0] + 220u));
    c.f[18] = ld32((c.r[2].w[0] + 224u));
    c.f[19] = ld32((c.r[2].w[0] + 228u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B724u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 95u, depth + 1u); else { c.pc = 0x0054DC70u; return; } if (c.pc != 0x0054B724u) [[unlikely]] return; }
L_0054B724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B72C:
    c.f[17] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 200u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 204u));
    c.f[14] = ld32((c.r[2].w[0] + 208u));
    c.f[15] = ld32((c.r[2].w[0] + 212u));
    c.f[16] = ld32((c.r[2].w[0] + 216u));
    c.f[18] = ld32((c.r[2].w[0] + 224u));
    c.f[19] = ld32((c.r[2].w[0] + 228u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B75Cu); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 95u, depth + 1u); else { c.pc = 0x0054DC70u; return; } if (c.pc != 0x0054B75Cu) [[unlikely]] return; }
L_0054B75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B764:
    c.f[15] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 200u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[13] = ld32((c.r[2].w[0] + 204u));
    c.f[14] = ld32((c.r[2].w[0] + 208u));
    c.f[16] = ld32((c.r[2].w[0] + 216u));
    c.f[17] = ld32((c.r[2].w[0] + 220u));
    c.f[18] = ld32((c.r[2].w[0] + 224u));
    c.f[19] = ld32((c.r[2].w[0] + 228u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B794u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 95u, depth + 1u); else { c.pc = 0x0054DC70u; return; } if (c.pc != 0x0054B794u) [[unlikely]] return; }
L_0054B794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B79C:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B7B0u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 112u, depth + 1u); else { c.pc = 0x0054E210u; return; } if (c.pc != 0x0054B7B0u) [[unlikely]] return; }
L_0054B7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B7B8:
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 304u)));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] & c.r[5].d[0];
    st32((c.r[2].w[0] + 304u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B7ECu); st32((c.r[2].w[0] + 304u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0113(c, 159u, depth + 1u); else { c.pc = 0x0054EE60u; return; } if (c.pc != 0x0054B7ECu) [[unlikely]] return; }
L_0054B7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B7F4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 314u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B80Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 92u, depth + 1u); else { c.pc = 0x0054DB90u; return; } if (c.pc != 0x0054B80Cu) [[unlikely]] return; }
L_0054B80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B814:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 312u)));
    c.r[7].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B82Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 92u, depth + 1u); else { c.pc = 0x0054DB90u; return; } if (c.pc != 0x0054B82Cu) [[unlikely]] return; }
L_0054B82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B834:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B848u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 103u, depth + 1u); else { c.pc = 0x0054E010u; return; } if (c.pc != 0x0054B848u) [[unlikely]] return; }
L_0054B848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B850:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B864u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 90u, depth + 1u); else { c.pc = 0x0054DB00u; return; } if (c.pc != 0x0054B864u) [[unlikely]] return; }
L_0054B864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B86C:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B880u); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 84u, depth + 1u); else { c.pc = 0x0054D990u; return; } if (c.pc != 0x0054B880u) [[unlikely]] return; }
L_0054B880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B888:
    c.f[12] = ld32((c.r[6].w[0]));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B89Cu); c.r[5].d[0] = c.r[3].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0113(c, 82u, depth + 1u); else { c.pc = 0x0054D900u; return; } if (c.pc != 0x0054B89Cu) [[unlikely]] return; }
L_0054B89C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
L_0054B8A4:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.r[3].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B8BCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 80u, depth + 1u); else { c.pc = 0x0054D710u; return; } if (c.pc != 0x0054B8BCu) [[unlikely]] return; }
L_0054B8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B94C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 1;
L_0054B8C8:
    set32(c.r[2], c.r[2].w[0] + 348u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[5].w[0] - 43u);  if (t) { goto L_0054B8DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0054B900; } }
L_0054B8DC:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0054B900; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_0054B8E8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0054B8F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0054B900; } }
L_0054B8F8:
    c.budget -= 2;
    if (c.r[3].sd[0] > 0) { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054B8E8u | kUnwind; return; } goto L_0054B8E8; }
L_0054B900:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0054B94C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[6].w[0])));  goto L_0054B944; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[6].w[0]));  goto L_0054B93C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[6].w[0])));  goto L_0054B934; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054B94C; } }
L_0054B934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0054B948; } }
L_0054B93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.f[0]);  if (t) { goto L_0054B948; } }
L_0054B944:
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_0054B948:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054B94C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054B960:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0054B98C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0054B9A0; } }
L_0054B98C:
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = c.r[4].d[0] + 0ull;  goto L_0054B9A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054B9A0; } }
L_0054B9A0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 348u)));  goto L_0054B9B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054BA2C; } }
L_0054B9B0:
    set32(c.r[2], c.r[18].w[0] + 348u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0054BA28; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0054B9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054B9C8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0054B9C8u) [[unlikely]] return; }
L_0054B9C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0054BA1C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0054BA0C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0]));  goto L_0054BA04; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0054B9FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054BA14; } }
L_0054B9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0054BA10; } }
L_0054BA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.f[0]);  if (t) { goto L_0054BA10; } }
L_0054BA0C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_0054BA10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054BA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054BA30; } }
L_0054BA1C:
    set32(c.r[2], c.r[18].w[0] + 348u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054B9C0u | kUnwind; return; } goto L_0054B9C0; }
L_0054BA28:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_0054BA2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0054BA30:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054BA50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0054BA64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054BA74; } }
L_0054BA64:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] + 0ull;  goto L_0054BA70; }
L_0054BA70:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0054BA74:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_0054BEB4; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(43ll) ? 1ull : 0ull;  goto L_0054BA90; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054BEB4; } }
L_0054BA90:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] - 43u);  goto L_0054BE28; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 19248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00548000u < 16384u) { entry = entries_0112[(t - 0x00548000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0054BAB4:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BAC0:
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BACC:
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BAD8:
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0054BAECu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0054BAECu) [[unlikely]] return; }
L_0054BAEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0054BEB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054BEB4; } }
L_0054BAFC:
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0054BB10u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0054BB10u) [[unlikely]] return; }
L_0054BB10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054BEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054BEB4; } }
L_0054BB20:
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 76u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0054BB34u); set32(c.r[6], 0u + 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0054BB34u) [[unlikely]] return; }
L_0054BB34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054BEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054BEB4; } }
L_0054BB44:
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BB50:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.f[1] = ld32((c.r[4].w[0] + 96u));  goto L_0054BB60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054BB78; } }
L_0054BB60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 6;
L_0054BB78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054BEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054BEB4; } }
L_0054BB88:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.f[1] = ld32((c.r[4].w[0] + 96u));  goto L_0054BB98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054BBB0; } }
L_0054BB98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 6;
L_0054BBB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054BEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054BEB4; } }
L_0054BBC0:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.f[1] = ld32((c.r[4].w[0] + 96u));  goto L_0054BBD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054BBE8; } }
L_0054BBD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 6;
L_0054BBE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054BEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054BEB4; } }
L_0054BBF8:
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BC04:
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BC10:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BC1C:
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 512ull;  goto L_0054BC38; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BC38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 1024ull;  goto L_0054BC4C; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BC4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 2048ull;  goto L_0054BC60; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BC60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);  goto L_0054BC74; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BC74:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0054BC8C; }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BC94:
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 24ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BCA4:
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04300000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BCB8:
    c.f[0] = ld32((c.r[4].w[0] + 176u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BCC4:
    c.f[0] = ld32((c.r[4].w[0] + 180u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BCD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 172u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000C0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BCE4:
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BCF0:
    c.f[0] = ld32((c.r[4].w[0] + 184u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BCFC:
    c.f[0] = ld32((c.r[4].w[0] + 188u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD08:
    c.f[0] = ld32((c.r[4].w[0] + 192u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD14:
    c.f[0] = ld32((c.r[4].w[0] + 196u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD20:
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD2C:
    c.f[0] = ld32((c.r[4].w[0] + 284u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD38:
    c.f[0] = ld32((c.r[4].w[0] + 200u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD44:
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD50:
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD5C:
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD68:
    c.f[0] = ld32((c.r[4].w[0] + 228u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD74:
    c.f[0] = ld32((c.r[4].w[0] + 216u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD80:
    c.f[0] = ld32((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD8C:
    c.f[0] = ld32((c.r[4].w[0] + 212u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BD98:
    c.f[0] = ld32((c.r[4].w[0] + 236u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BDA4:
    c.f[0] = ld32((c.r[4].w[0] + 232u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BDB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BDC8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BDD4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 314u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BDE0:
    c.f[0] = ld32((c.r[4].w[0] + 288u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BDEC:
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BDF8:
    c.f[0] = ld32((c.r[4].w[0] + 296u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BE04:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 318u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_0054BE1C; }
    c.r[2].d[0] = c.r[3].d[0] & 6ull;
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 2;
L_0054BE1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
    set32(c.r[3], c.r[5].w[0] - 43u);
    c.budget -= 1;
L_0054BE28:
    set32(c.r[2], c.r[4].w[0] + 348u);
    set32(c.r[5], ld32((c.r[4].w[0] + 348u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0054BE40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0054BE68; } }
L_0054BE40:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0054BE68; } }
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0054BE4C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_0054BE5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0054BE68; } }
L_0054BE5C:
    c.budget -= 2;
    if (c.r[3].sd[0] > 0) { set32(c.r[5], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054BE4Cu | kUnwind; return; } goto L_0054BE4C; }
    c.budget -= 1;
L_0054BE68:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_0054BEB4; }
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 20u)));  goto L_0054BEAC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[5].w[0] + 20u));  goto L_0054BEA4; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 20u)));  goto L_0054BE9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054BEB0; } }
L_0054BE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BEB0; } }
L_0054BEA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_0054BEB0; } }
L_0054BEAC:
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0054BEB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054BEB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054BEC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0054BEEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0054BF00; } }
L_0054BEEC:
    set32(c.r[18], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = c.r[4].d[0] + 0ull;  goto L_0054BF00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0054BF00; } }
L_0054BF00:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 348u)));  goto L_0054BF10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0054BF8C; } }
L_0054BF10:
    set32(c.r[2], c.r[18].w[0] + 348u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0054BF88; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0054BF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054BF28u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x0054BF28u) [[unlikely]] return; }
L_0054BF28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_0054BF7C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_0054BF6C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 20u));  goto L_0054BF64; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_0054BF5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0054BF74; } }
L_0054BF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0054BF70; } }
L_0054BF64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_0054BF70; } }
L_0054BF6C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0054BF70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0054BF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0054BF90; } }
L_0054BF7C:
    set32(c.r[2], c.r[18].w[0] + 348u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054BF20u | kUnwind; return; } goto L_0054BF20; }
L_0054BF88:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_0054BF8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0054BF90:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0054BFB0:
    set32(c.r[9], ld32((c.r[4].w[0] + 324u)));
    set32(c.r[6], c.r[4].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[6].d[0];  if (t) { [[clang::musttail]] return unit_0113(c, 5u, depth); } }
    set32(c.r[8], ld32((c.r[9].w[0] + 84u)));
    c.budget -= 1;
L_0054BFC4:
    set32(c.r[4], c.r[9].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_0113(c, 4u, depth); } }
L_0054BFD0:
    set32(c.r[2], ld32((c.r[8].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0054BFE0; } }
    st32((c.r[8].w[0] + 36u), 0u);
    c.budget -= 1;
L_0054BFE0:
    set32(c.r[7], ld32((c.r[8].w[0] + 120u)));
    set32(c.r[3], c.r[8].w[0] + 120u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0113(c, 3u, depth); } }
L_0054BFF0:
    set32(c.r[2], ld32((c.r[7].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_0113(c, 2u, depth); } }
    st32((c.r[7].w[0] + 36u), 0u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0113(c, 1u, depth);
}

}
