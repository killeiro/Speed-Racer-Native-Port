#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B0[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28,
    0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37,
    0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46,
    0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0,
    54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90,
    91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95,
    0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0,
    251, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003C0000;
    case 2u: goto L_003C0018;
    case 3u: goto L_003C0028;
    case 4u: goto L_003C0034;
    case 5u: goto L_003C0044;
    case 6u: goto L_003C0054;
    case 7u: goto L_003C0060;
    case 8u: goto L_003C0070;
    case 9u: goto L_003C0080;
    case 10u: goto L_003C008C;
    case 11u: goto L_003C00A4;
    case 12u: goto L_003C00D4;
    case 13u: goto L_003C00DC;
    case 14u: goto L_003C00E8;
    case 15u: goto L_003C0108;
    case 16u: goto L_003C010C;
    case 17u: goto L_003C0130;
    case 18u: goto L_003C0148;
    case 19u: goto L_003C0174;
    case 20u: goto L_003C0184;
    case 21u: goto L_003C0194;
    case 22u: goto L_003C01A0;
    case 23u: goto L_003C01B0;
    case 24u: goto L_003C01C0;
    case 25u: goto L_003C01D0;
    case 26u: goto L_003C01D8;
    case 27u: goto L_003C01F0;
    case 28u: goto L_003C01FC;
    case 29u: goto L_003C0208;
    case 30u: goto L_003C0214;
    case 31u: goto L_003C0224;
    case 32u: goto L_003C0234;
    case 33u: goto L_003C0244;
    case 34u: goto L_003C024C;
    case 35u: goto L_003C0264;
    case 36u: goto L_003C0270;
    case 37u: goto L_003C027C;
    case 38u: goto L_003C0288;
    case 39u: goto L_003C0298;
    case 40u: goto L_003C02A8;
    case 41u: goto L_003C02B8;
    case 42u: goto L_003C02C0;
    case 43u: goto L_003C02D8;
    case 44u: goto L_003C02E4;
    case 45u: goto L_003C02F0;
    case 46u: goto L_003C02FC;
    case 47u: goto L_003C030C;
    case 48u: goto L_003C031C;
    case 49u: goto L_003C032C;
    case 50u: goto L_003C0334;
    case 51u: goto L_003C0340;
    case 52u: goto L_003C0364;
    case 53u: goto L_003C0374;
    case 54u: goto L_003C0380;
    case 55u: goto L_003C038C;
    case 56u: goto L_003C039C;
    case 57u: goto L_003C03AC;
    case 58u: goto L_003C03BC;
    case 59u: goto L_003C03CC;
    case 60u: goto L_003C03D4;
    case 61u: goto L_003C03E0;
    case 62u: goto L_003C03EC;
    case 63u: goto L_003C0400;
    case 64u: goto L_003C041C;
    case 65u: goto L_003C042C;
    case 66u: goto L_003C0438;
    case 67u: goto L_003C0444;
    case 68u: goto L_003C0450;
    case 69u: goto L_003C0460;
    case 70u: goto L_003C0470;
    case 71u: goto L_003C0478;
    case 72u: goto L_003C0490;
    case 73u: goto L_003C04A0;
    case 74u: goto L_003C04AC;
    case 75u: goto L_003C04C0;
    case 76u: goto L_003C0500;
    case 77u: goto L_003C052C;
    case 78u: goto L_003C053C;
    case 79u: goto L_003C0570;
    case 80u: goto L_003C0598;
    case 81u: goto L_003C05B4;
    case 82u: goto L_003C05D0;
    case 83u: goto L_003C05E0;
    case 84u: goto L_003C0604;
    case 85u: goto L_003C065C;
    case 86u: goto L_003C0688;
    case 87u: goto L_003C06AC;
    case 88u: goto L_003C0798;
    case 89u: goto L_003C07C0;
    case 90u: goto L_003C07FC;
    case 91u: goto L_003C0800;
    case 92u: goto L_003C0814;
    case 93u: goto L_003C0840;
    case 94u: goto L_003C086C;
    case 95u: goto L_003C087C;
    case 96u: goto L_003C0884;
    case 97u: goto L_003C08A0;
    case 98u: goto L_003C08A8;
    case 99u: goto L_003C08B4;
    case 100u: goto L_003C08BC;
    case 101u: goto L_003C08E4;
    case 102u: goto L_003C08EC;
    case 103u: goto L_003C08F4;
    case 104u: goto L_003C091C;
    case 105u: goto L_003C0944;
    case 106u: goto L_003C0990;
    case 107u: goto L_003C09A0;
    case 108u: goto L_003C09B0;
    case 109u: goto L_003C09F0;
    case 110u: goto L_003C0A30;
    case 111u: goto L_003C0A60;
    case 112u: goto L_003C0A70;
    case 113u: goto L_003C0A80;
    case 114u: goto L_003C0AA0;
    case 115u: goto L_003C0AC0;
    case 116u: goto L_003C0AF0;
    case 117u: goto L_003C0B10;
    case 118u: goto L_003C0B30;
    case 119u: goto L_003C0BC0;
    case 120u: goto L_003C0BC8;
    case 121u: goto L_003C0BD0;
    case 122u: goto L_003C0BE4;
    case 123u: goto L_003C0C3C;
    case 124u: goto L_003C0C44;
    case 125u: goto L_003C0D10;
    case 126u: goto L_003C0D58;
    case 127u: goto L_003C0D60;
    case 128u: goto L_003C0D70;
    case 129u: goto L_003C0DA8;
    case 130u: goto L_003C0DB4;
    case 131u: goto L_003C0DC0;
    case 132u: goto L_003C0DCC;
    case 133u: goto L_003C0DD8;
    case 134u: goto L_003C0DF0;
    case 135u: goto L_003C0E30;
    case 136u: goto L_003C0E70;
    case 137u: goto L_003C0EA0;
    case 138u: goto L_003C0ED0;
    case 139u: goto L_003C0EE0;
    case 140u: goto L_003C0EF0;
    case 141u: goto L_003C0F18;
    case 142u: goto L_003C0F24;
    case 143u: goto L_003C0F34;
    case 144u: goto L_003C0F48;
    case 145u: goto L_003C0F54;
    case 146u: goto L_003C0F60;
    case 147u: goto L_003C0F70;
    case 148u: goto L_003C0FB8;
    case 149u: goto L_003C0FC4;
    case 150u: goto L_003C0FD0;
    case 151u: goto L_003C0FE8;
    case 152u: goto L_003C1000;
    case 153u: goto L_003C1014;
    case 154u: goto L_003C1040;
    case 155u: goto L_003C1048;
    case 156u: goto L_003C1050;
    case 157u: goto L_003C105C;
    case 158u: goto L_003C1064;
    case 159u: goto L_003C106C;
    case 160u: goto L_003C1078;
    case 161u: goto L_003C10AC;
    case 162u: goto L_003C10F0;
    case 163u: goto L_003C1130;
    case 164u: goto L_003C117C;
    case 165u: goto L_003C1190;
    case 166u: goto L_003C11A0;
    case 167u: goto L_003C11C0;
    case 168u: goto L_003C11D0;
    case 169u: goto L_003C11F8;
    case 170u: goto L_003C1214;
    case 171u: goto L_003C1230;
    case 172u: goto L_003C1250;
    case 173u: goto L_003C1260;
    case 174u: goto L_003C1270;
    case 175u: goto L_003C1280;
    case 176u: goto L_003C1290;
    case 177u: goto L_003C12CC;
    case 178u: goto L_003C1300;
    case 179u: goto L_003C1360;
    case 180u: goto L_003C1368;
    case 181u: goto L_003C13B4;
    case 182u: goto L_003C13F4;
    case 183u: goto L_003C1440;
    case 184u: goto L_003C14AC;
    case 185u: goto L_003C14D4;
    case 186u: goto L_003C1528;
    case 187u: goto L_003C1554;
    case 188u: goto L_003C1574;
    case 189u: goto L_003C15B4;
    case 190u: goto L_003C15F0;
    case 191u: goto L_003C1690;
    case 192u: goto L_003C16B0;
    case 193u: goto L_003C16F0;
    case 194u: goto L_003C1710;
    case 195u: goto L_003C17B0;
    case 196u: goto L_003C17D0;
    case 197u: goto L_003C17E0;
    case 198u: goto L_003C181C;
    case 199u: goto L_003C1834;
    case 200u: goto L_003C1850;
    case 201u: goto L_003C186C;
    case 202u: goto L_003C19E0;
    case 203u: goto L_003C1A10;
    case 204u: goto L_003C1AA0;
    case 205u: goto L_003C1AD8;
    case 206u: goto L_003C1E7C;
    case 207u: goto L_003C1FA0;
    case 208u: goto L_003C1FD8;
    case 209u: goto L_003C2360;
    case 210u: goto L_003C23B4;
    case 211u: goto L_003C2C38;
    case 212u: goto L_003C2C70;
    case 213u: goto L_003C2C98;
    case 214u: goto L_003C2DA0;
    case 215u: goto L_003C2E70;
    case 216u: goto L_003C2F74;
    case 217u: goto L_003C3030;
    case 218u: goto L_003C30C0;
    case 219u: goto L_003C30CC;
    case 220u: goto L_003C3320;
    case 221u: goto L_003C338C;
    case 222u: goto L_003C33A0;
    case 223u: goto L_003C342C;
    case 224u: goto L_003C3540;
    case 225u: goto L_003C357C;
    case 226u: goto L_003C3594;
    case 227u: goto L_003C35B0;
    case 228u: goto L_003C35D0;
    case 229u: goto L_003C35DC;
    case 230u: goto L_003C35E8;
    case 231u: goto L_003C35F0;
    case 232u: goto L_003C362C;
    case 233u: goto L_003C3644;
    case 234u: goto L_003C3660;
    case 235u: goto L_003C3674;
    case 236u: goto L_003C3690;
    case 237u: goto L_003C36B0;
    case 238u: goto L_003C36BC;
    case 239u: goto L_003C36CC;
    case 240u: goto L_003C36D8;
    case 241u: goto L_003C3700;
    case 242u: goto L_003C3748;
    case 243u: goto L_003C3760;
    case 244u: goto L_003C3780;
    case 245u: goto L_003C379C;
    case 246u: goto L_003C37A8;
    case 247u: goto L_003C37C0;
    case 248u: goto L_003C37E0;
    case 249u: goto L_003C37EC;
    case 250u: goto L_003C37F4;
    case 251u: goto L_003C3800;
    case 252u: goto L_003C380C;
    case 253u: goto L_003C3820;
    case 254u: goto L_003C3840;
    case 255u: goto L_003C38D4;
    case 256u: goto L_003C38E0;
    case 257u: goto L_003C3940;
    case 258u: goto L_003C3970;
    case 259u: goto L_003C3980;
    case 260u: goto L_003C39A0;
    case 261u: goto L_003C39B0;
    case 262u: goto L_003C39C0;
    case 263u: goto L_003C39D8;
    case 264u: goto L_003C39F0;
    case 265u: goto L_003C3A08;
    case 266u: goto L_003C3A20;
    case 267u: goto L_003C3A3C;
    case 268u: goto L_003C3A60;
    case 269u: goto L_003C3B18;
    case 270u: goto L_003C3B3C;
    case 271u: goto L_003C3B44;
    case 272u: goto L_003C3B5C;
    case 273u: goto L_003C3B78;
    case 274u: goto L_003C3BC0;
    case 275u: goto L_003C3BE8;
    case 276u: goto L_003C3BFC;
    case 277u: goto L_003C3C3C;
    case 278u: goto L_003C3C90;
    case 279u: goto L_003C3D2C;
    case 280u: goto L_003C3D34;
    case 281u: goto L_003C3D60;
    case 282u: goto L_003C3DA4;
    case 283u: goto L_003C3DBC;
    case 284u: goto L_003C3DD0;
    case 285u: goto L_003C3DE0;
    case 286u: goto L_003C3E1C;
    case 287u: goto L_003C3E94;
    case 288u: goto L_003C3EBC;
    case 289u: goto L_003C3ED8;
    case 290u: goto L_003C3EEC;
    case 291u: goto L_003C3F28;
    default: bad_entry(c, 0x003C0000u); return;
    }
L_003C0000:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003C00F0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0018u); set32(c.r[5], c.r[5].w[0] - 25864u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0018u) [[unlikely]] return; }
L_003C0018:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0028u); set32(c.r[6], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0017(c, 440u, depth + 1u); else { c.pc = 0x0015FE00u; return; } if (c.pc != 0x003C0028u) [[unlikely]] return; }
L_003C0028:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0034u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0034u) [[unlikely]] return; }
L_003C0034:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0044u); set32(c.r[5], c.r[5].w[0] - 25856u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0044u) [[unlikely]] return; }
L_003C0044:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0054u); set32(c.r[6], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 440u, depth + 1u); else { c.pc = 0x0015FE00u; return; } if (c.pc != 0x003C0054u) [[unlikely]] return; }
L_003C0054:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0060u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0060u) [[unlikely]] return; }
L_003C0060:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0070u); set32(c.r[5], c.r[5].w[0] - 25848u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0070u) [[unlikely]] return; }
L_003C0070:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0080u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0017(c, 440u, depth + 1u); else { c.pc = 0x0015FE00u; return; } if (c.pc != 0x003C0080u) [[unlikely]] return; }
L_003C0080:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C008Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C008Cu) [[unlikely]] return; }
L_003C008C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 4096u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 25362u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C00A4u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003C00A4u) [[unlikely]] return; }
L_003C00A4:
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[4], c.r[19].w[0] + 136u);
    st32((c.r[19].w[0] + 16u), 0u);
    set32(c.r[5], c.r[19].w[0] + 36u);
    st32((c.r[19].w[0] + 20u), 0u);
    set32(c.r[6], c.r[19].w[0] + 48u);
    st32((c.r[19].w[0] + 24u), 0u);
    st32((c.r[19].w[0] + 28u), 0u);
    st32((c.r[19].w[0] + 32u), 0u);
    c.f[12] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C00D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 220u, depth + 1u); else { c.pc = 0x003C3320u; return; } if (c.pc != 0x003C00D4u) [[unlikely]] return; }
L_003C00D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C00DCu); set32(c.r[4], c.r[19].w[0] + 136u);  if (depth < kMaxDepth) unit_00B0(c, 215u, depth + 1u); else { c.pc = 0x003C2E70u; return; } if (c.pc != 0x003C00DCu) [[unlikely]] return; }
L_003C00DC:
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C00E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00EE(c, 276u, depth + 1u); else { c.pc = 0x004BA5B0u; return; } if (c.pc != 0x003C00E8u) [[unlikely]] return; }
L_003C00E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C0108; } }
L_003C00F0:
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 4096u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] - 25304u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0108u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003C0108u) [[unlikely]] return; }
L_003C0108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003C010C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003C0130:
    set32(c.r[29], c.r[29].w[0] - 352u);
    set32(c.r[4], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0148u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 20u, depth + 1u); else { c.pc = 0x00100280u; return; } if (c.pc != 0x003C0148u) [[unlikely]] return; }
L_003C0148:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_003C016C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 22448u);
    set32(c.r[3], c.r[3].w[0] + 21488u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
L_003C016C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0174u);  if (depth < kMaxDepth) unit_0017(c, 337u, depth + 1u); else { c.pc = 0x0015F180u; return; } if (c.pc != 0x003C0174u) [[unlikely]] return; }
L_003C0174:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0184u); set32(c.r[5], c.r[5].w[0] - 25960u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0184u) [[unlikely]] return; }
L_003C0184:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0194u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 11u, depth + 1u); else { c.pc = 0x00164210u; return; } if (c.pc != 0x003C0194u) [[unlikely]] return; }
L_003C0194:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C01A0u) [[unlikely]] return; }
L_003C01A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01B0u); set32(c.r[5], c.r[5].w[0] - 25960u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C01B0u) [[unlikely]] return; }
L_003C01B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01C0u); set32(c.r[5], c.r[5].w[0] - 25944u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C01C0u) [[unlikely]] return; }
L_003C01C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01D0u); set32(c.r[5], c.r[5].w[0] - 25212u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C01D0u) [[unlikely]] return; }
L_003C01D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01D8u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x003C01D8u) [[unlikely]] return; }
L_003C01D8:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[6], 0u + 36u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01F0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x001640A0u; return; } if (c.pc != 0x003C01F0u) [[unlikely]] return; }
L_003C01F0:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C01FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C01FCu) [[unlikely]] return; }
L_003C01FC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0208u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0208u) [[unlikely]] return; }
L_003C0208:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0214u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0214u) [[unlikely]] return; }
L_003C0214:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0224u); set32(c.r[5], c.r[5].w[0] - 25960u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0224u) [[unlikely]] return; }
L_003C0224:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0234u); set32(c.r[5], c.r[5].w[0] - 25936u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0234u) [[unlikely]] return; }
L_003C0234:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0244u); set32(c.r[5], c.r[5].w[0] - 25204u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0244u) [[unlikely]] return; }
L_003C0244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C024Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x003C024Cu) [[unlikely]] return; }
L_003C024C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], 0u + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0264u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x001640A0u; return; } if (c.pc != 0x003C0264u) [[unlikely]] return; }
L_003C0264:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0270u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0270u) [[unlikely]] return; }
L_003C0270:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C027Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C027Cu) [[unlikely]] return; }
L_003C027C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0288u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0288u) [[unlikely]] return; }
L_003C0288:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0298u); set32(c.r[5], c.r[5].w[0] - 25960u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0298u) [[unlikely]] return; }
L_003C0298:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02A8u); set32(c.r[5], c.r[5].w[0] - 25928u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C02A8u) [[unlikely]] return; }
L_003C02A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02B8u); set32(c.r[5], c.r[5].w[0] - 25191u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C02B8u) [[unlikely]] return; }
L_003C02B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02C0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x003C02C0u) [[unlikely]] return; }
L_003C02C0:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 4u, depth + 1u); else { c.pc = 0x001640A0u; return; } if (c.pc != 0x003C02D8u) [[unlikely]] return; }
L_003C02D8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C02E4u) [[unlikely]] return; }
L_003C02E4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C02F0u) [[unlikely]] return; }
L_003C02F0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C02FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C02FCu) [[unlikely]] return; }
L_003C02FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C030Cu); set32(c.r[5], c.r[5].w[0] - 25920u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C030Cu) [[unlikely]] return; }
L_003C030C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C031Cu); set32(c.r[5], c.r[5].w[0] - 25172u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C031Cu) [[unlikely]] return; }
L_003C031C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C032Cu); set32(c.r[5], c.r[5].w[0] - 25172u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C032Cu) [[unlikely]] return; }
L_003C032C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0334u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x003C0334u) [[unlikely]] return; }
L_003C0334:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0340u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x003C0340u) [[unlikely]] return; }
L_003C0340:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 25896u);
    set32(c.r[8], c.r[8].w[0] - 25888u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0364u); c.r[9].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00160510u; return; } if (c.pc != 0x003C0364u) [[unlikely]] return; }
L_003C0364:
    st16((c.r[28].w[0] - 30508u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0374u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0374u) [[unlikely]] return; }
L_003C0374:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0380u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0380u) [[unlikely]] return; }
L_003C0380:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C038Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C038Cu) [[unlikely]] return; }
L_003C038C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C039Cu); set32(c.r[5], c.r[5].w[0] - 25880u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C039Cu) [[unlikely]] return; }
L_003C039C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C03ACu); set32(c.r[5], c.r[5].w[0] - 25212u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C03ACu) [[unlikely]] return; }
L_003C03AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C03BCu); set32(c.r[5], c.r[5].w[0] - 25204u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C03BCu) [[unlikely]] return; }
L_003C03BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C03CCu); set32(c.r[5], c.r[5].w[0] - 25168u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C03CCu) [[unlikely]] return; }
L_003C03CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C03D4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x003C03D4u) [[unlikely]] return; }
L_003C03D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C03E0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x003C03E0u) [[unlikely]] return; }
L_003C03E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C03ECu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x003C03ECu) [[unlikely]] return; }
L_003C03EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_003C0400:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] - 25864u);
    set32(c.r[8], c.r[8].w[0] - 25856u);
    set32(c.r[10], c.r[10].w[0] - 25848u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C041Cu); c.r[11].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00160510u; return; } if (c.pc != 0x003C041Cu) [[unlikely]] return; }
L_003C041C:
    st16((c.r[28].w[0] - 30504u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C042Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C042Cu) [[unlikely]] return; }
L_003C042C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0438u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0438u) [[unlikely]] return; }
L_003C0438:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0444u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0444u) [[unlikely]] return; }
L_003C0444:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0450u) [[unlikely]] return; }
L_003C0450:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0460u); set32(c.r[5], c.r[5].w[0] - 25840u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0460u) [[unlikely]] return; }
L_003C0460:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0470u); set32(c.r[5], c.r[5].w[0] - 25172u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0470u) [[unlikely]] return; }
L_003C0470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0478u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x003C0478u) [[unlikely]] return; }
L_003C0478:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 25824u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0490u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00160510u; return; } if (c.pc != 0x003C0490u) [[unlikely]] return; }
L_003C0490:
    st16((c.r[28].w[0] - 30500u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C04A0u) [[unlikely]] return; }
L_003C04A0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C04ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C04ACu) [[unlikely]] return; }
L_003C04AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003C04C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_003C05B4; } }
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 25944u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0500u); c.f[20] = fp::add(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x003C0500u) [[unlikely]] return; }
L_003C0500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003C052C; } }
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[5], c.r[16].w[0] + 36u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C052Cu); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_00B0(c, 220u, depth + 1u); else { c.pc = 0x003C3320u; return; } if (c.pc != 0x003C052Cu) [[unlikely]] return; }
L_003C052C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C053Cu); set32(c.r[5], c.r[5].w[0] - 25928u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x003C053Cu) [[unlikely]] return; }
L_003C053C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C05B8; }
    st32((c.r[29].w[0] + 72u), c.f[20]);
    set32(c.r[4], c.r[16].w[0] + 168u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 64u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 72u);
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0570u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 178u, depth + 1u); else { c.pc = 0x003C1300u; return; } if (c.pc != 0x003C0570u) [[unlikely]] return; }
L_003C0570:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    set32(c.r[5], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 48ull;
    set32(c.r[3], c.r[3].w[0] >> 4);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[5], 0u + 2u);  goto L_003C05A0; }
    set32(c.r[4], c.r[16].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0598u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00B0(c, 202u, depth + 1u); else { c.pc = 0x003C19E0u; return; } if (c.pc != 0x003C0598u) [[unlikely]] return; }
L_003C0598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C05B4; } }
L_003C05A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003C05B4; } }
    set32(c.r[4], c.r[16].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C05B4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00B0(c, 202u, depth + 1u); else { c.pc = 0x003C19E0u; return; } if (c.pc != 0x003C05B4u) [[unlikely]] return; }
L_003C05B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C05B8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C05D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C05E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0604u); set32(c.r[5], c.r[17].w[0] + 100u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x003C0604u) [[unlikely]] return; }
L_003C0604:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 184u));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_003C0668; }
    set32(c.r[2], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C0664; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[28].w[0] - 29052u));  goto L_003C0634; }
    c.f[2] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_003C0634:
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    c.f[0] = ld32((c.r[28].w[0] - 30496u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C0664; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003C0664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C065Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 468u, depth + 1u); else { c.pc = 0x003BF970u; return; } if (c.pc != 0x003C065Cu) [[unlikely]] return; }
L_003C065C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 184u));  goto L_003C0730; }
L_003C0664:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_003C0668:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 29052u));  goto L_003C0678; }
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_003C0678:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0688u); set32(c.r[5], c.r[5].w[0] - 25944u);  if (depth < kMaxDepth) unit_0018(c, 301u, depth + 1u); else { c.pc = 0x001627B0u; return; } if (c.pc != 0x003C0688u) [[unlikely]] return; }
L_003C0688:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 29052u));  goto L_003C069C; }
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_003C069C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C06ACu); set32(c.r[5], c.r[5].w[0] - 25936u);  if (depth < kMaxDepth) unit_0018(c, 301u, depth + 1u); else { c.pc = 0x001627B0u; return; } if (c.pc != 0x003C06ACu) [[unlikely]] return; }
L_003C06AC:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[17].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[17].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[17].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[17].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[17].w[0] + 124u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 30;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 29052u));  goto L_003C0728; }
    c.f[0] = ld32((c.r[3].w[0] + 96u));
    c.budget -= 1;
L_003C0728:
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 184u));
    c.budget -= 2;
L_003C0730:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 188u));  goto L_003C0750; }
    set32(c.r[3], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C074C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st8((c.r[17].w[0] + 184u), static_cast<std::uint8_t>(0u));  goto L_003C07A4; }
L_003C074C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 188u));
    c.budget -= 1;
L_003C0750:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].d[0] = c.r[3].d[0] & 207ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 29052u));  goto L_003C0788; }
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_003C0788:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0798u); set32(c.r[5], c.r[5].w[0] - 25928u);  if (depth < kMaxDepth) unit_0018(c, 301u, depth + 1u); else { c.pc = 0x001627B0u; return; } if (c.pc != 0x003C0798u) [[unlikely]] return; }
L_003C0798:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 64u));
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 184u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003C07A4:
    st32((c.r[17].w[0] + 188u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C07C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C07F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[3].w[0] + 96u));  if (t) { goto L_003C07F4; } }
L_003C07F0:
    c.f[20] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 1;
L_003C07F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 176u)));  if (t) { goto L_003C094C; } }
L_003C07FC:
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 1;
L_003C0800:
    c.r[17].d[0] = ld8((c.r[3].w[0] + 4u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0814u); set32(c.r[4], c.r[18].w[0] + 168u);  if (depth < kMaxDepth) unit_00B0(c, 176u, depth + 1u); else { c.pc = 0x003C1290u; return; } if (c.pc != 0x003C0814u) [[unlikely]] return; }
L_003C0814:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 100u));
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] & 15ull;
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[4].d[0] = c.r[16].d[0] & 64ull;  goto L_003C08F8; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C0848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0840u); set32(c.r[4], ld32((c.r[18].w[0] + 128u)));  if (depth < kMaxDepth) unit_00EE(c, 170u, depth + 1u); else { c.pc = 0x004B9620u; return; } if (c.pc != 0x003C0840u) [[unlikely]] return; }
L_003C0840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C08F4; } }
L_003C0848:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], 0u + 2u);  goto L_003C088C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 29052u));  goto L_003C0864; }
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_003C0864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C086Cu);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x003C086Cu) [[unlikely]] return; }
L_003C086C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C087Cu); set32(c.r[4], c.r[4].w[0] - 25162u);  if (depth < kMaxDepth) unit_000B(c, 413u, depth + 1u); else { c.pc = 0x0012FF20u; return; } if (c.pc != 0x003C087Cu) [[unlikely]] return; }
L_003C087C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0884u); set32(c.r[4], ld32((c.r[18].w[0] + 128u)));  if (depth < kMaxDepth) unit_00EE(c, 150u, depth + 1u); else { c.pc = 0x004B9320u; return; } if (c.pc != 0x003C0884u) [[unlikely]] return; }
L_003C0884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C08F4; } }
L_003C088C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003C08F4; } }
    set32(c.r[4], c.r[18].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08A0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00B0(c, 212u, depth + 1u); else { c.pc = 0x003C2C70u; return; } if (c.pc != 0x003C08A0u) [[unlikely]] return; }
L_003C08A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08A8u); set32(c.r[4], ld32((c.r[18].w[0] + 128u)));  if (depth < kMaxDepth) unit_00EE(c, 132u, depth + 1u); else { c.pc = 0x004B9080u; return; } if (c.pc != 0x003C08A8u) [[unlikely]] return; }
L_003C08A8:
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00EE(c, 276u, depth + 1u); else { c.pc = 0x004BA5B0u; return; } if (c.pc != 0x003C08B4u) [[unlikely]] return; }
L_003C08B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08BCu); set32(c.r[4], ld32((c.r[18].w[0] + 128u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003C08BCu) [[unlikely]] return; }
L_003C08BC:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 412u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08E4u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_00BB(c, 47u, depth + 1u); else { c.pc = 0x003EC8C0u; return; } if (c.pc != 0x003C08E4u) [[unlikely]] return; }
L_003C08E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08ECu); set32(c.r[4], ld32((c.r[18].w[0] + 128u)));  if (depth < kMaxDepth) unit_00EE(c, 365u, depth + 1u); else { c.pc = 0x004BB850u; return; } if (c.pc != 0x003C08ECu) [[unlikely]] return; }
L_003C08EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C08F4u); set32(c.r[4], ld32((c.r[18].w[0] + 128u)));  if (depth < kMaxDepth) unit_00EF(c, 160u, depth + 1u); else { c.pc = 0x004BDC40u; return; } if (c.pc != 0x003C08F4u) [[unlikely]] return; }
L_003C08F4:
    c.r[4].d[0] = c.r[16].d[0] & 64ull;
    c.budget -= 1;
L_003C08F8:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] >> 6);
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1052u)));
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] & 128ull;  goto L_003C0920; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C091Cu);  if (depth < kMaxDepth) unit_00F6(c, 10u, depth + 1u); else { c.pc = 0x004D82A0u; return; } if (c.pc != 0x003C091Cu) [[unlikely]] return; }
L_003C091C:
    c.r[4].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 1;
L_003C0920:
    set32(c.r[3], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] >> 7);
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1252u)));
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[3].d[0]) { st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_003C0948; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0944u);  if (depth < kMaxDepth) unit_00F6(c, 7u, depth + 1u); else { c.pc = 0x004D8230u; return; } if (c.pc != 0x003C0944u) [[unlikely]] return; }
L_003C0944:
    st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_003C0948:
    set32(c.r[3], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 1;
L_003C094C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003C096C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 180u)));
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[29].w[0] + 108u), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C07FCu | kUnwind; return; } goto L_003C07FC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003C096C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C0990:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003C09A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 136u);  goto L_003C1AA0; }
L_003C09B0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[4].w[0] + 64u));  goto L_003C09C8; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 2;
L_003C09C8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[6].d[0] = c.r[5].d[0] & 127ull;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C09F0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[4].w[0] + 64u));  goto L_003C0A08; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 2;
L_003C0A08:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[6].d[0] = c.r[5].d[0] & 191ull;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C0A30:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].d[0] = c.r[3].d[0] & 15ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C0A60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 136u);  goto L_003C1FA0; }
L_003C0A70:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[2].w[0] + 192u));
    c.budget -= 4;
    { set32(c.r[4], c.r[2].w[0] + 136u);  goto L_003C2360; }
L_003C0A80:
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_003C0AA0:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.f[0]);  c.pc = t; return; }
L_003C0AC0:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.f[0]);  c.pc = t; return; }
L_003C0AF0:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.f[0]);  c.pc = t; return; }
L_003C0B10:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.f[0]);  c.pc = t; return; }
L_003C0B30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] & 207ull;
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | 13ull;
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] & 191ull;
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BC0u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_00B0(c, 128u, depth + 1u); else { c.pc = 0x003C0D70u; return; } if (c.pc != 0x003C0BC0u) [[unlikely]] return; }
L_003C0BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BC8u); set32(c.r[4], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x003C0BC8u) [[unlikely]] return; }
L_003C0BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0BD0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x003C0BD0u) [[unlikely]] return; }
L_003C0BD0:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[6], c.r[29].w[0] + 36u);
    set32(c.r[5], c.r[16].w[0] + 72u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 5;
L_003C0BE4:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C0BE4u | kUnwind; return; } goto L_003C0BE4; } }
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[4], c.r[16].w[0] + 136u);
    c.f[1] = ld32((c.r[29].w[0] + 72u));
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[16].w[0] + 116u), c.f[2]);
    st32((c.r[16].w[0] + 120u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C3Cu); st32((c.r[16].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_00B0(c, 222u, depth + 1u); else { c.pc = 0x003C33A0u; return; } if (c.pc != 0x003C0C3Cu) [[unlikely]] return; }
L_003C0C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0C44u); set32(c.r[4], c.r[16].w[0] + 168u);  if (depth < kMaxDepth) unit_00B0(c, 196u, depth + 1u); else { c.pc = 0x003C17D0u; return; } if (c.pc != 0x003C0C44u) [[unlikely]] return; }
L_003C0C44:
    st8((c.r[16].w[0] + 184u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 188u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003C0D64; }
    c.f[0] = ld32((c.r[3].w[0] + 284u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 288u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 292u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 296u));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 300u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 304u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 308u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 312u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 316u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 320u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 324u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 328u));
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 332u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 336u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 340u));
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 344u));
    st32((c.r[29].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D10u); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138740u; return; } if (c.pc != 0x003C0D10u) [[unlikely]] return; }
L_003C0D10:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 29052u));  goto L_003C0D44; }
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_003C0D44:
    set32(c.r[4], c.r[16].w[0] + 136u);
    set32(c.r[5], c.r[16].w[0] + 36u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 220u, depth + 1u); else { c.pc = 0x003C3320u; return; } if (c.pc != 0x003C0D58u) [[unlikely]] return; }
L_003C0D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0D60u); set32(c.r[4], c.r[16].w[0] + 136u);  if (depth < kMaxDepth) unit_00B0(c, 215u, depth + 1u); else { c.pc = 0x003C2E70u; return; } if (c.pc != 0x003C0D60u) [[unlikely]] return; }
L_003C0D60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C0D64:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003C0D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DA8u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00B0(c, 138u, depth + 1u); else { c.pc = 0x003C0ED0u; return; } if (c.pc != 0x003C0DA8u) [[unlikely]] return; }
L_003C0DA8:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 137u, depth + 1u); else { c.pc = 0x003C0EA0u; return; } if (c.pc != 0x003C0DB4u) [[unlikely]] return; }
L_003C0DB4:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 136u, depth + 1u); else { c.pc = 0x003C0E70u; return; } if (c.pc != 0x003C0DC0u) [[unlikely]] return; }
L_003C0DC0:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 135u, depth + 1u); else { c.pc = 0x003C0E30u; return; } if (c.pc != 0x003C0DCCu) [[unlikely]] return; }
L_003C0DCC:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0DD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 134u, depth + 1u); else { c.pc = 0x003C0DF0u; return; } if (c.pc != 0x003C0DD8u) [[unlikely]] return; }
L_003C0DD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C0DF0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] & 255ull;  goto L_003C0E08; }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 2;
L_003C0E08:
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[6].d[0] = c.r[5].d[0] & 127ull;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C0E30:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = c.r[5].d[0] & 255ull;  goto L_003C0E48; }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 2;
L_003C0E48:
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    c.r[6].d[0] = c.r[5].d[0] & 191ull;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C0E70:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].d[0] & 207ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C0EA0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[5].d[0] = c.r[3].d[0] & 15ull;
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C0ED0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003C0EE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00163D20u | kUnwind; return; } [[clang::musttail]] return unit_0018(c, 471u, depth); }
L_003C0EF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 25141u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 196u), c.r[6].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F18u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x003C0F18u) [[unlikely]] return; }
L_003C0F18:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F24u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0F24u) [[unlikely]] return; }
L_003C0F24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F34u); set32(c.r[5], c.r[5].w[0] - 25960u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003C0F34u) [[unlikely]] return; }
L_003C0F34:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 476u, depth + 1u); else { c.pc = 0x00163E20u; return; } if (c.pc != 0x003C0F48u) [[unlikely]] return; }
L_003C0F48:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0F54u) [[unlikely]] return; }
L_003C0F54:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0F60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003C0F60u) [[unlikely]] return; }
L_003C0F60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C0F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C0FE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 168u);
    set32(c.r[2], c.r[2].w[0] + 21456u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003C0FB8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 136u);  goto L_003C0FBC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C0FB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0FB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 197u, depth + 1u); else { c.pc = 0x003C17E0u; return; } if (c.pc != 0x003C0FB8u) [[unlikely]] return; }
L_003C0FB8:
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 1;
L_003C0FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0FC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B0(c, 224u, depth + 1u); else { c.pc = 0x003C3540u; return; } if (c.pc != 0x003C0FC4u) [[unlikely]] return; }
L_003C0FC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0FD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 303u, depth + 1u); else { c.pc = 0x001627E0u; return; } if (c.pc != 0x003C0FD0u) [[unlikely]] return; }
L_003C0FD0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C0FEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C0FE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C0FE8u) [[unlikely]] return; }
L_003C0FE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C0FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1014u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 308u, depth + 1u); else { c.pc = 0x00162850u; return; } if (c.pc != 0x003C1014u) [[unlikely]] return; }
L_003C1014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] + 21456u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1040u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x003C1040u) [[unlikely]] return; }
L_003C1040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1048u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000B(c, 305u, depth + 1u); else { c.pc = 0x0012EB10u; return; } if (c.pc != 0x003C1048u) [[unlikely]] return; }
L_003C1048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1050u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00B0(c, 162u, depth + 1u); else { c.pc = 0x003C10F0u; return; } if (c.pc != 0x003C1050u) [[unlikely]] return; }
L_003C1050:
    set32(c.r[4], c.r[16].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C105Cu); st32((c.r[16].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_00B0(c, 128u, depth + 1u); else { c.pc = 0x003C0D70u; return; } if (c.pc != 0x003C105Cu) [[unlikely]] return; }
L_003C105C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1064u); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x003C1064u) [[unlikely]] return; }
L_003C1064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C106Cu); set32(c.r[4], c.r[16].w[0] + 116u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x003C106Cu) [[unlikely]] return; }
L_003C106C:
    set32(c.r[4], c.r[16].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1078u); st32((c.r[16].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_00B0(c, 227u, depth + 1u); else { c.pc = 0x003C35B0u; return; } if (c.pc != 0x003C1078u) [[unlikely]] return; }
L_003C1078:
    st32((c.r[16].w[0] + 168u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 172u), 0u);
    set32(c.r[4], c.r[16].w[0] + 168u);
    st32((c.r[16].w[0] + 176u), 0u);
    set32(c.r[5], 0u + 40u);
    st32((c.r[16].w[0] + 180u), 0u);
    st8((c.r[16].w[0] + 184u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 188u), 0u);
    st8((c.r[16].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 196u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C10ACu); st32((c.r[16].w[0] + 128u), 0u);  if (depth < kMaxDepth) unit_00B0(c, 192u, depth + 1u); else { c.pc = 0x003C16B0u; return; } if (c.pc != 0x003C10ACu) [[unlikely]] return; }
L_003C10AC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 207ull;
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    c.r[3].d[0] = c.r[3].d[0] | 13ull;
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C10F0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 207ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 191ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003C1130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003C1180; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21488u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003C1164; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22448u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003C1164:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003C117C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C117Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C117Cu) [[unlikely]] return; }
L_003C117C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003C1180:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C1190:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { set32(c.r[5], c.r[5].w[0] - 25808u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E7C0u | kUnwind; return; } [[clang::musttail]] return unit_000F(c, 247u, depth); }
L_003C11A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C11C0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C11C0u) [[unlikely]] return; }
L_003C11C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C11D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003C11F8u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003C11F8u) [[unlikely]] return; }
L_003C11F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003C120C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C1218; } }
L_003C120C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1214u);  if (depth < kMaxDepth) unit_00B0(c, 174u, depth + 1u); else { c.pc = 0x003C1270u; return; } if (c.pc != 0x003C1214u) [[unlikely]] return; }
L_003C1214:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003C1218:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C1230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1250u); st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B0(c, 175u, depth + 1u); else { c.pc = 0x003C1280u; return; } if (c.pc != 0x003C1250u) [[unlikely]] return; }
L_003C1250:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1260u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000F(c, 80u, depth + 1u); else { c.pc = 0x0013CD70u; return; } if (c.pc != 0x003C1260u) [[unlikely]] return; }
L_003C1260:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1270:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003C1280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003C1290:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_003C12B4; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_003C12B4:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_003C12F0; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[5].w[0] + 8u);  if (t) { goto L_003C12E0; } }
L_003C12CC:
    st32((c.r[3].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 4u));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 5;
L_003C12E0:
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[7].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C12CCu | kUnwind; return; } goto L_003C12CC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_003C12F0:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  c.pc = t; return; }
L_003C1300:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003C1690; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_003C136C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1360u); set32(c.r[5], c.r[5].w[0] - 25130u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003C1360u) [[unlikely]] return; }
L_003C1360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1368u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003C1368u) [[unlikely]] return; }
L_003C1368:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_003C136C:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_003C14F8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));  if (t) { goto L_003C13A0; } }
    set32(c.r[4], c.r[4].w[0] + 7u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.budget -= 2;
L_003C13A0:
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], c.r[18].w[0] << 3);  goto L_003C1434; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003C13E0; } }
L_003C13B4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_003C13D0; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_003C13D0:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_003C13E0:
    c.r[1].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C13B4u | kUnwind; return; } goto L_003C13B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003C1420; } }
L_003C13F4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_003C1410; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_003C1410:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_003C1420:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C13F4u | kUnwind; return; } goto L_003C13F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C14CC; } }
L_003C1434:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_003C146C; } }
L_003C1440:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_003C145C; }
    c.f[0] = ld32((c.r[8].w[0]));
    st32((c.r[7].w[0]), c.f[0]);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 4u));
    st8((c.r[7].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_003C145C:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_003C146C:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1440u | kUnwind; return; } goto L_003C1440; } }
    set32(c.r[4], c.r[5].w[0] - c.r[18].w[0]);
    set32(c.r[5], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);  goto L_003C14C0; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C14A0; } }
    set32(c.r[17], c.r[17].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_003C14A0:
    set32(c.r[5], c.r[19].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C14C0; } }
L_003C14AC:
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_003C14C0:
    c.r[1].d[0] = c.r[19].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C14ACu | kUnwind; return; } goto L_003C14AC; }
L_003C14CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C14E8; } }
L_003C14D4:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 5;
L_003C14E8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[0] = ld32((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C14D4u | kUnwind; return; } goto L_003C14D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003C1694; } }
L_003C14F8:
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_003C1518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003C1520; } }
L_003C1518:
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003C1520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_003C1540; } }
L_003C1528:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_003C153C; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_003C153C:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003C1540:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1528u | kUnwind; return; } goto L_003C1528; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1554u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C1554u) [[unlikely]] return; }
L_003C1554:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 108u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_003C15A0; } }
L_003C1574:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_003C1590; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_003C1590:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_003C15A0:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1574u | kUnwind; return; } goto L_003C1574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C15E0; } }
L_003C15B4:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_003C15D0; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_003C15D0:
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_003C15E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C15B4u | kUnwind; return; } goto L_003C15B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_003C1620; } }
L_003C15F0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_003C160C; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_003C160C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_003C1620:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C15F0u | kUnwind; return; } goto L_003C15F0; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_003C1678; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[20].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 17;
L_003C1678:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_003C1690; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C1690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1690u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C1690u) [[unlikely]] return; }
L_003C1690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003C1694:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C16B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C17B0; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 3);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C16F0u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C16F0u) [[unlikely]] return; }
L_003C16F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_003C173C; } }
L_003C1710:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_003C172C; }
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 5;
L_003C172C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_003C173C:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C1710u | kUnwind; return; } goto L_003C1710; } }
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_003C1798; }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 17;
L_003C1798:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 56u), 0u);  if (t) { goto L_003C17B0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003C17B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C17B0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C17B0u) [[unlikely]] return; }
L_003C17B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C17B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C17D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_003C17E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C1834; } }
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003C1820; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C181C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C181Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C181Cu) [[unlikely]] return; }
L_003C181C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003C1820:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C1838; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1834u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C1834u) [[unlikely]] return; }
L_003C1834:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C1838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C1850:
    set32(c.r[3], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[1] = 0u;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_003C19C0; } }
L_003C186C:
    set32(c.r[13], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[14], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 20u)));
    mmi::divu(c, 0, c.r[14].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[13].w[0] + c.r[8].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[14].w[0], c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 22;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[8], ld32((c.r[4].w[0] + 24u)));  goto L_003C1914; }
    mmi::divu(c, 0, c.r[14].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[13].w[0] + c.r[8].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[14].w[0], c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C1910; } }
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_003C1910:
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 1;
L_003C1914:
    set32(c.r[13], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[12], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[14], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 20u)));
    mmi::divu(c, 0, c.r[14].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[13].w[0] + c.r[8].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[14].w[0], c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 22;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_003C19C0; }
    mmi::divu(c, 0, c.r[14].w[0], c.r[3].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[13].w[0] + c.r[8].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[12].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[14].w[0], c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003C19BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[7].w[0]);  if (t) { goto L_003C19D0; } }
L_003C19BC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003C19C0:
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    c.r[8].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[8].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C186Cu | kUnwind; return; } goto L_003C186C; }
L_003C19D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003C19E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1A10u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 200u, depth + 1u); else { c.pc = 0x003C1850u; return; } if (c.pc != 0x003C1A10u) [[unlikely]] return; }
L_003C1A10:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003C1A8C; }
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C1A88; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], c.r[6].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 22;
L_003C1A88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C1A8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C1AA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 168u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[5], c.r[29].w[0] + 172u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1AD8u); st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 200u, depth + 1u); else { c.pc = 0x003C1850u; return; } if (c.pc != 0x003C1AD8u) [[unlikely]] return; }
L_003C1AD8:
    set32(c.r[9], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[9].sd[0] < 0) { set32(c.r[5], ld32((c.r[29].w[0] + 168u)));  goto L_003C1C04; }
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[7], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[11], c.r[5].w[0] + c.r[11].w[0]);
    mmi::divu(c, 0, c.r[11].w[0], c.r[4].w[0]);
    c.r[11].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    c.r[13].d[0] = c.hi.d[0];
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] + 32u)));
    c.budget -= 24;
    if (c.r[11].d[0] == c.r[10].d[0]) { set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);  goto L_003C1B94; }
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[10], 0u + 2u);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[11].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != c.r[10].d[0];  if (t) { goto L_003C1C00; } }
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_003C1B94:
    set32(c.r[7], 0u + 10u);
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003C1F80; } }
L_003C1C00:
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003C1C04:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003C1CC8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[13], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[12], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[13].w[0] + c.r[7].w[0]);
    mmi::divu(c, 0, c.r[7].w[0], c.r[12].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 24;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_003C1CC8; } }
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[13].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[12].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[11].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003C1F80; } }
L_003C1CC8:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_003C1E84; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003C1E84; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[11], ld32((c.r[17].w[0] + 16u)));
    c.f[0] = 0u;
    set32(c.r[10], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[11].w[0] + c.r[4].w[0]);
    mmi::divu(c, 0, c.r[4].w[0], c.r[10].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[6].w[0], c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[6], ld32((c.r[4].w[0])));
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[29].w[0] + 124u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 16u));
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 20u));
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 24u));
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.f[3] = ld32((c.r[7].w[0] + 28u));
    st32((c.r[29].w[0] + 140u), c.f[3]);
    set32(c.r[6], ld32((c.r[7].w[0] + 32u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[11].w[0] + c.r[4].w[0]);
    mmi::divu(c, 0, c.r[4].w[0], c.r[10].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0] + 36u));
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 40u));
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 44u));
    st32((c.r[29].w[0] + 156u), c.f[1]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[4].w[0]));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[29].w[0] + 72u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[29].w[0] + 76u), c.f[2]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[29].w[0] + 92u), c.f[1]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.budget -= 88;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { goto L_003C1E58; } }
    st32((c.r[16].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003C1F80; } }
L_003C1E58:
    c.f[0] = fp::sub(c.f[20], c.f[3]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1E7Cu);  if (depth < kMaxDepth) unit_000E(c, 19u, depth + 1u); else { c.pc = 0x00138380u; return; } if (c.pc != 0x003C1E7Cu) [[unlikely]] return; }
L_003C1E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003C1F84; } }
L_003C1E84:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_003C1F04; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], c.r[9].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003C1F80; } }
L_003C1F04:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003C1F80; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], 0u + 10u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 29;
L_003C1F80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C1F84:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003C1FA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 72u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[5], c.r[29].w[0] + 76u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C1FD8u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 200u, depth + 1u); else { c.pc = 0x003C1850u; return; } if (c.pc != 0x003C1FD8u) [[unlikely]] return; }
L_003C1FD8:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003C2058; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[9], 0u + 10u);
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[10], c.r[4].w[0] + c.r[5].w[0]);
    mmi::divu(c, 0, c.r[10].w[0], c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[10].w[0], c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 25;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003C2058; } }
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_003C2340; } }
L_003C2058:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003C2124; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003C2124; } }
    set32(c.r[12], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[11], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[10], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[7], c.r[6].w[0] + c.r[12].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 20u)));
    mmi::divu(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[11].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[10].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[7].w[0], c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 24;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_003C2124; } }
    set32(c.r[5], c.r[4].w[0] + c.r[12].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[11].w[0] + c.r[4].w[0]);
    mmi::divu(c, 0, c.r[4].w[0], c.r[10].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003C2340; } }
L_003C2124:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003C2248; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003C2248; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[11], 0u + 10u);
    set32(c.r[10], ld32((c.r[17].w[0] + 16u)));
    c.f[2] = 0u;
    set32(c.r[9], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    mmi::divu(c, 0, c.r[5].w[0], c.r[11].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[5].w[0], c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[5], ld32((c.r[3].w[0])));
    mmi::divu(c, 0, c.r[4].w[0], c.r[11].w[0]);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[9] = ld32((c.r[5].w[0] + 28u));
    c.f[8] = ld32((c.r[5].w[0] + 36u));
    c.f[7] = ld32((c.r[5].w[0] + 40u));
    c.f[6] = ld32((c.r[5].w[0] + 44u));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[4].w[0], c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.f[4] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = fp::sub(c.f[0], c.f[9]);
    c.f[3] = ld32((c.r[3].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 48;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[5] = ld32((c.r[3].w[0] + 36u));  if (t) { goto L_003C2208; } }
    st32((c.r[16].w[0]), c.f[5]);
    st32((c.r[16].w[0] + 4u), c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[3]);  if (t) { goto L_003C2340; } }
L_003C2208:
    c.f[0] = fp::sub(c.f[20], c.f[9]);
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[5], c.f[8]);
    c.facc = fp::add(c.f[2], c.f[8]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = fp::sub(c.f[4], c.f[7]);
    c.facc = fp::add(c.f[2], c.f[7]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = fp::sub(c.f[3], c.f[6]);
    c.facc = fp::add(c.f[2], c.f[6]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003C2340; } }
L_003C2248:
    c.budget -= 2;
    if (c.r[4].sd[0] < 0) { set32(c.r[6], ld32((c.r[29].w[0] + 72u)));  goto L_003C22C0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], 0u + 10u);
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    mmi::divu(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003C2340; } }
L_003C22C0:
    c.budget -= 2;
    if (c.r[6].sd[0] < 0) { st32((c.r[16].w[0]), 0u);  goto L_003C2338; }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], c.r[6].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003C2340; } }
L_003C2338:
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 2;
L_003C2340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C2360:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    set32(c.r[5], c.r[29].w[0] + 236u);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[6], c.r[29].w[0] + 232u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C23B4u); st32((c.r[29].w[0] + 232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 200u, depth + 1u); else { c.pc = 0x003C1850u; return; } if (c.pc != 0x003C23B4u) [[unlikely]] return; }
L_003C23B4:
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_003C2478; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    mmi::divu(c, 0, c.r[10].w[0], c.r[4].w[0]);
    c.r[10].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0])));
    c.r[12].d[0] = c.hi.d[0];
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 32u)));
    c.budget -= 25;
    { const bool t = c.r[10].d[0] != c.r[9].d[0];  if (t) { goto L_003C2478; } }
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_003C2C38; } }
L_003C2478:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_003C28E4; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[13].sd[0] < 0;  if (t) { goto L_003C28E4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[9], c.r[8].w[0] + 1u);
    c.r[1].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C28E4; } }
    set32(c.r[12], c.r[13].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[12].sd[0] < 0;  if (t) { goto L_003C28E4; } }
    set32(c.r[7], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[11], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[8].w[0] + c.r[7].w[0]);
    mmi::divu(c, 0, c.r[11].w[0], c.r[6].w[0]);
    set32(c.r[9], c.r[13].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[12].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    mmi::divu(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[11].w[0], c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.r[13].d[0] = c.hi.d[0];
    set32(c.r[11], ld32((c.r[7].w[0])));
    mmi::divu(c, 0, c.r[10].w[0], c.r[6].w[0]);
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.f[4] = ld32((c.r[11].w[0]));
    c.f[3] = ld32((c.r[11].w[0] + 4u));
    c.f[2] = ld32((c.r[11].w[0] + 8u));
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    mmi::divu(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[10].w[0], c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.r[12].d[0] = c.hi.d[0];
    set32(c.r[10], ld32((c.r[7].w[0])));
    mmi::divu(c, 0, c.r[9].w[0], c.r[6].w[0]);
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[11], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], ld32((c.r[11].w[0] + 32u)));
    c.f[24] = ld32((c.r[11].w[0]));
    c.f[23] = ld32((c.r[11].w[0] + 4u));
    c.f[22] = ld32((c.r[11].w[0] + 8u));
    c.f[1] = ld32((c.r[11].w[0] + 28u));
    st32((c.r[29].w[0] + 176u), c.r[10].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    mmi::divu(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[9].w[0], c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.r[11].d[0] = c.hi.d[0];
    set32(c.r[9], ld32((c.r[7].w[0])));
    mmi::divu(c, 0, c.r[8].w[0], c.r[6].w[0]);
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[10], c.r[9].w[0] + c.r[10].w[0]);
    c.f[21] = ld32((c.r[10].w[0]));
    set32(c.r[9], ld32((c.r[10].w[0] + 32u)));
    c.f[19] = ld32((c.r[10].w[0] + 4u));
    c.f[18] = ld32((c.r[10].w[0] + 8u));
    c.f[8] = fp::sub(c.f[21], c.f[24]);
    st32((c.r[29].w[0] + 128u), c.r[9].w[0]);
    c.f[7] = fp::sub(c.f[19], c.f[23]);
    c.f[5] = fp::sub(c.f[18], c.f[22]);
    c.f[0] = ld32((c.r[10].w[0] + 28u));
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[10] = ld32((c.r[3].w[0]));
    c.f[11] = ld32((c.r[3].w[0] + 4u));
    c.f[9] = ld32((c.r[3].w[0] + 8u));
    c.facc = fp::mul(c.f[8], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    set32(c.r[3], c.r[9].w[0] - 1u);
    c.f[6] = fp::sqrt(c.f[6]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 96;
    if (c.r[1].d[0] == 0ull) { c.f[10] = fp::sub(c.f[10], c.f[21]);  goto L_003C263C; }
    c.f[15] = fp::add(c.f[21], c.f[8]);
    c.f[14] = fp::add(c.f[19], c.f[7]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[13] = fp::add(c.f[18], c.f[5]);  if (t) { goto L_003C26C8; } }
L_003C263C:
    c.f[7] = fp::sub(c.f[11], c.f[19]);
    c.f[9] = fp::sub(c.f[9], c.f[18]);
    c.facc = fp::mul(c.f[10], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[9], c.f[9]));
    c.f[8] = fp::sqrt(c.f[8]);
    c.f[5] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[5]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 216u), 0u);  goto L_003C2698; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.f[5] = c.r[3].w[0];
    fpu_div(c, 8u, c.f[5], c.f[8]);
    c.f[5] = fp::mul(c.f[10], c.f[8]);
    st32((c.r[29].w[0] + 216u), c.f[5]);
    c.f[7] = fp::mul(c.f[7], c.f[8]);
    c.f[5] = fp::mul(c.f[9], c.f[8]);
    st32((c.r[29].w[0] + 220u), c.f[7]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.f[5]);  if (t) { goto L_003C26A4; } }
L_003C2698:
    set32(c.r[4], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    c.budget -= 3;
L_003C26A4:
    c.f[8] = ld32((c.r[4].w[0]));
    c.f[7] = ld32((c.r[4].w[0] + 4u));
    c.f[5] = ld32((c.r[4].w[0] + 8u));
    c.f[8] = fp::mul(c.f[8], c.f[6]);
    c.f[7] = fp::mul(c.f[7], c.f[6]);
    c.f[5] = fp::mul(c.f[5], c.f[6]);
    c.f[15] = fp::add(c.f[8], c.f[21]);
    c.f[14] = fp::add(c.f[7], c.f[19]);
    c.f[13] = fp::add(c.f[5], c.f[18]);
    c.budget -= 9;
L_003C26C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[7] = fp::sub(c.f[4], c.f[24]);  goto L_003C26F4; }
    c.f[2] = fp::sub(c.f[24], c.f[21]);
    c.f[5] = fp::add(c.f[24], c.f[2]);
    c.f[2] = fp::sub(c.f[23], c.f[19]);
    c.f[17] = fp::add(c.f[23], c.f[2]);
    c.f[2] = fp::sub(c.f[22], c.f[18]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[16] = fp::add(c.f[22], c.f[2]);  if (t) { goto L_003C2780; } }
L_003C26F4:
    c.f[3] = fp::sub(c.f[3], c.f[23]);
    c.f[5] = fp::sub(c.f[2], c.f[22]);
    c.facc = fp::mul(c.f[7], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[5], c.f[5]));
    c.f[4] = fp::sqrt(c.f[4]);
    c.f[2] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[2]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 200u), 0u);  goto L_003C2750; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.f[2] = c.r[3].w[0];
    fpu_div(c, 4u, c.f[2], c.f[4]);
    c.f[2] = fp::mul(c.f[7], c.f[4]);
    st32((c.r[29].w[0] + 200u), c.f[2]);
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.f[2] = fp::mul(c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 204u), c.f[3]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.f[2]);  if (t) { goto L_003C275C; } }
L_003C2750:
    set32(c.r[4], c.r[29].w[0] + 200u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 208u), 0u);
    c.budget -= 3;
L_003C275C:
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    c.f[3] = fp::mul(c.f[3], c.f[6]);
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[5] = fp::add(c.f[4], c.f[24]);
    c.f[17] = fp::add(c.f[3], c.f[23]);
    c.f[16] = fp::add(c.f[2], c.f[22]);
    c.budget -= 9;
L_003C2780:
    c.f[2] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::sub(c.f[20], c.f[1]);  goto L_003C27A8; }
    st32((c.r[17].w[0]), c.f[24]);
    st32((c.r[17].w[0] + 4u), c.f[23]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[22]);  if (t) { goto L_003C2C38; } }
L_003C27A8:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC0200000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    fpu_div(c, 12u, c.f[0], c.f[2]);
    c.f[2] = c.r[5].w[0];
    c.f[20] = fp::mul(c.f[21], c.f[2]);
    c.f[4] = c.r[7].w[0];
    c.f[11] = c.r[8].w[0];
    c.f[10] = c.f[11] ^ fp::kSign;
    c.f[6] = fp::mul(c.f[12], c.f[12]);
    c.f[3] = c.r[6].w[0];
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[25] = fp::add(c.facc, fp::mul(c.f[24], c.f[3]));
    c.facc = fp::add(c.f[25], c.f[20]);
    c.f[20] = fp::add(c.facc, fp::mul(c.f[15], c.f[10]));
    c.f[25] = fp::mul(c.f[20], c.f[6]);
    c.f[9] = fp::mul(c.f[5], c.f[10]);
    c.f[20] = fp::mul(c.f[21], c.f[11]);
    c.f[20] = fp::add(c.f[9], c.f[20]);
    c.f[20] = fp::mul(c.f[20], c.f[12]);
    c.f[20] = fp::add(c.f[24], c.f[20]);
    c.f[1] = c.r[4].w[0];
    c.facc = fp::add(c.f[20], c.f[25]);
    c.f[20] = fp::mul(c.f[24], c.f[1]);
    c.f[20] = fp::add(c.f[9], c.f[20]);
    c.f[0] = c.r[3].w[0];
    c.f[9] = fp::mul(c.f[21], c.f[0]);
    c.f[15] = fp::mul(c.f[15], c.f[11]);
    c.f[9] = fp::add(c.f[20], c.f[9]);
    c.f[5] = fp::mul(c.f[12], c.f[6]);
    c.f[9] = fp::add(c.f[9], c.f[15]);
    c.f[9] = fp::add(c.facc, fp::mul(c.f[9], c.f[5]));
    st32((c.r[17].w[0]), c.f[9]);
    c.f[9] = fp::mul(c.f[19], c.f[2]);
    c.facc = fp::mul(c.f[17], c.f[4]);
    c.f[15] = fp::add(c.facc, fp::mul(c.f[23], c.f[3]));
    c.facc = fp::add(c.f[15], c.f[9]);
    c.f[9] = fp::add(c.facc, fp::mul(c.f[14], c.f[10]));
    c.f[15] = fp::mul(c.f[9], c.f[6]);
    c.f[9] = fp::mul(c.f[14], c.f[11]);
    c.f[8] = fp::mul(c.f[17], c.f[10]);
    c.f[14] = fp::mul(c.f[19], c.f[11]);
    c.f[14] = fp::add(c.f[8], c.f[14]);
    c.f[14] = fp::mul(c.f[14], c.f[12]);
    c.f[14] = fp::add(c.f[23], c.f[14]);
    c.facc = fp::add(c.f[14], c.f[15]);
    c.f[14] = fp::mul(c.f[23], c.f[1]);
    c.f[14] = fp::add(c.f[8], c.f[14]);
    c.f[8] = fp::mul(c.f[19], c.f[0]);
    c.f[8] = fp::add(c.f[14], c.f[8]);
    c.f[8] = fp::add(c.f[8], c.f[9]);
    c.f[8] = fp::add(c.facc, fp::mul(c.f[8], c.f[5]));
    c.facc = fp::mul(c.f[16], c.f[4]);
    c.f[2] = fp::mul(c.f[18], c.f[2]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[22], c.f[3]));
    c.facc = fp::add(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[13], c.f[10]));
    c.f[7] = fp::mul(c.f[16], c.f[10]);
    c.f[1] = fp::mul(c.f[22], c.f[1]);
    c.facc = fp::add(c.f[7], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[18], c.f[0]));
    c.f[0] = fp::mul(c.f[18], c.f[11]);
    c.f[0] = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[0] = fp::add(c.f[22], c.f[0]);
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[13], c.f[11]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[8]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[5]));
    c.budget -= 79;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_003C2C38; } }
L_003C28E4:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_003C2A08; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003C2A08; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[11], 0u + 10u);
    set32(c.r[10], ld32((c.r[18].w[0] + 16u)));
    c.f[2] = 0u;
    set32(c.r[9], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[11].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[5].w[0], c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[5], ld32((c.r[3].w[0])));
    mmi::divu(c, 0, c.r[4].w[0], c.r[11].w[0]);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[9] = ld32((c.r[5].w[0]));
    c.f[8] = ld32((c.r[5].w[0] + 4u));
    c.f[7] = ld32((c.r[5].w[0] + 8u));
    c.f[6] = ld32((c.r[5].w[0] + 28u));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[4].w[0], c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::sub(c.f[0], c.f[6]);
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 48;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[5] = ld32((c.r[3].w[0]));  if (t) { goto L_003C29C8; } }
    st32((c.r[17].w[0]), c.f[5]);
    st32((c.r[17].w[0] + 4u), c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[3]);  if (t) { goto L_003C2C38; } }
L_003C29C8:
    c.f[0] = fp::sub(c.f[20], c.f[6]);
    fpu_div(c, 1u, c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[5], c.f[9]);
    c.facc = fp::add(c.f[2], c.f[9]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = fp::sub(c.f[4], c.f[8]);
    c.facc = fp::add(c.f[2], c.f[8]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = fp::sub(c.f[3], c.f[7]);
    c.facc = fp::add(c.f[2], c.f[7]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_003C2C38; } }
L_003C2A08:
    c.budget -= 2;
    if (c.r[8].sd[0] < 0) { set32(c.r[6], ld32((c.r[29].w[0] + 232u)));  goto L_003C2BB8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 24u)));  goto L_003C2B48; }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[8].w[0] + 1u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003C2B44; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.f[7] = 0u;
    set32(c.r[11], 0u + 10u);
    set32(c.r[10], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[18].w[0] + 8u)));
    c.f[6] = c.f[7];
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[11].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 20u)));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[5].w[0], c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    set32(c.r[5], ld32((c.r[3].w[0])));
    mmi::divu(c, 0, c.r[4].w[0], c.r[11].w[0]);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[4].w[0], c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[8] = ld32((c.r[3].w[0] + 28u));
    c.f[11] = ld32((c.r[3].w[0]));
    c.f[10] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = fp::sub(c.f[8], c.f[0]);
    c.f[9] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[7]));
    c.budget -= 49;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[5] = c.f[7];  if (t) { goto L_003C2B18; } }
    c.f[0] = fp::sub(c.f[11], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[7] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[10], c.f[4]);
    c.f[6] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[9], c.f[3]);
    c.f[5] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 10;
L_003C2B18:
    c.f[2] = fp::sub(c.f[20], c.f[8]);
    c.f[0] = fp::mul(c.f[7], c.f[2]);
    c.f[0] = fp::add(c.f[11], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = fp::mul(c.f[6], c.f[2]);
    c.f[1] = fp::add(c.f[10], c.f[0]);
    c.f[0] = fp::mul(c.f[5], c.f[2]);
    c.f[0] = fp::add(c.f[9], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_003C2BB0; } }
L_003C2B44:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_003C2B48:
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 26;
L_003C2BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003C2C3C; } }
L_003C2BB8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003C2C38; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] - 25072u);
    set32(c.r[8], c.r[6].w[0] + c.r[2].w[0]);
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2C38u); st32((c.r[17].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 413u, depth + 1u); else { c.pc = 0x0012FF20u; return; } if (c.pc != 0x003C2C38u) [[unlikely]] return; }
L_003C2C38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_003C2C3C:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003C2C70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 124u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 120u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C2C98u); st32((c.r[29].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 200u, depth + 1u); else { c.pc = 0x003C1850u; return; } if (c.pc != 0x003C2C98u) [[unlikely]] return; }
L_003C2C98:
    set32(c.r[7], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[7].sd[0] < 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003C2E58; }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], 0u + 10u);
    set32(c.r[9], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], c.r[7].w[0] + 1u);
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[11], c.r[7].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[11].w[0], c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    mmi::divu(c, 0, c.r[9].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[11].w[0], c.r[4].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[8].w[0]));
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 16u));
    c.f[1] = ld32((c.r[8].w[0] + 20u));
    c.f[0] = ld32((c.r[8].w[0] + 24u));
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[2] = ld32((c.r[8].w[0] + 36u));
    c.f[1] = ld32((c.r[8].w[0] + 40u));
    c.f[0] = ld32((c.r[8].w[0] + 44u));
    c.f[10] = ld32((c.r[8].w[0] + 28u));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.budget -= 48;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 92u), c.f[0]);  if (t) { goto L_003C2E54; } }
    c.f[2] = ld32((c.r[29].w[0] + 60u));
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = ld32((c.r[29].w[0] + 72u));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 44u), c.f[2]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.f[0]);  if (t) { goto L_003C2E44; } }
L_003C2DA0:
    c.f[9] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.f[8] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[8], ld32((c.r[5].w[0] + 4u)));
    c.f[7] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[11], c.r[6].w[0] + c.r[7].w[0]);
    mmi::divu(c, 0, c.r[11].w[0], c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    c.f[6] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[5] = ld32((c.r[29].w[0] + 36u));
    c.f[4] = ld32((c.r[29].w[0] + 40u));
    c.f[3] = ld32((c.r[29].w[0] + 44u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    mmi::divu(c, 0, c.r[9].w[0], c.r[8].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[11].w[0], c.r[4].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.f[9]);
    st32((c.r[7].w[0] + 4u), c.f[8]);
    st32((c.r[7].w[0] + 8u), c.f[7]);
    st32((c.r[7].w[0] + 12u), c.f[6]);
    st32((c.r[7].w[0] + 16u), c.f[5]);
    st32((c.r[7].w[0] + 20u), c.f[4]);
    st32((c.r[7].w[0] + 24u), c.f[3]);
    st32((c.r[7].w[0] + 28u), c.f[10]);
    st32((c.r[7].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 36u), c.f[2]);
    st32((c.r[7].w[0] + 40u), c.f[1]);
    st32((c.r[7].w[0] + 44u), c.f[0]);
    c.budget -= 41;
L_003C2E44:
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    c.r[7].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[7].d[0] != 0ull) { set32(c.r[7], ld32((c.r[16].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2DA0u | kUnwind; return; } goto L_003C2DA0; }
L_003C2E54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003C2E58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003C2E70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[10], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], c.r[4].w[0] + 4u);
    set32(c.r[12], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    mmi::divu(c, 0, c.r[12].w[0], c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[7], 0u + 1u);
    c.r[1].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    mmi::divu(c, 0, c.r[10].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[12].w[0], c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[9].w[0]));
    set32(c.r[3], ld32((c.r[9].w[0] + 32u)));
    c.f[2] = ld32((c.r[9].w[0] + 4u));
    c.f[1] = ld32((c.r[9].w[0] + 8u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[9].w[0] + 12u));
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.f[2] = ld32((c.r[9].w[0] + 16u));
    c.f[1] = ld32((c.r[9].w[0] + 20u));
    c.f[0] = ld32((c.r[9].w[0] + 24u));
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[2] = ld32((c.r[9].w[0] + 36u));
    c.f[1] = ld32((c.r[9].w[0] + 40u));
    c.f[0] = ld32((c.r[9].w[0] + 44u));
    c.f[10] = ld32((c.r[9].w[0] + 28u));
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.budget -= 50;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0] + 60u), c.f[0]);  if (t) { goto L_003C3028; } }
    c.f[2] = ld32((c.r[29].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[29].w[0] + 12u), c.f[2]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_003C3018; } }
L_003C2F74:
    c.f[9] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[10], ld32((c.r[6].w[0] + 12u)));
    c.f[8] = ld32((c.r[29].w[0] + 20u));
    set32(c.r[9], ld32((c.r[6].w[0] + 4u)));
    c.f[7] = ld32((c.r[29].w[0] + 24u));
    set32(c.r[12], c.r[7].w[0] + c.r[8].w[0]);
    mmi::divu(c, 0, c.r[12].w[0], c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0] + 16u)));
    c.f[6] = ld32((c.r[29].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.f[5] = ld32((c.r[29].w[0] + 4u));
    c.f[4] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = ld32((c.r[29].w[0] + 12u));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    mmi::divu(c, 0, c.r[10].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[12].w[0], c.r[5].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[8].w[0]), c.f[9]);
    st32((c.r[8].w[0] + 4u), c.f[8]);
    st32((c.r[8].w[0] + 8u), c.f[7]);
    st32((c.r[8].w[0] + 12u), c.f[6]);
    st32((c.r[8].w[0] + 16u), c.f[5]);
    st32((c.r[8].w[0] + 20u), c.f[4]);
    st32((c.r[8].w[0] + 24u), c.f[3]);
    st32((c.r[8].w[0] + 28u), c.f[10]);
    st32((c.r[8].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 36u), c.f[2]);
    st32((c.r[8].w[0] + 40u), c.f[1]);
    st32((c.r[8].w[0] + 44u), c.f[0]);
    c.budget -= 41;
L_003C3018:
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    c.r[8].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[8].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C2F74u | kUnwind; return; } goto L_003C2F74; }
L_003C3028:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C3030:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C30B8; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[8].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 24;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003C3304; }
L_003C30B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C30C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 274u, depth + 1u); else { c.pc = 0x003C3BC0u; return; } if (c.pc != 0x003C30C0u) [[unlikely]] return; }
L_003C30C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C30CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 3u, depth + 1u); else { c.pc = 0x003C40B0u; return; } if (c.pc != 0x003C30CCu) [[unlikely]] return; }
L_003C30CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003C3300; } }
    set32(c.r[13], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[10], 0u + 1u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.f[2] = 0u;
    set32(c.r[9], c.r[10].w[0] + c.r[13].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    mmi::divu(c, 0, c.r[9].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[9].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[12].d[0] = c.hi.d[0];
    set32(c.r[11], c.r[12].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[8], c.r[16].w[0] + 4u);  if (t) { goto L_003C3300; } }
    mmi::divu(c, 0, c.r[9].w[0], c.r[7].w[0]);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[11].w[0] + c.r[13].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[9].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[14].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[12].w[0], c.r[7].w[0]);
    set32(c.r[13], c.r[14].w[0] << 1);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    mmi::divu(c, 0, c.r[11].w[0], c.r[5].w[0]);
    c.r[11].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[12].w[0], c.r[7].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0])));
    c.r[13].d[0] = c.hi.d[0];
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[13], c.r[11].w[0] + c.r[12].w[0]);
    c.f[1] = ld32((c.r[13].w[0] + 28u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 36;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003C3300; } }
    mmi::divu(c, 0, c.r[9].w[0], c.r[7].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[11].w[0];
    fpu_div(c, 5u, c.f[0], c.f[1]);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[13].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[13].w[0]));
    c.f[3] = ld32((c.r[13].w[0] + 8u));
    c.r[12].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + c.r[12].w[0]);
    mmi::divu(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.f[4] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[1] = fp::mul(c.f[2], c.f[5]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[9].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 36u), c.f[0]);
    st32((c.r[3].w[0] + 40u), c.f[4]);
    st32((c.r[3].w[0] + 44u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[13], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[12], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[5], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[11].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[7].w[0]);
    set32(c.r[9], ld32((c.r[8].w[0] + 16u)));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[13].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[5].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    set32(c.r[5], ld32((c.r[3].w[0])));
    mmi::divu(c, 0, c.r[4].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 36u));
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[13].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[4].w[0], c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    st32((c.r[3].w[0] + 44u), c.f[0]);
    c.budget -= 75;
L_003C3300:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C3304:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C3320:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[29].w[0] + 44u), c.f[12]);  if (t) { goto L_003C3370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003C3374; } }
L_003C3370:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003C3374:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C338Cu); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_00B0(c, 217u, depth + 1u); else { c.pc = 0x003C3030u; return; } if (c.pc != 0x003C338Cu) [[unlikely]] return; }
L_003C338C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003C33A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003C3530; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[6], c.r[4].w[0] + 4u);
    st32((c.r[29].w[0] + 20u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[29].w[0] + 28u), 0u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 28u));
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 12u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_003C3520; } }
L_003C342C:
    c.f[9] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[10], ld32((c.r[6].w[0] + 12u)));
    c.f[8] = ld32((c.r[29].w[0] + 20u));
    set32(c.r[9], ld32((c.r[6].w[0] + 4u)));
    c.f[7] = ld32((c.r[29].w[0] + 24u));
    set32(c.r[13], c.r[7].w[0] + c.r[8].w[0]);
    mmi::divu(c, 0, c.r[13].w[0], c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0] + 16u)));
    c.f[6] = ld32((c.r[29].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 4u));
    c.f[4] = ld32((c.r[29].w[0] + 8u));
    c.f[3] = ld32((c.r[29].w[0] + 12u));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    mmi::divu(c, 0, c.r[10].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[13].w[0], c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[8].w[0]), c.f[9]);
    st32((c.r[8].w[0] + 4u), c.f[8]);
    st32((c.r[8].w[0] + 8u), c.f[7]);
    st32((c.r[8].w[0] + 12u), c.f[6]);
    st32((c.r[8].w[0] + 16u), c.f[5]);
    st32((c.r[8].w[0] + 20u), c.f[4]);
    st32((c.r[8].w[0] + 24u), c.f[3]);
    st32((c.r[8].w[0] + 28u), 0u);
    st32((c.r[8].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 36u), c.f[2]);
    st32((c.r[8].w[0] + 40u), c.f[1]);
    st32((c.r[8].w[0] + 44u), c.f[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[10], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[13], c.r[7].w[0] + c.r[8].w[0]);
    mmi::divu(c, 0, c.r[13].w[0], c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[11].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    mmi::divu(c, 0, c.r[10].w[0], c.r[9].w[0]);
    c.r[9].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[13].w[0], c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[12].w[0]);
    c.budget -= 61;
L_003C3520:
    set32(c.r[8], ld32((c.r[4].w[0] + 28u)));
    c.r[8].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[8].d[0] != 0ull) { set32(c.r[8], ld32((c.r[4].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C342Cu | kUnwind; return; } goto L_003C342C; }
L_003C3530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C3540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C3594; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003C3580; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003C357C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003C357C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C357Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 19u, depth + 1u); else { c.pc = 0x003C43F0u; return; } if (c.pc != 0x003C357Cu) [[unlikely]] return; }
L_003C357C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003C3580:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C3598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C3594u) [[unlikely]] return; }
L_003C3594:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C3598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C35B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C35D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 262u, depth + 1u); else { c.pc = 0x003C39C0u; return; } if (c.pc != 0x003C35D0u) [[unlikely]] return; }
L_003C35D0:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C35DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 261u, depth + 1u); else { c.pc = 0x003C39B0u; return; } if (c.pc != 0x003C35DCu) [[unlikely]] return; }
L_003C35DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C35E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 234u, depth + 1u); else { c.pc = 0x003C3660u; return; } if (c.pc != 0x003C35E8u) [[unlikely]] return; }
L_003C35E8:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_003C35F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C362Cu); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_00B0(c, 278u, depth + 1u); else { c.pc = 0x003C3C90u; return; } if (c.pc != 0x003C362Cu) [[unlikely]] return; }
L_003C362C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C35F0u | kUnwind; return; } goto L_003C35F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3644u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 222u, depth + 1u); else { c.pc = 0x003C33A0u; return; } if (c.pc != 0x003C3644u) [[unlikely]] return; }
L_003C3644:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C3660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3674u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 236u, depth + 1u); else { c.pc = 0x003C3690u; return; } if (c.pc != 0x003C3674u) [[unlikely]] return; }
L_003C3674:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003C3690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C36B0u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00B0(c, 260u, depth + 1u); else { c.pc = 0x003C39A0u; return; } if (c.pc != 0x003C36B0u) [[unlikely]] return; }
L_003C36B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C36BCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B0(c, 259u, depth + 1u); else { c.pc = 0x003C3980u; return; } if (c.pc != 0x003C36BCu) [[unlikely]] return; }
L_003C36BC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C36CCu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B0(c, 244u, depth + 1u); else { c.pc = 0x003C3780u; return; } if (c.pc != 0x003C36CCu) [[unlikely]] return; }
L_003C36CC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C36D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B0(c, 241u, depth + 1u); else { c.pc = 0x003C3700u; return; } if (c.pc != 0x003C36D8u) [[unlikely]] return; }
L_003C36D8:
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003C3700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003C3760; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003C374C; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003C3748; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C3748; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C3748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3748u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C3748u) [[unlikely]] return; }
L_003C3748:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003C374C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003C3764; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3760u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003C3760u) [[unlikely]] return; }
L_003C3760:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003C3764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C3780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C379Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 258u, depth + 1u); else { c.pc = 0x003C3970u; return; } if (c.pc != 0x003C379Cu) [[unlikely]] return; }
L_003C379C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C37A8u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B0(c, 247u, depth + 1u); else { c.pc = 0x003C37C0u; return; } if (c.pc != 0x003C37A8u) [[unlikely]] return; }
L_003C37A8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C37C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C37E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 485u, depth + 1u); else { c.pc = 0x00123BF0u; return; } if (c.pc != 0x003C37E0u) [[unlikely]] return; }
L_003C37E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C37ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 484u, depth + 1u); else { c.pc = 0x00123BD0u; return; } if (c.pc != 0x003C37ECu) [[unlikely]] return; }
L_003C37EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C37F4u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x003C37F4u) [[unlikely]] return; }
L_003C37F4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3800u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 257u, depth + 1u); else { c.pc = 0x003C3940u; return; } if (c.pc != 0x003C3800u) [[unlikely]] return; }
L_003C3800:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C380Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B0(c, 256u, depth + 1u); else { c.pc = 0x003C38E0u; return; } if (c.pc != 0x003C380Cu) [[unlikely]] return; }
L_003C380C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3820u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00B0(c, 254u, depth + 1u); else { c.pc = 0x003C3840u; return; } if (c.pc != 0x003C3820u) [[unlikely]] return; }
L_003C3820:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003C3840:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 112u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[29].w[0] + 120u), c.f[2]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 124u), c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[29].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[29].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C38D4u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B0(c, 266u, depth + 1u); else { c.pc = 0x003C3A20u; return; } if (c.pc != 0x003C38D4u) [[unlikely]] return; }
L_003C38D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003C38E0:
    set32(c.r[7], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_003C3900; }
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
L_003C3900:
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[8], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    st32((c.r[4].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_003C3940:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[5].w[0]);  c.pc = t; return; }
L_003C3970:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003C3980:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_003C39A0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003C39B0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003C39C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003C3A0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C39D8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003C39D8u) [[unlikely]] return; }
L_003C39D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_003C39F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C39F0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003C39F0u) [[unlikely]] return; }
L_003C39F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003C39F8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003C3A10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3A08u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003C3A08u) [[unlikely]] return; }
L_003C3A08:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003C3A0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003C3A10:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003C3A20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 5u);
    c.budget -= 7;
L_003C3A3C:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3A3Cu | kUnwind; return; } goto L_003C3A3C; } }
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 2;
L_003C3A60:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3A60u | kUnwind; return; } goto L_003C3A60; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));  if (t) { goto L_003C3AA4; } }
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003C3AA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 80u)));  goto L_003C3AE0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), c.r[16].w[0]);  goto L_003C3B08; }
    set32(c.r[4], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003C3AD8; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003C3AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - c.r[3].w[0]);  if (t) { goto L_003C3B04; } }
L_003C3AE0:
    c.r[3].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003C3B04; } }
    set32(c.r[4], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));  if (t) { goto L_003C3B00; } }
    set32(c.r[3], c.r[4].w[0] + 3u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 2;
L_003C3B00:
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003C3B04:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_003C3B08:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003C3BA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 125u, depth + 1u); else { c.pc = 0x001252F0u; return; } if (c.pc != 0x003C3B18u) [[unlikely]] return; }
L_003C3B18:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_003C3B48; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B3Cu); set32(c.r[5], c.r[5].w[0] - 25063u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003C3B3Cu) [[unlikely]] return; }
L_003C3B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B44u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003C3B44u) [[unlikely]] return; }
L_003C3B44:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_003C3B48:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3B5Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C3B5Cu) [[unlikely]] return; }
L_003C3B5C:
    set32(c.r[7], ld32((c.r[29].w[0] + 80u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_003C3B8C; } }
L_003C3B78:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[5].d[0]; st32((c.r[8].w[0]), c.r[3].w[0]);  if (t) { goto L_003C3B88; } }
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003C3B88:
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 1;
L_003C3B8C:
    c.r[3].d[0] = c.r[7].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3B78u | kUnwind; return; } goto L_003C3B78; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C3BA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003C3BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003C3BF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3BE8u);  if (depth < kMaxDepth) unit_00B1(c, 46u, depth + 1u); else { c.pc = 0x003C4A00u; return; } if (c.pc != 0x003C3BE8u) [[unlikely]] return; }
L_003C3BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003C3C80; } }
L_003C3BF0:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.r[3].w[0]);  if (t) { goto L_003C3C40; } }
L_003C3BFC:
    set32(c.r[6], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 14;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0]), 0u);  goto L_003C3C40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3C3Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C3C3Cu) [[unlikely]] return; }
L_003C3C3C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003C3C40:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] - 1u);  goto L_003C3C54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003C3C60; } }
L_003C3C54:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 3;
L_003C3C60:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003C3BFCu | kUnwind; return; } goto L_003C3BFC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003C3C80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003C3C90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_003C3CC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003C3CD8; } }
L_003C3CC8:
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 4;
L_003C3CD8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[7], 0u + 10u);  goto L_003C3F2C; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27056u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003C3D00; } }
    set32(c.r[3], 0u - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] - 25096u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 27056u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003C3D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 25096u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_003C3D38; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3D2Cu); set32(c.r[5], c.r[5].w[0] - 25029u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003C3D2Cu) [[unlikely]] return; }
L_003C3D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3D34u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003C3D34u) [[unlikely]] return; }
L_003C3D34:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_003C3D38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_003C3D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003C3D4C; } }
L_003C3D48:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_003C3D4C:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[18].w[0])));  goto L_003C3EE4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3D60u); set32(c.r[4], 0u + 480u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C3D60u) [[unlikely]] return; }
L_003C3D60:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 10u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 124u);
    st32((c.r[29].w[0] + 124u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[29].w[0] + 96u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] << 1);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3DA4u); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 41u, depth + 1u); else { c.pc = 0x003C4920u; return; } if (c.pc != 0x003C3DA4u) [[unlikely]] return; }
L_003C3DA4:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_003C3DC8; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3DBCu); set32(c.r[5], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00B1(c, 1u, depth + 1u); else { c.pc = 0x003C4000u; return; } if (c.pc != 0x003C3DBCu) [[unlikely]] return; }
L_003C3DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_003C3DE4; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_003C3DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3DD0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 141u, depth + 1u); else { c.pc = 0x00125760u; return; } if (c.pc != 0x003C3DD0u) [[unlikely]] return; }
L_003C3DD0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3DE0u); st32((c.r[29].w[0] + 116u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x003C3DE0u) [[unlikely]] return; }
L_003C3DE0:
    set32(c.r[7], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_003C3DE4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    mmi::divu(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E1Cu); st32((c.r[29].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x003C3E1Cu) [[unlikely]] return; }
L_003C3E1C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_003C3E88; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 25;
L_003C3E88:
    set32(c.r[5], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3E94u); st32((c.r[29].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 35u, depth + 1u); else { c.pc = 0x003C4760u; return; } if (c.pc != 0x003C3E94u) [[unlikely]] return; }
L_003C3E94:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  goto L_003C3EC0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C3EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3EBCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C3EBCu) [[unlikely]] return; }
L_003C3EBC:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_003C3EC0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003C3FE8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003C3FE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3ED8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003C3ED8u) [[unlikely]] return; }
L_003C3ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003C3FE4; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003C3EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3EECu); set32(c.r[4], 0u + 480u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003C3EECu) [[unlikely]] return; }
L_003C3EEC:
    set32(c.r[8], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    mmi::divu(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003C3F28u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x00125600u; return; } if (c.pc != 0x003C3F28u) [[unlikely]] return; }
L_003C3F28:
    set32(c.r[7], 0u + 10u);
    c.budget -= 1;
L_003C3F2C:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    mmi::divu(c, 0, c.r[16].w[0], c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    mmi::divu(c, 0, c.r[16].w[0], c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 19;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  goto L_003C3FDC; }
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[4].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 25;
L_003C3FDC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 2;
L_003C3FE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003C3FE8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
}

}
