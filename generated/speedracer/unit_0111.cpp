#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0111[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 276, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0111(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00544000;
    case 2u: goto L_00544010;
    case 3u: goto L_00544028;
    case 4u: goto L_00544040;
    case 5u: goto L_00544068;
    case 6u: goto L_00544090;
    case 7u: goto L_005440B8;
    case 8u: goto L_005440DC;
    case 9u: goto L_00544110;
    case 10u: goto L_00544144;
    case 11u: goto L_00544160;
    case 12u: goto L_005441FC;
    case 13u: goto L_00544230;
    case 14u: goto L_00544270;
    case 15u: goto L_005442A4;
    case 16u: goto L_005442CC;
    case 17u: goto L_00544300;
    case 18u: goto L_00544324;
    case 19u: goto L_0054434C;
    case 20u: goto L_00544370;
    case 21u: goto L_00544394;
    case 22u: goto L_005443CC;
    case 23u: goto L_005443F0;
    case 24u: goto L_00544428;
    case 25u: goto L_00544450;
    case 26u: goto L_005444C4;
    case 27u: goto L_005444D8;
    case 28u: goto L_005444F4;
    case 29u: goto L_00544504;
    case 30u: goto L_00544530;
    case 31u: goto L_00544540;
    case 32u: goto L_00544560;
    case 33u: goto L_0054456C;
    case 34u: goto L_005445AC;
    case 35u: goto L_005445D4;
    case 36u: goto L_00544620;
    case 37u: goto L_00544644;
    case 38u: goto L_0054469C;
    case 39u: goto L_005446C0;
    case 40u: goto L_005446D0;
    case 41u: goto L_00544740;
    case 42u: goto L_00544770;
    case 43u: goto L_00544798;
    case 44u: goto L_005447C4;
    case 45u: goto L_005447E8;
    case 46u: goto L_005447FC;
    case 47u: goto L_00544820;
    case 48u: goto L_00544848;
    case 49u: goto L_00544870;
    case 50u: goto L_00544898;
    case 51u: goto L_005448C0;
    case 52u: goto L_005448E8;
    case 53u: goto L_00544910;
    case 54u: goto L_00544938;
    case 55u: goto L_00544960;
    case 56u: goto L_00544988;
    case 57u: goto L_005449C8;
    case 58u: goto L_005449E8;
    case 59u: goto L_00544A1C;
    case 60u: goto L_00544B60;
    case 61u: goto L_00544B78;
    case 62u: goto L_00544B94;
    case 63u: goto L_00544BA4;
    case 64u: goto L_00544BCC;
    case 65u: goto L_00544BF0;
    case 66u: goto L_00544C24;
    case 67u: goto L_00544C80;
    case 68u: goto L_00544CB8;
    case 69u: goto L_00544D60;
    case 70u: goto L_00544DB0;
    case 71u: goto L_00544DE0;
    case 72u: goto L_00544E04;
    case 73u: goto L_00544E2C;
    case 74u: goto L_00544E64;
    case 75u: goto L_00544E80;
    case 76u: goto L_00544E98;
    case 77u: goto L_00544EA8;
    case 78u: goto L_00544ECC;
    case 79u: goto L_00544F20;
    case 80u: goto L_00544F44;
    case 81u: goto L_00544F88;
    case 82u: goto L_00544FA8;
    case 83u: goto L_00545088;
    case 84u: goto L_005450A0;
    case 85u: goto L_005450D0;
    case 86u: goto L_005450F4;
    case 87u: goto L_00545134;
    case 88u: goto L_00545144;
    case 89u: goto L_00545160;
    case 90u: goto L_00545180;
    case 91u: goto L_005451B0;
    case 92u: goto L_005451E0;
    case 93u: goto L_00545208;
    case 94u: goto L_00545230;
    case 95u: goto L_00545254;
    case 96u: goto L_00545288;
    case 97u: goto L_005452AC;
    case 98u: goto L_005452E0;
    case 99u: goto L_00545318;
    case 100u: goto L_00545378;
    case 101u: goto L_005453A8;
    case 102u: goto L_005453D8;
    case 103u: goto L_005453FC;
    case 104u: goto L_00545420;
    case 105u: goto L_00545444;
    case 106u: goto L_00545478;
    case 107u: goto L_005454B0;
    case 108u: goto L_00545520;
    case 109u: goto L_00545538;
    case 110u: goto L_00545578;
    case 111u: goto L_005455B8;
    case 112u: goto L_005455DC;
    case 113u: goto L_00545600;
    case 114u: goto L_00545634;
    case 115u: goto L_00545698;
    case 116u: goto L_005456A8;
    case 117u: goto L_005456B8;
    case 118u: goto L_005456C8;
    case 119u: goto L_005456D8;
    case 120u: goto L_005456E8;
    case 121u: goto L_00545728;
    case 122u: goto L_0054575C;
    case 123u: goto L_00545788;
    case 124u: goto L_005457BC;
    case 125u: goto L_005457F0;
    case 126u: goto L_0054581C;
    case 127u: goto L_00545864;
    case 128u: goto L_0054589C;
    case 129u: goto L_005458C4;
    case 130u: goto L_005458F8;
    case 131u: goto L_00545934;
    case 132u: goto L_00545970;
    case 133u: goto L_00545998;
    case 134u: goto L_005459A8;
    case 135u: goto L_005459C8;
    case 136u: goto L_00545A14;
    case 137u: goto L_00545A80;
    case 138u: goto L_00545A98;
    case 139u: goto L_00545AB4;
    case 140u: goto L_00545AC4;
    case 141u: goto L_00545AE0;
    case 142u: goto L_00545B14;
    case 143u: goto L_00545B30;
    case 144u: goto L_00545B68;
    case 145u: goto L_00545B98;
    case 146u: goto L_00545BE8;
    case 147u: goto L_00545C30;
    case 148u: goto L_00545C60;
    case 149u: goto L_00545C94;
    case 150u: goto L_00545CBC;
    case 151u: goto L_00545CE8;
    case 152u: goto L_00545D20;
    case 153u: goto L_00545D4C;
    case 154u: goto L_00545D80;
    case 155u: goto L_00545DA4;
    case 156u: goto L_00545DC0;
    case 157u: goto L_00545DD8;
    case 158u: goto L_00545E38;
    case 159u: goto L_00545E50;
    case 160u: goto L_00545EA8;
    case 161u: goto L_00545EC0;
    case 162u: goto L_00545EDC;
    case 163u: goto L_00545EEC;
    case 164u: goto L_00545F18;
    case 165u: goto L_00545F28;
    case 166u: goto L_00545F48;
    case 167u: goto L_00545F54;
    case 168u: goto L_00545F84;
    case 169u: goto L_00545FAC;
    case 170u: goto L_00545FDC;
    case 171u: goto L_00546010;
    case 172u: goto L_00546034;
    case 173u: goto L_00546060;
    case 174u: goto L_00546088;
    case 175u: goto L_005460B0;
    case 176u: goto L_005460E8;
    case 177u: goto L_0054610C;
    case 178u: goto L_00546160;
    case 179u: goto L_005461E4;
    case 180u: goto L_00546214;
    case 181u: goto L_00546244;
    case 182u: goto L_0054628C;
    case 183u: goto L_005462BC;
    case 184u: goto L_005462F4;
    case 185u: goto L_00546330;
    case 186u: goto L_00546368;
    case 187u: goto L_00546398;
    case 188u: goto L_005463B8;
    case 189u: goto L_005464A0;
    case 190u: goto L_005464B0;
    case 191u: goto L_00546530;
    case 192u: goto L_00546554;
    case 193u: goto L_00546598;
    case 194u: goto L_005465D0;
    case 195u: goto L_005465E8;
    case 196u: goto L_00546604;
    case 197u: goto L_00546614;
    case 198u: goto L_00546634;
    case 199u: goto L_00546688;
    case 200u: goto L_005466A8;
    case 201u: goto L_005466C0;
    case 202u: goto L_005466F4;
    case 203u: goto L_00546724;
    case 204u: goto L_0054679C;
    case 205u: goto L_00546830;
    case 206u: goto L_00546868;
    case 207u: goto L_00546880;
    case 208u: goto L_005468E8;
    case 209u: goto L_00546908;
    case 210u: goto L_00546938;
    case 211u: goto L_00546A0C;
    case 212u: goto L_00546A30;
    case 213u: goto L_00546A40;
    case 214u: goto L_00546AC0;
    case 215u: goto L_00546B28;
    case 216u: goto L_00546B4C;
    case 217u: goto L_00546B60;
    case 218u: goto L_00546BB4;
    case 219u: goto L_00546BF0;
    case 220u: goto L_00546C54;
    case 221u: goto L_00546C90;
    case 222u: goto L_00546CB8;
    case 223u: goto L_00546D48;
    case 224u: goto L_00546D58;
    case 225u: goto L_00546D60;
    case 226u: goto L_00546DAC;
    case 227u: goto L_00546DBC;
    case 228u: goto L_00546DCC;
    case 229u: goto L_00546DF8;
    case 230u: goto L_00546E40;
    case 231u: goto L_00546E78;
    case 232u: goto L_00546E80;
    case 233u: goto L_00546EB4;
    case 234u: goto L_00546ED4;
    case 235u: goto L_00546EF0;
    case 236u: goto L_00546F40;
    case 237u: goto L_00546FB8;
    case 238u: goto L_00546FC8;
    case 239u: goto L_00546FE8;
    case 240u: goto L_00547010;
    case 241u: goto L_00547020;
    case 242u: goto L_0054703C;
    case 243u: goto L_00547080;
    case 244u: goto L_005470D8;
    case 245u: goto L_005470E8;
    case 246u: goto L_005470F8;
    case 247u: goto L_005471B8;
    case 248u: goto L_0054720C;
    case 249u: goto L_00547234;
    case 250u: goto L_00547260;
    case 251u: goto L_005472A0;
    case 252u: goto L_005472B0;
    case 253u: goto L_005472D0;
    case 254u: goto L_00547338;
    case 255u: goto L_00547360;
    case 256u: goto L_00547380;
    case 257u: goto L_005473C0;
    case 258u: goto L_005473D0;
    case 259u: goto L_005473F0;
    case 260u: goto L_00547448;
    case 261u: goto L_00547490;
    case 262u: goto L_005474B8;
    case 263u: goto L_005474D8;
    case 264u: goto L_00547518;
    case 265u: goto L_00547528;
    case 266u: goto L_00547548;
    case 267u: goto L_00547690;
    case 268u: goto L_005476E8;
    case 269u: goto L_00547714;
    case 270u: goto L_00547738;
    case 271u: goto L_00547778;
    case 272u: goto L_00547788;
    case 273u: goto L_005477A8;
    case 274u: goto L_005477F8;
    case 275u: goto L_00547808;
    case 276u: goto L_00547820;
    case 277u: goto L_00547824;
    case 278u: goto L_005478B0;
    case 279u: goto L_005478D8;
    case 280u: goto L_005478F8;
    case 281u: goto L_0054793C;
    case 282u: goto L_0054794C;
    case 283u: goto L_00547968;
    case 284u: goto L_005479F0;
    case 285u: goto L_00547A0C;
    case 286u: goto L_00547A40;
    case 287u: goto L_00547A7C;
    case 288u: goto L_00547AF0;
    case 289u: goto L_00547B34;
    case 290u: goto L_00547B3C;
    case 291u: goto L_00547BC0;
    case 292u: goto L_00547BDC;
    case 293u: goto L_00547C10;
    case 294u: goto L_00547C58;
    case 295u: goto L_00547C94;
    case 296u: goto L_00547CAC;
    case 297u: goto L_00547CC0;
    case 298u: goto L_00547CF8;
    case 299u: goto L_00547D20;
    case 300u: goto L_00547D3C;
    case 301u: goto L_00547D50;
    case 302u: goto L_00547D78;
    case 303u: goto L_00547DB0;
    case 304u: goto L_00547DD0;
    case 305u: goto L_00547DF0;
    case 306u: goto L_00547E30;
    case 307u: goto L_00547E74;
    case 308u: goto L_00547EB8;
    case 309u: goto L_00547EF0;
    case 310u: goto L_00547F54;
    case 311u: goto L_00547F90;
    case 312u: goto L_00547FC8;
    default: bad_entry(c, 0x00544000u); return;
    }
L_00544000:
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544010u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544010u) [[unlikely]] return; }
L_00544010:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[29].w[0] + 142u));  goto L_00544020; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0054442C; } }
L_00544020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_005440A0; } }
L_00544028:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 136u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544040u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544040u) [[unlikely]] return; }
L_00544040:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00544050; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_00544050:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 3257u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544068u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x00544068u) [[unlikely]] return; }
L_00544068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00544078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00544428; } }
L_00544078:
    set32(c.r[7], ld32((c.r[29].w[0] + 136u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544090u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544090u) [[unlikely]] return; }
L_00544090:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_005440A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_005440A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_005440A4:
    set32(c.r[5], c.r[17].w[0] + 12u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005440B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005440B8u) [[unlikely]] return; }
L_005440B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_005440C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_005440C8:
    set32(c.r[5], c.r[17].w[0] + 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005440DCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005440DCu) [[unlikely]] return; }
L_005440DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x001E0000u);  goto L_005440EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_005440EC:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_00544148; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 132u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544110u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544110u) [[unlikely]] return; }
L_00544110:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_00544120; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_00544120:
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0054413C; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_0054413C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 2;
L_00544144:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00544148:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 132u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544160u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544160u) [[unlikely]] return; }
L_00544160:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 132u)));  goto L_00544170; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_00544170:
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 1ull;  goto L_0054418C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_005441AC; } }
L_0054418C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_005441A4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_005441AC; } }
L_005441A4:
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_005441AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00310000u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);  goto L_005441D8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.budget -= 7;
L_005441D8:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_00544214; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005441FCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005441FCu) [[unlikely]] return; }
L_005441FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  goto L_0054420C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_0054420C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_00544218; } }
L_00544214:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 1;
L_00544218:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544230u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544230u) [[unlikely]] return; }
L_00544230:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 124u)));  goto L_00544240; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_00544240:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0054424C; }
    set32(c.r[3], 0u + 256u);
    c.budget -= 1;
L_0054424C:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544270u); st32((c.r[17].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544270u) [[unlikely]] return; }
L_00544270:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);  goto L_00544280; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_00544280:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_005442B8; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 36u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005442A4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005442A4u) [[unlikely]] return; }
L_005442A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005442B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_005442B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_005442B8:
    set32(c.r[5], c.r[17].w[0] + 40u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005442CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005442CCu) [[unlikely]] return; }
L_005442CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x00340000u);  goto L_005442DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_005442DC:
    c.r[1].d[0] = c.r[19].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00544338; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544300u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544300u) [[unlikely]] return; }
L_00544300:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00544310; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_00544310:
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544324u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544324u) [[unlikely]] return; }
L_00544324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_00544334:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00544338:
    set32(c.r[5], c.r[17].w[0] + 20u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054434Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0054434Cu) [[unlikely]] return; }
L_0054434C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0054435C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_0054435C:
    set32(c.r[5], c.r[17].w[0] + 24u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544370u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544370u) [[unlikely]] return; }
L_00544370:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00544380; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_00544380:
    set32(c.r[5], c.r[17].w[0] + 28u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544394u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544394u) [[unlikely]] return; }
L_00544394:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00180000u);  goto L_005443A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_005443A4:
    st32((c.r[29].w[0] + 116u), 0u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), 0u);  if (t) { goto L_00544400; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005443CCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005443CCu) [[unlikely]] return; }
L_005443CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_005443DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_005443DC:
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005443F0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005443F0u) [[unlikely]] return; }
L_005443F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  goto L_00544404; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544428; } }
L_00544400:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 1;
L_00544404:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[21].w[0]), c.r[16].w[0]);
    c.budget -= 9;
L_00544428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0054442C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00544450:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], 0u - 16u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 0u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[6].d[0] << 32;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 15u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[30].w[0] + 236u), c.r[8].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005444C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x005444C4u) [[unlikely]] return; }
L_005444C4:
    set32(c.r[2], ld32((c.r[30].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_00544D20; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 208u)));
    st32((c.r[30].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 2;
L_005444D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 52u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2925u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005444F4u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x005444F4u) [[unlikely]] return; }
L_005444F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00544508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544504u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 220u, depth + 1u); else { c.pc = 0x005569E0u; return; } if (c.pc != 0x00544504u) [[unlikely]] return; }
L_00544504:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00544508:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00544518; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00544D24; } }
L_00544518:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 32u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2932u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544530u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00544530u) [[unlikely]] return; }
L_00544530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00544548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544540u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 229u, depth + 1u); else { c.pc = 0x00556BC0u; return; } if (c.pc != 0x00544540u) [[unlikely]] return; }
L_00544540:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00544548:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00544558; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00544D24; } }
L_00544558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544560u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0115(c, 219u, depth + 1u); else { c.pc = 0x005569A0u; return; } if (c.pc != 0x00544560u) [[unlikely]] return; }
L_00544560:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054456Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 228u, depth + 1u); else { c.pc = 0x00556BA0u; return; } if (c.pc != 0x0054456Cu) [[unlikely]] return; }
L_0054456C:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 412u)));
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 412u), c.r[3].w[0]);  if (t) { goto L_005445BC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 24u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005445ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005445ACu) [[unlikely]] return; }
L_005445AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[30].w[0] + 0u);  if (t) { goto L_00544D28; } }
L_005445BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[30].w[0] + 252u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005445D4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005445D4u) [[unlikely]] return; }
L_005445D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld32((c.r[30].w[0] + 252u));  goto L_005445E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_005445E4:
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 176u)));
    set32(c.r[5], c.r[29].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0]), c.r[5].w[0]);  if (t) { goto L_0054460C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00544D24; } }
L_0054460C:
    set32(c.r[7], ld32((c.r[30].w[0] + 252u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544620u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544620u) [[unlikely]] return; }
L_00544620:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00544630; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_00544630:
    set32(c.r[5], c.r[30].w[0] + 252u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544644u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544644u) [[unlikely]] return; }
L_00544644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[30].w[0] + 252u)));  goto L_00544654; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_00544654:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_00544720; }
    c.r[3].d[0] = c.r[7].d[0] << 32;
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[29], c.r[29].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[30].w[0] + 192u), c.r[2].w[0]);  if (t) { goto L_00544688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00544D24; } }
L_00544688:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054469Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0054469Cu) [[unlikely]] return; }
L_0054469C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_005446AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_005446AC:
    c.budget -= 2;
    { const bool t = c.r[23].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00544710; } }
    set32(c.r[2], ld32((c.r[30].w[0] + 208u)));
    st32((c.r[30].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 3;
L_005446C0:
    set32(c.r[2], ld32((c.r[30].w[0] + 160u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005446D0u); set32(c.r[4], ld32((c.r[30].w[0] + 192u)));  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x005446D0u) [[unlikely]] return; }
L_005446D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005446F0; } }
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00544710; } }
    c.budget -= 1;
L_005446F0:
    set32(c.r[2], ld32((c.r[30].w[0] + 160u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[30].w[0] + 160u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005446C0u | kUnwind; return; } goto L_005446C0; } }
    c.budget -= 1;
L_00544710:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00544728; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_00544D24; } }
L_00544720:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_00544728:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[30].w[0] + 252u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544740u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544740u) [[unlikely]] return; }
L_00544740:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[30].w[0] + 252u)));  goto L_00544750; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_00544750:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_005449D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 3019u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544770u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x00544770u) [[unlikely]] return; }
L_00544770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00544780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00544D24; } }
L_00544780:
    set32(c.r[7], ld32((c.r[30].w[0] + 252u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544798u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544798u) [[unlikely]] return; }
L_00544798:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x00270000u);  goto L_005447A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_005447A8:
    c.r[1].d[0] = c.r[22].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_005449D0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005447C4u); set32(c.r[5], c.r[5].w[0] - 20256u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x005447C4u) [[unlikely]] return; }
L_005447C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_00544810; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 3040u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005447E8u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x005447E8u) [[unlikely]] return; }
L_005447E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 20240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005447FCu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 178u, depth + 1u); else { c.pc = 0x00559EC0u; return; } if (c.pc != 0x005447FCu) [[unlikely]] return; }
L_005447FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0054480C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00544D24; } }
L_0054480C:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00544810:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544820u); set32(c.r[5], c.r[5].w[0] - 20296u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00544820u) [[unlikely]] return; }
L_00544820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00544838; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_005449A0; } }
L_00544838:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544848u); set32(c.r[5], c.r[5].w[0] - 20288u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00544848u) [[unlikely]] return; }
L_00544848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00544860; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_005449A0; } }
L_00544860:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544870u); set32(c.r[5], c.r[5].w[0] - 20280u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00544870u) [[unlikely]] return; }
L_00544870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00544888; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_005449A0; } }
L_00544888:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544898u); set32(c.r[5], c.r[5].w[0] - 20168u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00544898u) [[unlikely]] return; }
L_00544898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005448B0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_005449A0; } }
L_005448B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005448C0u); set32(c.r[5], c.r[5].w[0] - 20272u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x005448C0u) [[unlikely]] return; }
L_005448C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005448D8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_005449A0; } }
L_005448D8:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005448E8u); set32(c.r[5], c.r[5].w[0] - 20240u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x005448E8u) [[unlikely]] return; }
L_005448E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00544900; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_005449A0; } }
L_00544900:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544910u); set32(c.r[5], c.r[5].w[0] - 20216u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00544910u) [[unlikely]] return; }
L_00544910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00544928; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_005449A0; } }
L_00544928:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544938u); set32(c.r[5], c.r[5].w[0] - 20200u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00544938u) [[unlikely]] return; }
L_00544938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00544950; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_005449A0; } }
L_00544950:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544960u); set32(c.r[5], c.r[5].w[0] - 20184u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00544960u) [[unlikely]] return; }
L_00544960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00544978; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_005449A0; } }
L_00544978:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544988u); set32(c.r[5], c.r[5].w[0] - 20144u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00544988u) [[unlikely]] return; }
L_00544988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005449A0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_005449A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_005449D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 3098u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005449C8u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x005449C8u) [[unlikely]] return; }
L_005449C8:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 2;
L_005449D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 20u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005449E8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005449E8u) [[unlikely]] return; }
L_005449E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);  goto L_005449F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_005449F8:
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00544A48; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[30].w[0] + 244u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544A1Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544A1Cu) [[unlikely]] return; }
L_00544A1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[30].w[0] + 244u)));  goto L_00544A2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_00544A2C:
    set32(c.r[2], 0u - 16385u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[30].w[0] + 244u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
L_00544A48:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 32u), c.r[20].w[0]);  if (t) { goto L_00544B48; } }
L_00544A60:
    c.r[2].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 36u), c.r[20].w[0]);  if (t) { goto L_00544B48; } }
    c.budget -= 1;
L_00544A78:
    c.r[2].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 40u), c.r[20].w[0]);  if (t) { goto L_00544B48; } }
    c.budget -= 1;
L_00544A90:
    c.r[2].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544AA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 64u), c.r[20].w[0]);  if (t) { goto L_00544B48; } }
    c.budget -= 1;
L_00544AA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00544AC8; } }
    c.r[2].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 44u), c.r[20].w[0]);  if (t) { goto L_00544B48; } }
L_00544AC8:
    c.r[2].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544AE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 48u), c.r[20].w[0]);  if (t) { goto L_00544B48; } }
    c.budget -= 1;
L_00544AE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00544B00; } }
    c.r[2].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 52u), c.r[20].w[0]);  if (t) { goto L_00544B48; } }
    c.budget -= 1;
L_00544B00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00544B20; } }
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 56u), c.r[20].w[0]);  if (t) { goto L_00544B48; } }
    c.budget -= 1;
L_00544B20:
    c.r[2].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 60u), c.r[20].w[0]);  if (t) { goto L_00544B48; } }
    c.budget -= 1;
L_00544B38:
    c.r[2].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544B48; } }
    st32((c.r[21].w[0] + 68u), c.r[20].w[0]);
    c.budget -= 1;
L_00544B48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[30].w[0] + 248u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544B60u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544B60u) [[unlikely]] return; }
L_00544B60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 248u)));  goto L_00544B70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_00544B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00544C68; } }
L_00544B78:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 3159u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544B94u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00544B94u) [[unlikely]] return; }
L_00544B94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00544BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544BA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 230u, depth + 1u); else { c.pc = 0x00556BF0u; return; } if (c.pc != 0x00544BA4u) [[unlikely]] return; }
L_00544BA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00544BA8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00544BB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00544D24; } }
L_00544BB8:
    set32(c.r[5], c.r[16].w[0] + 12u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544BCCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544BCCu) [[unlikely]] return; }
L_00544BCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00544BDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_00544BDC:
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544BF0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544BF0u) [[unlikely]] return; }
L_00544BF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x000D0000u);  goto L_00544C00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_00544C00:
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00544C34; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 20u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544C24u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544C24u) [[unlikely]] return; }
L_00544C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00544C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_00544C34:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00544C38:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[17].w[0] + 36u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 248u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00544B78u | kUnwind; return; } goto L_00544B78; } }
L_00544C68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[30].w[0] + 240u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544C80u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544C80u) [[unlikely]] return; }
L_00544C80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[30].w[0] + 240u)));  goto L_00544C90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_00544C90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00544CE0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[30].w[0] + 240u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544CB8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544CB8u) [[unlikely]] return; }
L_00544CB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[30].w[0] + 240u)));  goto L_00544CC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00544D24; } }
L_00544CC8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_00544CD4; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00544CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00544CE8; } }
    c.budget -= 1;
L_00544CE0:
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00544CE8:
    set32(c.r[4], ld32((c.r[21].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[30].w[0] + 176u)));
    set32(c.r[3], c.r[21].w[0] + 96u);
    set32(c.r[23], c.r[23].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[30].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 236u)));
    st32((c.r[21].w[0] + 100u), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[23].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[20].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005444D8u | kUnwind; return; } goto L_005444D8; } }
L_00544D20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00544D24:
    set32(c.r[29], c.r[30].w[0] + 0u);
    c.budget -= 1;
L_00544D28:
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
L_00544D60:
    set32(c.r[29], c.r[29].w[0] - 4368u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 4344u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544DB0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544DB0u) [[unlikely]] return; }
L_00544DB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));  goto L_00544DC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_00546800; } }
L_00544DC0:
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 4344u)));  goto L_00544DF0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 4344u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544DE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 159u, depth + 1u); else { c.pc = 0x0052A3E0u; return; } if (c.pc != 0x00544DE0u) [[unlikely]] return; }
L_00544DE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[23].w[0] + 16u), 0u);  goto L_00544E3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00544DF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[3].w[0] + 188u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544E04u); set32(c.r[7], 0u + 2043u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x00544E04u) [[unlikely]] return; }
L_00544E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[23].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00544E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00544E14:
    set32(c.r[7], ld32((c.r[29].w[0] + 4344u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544E2Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544E2Cu) [[unlikely]] return; }
L_00544E2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00170000u);  goto L_00544E40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00544E3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.budget -= 1;
L_00544E40:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00544F08; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4348u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544E64u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544E64u) [[unlikely]] return; }
L_00544E64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4348u)));  goto L_00544E74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00544E74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00544F08; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.budget -= 1;
L_00544E80:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2057u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544E98u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00544E98u) [[unlikely]] return; }
L_00544E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00544EB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544EA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 157u, depth + 1u); else { c.pc = 0x005599C0u; return; } if (c.pc != 0x00544EA8u) [[unlikely]] return; }
L_00544EA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00544EB0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00544EC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00544EC0:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544ECCu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 140u, depth + 1u); else { c.pc = 0x005596D0u; return; } if (c.pc != 0x00544ECCu) [[unlikely]] return; }
L_00544ECC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[23].w[0] + 64u)));  goto L_00544EDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00544EDC:
    set32(c.r[2], c.r[23].w[0] + 60u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[23].w[0] + 64u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4348u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00544E80u | kUnwind; return; } goto L_00544E80; }
L_00544F08:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4356u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544F20u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544F20u) [[unlikely]] return; }
L_00544F20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00544F30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00544F30:
    set32(c.r[5], c.r[29].w[0] + 4352u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544F44u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00544F44u) [[unlikely]] return; }
L_00544F44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 4356u)));  goto L_00544F54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00544F54:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4356u)));  goto L_00544F9C; }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[7], 0u + 2074u);
    set32(c.r[5], c.r[2].w[0] + 188u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00544F88u); set32(c.r[4], c.r[3].w[0] << 2);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00544F88u) [[unlikely]] return; }
L_00544F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[23].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_00544F98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00544F98:
    set32(c.r[2], ld32((c.r[29].w[0] + 4356u)));
    c.budget -= 1;
L_00544F9C:
    set32(c.r[17], ld32((c.r[23].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_005450C0; } }
L_00544FA8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00545030; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 19488u);
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19568u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[2], c.r[17].w[0] + 60u);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 30u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 32;
L_00545030:
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(0u));
    set32(c.r[17], c.r[17].w[0] + 92u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[2], ld32((c.r[23].w[0] + 44u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545088u); st32((c.r[16].w[0] + 40u), c.r[23].w[0]);  if (depth < kMaxDepth) unit_0111(c, 69u, depth + 1u); else { c.pc = 0x00544D60u; return; } if (c.pc != 0x00545088u) [[unlikely]] return; }
L_00545088:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00545098; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005450A0u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0112(c, 83u, depth + 1u); else { c.pc = 0x00548F50u; return; } if (c.pc != 0x005450A0u) [[unlikely]] return; }
L_005450A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4356u)));  goto L_005450B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005450B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00544FA8u | kUnwind; return; } goto L_00544FA8; } }
L_005450C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4352u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_005467F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.budget -= 1;
L_005450D0:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00545118; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4320u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005450F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005450F4u) [[unlikely]] return; }
L_005450F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4320u)));  goto L_00545104; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545104:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00545118; } }
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00545118:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 424u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2116u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545134u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00545134u) [[unlikely]] return; }
L_00545134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00545148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545144u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0114(c, 237u, depth + 1u); else { c.pc = 0x00553D10u; return; } if (c.pc != 0x00545144u) [[unlikely]] return; }
L_00545144:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00545148:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00545158; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00545158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545160u);  if (depth < kMaxDepth) unit_0114(c, 235u, depth + 1u); else { c.pc = 0x00553B80u; return; } if (c.pc != 0x00545160u) [[unlikely]] return; }
L_00545160:
    set32(c.r[2], ld32((c.r[19].w[0] + 412u)));
    set32(c.r[2], c.r[2].w[0] + 424u);
    st32((c.r[19].w[0] + 412u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00545180u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00545180u) [[unlikely]] return; }
L_00545180:
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[19].w[0] + 60u), c.r[23].w[0]);
    set32(c.r[5], c.r[29].w[0] + 4344u);
    set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005451B0u); st32((c.r[3].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005451B0u) [[unlikely]] return; }
L_005451B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 21868u)));  goto L_005451C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005451C0:
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005451F0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 4344u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005451E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 159u, depth + 1u); else { c.pc = 0x0052A3E0u; return; } if (c.pc != 0x005451E0u) [[unlikely]] return; }
L_005451E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 76u), 0u);  goto L_00545240; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005451F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 4344u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[3].w[0] + 188u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545208u); set32(c.r[7], 0u + 2139u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x00545208u) [[unlikely]] return; }
L_00545208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_00545218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00545218:
    set32(c.r[7], ld32((c.r[29].w[0] + 4344u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545230u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545230u) [[unlikely]] return; }
L_00545230:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 76u)));  goto L_00545244; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545240:
    set32(c.r[4], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 1;
L_00545244:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_00545264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545254u);  if (depth < kMaxDepth) unit_010E(c, 2u, depth + 1u); else { c.pc = 0x00538020u; return; } if (c.pc != 0x00545254u) [[unlikely]] return; }
L_00545254:
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], 0u - 4u);
    set32(c.r[3], c.r[3].w[0] + 3u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
L_00545264:
    set32(c.r[2], ld32((c.r[19].w[0] + 412u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 84u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545288u); st32((c.r[19].w[0] + 412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545288u) [[unlikely]] return; }
L_00545288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00545298; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545298:
    set32(c.r[5], c.r[19].w[0] + 92u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005452ACu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005452ACu) [[unlikely]] return; }
L_005452AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);  goto L_005452BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005452BC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);  goto L_005452F4; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 96u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005452E0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005452E0u) [[unlikely]] return; }
L_005452E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005452F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005452F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 1;
L_005452F4:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00545350; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 100u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545318u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545318u) [[unlikely]] return; }
L_00545318:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x00210000u);  goto L_00545328; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545328:
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00545350; } }
    c.f[1] = ld32((c.r[19].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.budget -= 7;
L_00545350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000A0000u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 128u);  goto L_00545388; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 104u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545378u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545378u) [[unlikely]] return; }
L_00545378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00545390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545388:
    st32((c.r[19].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_00545390:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4324u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005453A8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005453A8u) [[unlikely]] return; }
L_005453A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4324u)));  goto L_005453B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005453B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_005453C8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 4324u), c.r[2].w[0]);
    c.budget -= 2;
L_005453C8:
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005453D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0114(c, 209u, depth + 1u); else { c.pc = 0x00553610u; return; } if (c.pc != 0x005453D8u) [[unlikely]] return; }
L_005453D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_005453E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005453E8:
    set32(c.r[5], c.r[19].w[0] + 172u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005453FCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005453FCu) [[unlikely]] return; }
L_005453FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_0054540C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_0054540C:
    set32(c.r[5], c.r[19].w[0] + 176u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545420u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545420u) [[unlikely]] return; }
L_00545420:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00545430; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545430:
    set32(c.r[5], c.r[19].w[0] + 180u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545444u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545444u) [[unlikely]] return; }
L_00545444:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  goto L_00545454; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545454:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00545498; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4316u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545478u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545478u) [[unlikely]] return; }
L_00545478:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 304u)));  goto L_00545488; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545488:
    set32(c.r[2], ld32((c.r[29].w[0] + 4316u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00545508; } }
L_00545498:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4312u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005454B0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005454B0u) [[unlikely]] return; }
L_005454B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4312u)));  goto L_005454C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005454C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00545508; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 164u)));
    st32((c.r[19].w[0] + 360u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 360u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[4].w[0] + 48u);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[19].w[0]);
    c.budget -= 16;
L_00545508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00545920; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00545520:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 200u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545538u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545538u) [[unlikely]] return; }
L_00545538:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00545548; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545548:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00545520u | kUnwind; return; } goto L_00545520; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005455A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[19].w[0] + 200u);
    set32(c.r[5], c.r[5].w[0] - 20128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545578u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_010D(c, 285u, depth + 1u); else { c.pc = 0x00537B10u; return; } if (c.pc != 0x00545578u) [[unlikely]] return; }
L_00545578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00545590; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_005455A0; } }
L_00545590:
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 4;
L_005455A0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 184u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005455B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005455B8u) [[unlikely]] return; }
L_005455B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_005455C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005455C8:
    set32(c.r[5], c.r[19].w[0] + 188u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005455DCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005455DCu) [[unlikely]] return; }
L_005455DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_005455EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005455EC:
    set32(c.r[5], c.r[19].w[0] + 192u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545600u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545600u) [[unlikely]] return; }
L_00545600:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x000B0000u);  goto L_00545610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545610:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 304u)));  goto L_00545908; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4308u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545634u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545634u) [[unlikely]] return; }
L_00545634:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x00230000u);  goto L_00545644; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545644:
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00545668; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4308u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00545668; } }
    st32((c.r[29].w[0] + 4308u), 0u);
    c.budget -= 2;
L_00545668:
    set32(c.r[2], ld32((c.r[29].w[0] + 4308u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00545700; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20064u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00544000u < 16384u) { entry = entries_0111[(t - 0x00544000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00545698:
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00545710; } }
L_005456A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00545710; } }
L_005456B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 512ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00545710; } }
L_005456C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00545710; } }
L_005456D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00545710; } }
L_005456E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00545710; } }
    c.budget -= 1;
L_00545700:
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 4;
L_00545710:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 196u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545728u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545728u) [[unlikely]] return; }
L_00545728:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);  goto L_00545738; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545738:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 232u), 0u);  goto L_0054576C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 232u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054575Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0054575Cu) [[unlikely]] return; }
L_0054575C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00545770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_0054576C:
    c.budget -= 1;
L_00545770:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 236u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545788u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545788u) [[unlikely]] return; }
L_00545788:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);  goto L_00545798; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545798:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00545950; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 280u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005457BCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005457BCu) [[unlikely]] return; }
L_005457BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);  goto L_005457CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005457CC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00545950; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4340u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005457F0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005457F0u) [[unlikely]] return; }
L_005457F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4340u)));  goto L_00545800; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545800:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4340u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054581Cu); st16((c.r[19].w[0] + 312u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0054581Cu) [[unlikely]] return; }
L_0054581C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 4340u)));  goto L_0054582C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_0054582C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[19].w[0] + 314u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00545950; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);  goto L_00545878; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 292u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545864u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545864u) [[unlikely]] return; }
L_00545864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00545874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545874:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.budget -= 1;
L_00545878:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_005458B0; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 296u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054589Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0054589Cu) [[unlikely]] return; }
L_0054589C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005458AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005458AC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_005458B0:
    set32(c.r[5], c.r[19].w[0] + 284u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005458C4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005458C4u) [[unlikely]] return; }
L_005458C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00280000u);  goto L_005458D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005458D4:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00545950; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 144u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005458F8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005458F8u) [[unlikely]] return; }
L_005458F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00545950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st32((c.r[19].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 196u), c.r[2].w[0]);  if (t) { goto L_00545950; } }
    c.budget -= 1;
L_00545920:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[19].w[0] + 200u);
    set32(c.r[5], c.r[5].w[0] - 20128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545934u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00545934u) [[unlikely]] return; }
L_00545934:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 188u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 192u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 7;
L_00545950:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00545A68; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4304u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545970u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545970u) [[unlikely]] return; }
L_00545970:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00545980; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545980:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 108u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2357u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545998u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00545998u) [[unlikely]] return; }
L_00545998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005459B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005459A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 130u, depth + 1u); else { c.pc = 0x005553E0u; return; } if (c.pc != 0x005459A8u) [[unlikely]] return; }
L_005459A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_005459B0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_005459C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_005459C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005459C8u);  if (depth < kMaxDepth) unit_0115(c, 129u, depth + 1u); else { c.pc = 0x00555380u; return; } if (c.pc != 0x005459C8u) [[unlikely]] return; }
L_005459C8:
    st32((c.r[16].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 412u)));
    set32(c.r[2], c.r[2].w[0] + 108u);
    st32((c.r[19].w[0] + 412u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4304u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005459EC; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_005459EC:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 4300u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545A14u); st32((c.r[16].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0110(c, 238u, depth + 1u); else { c.pc = 0x00543F10u; return; } if (c.pc != 0x00545A14u) [[unlikely]] return; }
L_00545A14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 4300u)));  goto L_00545A24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545A24:
    set32(c.r[3], c.r[16].w[0] + 84u);
    set32(c.r[2], c.r[19].w[0] + 324u);
    st32((c.r[4].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 4300u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 328u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 328u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { goto L_00546670; } }
L_00545A68:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4336u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545A80u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545A80u) [[unlikely]] return; }
L_00545A80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4336u)));  goto L_00545A90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00545E90; } }
L_00545A98:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 108u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2393u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545AB4u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00545AB4u) [[unlikely]] return; }
L_00545AB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00545AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545AC4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 130u, depth + 1u); else { c.pc = 0x005553E0u; return; } if (c.pc != 0x00545AC4u) [[unlikely]] return; }
L_00545AC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00545AC8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00545AD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00545AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545AE0u);  if (depth < kMaxDepth) unit_0115(c, 129u, depth + 1u); else { c.pc = 0x00555380u; return; } if (c.pc != 0x00545AE0u) [[unlikely]] return; }
L_00545AE0:
    st32((c.r[16].w[0] + 12u), c.r[19].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[2], ld32((c.r[19].w[0] + 412u)));
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 108u);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[19].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_00545B40; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4344u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545B14u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545B14u) [[unlikely]] return; }
L_00545B14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 4344u)));  goto L_00545B24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545B24:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545B30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 159u, depth + 1u); else { c.pc = 0x0052A3E0u; return; } if (c.pc != 0x00545B30u) [[unlikely]] return; }
L_00545B30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x001D0000u);  goto L_00545B44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.budget -= 1;
L_00545B44:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00545B80; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4364u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545B68u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545B68u) [[unlikely]] return; }
L_00545B68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[29].w[0] + 4364u));  goto L_00545B78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00545BC0; } }
L_00545B80:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4288u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545B98u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545B98u) [[unlikely]] return; }
L_00545B98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4288u)));  goto L_00545BA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00545BC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
L_00545BC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00545C00; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4362u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545BE8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545BE8u) [[unlikely]] return; }
L_00545BE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 4362u)));  goto L_00545BF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00545C08; } }
L_00545C00:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00545C08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00545C48; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4366u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545C30u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545C30u) [[unlikely]] return; }
L_00545C30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[29].w[0] + 4366u));  goto L_00545C40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_00545CF8; } }
L_00545C48:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4344u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545C60u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545C60u) [[unlikely]] return; }
L_00545C60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 4344u)));  goto L_00545C70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545C70:
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { st32((c.r[16].w[0] + 72u), 0u);  goto L_00545CCC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2461u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545C94u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x00545C94u) [[unlikely]] return; }
L_00545C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_00545CA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00545CA4:
    set32(c.r[7], ld32((c.r[29].w[0] + 4344u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545CBCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545CBCu) [[unlikely]] return; }
L_00545CBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x001D0000u);  goto L_00545CFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545CCC:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 4344u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00545CF8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545CE8u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_010A(c, 159u, depth + 1u); else { c.pc = 0x0052A3E0u; return; } if (c.pc != 0x00545CE8u) [[unlikely]] return; }
L_00545CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00545CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545CF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001D0000u);
    c.budget -= 1;
L_00545CFC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00545D68; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4366u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545D20u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545D20u) [[unlikely]] return; }
L_00545D20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[29].w[0] + 4366u));  goto L_00545D30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545D30:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4366u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545D4Cu); st32((c.r[29].w[0] + 4296u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545D4Cu) [[unlikely]] return; }
L_00545D4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[29].w[0] + 4366u));  goto L_00545D5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 4292u), c.r[2].w[0]);  if (t) { goto L_00545DB4; } }
    c.budget -= 1;
L_00545D68:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4296u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545D80u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545D80u) [[unlikely]] return; }
L_00545D80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00545D90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545D90:
    set32(c.r[5], c.r[29].w[0] + 4292u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545DA4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545DA4u) [[unlikely]] return; }
L_00545DA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4296u)));  goto L_00545DB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545DB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4296u)));
    c.budget -= 1;
L_00545DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00545E20; } }
L_00545DC0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545DD8u); set32(c.r[8], c.r[29].w[0] + 4284u);  if (depth < kMaxDepth) unit_0110(c, 238u, depth + 1u); else { c.pc = 0x00543F10u; return; } if (c.pc != 0x00545DD8u) [[unlikely]] return; }
L_00545DD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 4284u)));  goto L_00545DE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545DE8:
    set32(c.r[2], c.r[16].w[0] + 84u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 4284u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4296u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00545DC0u | kUnwind; return; } goto L_00545DC0; } }
L_00545E20:
    set32(c.r[8], ld32((c.r[29].w[0] + 4292u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545E38u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0111(c, 25u, depth + 1u); else { c.pc = 0x00544450u; return; } if (c.pc != 0x00545E38u) [[unlikely]] return; }
L_00545E38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00545E48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545E50u);  if (depth < kMaxDepth) unit_0115(c, 119u, depth + 1u); else { c.pc = 0x005551E0u; return; } if (c.pc != 0x00545E50u) [[unlikely]] return; }
L_00545E50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 328u)));  goto L_00545E60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545E60:
    set32(c.r[2], c.r[19].w[0] + 324u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 328u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4336u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00545A98u | kUnwind; return; } goto L_00545A98; } }
    c.budget -= 1;
L_00545E90:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4332u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545EA8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545EA8u) [[unlikely]] return; }
L_00545EA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4332u)));  goto L_00545EB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00546580; } }
L_00545EC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 40u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2523u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545EDCu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00545EDCu) [[unlikely]] return; }
L_00545EDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00545EF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545EECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 128u, depth + 1u); else { c.pc = 0x00561900u; return; } if (c.pc != 0x00545EECu) [[unlikely]] return; }
L_00545EEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00545EF0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00545F00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00545F00:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 52u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2530u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545F18u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00545F18u) [[unlikely]] return; }
L_00545F18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00545F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545F28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 182u, depth + 1u); else { c.pc = 0x00563060u; return; } if (c.pc != 0x00545F28u) [[unlikely]] return; }
L_00545F28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00545F30:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00545F40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00545F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545F48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0118(c, 124u, depth + 1u); else { c.pc = 0x005617E0u; return; } if (c.pc != 0x00545F48u) [[unlikely]] return; }
L_00545F48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545F54u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 180u, depth + 1u); else { c.pc = 0x00562FD0u; return; } if (c.pc != 0x00545F54u) [[unlikely]] return; }
L_00545F54:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4344u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 412u)));
    set32(c.r[2], c.r[2].w[0] + 52u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545F84u); st32((c.r[19].w[0] + 412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545F84u) [[unlikely]] return; }
L_00545F84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00545F94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545F94:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4344u)));
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2552u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545FACu); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x00545FACu) [[unlikely]] return; }
L_00545FAC:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[5].d[0] != 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 4344u)));  goto L_00545FCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00545FCC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00545FDCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00545FDCu) [[unlikely]] return; }
L_00545FDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x00120000u);  goto L_00545FEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00545FEC:
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_00546048; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4280u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546010u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00546010u) [[unlikely]] return; }
L_00546010:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00546020; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00546020:
    set32(c.r[5], c.r[29].w[0] + 4280u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546034u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00546034u) [[unlikely]] return; }
L_00546034:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00546044:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_00546048:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546060u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00546060u) [[unlikely]] return; }
L_00546060:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_00546070; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00546070:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546088u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00546088u) [[unlikely]] return; }
L_00546088:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_00546098; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00546098:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005460B0u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005460B0u) [[unlikely]] return; }
L_005460B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  goto L_005460C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005460C0:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_005460F8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005460E8u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005460E8u) [[unlikely]] return; }
L_005460E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005461D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005460F8:
    set32(c.r[5], c.r[29].w[0] + 4276u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054610Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0054610Cu) [[unlikely]] return; }
L_0054610C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4276u)));  goto L_0054611C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_0054611C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546138; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
L_00546138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000B0000u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005461D0; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4272u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546160u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00546160u) [[unlikely]] return; }
L_00546160:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 4272u)));  goto L_00546170; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00546170:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00546190; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_005461D0; } }
    c.budget -= 1;
L_00546190:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_005461B0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_005461D0; } }
L_005461B0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_005461D0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
L_005461D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005461E4u); set32(c.r[5], c.r[5].w[0] - 20360u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x005461E4u) [[unlikely]] return; }
L_005461E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00546200; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00546260; } }
L_00546200:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546214u); set32(c.r[5], c.r[5].w[0] - 20336u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00546214u) [[unlikely]] return; }
L_00546214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00546230; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00546260; } }
L_00546230:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546244u); set32(c.r[5], c.r[5].w[0] - 20312u);  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00546244u) [[unlikely]] return; }
L_00546244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00546260; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 48ull;
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
L_00546260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_0054629C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054628Cu); set32(c.r[5], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x0054628Cu) [[unlikely]] return; }
L_0054628C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005462A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_0054629C:
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 1;
L_005462A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005462BCu); set32(c.r[5], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005462BCu) [[unlikely]] return; }
L_005462BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  goto L_005462CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005462CC:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x000C0000u);  goto L_00546308; }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2693u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005462F4u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 180u, depth + 1u); else { c.pc = 0x00559EF0u; return; } if (c.pc != 0x005462F4u) [[unlikely]] return; }
L_005462F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_00546304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00546304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x000C0000u);
    c.budget -= 1;
L_00546308:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00546440; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546330u); set32(c.r[5], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00546330u) [[unlikely]] return; }
L_00546330:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_00546340; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00546340:
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546438; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2715u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546368u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00546368u) [[unlikely]] return; }
L_00546368:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 28u)));  goto L_00546388; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00546388:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00546450; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00546398:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005463B8u); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005463B8u) [[unlikely]] return; }
L_005463B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_005463C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005463C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_005463F0; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 2;
L_005463F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00546418; } }
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 2;
L_00546418:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00546398u | kUnwind; return; } goto L_00546398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546450; } }
L_00546438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), 0u);  if (t) { goto L_00546450; } }
L_00546440:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 4;
L_00546450:
    st32((c.r[17].w[0] + 40u), c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 340u)));
    set32(c.r[2], c.r[19].w[0] + 336u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 340u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546488; } }
    st32((c.r[19].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 1;
L_00546488:
    set32(c.r[18], ld32((c.r[19].w[0] + 324u)));
    set32(c.r[2], c.r[19].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00546568; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_005464A0:
    set32(c.r[5], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_005464F0; } }
L_005464B0:
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + 32u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_005464E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 7;
L_005464E0:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005464B0u | kUnwind; return; } goto L_005464B0; } }
    c.budget -= 1;
L_005464F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00546518; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_00546558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.r[17].w[0]);  if (t) { goto L_00546558; } }
    c.budget -= 1;
L_00546518:
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00546558; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546530u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00546530u) [[unlikely]] return; }
L_00546530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00546558; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2794u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546554u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 179u, depth + 1u); else { c.pc = 0x00559ED0u; return; } if (c.pc != 0x00546554u) [[unlikely]] return; }
L_00546554:
    st32((c.r[18].w[0] + 72u), c.r[17].w[0]);
    c.budget -= 1;
L_00546558:
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[19].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005464A0u | kUnwind; return; } goto L_005464A0; } }
L_00546568:
    set32(c.r[2], ld32((c.r[29].w[0] + 4332u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00545EC0u | kUnwind; return; } goto L_00545EC0; } }
    c.budget -= 1;
L_00546580:
    set32(c.r[5], ld32((c.r[19].w[0] + 324u)));
    set32(c.r[4], c.r[19].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_005465B8; } }
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 2;
L_00546598:
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_005465A8; } }
    st32((c.r[5].w[0] + 72u), 0u);
    c.budget -= 1;
L_005465A8:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00546598u | kUnwind; return; } goto L_00546598; } }
L_005465B8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4328u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005465D0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005465D0u) [[unlikely]] return; }
L_005465D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4328u)));  goto L_005465E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005465E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00546670; } }
L_005465E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 2828u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546604u); set32(c.r[5], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x00546604u) [[unlikely]] return; }
L_00546604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00546618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546614u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 157u, depth + 1u); else { c.pc = 0x005599C0u; return; } if (c.pc != 0x00546614u) [[unlikely]] return; }
L_00546614:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00546618:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00546628; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005467FC; } }
L_00546628:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546634u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 140u, depth + 1u); else { c.pc = 0x005596D0u; return; } if (c.pc != 0x00546634u) [[unlikely]] return; }
L_00546634:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 352u)));  goto L_00546644; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00546644:
    set32(c.r[2], c.r[19].w[0] + 348u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 352u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4328u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005465E8u | kUnwind; return; } goto L_005465E8; } }
L_00546670:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4268u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546688u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x00546688u) [[unlikely]] return; }
L_00546688:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4268u)));  goto L_00546698; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00546698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546780; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00546780; } }
L_005466A8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4344u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005466C0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005466C0u) [[unlikely]] return; }
L_005466C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 4344u)));  goto L_005466D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_005466D0:
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(4096ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_005466E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_005467FC; } }
L_005466E4:
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005466F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010A(c, 162u, depth + 1u); else { c.pc = 0x0052A5C0u; return; } if (c.pc != 0x005466F4u) [[unlikely]] return; }
L_005466F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 360u)));  goto L_00546704; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00546704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00546768; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00546724u); set32(c.r[6], c.r[19].w[0] + 360u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00546724u) [[unlikely]] return; }
L_00546724:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 48u);  goto L_00546734; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005467FC; } }
L_00546734:
    st32((c.r[19].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 360u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[4].w[0] + 48u);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[19].w[0]);
    c.budget -= 13;
L_00546768:
    set32(c.r[2], ld32((c.r[29].w[0] + 4268u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005466A8u | kUnwind; return; } goto L_005466A8; } }
    c.budget -= 1;
L_00546780:
    set32(c.r[5], ld32((c.r[19].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_005467B8; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054679Cu); set32(c.r[7], c.r[29].w[0] + 4260u);  if (depth < kMaxDepth) unit_0112(c, 89u, depth + 1u); else { c.pc = 0x00549130u; return; } if (c.pc != 0x0054679Cu) [[unlikely]] return; }
L_0054679C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005467B8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4260u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_005467B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 37u);  if (t) { goto L_005467D8; } }
L_005467B8:
    set32(c.r[3], ld32((c.r[23].w[0] + 52u)));
    set32(c.r[2], c.r[23].w[0] + 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[23].w[0] + 52u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 8;
L_005467D8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 4352u)));  goto L_005467E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_005467FC; } }
L_005467E8:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.r[2].d[0] = c.r[30].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00340000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x005450D0u | kUnwind; return; } goto L_005450D0; }
L_005467F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005467FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00546800:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 4368u);  c.pc = t; return; }
L_00546830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0054686C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 19488u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00546868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546868u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00546868u) [[unlikely]] return; }
L_00546868:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0054686C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00546880:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 20;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_005468D8; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_005468E0; } }
L_005468D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00546E00; } }
L_005468E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005468E8u);  if (depth < kMaxDepth) unit_0111(c, 230u, depth + 1u); else { c.pc = 0x00546E40u; return; } if (c.pc != 0x005468E8u) [[unlikely]] return; }
L_005468E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_005468F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_00546E04; } }
L_005468F8:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00546978; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00546908:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00546918; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00546918:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00546938u); set32(c.r[5], c.r[29].w[0] + 188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00546938u) [[unlikely]] return; }
L_00546938:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 188u)));  goto L_00546948; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546E00; } }
L_00546948:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_00546964; }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[2].w[0])));  if (t) { goto L_00546978; } }
L_00546964:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00546908u | kUnwind; return; } goto L_00546908; }
    c.budget -= 1;
L_00546978:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { c.r[4].d[0] = c.r[30].d[0] + 0ull;  goto L_00546C44; }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005469B8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 304u)));  goto L_005469BC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005469B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00546C30; } }
L_005469B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 1;
L_005469BC:
    c.r[3].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 512ull;  goto L_005469D4; }
    st32((c.r[22].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 81u);  if (t) { goto L_00546E00; } }
L_005469D4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[4].d[0] & 1024ull;  goto L_005469E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_00546C30; } }
L_005469E4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);  goto L_00546B04; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[3].d[0] | 38527ull;
    c.f[21] = c.r[3].w[0];
    c.f[20] = 0u;
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00546AA0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00546A0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546A38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546A30u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0113(c, 15u, depth + 1u); else { c.pc = 0x0054C620u; return; } if (c.pc != 0x00546A30u) [[unlikely]] return; }
L_00546A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546A40; } }
L_00546A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546A40u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0113(c, 22u, depth + 1u); else { c.pc = 0x0054C810u; return; } if (c.pc != 0x00546A40u) [[unlikely]] return; }
L_00546A40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 184u));  goto L_00546A50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546E00; } }
L_00546A50:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00546A68; } }
    c.f[21] = c.f[0];
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_00546A68:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00546A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_00546A88; } }
L_00546A78:
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00546A88; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00546A88:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00546A0Cu | kUnwind; return; } goto L_00546A0C; } }
    c.budget -= 1;
L_00546AA0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00546C30; } }
    set32(c.r[8], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00546C30; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_00546AC0:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 260u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00546AE8; } }
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[8], ld32((c.r[3].w[0] + 260u)));
    c.budget -= 5;
L_00546AE8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00546AC0u | kUnwind; return; } goto L_00546AC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546C30; } }
L_00546B04:
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], 0u - 1u);  goto L_00546BDC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.r[3].d[0] = c.r[3].d[0] | 38527ull;
    c.f[20] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00546BA0; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00546B28:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546B4Cu); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_0113(c, 15u, depth + 1u); else { c.pc = 0x0054C620u; return; } if (c.pc != 0x00546B4Cu) [[unlikely]] return; }
L_00546B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546B60; } }
    c.budget -= 1;
L_00546B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546B60u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_0113(c, 22u, depth + 1u); else { c.pc = 0x0054C810u; return; } if (c.pc != 0x00546B60u) [[unlikely]] return; }
L_00546B60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 180u));  goto L_00546B70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546E00; } }
L_00546B70:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00546B88; } }
    c.f[20] = c.f[0];
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_00546B88:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00546B28u | kUnwind; return; } goto L_00546B28; } }
    c.budget -= 1;
L_00546BA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00546BAC; }
L_00546BAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546BB4u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_0113(c, 15u, depth + 1u); else { c.pc = 0x0054C620u; return; } if (c.pc != 0x00546BB4u) [[unlikely]] return; }
L_00546BB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 180u));  goto L_00546BC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546E00; } }
L_00546BC4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00546C30; } }
    st32((c.r[22].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 81u);  if (t) { goto L_00546E00; } }
L_00546BDC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00546C30; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_00546BF0:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 260u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00546C18; } }
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[8], ld32((c.r[3].w[0] + 260u)));
    c.budget -= 5;
L_00546C18:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00546BF0u | kUnwind; return; } goto L_00546BF0; } }
    c.budget -= 1;
L_00546C30:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
L_00546C44:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546C54u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0112(c, 48u, depth + 1u); else { c.pc = 0x00548800u; return; } if (c.pc != 0x00546C54u) [[unlikely]] return; }
L_00546C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546E00; } }
L_00546C64:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  goto L_00546CA4; }
    set32(c.r[2], ld32((c.r[20].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546CA0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[8], ld32((c.r[20].w[0] + 368u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00546C90u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00546C90u) [[unlikely]] return; }
L_00546C90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546CA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546E00; } }
L_00546CA0:
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_00546CA4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00546CB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00546CB8u) [[unlikely]] return; }
L_00546CB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 84u));  goto L_00546CC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546E00; } }
L_00546CC8:
    set32(c.r[3], 0u - 8193u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    set32(c.r[4], c.r[20].w[0] + 108u);
    set32(c.r[5], c.r[17].w[0] + 108u);
    set32(c.r[6], 0u + 12u);
    st32((c.r[20].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 88u));
    st32((c.r[20].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    st32((c.r[20].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    st32((c.r[20].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 100u));
    st32((c.r[20].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 284u));
    st32((c.r[20].w[0] + 284u), c.f[0]);
    set32(c.r[7], ld32((c.r[20].w[0] + 304u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    st32((c.r[20].w[0] + 304u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 304u)));
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[20].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 304u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 364u), 0u);
    st32((c.r[20].w[0] + 368u), 0u);
    st32((c.r[20].w[0] + 408u), 0u);
    st32((c.r[20].w[0] + 288u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546D48u); st32((c.r[20].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00546D48u) [[unlikely]] return; }
L_00546D48:
    set32(c.r[4], c.r[20].w[0] + 120u);
    set32(c.r[5], c.r[17].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546D58u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00546D58u) [[unlikely]] return; }
L_00546D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546D60u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 6u, depth + 1u); else { c.pc = 0x0054C050u; return; } if (c.pc != 0x00546D60u) [[unlikely]] return; }
L_00546D60:
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 148u);  goto L_00546DA0; }
    c.f[1] = ld32((c.r[20].w[0] + 132u));
    c.f[0] = ld32((c.r[20].w[0] + 108u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 136u));
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 140u));
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 116u), c.f[0]);
    set32(c.r[4], c.r[20].w[0] + 148u);
    c.budget -= 13;
L_00546DA0:
    set32(c.r[5], c.r[17].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546DACu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00546DACu) [[unlikely]] return; }
L_00546DAC:
    set32(c.r[5], c.r[17].w[0] + 160u);
    set32(c.r[4], c.r[20].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546DBCu); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00546DBCu) [[unlikely]] return; }
L_00546DBC:
    set32(c.r[3], ld32((c.r[20].w[0] + 336u)));
    set32(c.r[2], c.r[20].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00546DE8; } }
L_00546DCC:
    st32((c.r[3].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00546DCCu | kUnwind; return; } goto L_00546DCC; } }
L_00546DE8:
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546DF8u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 189u, depth + 1u); else { c.pc = 0x0055A090u; return; } if (c.pc != 0x00546DF8u) [[unlikely]] return; }
L_00546DF8:
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00546E00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_00546E04:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00546E40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00546EA4; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[2], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00546F18; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00546E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546E80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0111(c, 230u, depth + 1u); else { c.pc = 0x00546E40u; return; } if (c.pc != 0x00546E80u) [[unlikely]] return; }
L_00546E80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_00546E90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00546F20; } }
L_00546E90:
    set32(c.r[2], c.r[19].w[0] + 48u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00546E78u | kUnwind; return; } goto L_00546E78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546F18; } }
L_00546EA4:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00546F18; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00546EB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_00546F04; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546ED4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0111(c, 236u, depth + 1u); else { c.pc = 0x00546F40u; return; } if (c.pc != 0x00546ED4u) [[unlikely]] return; }
L_00546ED4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_00546EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546F1C; } }
L_00546EE4:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546EF0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0113(c, 183u, depth + 1u); else { c.pc = 0x0054F4E0u; return; } if (c.pc != 0x00546EF0u) [[unlikely]] return; }
L_00546EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00546F00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00546F1C; } }
L_00546F00:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_00546F04:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00546EB4u | kUnwind; return; } goto L_00546EB4; } }
    c.budget -= 1;
L_00546F18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00546F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00546F20:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00546F40:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 220u), c.r[6].w[0]);  if (t) { goto L_00546F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_005479C0; } }
L_00546F88:
    set32(c.r[2], ld32((c.r[30].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_00546FF8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 1367u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546FB8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 45u, depth + 1u); else { c.pc = 0x0052C8F0u; return; } if (c.pc != 0x00546FB8u) [[unlikely]] return; }
L_00546FB8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[23].d[0] = c.r[2].d[0] + 0ull;  goto L_00546FCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546FC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0119(c, 20u, depth + 1u); else { c.pc = 0x00564310u; return; } if (c.pc != 0x00546FC8u) [[unlikely]] return; }
L_00546FC8:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00546FCC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[30].w[0] + 412u)));  goto L_00546FDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005479C0; } }
L_00546FDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00546FE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0119(c, 15u, depth + 1u); else { c.pc = 0x00564230u; return; } if (c.pc != 0x00546FE8u) [[unlikely]] return; }
L_00546FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00546FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005479C0; } }
L_00546FF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 424u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547010u); set32(c.r[7], 0u + 1380u);  if (depth < kMaxDepth) unit_0119(c, 13u, depth + 1u); else { c.pc = 0x005641A0u; return; } if (c.pc != 0x00547010u) [[unlikely]] return; }
L_00547010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00547024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547020u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0114(c, 237u, depth + 1u); else { c.pc = 0x00553D10u; return; } if (c.pc != 0x00547020u) [[unlikely]] return; }
L_00547020:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00547024:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_00547034; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005479C0; } }
L_00547034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054703Cu);  if (depth < kMaxDepth) unit_0114(c, 235u, depth + 1u); else { c.pc = 0x00553B80u; return; } if (c.pc != 0x0054703Cu) [[unlikely]] return; }
L_0054703C:
    st32((c.r[21].w[0] + 416u), c.r[23].w[0]);
    st32((c.r[21].w[0] + 16u), 0u);
    st32((c.r[21].w[0] + 28u), 0u);
    st32((c.r[21].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 64u)));
    st32((c.r[21].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 68u)));
    st32((c.r[21].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 72u), 0u);
    set32(c.r[5], ld32((c.r[30].w[0] + 76u)));
    c.budget -= 12;
    if (c.r[5].d[0] == 0ull) { st32((c.r[21].w[0] + 76u), 0u);  goto L_00547090; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 20096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547080u); set32(c.r[7], 0u + 1404u);  if (depth < kMaxDepth) unit_0118(c, 261u, depth + 1u); else { c.pc = 0x00563FB0u; return; } if (c.pc != 0x00547080u) [[unlikely]] return; }
L_00547080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_00547090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005479C0; } }
L_00547090:
    c.f[0] = ld32((c.r[30].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[21].w[0] + 108u);
    set32(c.r[5], c.r[30].w[0] + 108u);
    set32(c.r[6], 0u + 12u);
    st32((c.r[21].w[0] + 84u), c.f[0]);
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[30].w[0] + 92u));
    st32((c.r[21].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 96u));
    st32((c.r[21].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 100u));
    st32((c.r[21].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 104u)));
    st32((c.r[21].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 144u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005470D8u); st32((c.r[21].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x005470D8u) [[unlikely]] return; }
L_005470D8:
    set32(c.r[4], c.r[21].w[0] + 120u);
    set32(c.r[5], c.r[30].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005470E8u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x005470E8u) [[unlikely]] return; }
L_005470E8:
    set32(c.r[4], c.r[21].w[0] + 148u);
    set32(c.r[5], c.r[30].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005470F8u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x005470F8u) [[unlikely]] return; }
L_005470F8:
    set32(c.r[2], ld32((c.r[30].w[0] + 172u)));
    set32(c.r[4], c.r[21].w[0] + 200u);
    set32(c.r[5], c.r[30].w[0] + 200u);
    set32(c.r[6], 0u + 32u);
    st32((c.r[21].w[0] + 172u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[30].w[0] + 176u));
    st32((c.r[21].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 180u));
    st32((c.r[21].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 184u));
    st32((c.r[21].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 188u));
    st32((c.r[21].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 192u));
    st32((c.r[21].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 196u));
    st32((c.r[21].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 232u));
    st32((c.r[21].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 236u));
    st32((c.r[21].w[0] + 236u), c.f[0]);
    st32((c.r[21].w[0] + 240u), 0u);
    c.f[0] = ld32((c.r[30].w[0] + 244u));
    st32((c.r[21].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 248u));
    st32((c.r[21].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 280u));
    st32((c.r[21].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 284u));
    st32((c.r[21].w[0] + 284u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 312u)));
    st16((c.r[21].w[0] + 312u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 314u)));
    st16((c.r[21].w[0] + 314u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[30].w[0] + 292u));
    st32((c.r[21].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 296u));
    st32((c.r[21].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[30].w[0] + 300u));
    st32((c.r[21].w[0] + 300u), c.f[0]);
    st16((c.r[21].w[0] + 316u), static_cast<std::uint16_t>(0u));
    st32((c.r[21].w[0] + 260u), 0u);
    st32((c.r[21].w[0] + 256u), 0u);
    st32((c.r[21].w[0] + 268u), 0u);
    st32((c.r[21].w[0] + 264u), 0u);
    st32((c.r[21].w[0] + 276u), 0u);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005471B8u); st32((c.r[21].w[0] + 272u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x005471B8u) [[unlikely]] return; }
L_005471B8:
    set32(c.r[4], ld32((c.r[30].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 36863ull;
    set32(c.r[3], c.r[30].w[0] + 324u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    st32((c.r[21].w[0] + 304u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 318u)));
    st16((c.r[21].w[0] + 318u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[30].w[0] + 360u)));
    st32((c.r[21].w[0] + 360u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 364u)));
    st32((c.r[21].w[0] + 364u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[30].w[0] + 368u)));
    st32((c.r[21].w[0] + 368u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 372u), 0u);
    st32((c.r[21].w[0] + 376u), 0u);
    st32((c.r[21].w[0] + 380u), 0u);
    st32((c.r[21].w[0] + 384u), 0u);
    set32(c.r[4], ld32((c.r[30].w[0] + 324u)));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_00547228; } }
L_0054720C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054720Cu | kUnwind; return; } goto L_0054720C; } }
L_00547228:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[29].w[0] + 192u), 0u);  if (t) { goto L_005476D8; } }
L_00547234:
    set32(c.r[20], ld32((c.r[30].w[0] + 324u)));
    set32(c.r[3], c.r[30].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[3].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_00547250; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00547288; } }
    c.budget -= 1;
L_00547250:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00547288; } }
    c.budget -= 1;
L_00547260:
    set32(c.r[20], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { goto L_00547278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00547288; } }
    c.budget -= 1;
L_00547278:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547260u | kUnwind; return; } goto L_00547260; } }
    c.budget -= 1;
L_00547288:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 108u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005472A0u); set32(c.r[7], 0u + 1487u);  if (depth < kMaxDepth) unit_0119(c, 13u, depth + 1u); else { c.pc = 0x005641A0u; return; } if (c.pc != 0x005472A0u) [[unlikely]] return; }
L_005472A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005472B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005472B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 130u, depth + 1u); else { c.pc = 0x005553E0u; return; } if (c.pc != 0x005472B0u) [[unlikely]] return; }
L_005472B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_005472B8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_005472C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005479C0; } }
L_005472C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005472D0u);  if (depth < kMaxDepth) unit_0115(c, 129u, depth + 1u); else { c.pc = 0x00555380u; return; } if (c.pc != 0x005472D0u) [[unlikely]] return; }
L_005472D0:
    st32((c.r[17].w[0] + 12u), c.r[21].w[0]);
    set32(c.r[2], c.r[20].w[0] + 84u);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 76u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 25;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00547358; } }
    c.budget -= 1;
L_00547338:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547338u | kUnwind; return; } goto L_00547338; } }
    c.budget -= 1;
L_00547358:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00547480; } }
L_00547360:
    set32(c.r[18], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[2], c.r[20].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00547378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_005473A8; } }
L_00547378:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_005473A8; } }
L_00547380:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00547398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_005473A8; } }
    c.budget -= 1;
L_00547398:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547380u | kUnwind; return; } goto L_00547380; } }
    c.budget -= 1;
L_005473A8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 140u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005473C0u); set32(c.r[7], 0u + 1521u);  if (depth < kMaxDepth) unit_0119(c, 13u, depth + 1u); else { c.pc = 0x005641A0u; return; } if (c.pc != 0x005473C0u) [[unlikely]] return; }
L_005473C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005473D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005473D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 210u, depth + 1u); else { c.pc = 0x005565F0u; return; } if (c.pc != 0x005473D0u) [[unlikely]] return; }
L_005473D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_005473D8:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  goto L_005473E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005479C0; } }
L_005473E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005473F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 209u, depth + 1u); else { c.pc = 0x00556550u; return; } if (c.pc != 0x005473F0u) [[unlikely]] return; }
L_005473F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00547420; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_00547420:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  goto L_0054745C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547448u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 156u, depth + 1u); else { c.pc = 0x00555740u; return; } if (c.pc != 0x00547448u) [[unlikely]] return; }
L_00547448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00547458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_005479C4; } }
L_00547458:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_0054745C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] + 84u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547360u | kUnwind; return; } goto L_00547360; } }
L_00547480:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_005474B0; } }
L_00547490:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547490u | kUnwind; return; } goto L_00547490; } }
    c.budget -= 1;
L_005474B0:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00547688; } }
L_005474B8:
    set32(c.r[18], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_005474D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00547500; } }
L_005474D0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_00547500; } }
L_005474D8:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_005474F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00547500; } }
    c.budget -= 1;
L_005474F0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005474D8u | kUnwind; return; } goto L_005474D8; } }
    c.budget -= 1;
L_00547500:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547518u); set32(c.r[7], 0u + 1566u);  if (depth < kMaxDepth) unit_0119(c, 13u, depth + 1u); else { c.pc = 0x005641A0u; return; } if (c.pc != 0x00547518u) [[unlikely]] return; }
L_00547518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00547530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547528u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 229u, depth + 1u); else { c.pc = 0x00556BC0u; return; } if (c.pc != 0x00547528u) [[unlikely]] return; }
L_00547528:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00547530:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  goto L_00547540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005479C0; } }
L_00547540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547548u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 228u, depth + 1u); else { c.pc = 0x00556BA0u; return; } if (c.pc != 0x00547548u) [[unlikely]] return; }
L_00547548:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00547578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.r[16].w[0]);  if (t) { goto L_00547660; } }
    c.budget -= 1;
L_00547578:
    c.r[2].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00547590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[16].w[0]);  if (t) { goto L_00547660; } }
    c.budget -= 1;
L_00547590:
    c.r[2].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005475A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.r[16].w[0]);  if (t) { goto L_00547660; } }
    c.budget -= 1;
L_005475A8:
    c.r[2].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005475C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[16].w[0]);  if (t) { goto L_00547660; } }
    c.budget -= 1;
L_005475C0:
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005475E0; } }
    c.r[2].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005475E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 44u), c.r[16].w[0]);  if (t) { goto L_00547660; } }
L_005475E0:
    c.r[2].d[0] = c.r[4].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005475F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.r[16].w[0]);  if (t) { goto L_00547660; } }
    c.budget -= 1;
L_005475F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00547618; } }
    c.r[2].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00547618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[16].w[0]);  if (t) { goto L_00547660; } }
    c.budget -= 1;
L_00547618:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00547638; } }
    c.r[2].d[0] = c.r[4].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00547638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[16].w[0]);  if (t) { goto L_00547660; } }
    c.budget -= 1;
L_00547638:
    c.r[2].d[0] = c.r[4].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00547650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 60u), c.r[16].w[0]);  if (t) { goto L_00547660; } }
    c.budget -= 1;
L_00547650:
    c.r[2].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00547660; } }
    st32((c.r[17].w[0] + 68u), c.r[16].w[0]);
    c.budget -= 1;
L_00547660:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[17].w[0] + 96u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 100u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005474B8u | kUnwind; return; } goto L_005474B8; } }
L_00547688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547690u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 119u, depth + 1u); else { c.pc = 0x005551E0u; return; } if (c.pc != 0x00547690u) [[unlikely]] return; }
L_00547690:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  goto L_005476A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005479C0; } }
L_005476A0:
    set32(c.r[4], c.r[21].w[0] + 324u);
    set32(c.r[5], ld32((c.r[21].w[0] + 328u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[21].w[0] + 328u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547234u | kUnwind; return; } goto L_00547234; } }
    c.budget -= 1;
L_005476D8:
    set32(c.r[4], ld32((c.r[30].w[0] + 336u)));
    set32(c.r[3], c.r[30].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 160u), 0u);  if (t) { goto L_00547708; } }
L_005476E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005476E8u | kUnwind; return; } goto L_005476E8; } }
    c.budget -= 1;
L_00547708:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_005478A0; } }
L_00547714:
    set32(c.r[18], ld32((c.r[30].w[0] + 336u)));
    set32(c.r[2], c.r[30].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_00547730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00547760; } }
    c.budget -= 1;
L_00547730:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_00547760; } }
L_00547738:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00547750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00547760; } }
    c.budget -= 1;
L_00547750:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547738u | kUnwind; return; } goto L_00547738; } }
    c.budget -= 1;
L_00547760:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 52u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547778u); set32(c.r[7], 0u + 1637u);  if (depth < kMaxDepth) unit_0119(c, 13u, depth + 1u); else { c.pc = 0x005641A0u; return; } if (c.pc != 0x00547778u) [[unlikely]] return; }
L_00547778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00547790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547788u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 182u, depth + 1u); else { c.pc = 0x00563060u; return; } if (c.pc != 0x00547788u) [[unlikely]] return; }
L_00547788:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00547790:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 12u)));  goto L_005477A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005479C0; } }
L_005477A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005477A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 180u, depth + 1u); else { c.pc = 0x00562FD0u; return; } if (c.pc != 0x005477A8u) [[unlikely]] return; }
L_005477A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_005477B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005479C0; } }
L_005477B8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005477E0; } }
    st32((c.r[21].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 1;
L_005477E0:
    set32(c.r[20], ld32((c.r[21].w[0] + 324u)));
    set32(c.r[2], c.r[21].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00547870; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_005477F8:
    set32(c.r[19], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_00547850; } }
L_00547808:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547820u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_010D(c, 301u, depth + 1u); else { c.pc = 0x00537E40u; return; } if (c.pc != 0x00547820u) [[unlikely]] return; }
L_00547820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00547840; } }
    goto L_00547828;
L_00547824:
    c.budget -= 1;
L_00547828:
    st32((c.r[19].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 6;
L_00547840:
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[20].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547808u | kUnwind; return; } goto L_00547808; } }
L_00547850:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_00547860; } }
    st32((c.r[20].w[0] + 72u), c.r[17].w[0]);
    c.budget -= 1;
L_00547860:
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[21].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005477F8u | kUnwind; return; } goto L_005477F8; } }
L_00547870:
    set32(c.r[4], ld32((c.r[21].w[0] + 340u)));
    set32(c.r[3], c.r[21].w[0] + 336u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[21].w[0] + 340u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547714u | kUnwind; return; } goto L_00547714; } }
    c.budget -= 1;
L_005478A0:
    set32(c.r[3], ld32((c.r[30].w[0] + 348u)));
    set32(c.r[2], c.r[30].w[0] + 348u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_005478D0; } }
L_005478B0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005478B0u | kUnwind; return; } goto L_005478B0; } }
    c.budget -= 1;
L_005478D0:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_005479A0; } }
L_005478D8:
    set32(c.r[17], ld32((c.r[30].w[0] + 348u)));
    set32(c.r[2], c.r[30].w[0] + 348u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_005478F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00547920; } }
L_005478F0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_00547920; } }
L_005478F8:
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00547910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00547920; } }
    c.budget -= 1;
L_00547910:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005478F8u | kUnwind; return; } goto L_005478F8; } }
    c.budget -= 1;
L_00547920:
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[6], c.r[6].w[0] - 20096u);
    set32(c.r[7], 0u + 1694u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054793Cu); set32(c.r[5], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0116(c, 181u, depth + 1u); else { c.pc = 0x00559F10u; return; } if (c.pc != 0x0054793Cu) [[unlikely]] return; }
L_0054793C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00547950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054794Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 157u, depth + 1u); else { c.pc = 0x005599C0u; return; } if (c.pc != 0x0054794Cu) [[unlikely]] return; }
L_0054794C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00547950:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_00547960; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_005479C0; } }
L_00547960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547968u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 154u, depth + 1u); else { c.pc = 0x00559930u; return; } if (c.pc != 0x00547968u) [[unlikely]] return; }
L_00547968:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[21].w[0] + 352u)));  goto L_00547978; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005479C0; } }
L_00547978:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[21].w[0] + 348u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[21].w[0] + 352u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005478D8u | kUnwind; return; } goto L_005478D8; } }
    c.budget -= 1;
L_005479A0:
    set32(c.r[3], c.r[21].w[0] + 36u);
    st32((c.r[21].w[0] + 36u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[21].w[0] + 44u), 0u);
    st32((c.r[21].w[0] + 24u), c.r[30].w[0]);
    st32((c.r[3].w[0]), c.r[21].w[0]);
    c.budget -= 8;
L_005479C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_005479C4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_005479F0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 60u)));  goto L_00547A00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00547A30; } }
L_00547A00:
    set32(c.r[2], c.r[4].w[0] + 60u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00547A28; } }
L_00547A0C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547A0Cu | kUnwind; return; } goto L_00547A0C; } }
L_00547A28:
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00547A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00547A40:
    c.budget -= 2;
    if (c.r[5].sd[0] < 0) { set32(c.r[2], 0u + 37u);  goto L_00547AE4; }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[7], ld32((c.r[4].w[0] + 60u)));  goto L_00547A5C; }
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00547AE4; } }
L_00547A5C:
    set32(c.r[2], c.r[4].w[0] + 60u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_00547A70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00547A98; } }
L_00547A70:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00547A98; } }
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.budget -= 1;
L_00547A7C:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[5].w[0] - 1u);  goto L_00547A8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00547A98; } }
L_00547A8C:
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { set32(c.r[7], ld32((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00547A7Cu | kUnwind; return; } goto L_00547A7C; }
    c.budget -= 1;
L_00547A98:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_00547AE4; }
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[7].w[0] + 20u)));  goto L_00547ADC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[7].w[0] + 20u));  goto L_00547AD4; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 20u)));  goto L_00547ACC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00547AE4; } }
L_00547ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_00547AE0; } }
L_00547AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_00547AE0; } }
L_00547ADC:
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00547AE0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00547AE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00547AF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00547B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00547BA4; } }
L_00547B20:
    set32(c.r[16], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], c.r[19].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00547BA0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00547B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547B3Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 297u, depth + 1u); else { c.pc = 0x00537D50u; return; } if (c.pc != 0x00547B3Cu) [[unlikely]] return; }
L_00547B3C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_00547B90; }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_00547B80; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[16].w[0] + 20u));  goto L_00547B78; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_00547B70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00547B88; } }
L_00547B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00547B84; } }
L_00547B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_00547B84; } }
L_00547B80:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00547B84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00547B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00547BA8; } }
L_00547B90:
    set32(c.r[2], c.r[19].w[0] + 60u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00547B34u | kUnwind; return; } goto L_00547B34; }
    c.budget -= 1;
L_00547BA0:
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_00547BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00547BA8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00547BC0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 48u)));  goto L_00547BD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00547C00; } }
L_00547BD0:
    set32(c.r[2], c.r[4].w[0] + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00547BF8; } }
L_00547BDC:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547BDCu | kUnwind; return; } goto L_00547BDC; } }
L_00547BF8:
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00547C00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00547C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00547C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00547CAC; } }
L_00547C30:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], c.r[4].w[0] + 48u);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00547C4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00547C70; } }
L_00547C4C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00547C70; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_00547C58:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], c.r[5].w[0] - 1u);  goto L_00547C68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00547C70; } }
L_00547C68:
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { set32(c.r[3], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00547C58u | kUnwind; return; } goto L_00547C58; }
L_00547C70:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_00547CAC; }
    c.r[2].d[0] = c.r[8].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[3].d[0] + 0ull;  goto L_00547CA0; }
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547C94u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 189u, depth + 1u); else { c.pc = 0x0055A090u; return; } if (c.pc != 0x00547C94u) [[unlikely]] return; }
L_00547C94:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00547CAC; } }
L_00547CA0:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547CACu); c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0111(c, 207u, depth + 1u); else { c.pc = 0x00546880u; return; } if (c.pc != 0x00547CACu) [[unlikely]] return; }
L_00547CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00547CC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00547CE4; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[6], c.r[29].w[0] + 60u);  goto L_00547CEC; }
L_00547CE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00547D3C; } }
L_00547CEC:
    set32(c.r[7], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547CF8u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0112(c, 89u, depth + 1u); else { c.pc = 0x00549130u; return; } if (c.pc != 0x00547CF8u) [[unlikely]] return; }
L_00547CF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] & 4ull;  goto L_00547D08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00547D40; } }
L_00547D08:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  goto L_00547D2C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547D20u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0116(c, 189u, depth + 1u); else { c.pc = 0x0055A090u; return; } if (c.pc != 0x00547D20u) [[unlikely]] return; }
L_00547D20:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00547D3C; } }
L_00547D2C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547D3Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0111(c, 207u, depth + 1u); else { c.pc = 0x00546880u; return; } if (c.pc != 0x00547D3Cu) [[unlikely]] return; }
L_00547D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00547D40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00547D50:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 36u)));  goto L_00547D60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00547DA0; } }
L_00547D60:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_00547D98; }
    set32(c.r[2], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00547D98; } }
L_00547D78:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547D78u | kUnwind; return; } goto L_00547D78; } }
    c.budget -= 1;
L_00547D98:
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00547DA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00547DB0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 44u)));  goto L_00547DC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00547DC8; } }
L_00547DC0:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00547DC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00547DD0:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 40u)));  goto L_00547DE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00547DE8; } }
L_00547DE0:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00547DE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00547DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { st32((c.r[16].w[0]), 0u);  goto L_00547E10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_00547EDC; } }
L_00547E10:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_00547ECC; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00547E50; } }
L_00547E30:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00547E30u | kUnwind; return; } goto L_00547E30; } }
    c.budget -= 1;
L_00547E50:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00547EC8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00547E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00547E90; } }
L_00547E68:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_00547E90; } }
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00547E74:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], c.r[5].w[0] - 1u);  goto L_00547E84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00547E90; } }
L_00547E84:
    c.budget -= 2;
    if (c.r[5].sd[0] > 0) { set32(c.r[4], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00547E74u | kUnwind; return; } goto L_00547E74; }
    c.budget -= 1;
L_00547E90:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[4].w[0]);  goto L_00547EA0; }
    set32(c.r[4], c.r[4].w[0] - 4u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.budget -= 2;
L_00547EA0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00547EC8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00547EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547EB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0111(c, 230u, depth + 1u); else { c.pc = 0x00546E40u; return; } if (c.pc != 0x00547EB8u) [[unlikely]] return; }
L_00547EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00547EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00547EE0; } }
L_00547EC8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00547ECC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  goto L_00547EDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00547EDC; } }
L_00547EDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00547EE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00547EF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
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
    c.budget -= 14;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00547F3C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], 0u + 37u);  [[clang::musttail]] return unit_0112(c, 7u, depth); }
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0]), 0u);  goto L_00547F48; }
L_00547F3C:
    set32(c.r[2], 0u + 37u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0112(c, 7u, depth); } }
L_00547F48:
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 47u);  if (t) { goto L_00547F58; } }
L_00547F54:
    c.budget -= 1;
L_00547F58:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00547F80; } }
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00547F54u | kUnwind; return; } goto L_00547F54; }
    c.budget -= 1;
L_00547F80:
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] - c.r[20].w[0]);  if (t) { [[clang::musttail]] return unit_0112(c, 6u, depth); } }
L_00547F90:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00547FA0; } }
    set32(c.r[2], c.r[17].w[0] - 4u);
    c.budget -= 2;
L_00547FA0:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  [[clang::musttail]] return unit_0112(c, 6u, depth); }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00547FB8; } }
    set32(c.r[2], c.r[17].w[0] - 4u);
    c.budget -= 1;
L_00547FB8:
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00547FC8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_010D(c, 295u, depth + 1u); else { c.pc = 0x00537CB0u; return; } if (c.pc != 0x00547FC8u) [[unlikely]] return; }
L_00547FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0112(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00547FE0; } }
    set32(c.r[2], c.r[17].w[0] - 4u);
    c.budget -= 2;
L_00547FE0:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0112(c, 5u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  [[clang::musttail]] return unit_0112(c, 3u, depth); }
    [[clang::musttail]] return unit_0112(c, 1u, depth);
}

}
