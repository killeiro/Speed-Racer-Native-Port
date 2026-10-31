#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0134[4096] = {
    1, 0, 0, 2, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0,
    241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0,
    258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 267, 0,
    268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0,
    278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0,
    288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 297, 0,
    298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 307, 0,
    308, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 317, 0,
    318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    327, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0,
    337, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0,
    347, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 355, 0, 0, 356,
    0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 359, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 366,
    0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 376,
    0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 386,
    0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 396,
    0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0,
    404, 0, 405, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0,
    414, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0,
    424, 0, 425, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0,
    434, 0, 435, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0, 443, 0, 0, 0, 0,
    444, 0, 0, 0, 445, 0, 446, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 453, 0, 0, 0, 0,
    454, 0, 0, 0, 455, 0, 456, 0, 457, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 461, 0, 462, 0, 0, 463, 0, 0, 0, 0,
    464, 0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 472, 0, 0, 473, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 481, 0,
    482, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 487, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 491, 0,
    492, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 496, 0, 497, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 501, 0,
    502, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 511, 0,
    512, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 521, 0,
    522, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0,
    531, 0, 532, 0, 533, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543,
    0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 0, 558, 0,
};

void unit_0134(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_005D0000;
    case 2u: goto L_005D000C;
    case 3u: goto L_005D0010;
    case 4u: goto L_005D0020;
    case 5u: goto L_005D0024;
    case 6u: goto L_005D007C;
    case 7u: goto L_005D00EC;
    case 8u: goto L_005D015C;
    case 9u: goto L_005D01D0;
    case 10u: goto L_005D0240;
    case 11u: goto L_005D02B0;
    case 12u: goto L_005D031C;
    case 13u: goto L_005D038C;
    case 14u: goto L_005D03FC;
    case 15u: goto L_005D0470;
    case 16u: goto L_005D04E4;
    case 17u: goto L_005D055C;
    case 18u: goto L_005D05CC;
    case 19u: goto L_005D063C;
    case 20u: goto L_005D06AC;
    case 21u: goto L_005D0718;
    case 22u: goto L_005D0788;
    case 23u: goto L_005D07FC;
    case 24u: goto L_005D0800;
    case 25u: goto L_005D0868;
    case 26u: goto L_005D08D4;
    case 27u: goto L_005D0940;
    case 28u: goto L_005D09AC;
    case 29u: goto L_005D0A20;
    case 30u: goto L_005D0A90;
    case 31u: goto L_005D0AFC;
    case 32u: goto L_005D0B6C;
    case 33u: goto L_005D0BD8;
    case 34u: goto L_005D0C48;
    case 35u: goto L_005D0CB8;
    case 36u: goto L_005D0D24;
    case 37u: goto L_005D0D90;
    case 38u: goto L_005D0DFC;
    case 39u: goto L_005D0E68;
    case 40u: goto L_005D0ED8;
    case 41u: goto L_005D0F44;
    case 42u: goto L_005D0FB0;
    case 43u: goto L_005D1020;
    case 44u: goto L_005D1094;
    case 45u: goto L_005D1104;
    case 46u: goto L_005D1170;
    case 47u: goto L_005D11E0;
    case 48u: goto L_005D1250;
    case 49u: goto L_005D12BC;
    case 50u: goto L_005D1330;
    case 51u: goto L_005D139C;
    case 52u: goto L_005D1408;
    case 53u: goto L_005D147C;
    case 54u: goto L_005D14F0;
    case 55u: goto L_005D155C;
    case 56u: goto L_005D15CC;
    case 57u: goto L_005D1644;
    case 58u: goto L_005D16B4;
    case 59u: goto L_005D172C;
    case 60u: goto L_005D1798;
    case 61u: goto L_005D1804;
    case 62u: goto L_005D1870;
    case 63u: goto L_005D18DC;
    case 64u: goto L_005D1948;
    case 65u: goto L_005D19B4;
    case 66u: goto L_005D1A24;
    case 67u: goto L_005D1A9C;
    case 68u: goto L_005D1B18;
    case 69u: goto L_005D1B90;
    case 70u: goto L_005D1C0C;
    case 71u: goto L_005D1C20;
    case 72u: goto L_005D1C60;
    case 73u: goto L_005D1CE0;
    case 74u: goto L_005D1D00;
    case 75u: goto L_005D1D20;
    case 76u: goto L_005D1D50;
    case 77u: goto L_005D1D70;
    case 78u: goto L_005D1D90;
    case 79u: goto L_005D1DB4;
    case 80u: goto L_005D1DC0;
    case 81u: goto L_005D1DE0;
    case 82u: goto L_005D1E04;
    case 83u: goto L_005D1E40;
    case 84u: goto L_005D1E60;
    case 85u: goto L_005D1E88;
    case 86u: goto L_005D1E9C;
    case 87u: goto L_005D1EAC;
    case 88u: goto L_005D1EC4;
    case 89u: goto L_005D1EE0;
    case 90u: goto L_005D1F10;
    case 91u: goto L_005D1F30;
    case 92u: goto L_005D1F50;
    case 93u: goto L_005D1F74;
    case 94u: goto L_005D1F80;
    case 95u: goto L_005D1FA0;
    case 96u: goto L_005D1FC0;
    case 97u: goto L_005D1FE4;
    case 98u: goto L_005D1FF0;
    case 99u: goto L_005D2010;
    case 100u: goto L_005D2030;
    case 101u: goto L_005D2050;
    case 102u: goto L_005D2070;
    case 103u: goto L_005D2098;
    case 104u: goto L_005D20AC;
    case 105u: goto L_005D20BC;
    case 106u: goto L_005D20D4;
    case 107u: goto L_005D20F0;
    case 108u: goto L_005D2110;
    case 109u: goto L_005D2128;
    case 110u: goto L_005D2140;
    case 111u: goto L_005D216C;
    case 112u: goto L_005D2184;
    case 113u: goto L_005D21A0;
    case 114u: goto L_005D21B0;
    case 115u: goto L_005D21D0;
    case 116u: goto L_005D21F4;
    case 117u: goto L_005D2200;
    case 118u: goto L_005D2218;
    case 119u: goto L_005D2230;
    case 120u: goto L_005D2250;
    case 121u: goto L_005D2270;
    case 122u: goto L_005D228C;
    case 123u: goto L_005D22AC;
    case 124u: goto L_005D22C8;
    case 125u: goto L_005D22E0;
    case 126u: goto L_005D2300;
    case 127u: goto L_005D2324;
    case 128u: goto L_005D233C;
    case 129u: goto L_005D2350;
    case 130u: goto L_005D2370;
    case 131u: goto L_005D2390;
    case 132u: goto L_005D23B0;
    case 133u: goto L_005D23D0;
    case 134u: goto L_005D23F0;
    case 135u: goto L_005D2410;
    case 136u: goto L_005D2434;
    case 137u: goto L_005D2470;
    case 138u: goto L_005D2498;
    case 139u: goto L_005D24AC;
    case 140u: goto L_005D24BC;
    case 141u: goto L_005D24D4;
    case 142u: goto L_005D24F0;
    case 143u: goto L_005D2510;
    case 144u: goto L_005D2530;
    case 145u: goto L_005D2558;
    case 146u: goto L_005D256C;
    case 147u: goto L_005D257C;
    case 148u: goto L_005D2594;
    case 149u: goto L_005D25B0;
    case 150u: goto L_005D25F4;
    case 151u: goto L_005D2610;
    case 152u: goto L_005D2620;
    case 153u: goto L_005D2640;
    case 154u: goto L_005D2660;
    case 155u: goto L_005D2680;
    case 156u: goto L_005D26A0;
    case 157u: goto L_005D26C0;
    case 158u: goto L_005D26E0;
    case 159u: goto L_005D2704;
    case 160u: goto L_005D2710;
    case 161u: goto L_005D272C;
    case 162u: goto L_005D2750;
    case 163u: goto L_005D2768;
    case 164u: goto L_005D2774;
    case 165u: goto L_005D2780;
    case 166u: goto L_005D27A4;
    case 167u: goto L_005D27C8;
    case 168u: goto L_005D27E0;
    case 169u: goto L_005D27F0;
    case 170u: goto L_005D2860;
    case 171u: goto L_005D2888;
    case 172u: goto L_005D289C;
    case 173u: goto L_005D28AC;
    case 174u: goto L_005D28C4;
    case 175u: goto L_005D28E8;
    case 176u: goto L_005D2900;
    case 177u: goto L_005D2910;
    case 178u: goto L_005D2934;
    case 179u: goto L_005D2944;
    case 180u: goto L_005D2968;
    case 181u: goto L_005D2980;
    case 182u: goto L_005D29A0;
    case 183u: goto L_005D29BC;
    case 184u: goto L_005D29D0;
    case 185u: goto L_005D29F0;
    case 186u: goto L_005D2A10;
    case 187u: goto L_005D2A30;
    case 188u: goto L_005D2A50;
    case 189u: goto L_005D2A70;
    case 190u: goto L_005D2A90;
    case 191u: goto L_005D2AB0;
    case 192u: goto L_005D2AD0;
    case 193u: goto L_005D2AF8;
    case 194u: goto L_005D2B0C;
    case 195u: goto L_005D2B1C;
    case 196u: goto L_005D2B34;
    case 197u: goto L_005D2B50;
    case 198u: goto L_005D2B70;
    case 199u: goto L_005D2B98;
    case 200u: goto L_005D2BAC;
    case 201u: goto L_005D2BBC;
    case 202u: goto L_005D2BD4;
    case 203u: goto L_005D2BF0;
    case 204u: goto L_005D2C18;
    case 205u: goto L_005D2C2C;
    case 206u: goto L_005D2C3C;
    case 207u: goto L_005D2C54;
    case 208u: goto L_005D2C70;
    case 209u: goto L_005D2C98;
    case 210u: goto L_005D2CAC;
    case 211u: goto L_005D2CBC;
    case 212u: goto L_005D2CD4;
    case 213u: goto L_005D2CF0;
    case 214u: goto L_005D2D08;
    case 215u: goto L_005D2D24;
    case 216u: goto L_005D2D30;
    case 217u: goto L_005D2D4C;
    case 218u: goto L_005D2D58;
    case 219u: goto L_005D2D74;
    case 220u: goto L_005D2D80;
    case 221u: goto L_005D2D9C;
    case 222u: goto L_005D2DA8;
    case 223u: goto L_005D2DC4;
    case 224u: goto L_005D2DD0;
    case 225u: goto L_005D2DEC;
    case 226u: goto L_005D2DF8;
    case 227u: goto L_005D2E48;
    case 228u: goto L_005D2E58;
    case 229u: goto L_005D2EB0;
    case 230u: goto L_005D2ED8;
    case 231u: goto L_005D2EE4;
    case 232u: goto L_005D2F4C;
    case 233u: goto L_005D2F58;
    case 234u: goto L_005D2F74;
    case 235u: goto L_005D2F90;
    case 236u: goto L_005D2FBC;
    case 237u: goto L_005D2FD4;
    case 238u: goto L_005D2FE0;
    case 239u: goto L_005D2FF0;
    case 240u: goto L_005D2FF8;
    case 241u: goto L_005D3000;
    case 242u: goto L_005D300C;
    case 243u: goto L_005D3020;
    case 244u: goto L_005D3030;
    case 245u: goto L_005D3038;
    case 246u: goto L_005D3040;
    case 247u: goto L_005D304C;
    case 248u: goto L_005D306C;
    case 249u: goto L_005D3088;
    case 250u: goto L_005D30A0;
    case 251u: goto L_005D30B0;
    case 252u: goto L_005D30B8;
    case 253u: goto L_005D30C0;
    case 254u: goto L_005D30CC;
    case 255u: goto L_005D30E0;
    case 256u: goto L_005D30F0;
    case 257u: goto L_005D30F8;
    case 258u: goto L_005D3100;
    case 259u: goto L_005D310C;
    case 260u: goto L_005D3120;
    case 261u: goto L_005D3130;
    case 262u: goto L_005D3138;
    case 263u: goto L_005D3140;
    case 264u: goto L_005D314C;
    case 265u: goto L_005D3160;
    case 266u: goto L_005D3170;
    case 267u: goto L_005D3178;
    case 268u: goto L_005D3180;
    case 269u: goto L_005D318C;
    case 270u: goto L_005D31A0;
    case 271u: goto L_005D31B0;
    case 272u: goto L_005D31B8;
    case 273u: goto L_005D31C0;
    case 274u: goto L_005D31CC;
    case 275u: goto L_005D31E0;
    case 276u: goto L_005D31F0;
    case 277u: goto L_005D31F8;
    case 278u: goto L_005D3200;
    case 279u: goto L_005D320C;
    case 280u: goto L_005D3220;
    case 281u: goto L_005D3230;
    case 282u: goto L_005D3238;
    case 283u: goto L_005D3240;
    case 284u: goto L_005D324C;
    case 285u: goto L_005D3260;
    case 286u: goto L_005D3270;
    case 287u: goto L_005D3278;
    case 288u: goto L_005D3280;
    case 289u: goto L_005D328C;
    case 290u: goto L_005D32A0;
    case 291u: goto L_005D32B0;
    case 292u: goto L_005D32B8;
    case 293u: goto L_005D32C0;
    case 294u: goto L_005D32CC;
    case 295u: goto L_005D32E0;
    case 296u: goto L_005D32F0;
    case 297u: goto L_005D32F8;
    case 298u: goto L_005D3300;
    case 299u: goto L_005D330C;
    case 300u: goto L_005D3320;
    case 301u: goto L_005D3330;
    case 302u: goto L_005D3338;
    case 303u: goto L_005D3340;
    case 304u: goto L_005D334C;
    case 305u: goto L_005D3360;
    case 306u: goto L_005D3370;
    case 307u: goto L_005D3378;
    case 308u: goto L_005D3380;
    case 309u: goto L_005D338C;
    case 310u: goto L_005D33A0;
    case 311u: goto L_005D33B0;
    case 312u: goto L_005D33B8;
    case 313u: goto L_005D33C0;
    case 314u: goto L_005D33CC;
    case 315u: goto L_005D33E0;
    case 316u: goto L_005D33F0;
    case 317u: goto L_005D33F8;
    case 318u: goto L_005D3400;
    case 319u: goto L_005D340C;
    case 320u: goto L_005D3420;
    case 321u: goto L_005D3430;
    case 322u: goto L_005D3438;
    case 323u: goto L_005D3440;
    case 324u: goto L_005D344C;
    case 325u: goto L_005D3454;
    case 326u: goto L_005D3470;
    case 327u: goto L_005D3480;
    case 328u: goto L_005D3488;
    case 329u: goto L_005D3490;
    case 330u: goto L_005D349C;
    case 331u: goto L_005D34B0;
    case 332u: goto L_005D34C0;
    case 333u: goto L_005D34C8;
    case 334u: goto L_005D34D0;
    case 335u: goto L_005D34DC;
    case 336u: goto L_005D34F0;
    case 337u: goto L_005D3500;
    case 338u: goto L_005D3508;
    case 339u: goto L_005D3510;
    case 340u: goto L_005D351C;
    case 341u: goto L_005D3530;
    case 342u: goto L_005D3540;
    case 343u: goto L_005D3548;
    case 344u: goto L_005D3550;
    case 345u: goto L_005D355C;
    case 346u: goto L_005D3570;
    case 347u: goto L_005D3580;
    case 348u: goto L_005D358C;
    case 349u: goto L_005D3598;
    case 350u: goto L_005D35A8;
    case 351u: goto L_005D35B4;
    case 352u: goto L_005D35D0;
    case 353u: goto L_005D35E0;
    case 354u: goto L_005D35E8;
    case 355u: goto L_005D35F0;
    case 356u: goto L_005D35FC;
    case 357u: goto L_005D3610;
    case 358u: goto L_005D3620;
    case 359u: goto L_005D3628;
    case 360u: goto L_005D3630;
    case 361u: goto L_005D363C;
    case 362u: goto L_005D3650;
    case 363u: goto L_005D3660;
    case 364u: goto L_005D3668;
    case 365u: goto L_005D3670;
    case 366u: goto L_005D367C;
    case 367u: goto L_005D3690;
    case 368u: goto L_005D36A0;
    case 369u: goto L_005D36A8;
    case 370u: goto L_005D36B0;
    case 371u: goto L_005D36BC;
    case 372u: goto L_005D36D0;
    case 373u: goto L_005D36E0;
    case 374u: goto L_005D36E8;
    case 375u: goto L_005D36F0;
    case 376u: goto L_005D36FC;
    case 377u: goto L_005D3710;
    case 378u: goto L_005D3720;
    case 379u: goto L_005D3728;
    case 380u: goto L_005D3730;
    case 381u: goto L_005D373C;
    case 382u: goto L_005D3750;
    case 383u: goto L_005D3760;
    case 384u: goto L_005D3768;
    case 385u: goto L_005D3770;
    case 386u: goto L_005D377C;
    case 387u: goto L_005D3790;
    case 388u: goto L_005D37A0;
    case 389u: goto L_005D37A8;
    case 390u: goto L_005D37B0;
    case 391u: goto L_005D37BC;
    case 392u: goto L_005D37D0;
    case 393u: goto L_005D37E0;
    case 394u: goto L_005D37E8;
    case 395u: goto L_005D37F0;
    case 396u: goto L_005D37FC;
    case 397u: goto L_005D3820;
    case 398u: goto L_005D3830;
    case 399u: goto L_005D3840;
    case 400u: goto L_005D3848;
    case 401u: goto L_005D3850;
    case 402u: goto L_005D385C;
    case 403u: goto L_005D3870;
    case 404u: goto L_005D3880;
    case 405u: goto L_005D3888;
    case 406u: goto L_005D3890;
    case 407u: goto L_005D389C;
    case 408u: goto L_005D38B0;
    case 409u: goto L_005D38C0;
    case 410u: goto L_005D38C8;
    case 411u: goto L_005D38D0;
    case 412u: goto L_005D38DC;
    case 413u: goto L_005D38F0;
    case 414u: goto L_005D3900;
    case 415u: goto L_005D3908;
    case 416u: goto L_005D3910;
    case 417u: goto L_005D391C;
    case 418u: goto L_005D3930;
    case 419u: goto L_005D3940;
    case 420u: goto L_005D3948;
    case 421u: goto L_005D3950;
    case 422u: goto L_005D395C;
    case 423u: goto L_005D3970;
    case 424u: goto L_005D3980;
    case 425u: goto L_005D3988;
    case 426u: goto L_005D3990;
    case 427u: goto L_005D399C;
    case 428u: goto L_005D39B0;
    case 429u: goto L_005D39C0;
    case 430u: goto L_005D39C8;
    case 431u: goto L_005D39D0;
    case 432u: goto L_005D39DC;
    case 433u: goto L_005D39F0;
    case 434u: goto L_005D3A00;
    case 435u: goto L_005D3A08;
    case 436u: goto L_005D3A10;
    case 437u: goto L_005D3A1C;
    case 438u: goto L_005D3A24;
    case 439u: goto L_005D3A40;
    case 440u: goto L_005D3A50;
    case 441u: goto L_005D3A58;
    case 442u: goto L_005D3A60;
    case 443u: goto L_005D3A6C;
    case 444u: goto L_005D3A80;
    case 445u: goto L_005D3A90;
    case 446u: goto L_005D3A98;
    case 447u: goto L_005D3AA0;
    case 448u: goto L_005D3AAC;
    case 449u: goto L_005D3AC0;
    case 450u: goto L_005D3AD0;
    case 451u: goto L_005D3AD8;
    case 452u: goto L_005D3AE0;
    case 453u: goto L_005D3AEC;
    case 454u: goto L_005D3B00;
    case 455u: goto L_005D3B10;
    case 456u: goto L_005D3B18;
    case 457u: goto L_005D3B20;
    case 458u: goto L_005D3B2C;
    case 459u: goto L_005D3B40;
    case 460u: goto L_005D3B50;
    case 461u: goto L_005D3B58;
    case 462u: goto L_005D3B60;
    case 463u: goto L_005D3B6C;
    case 464u: goto L_005D3B80;
    case 465u: goto L_005D3B90;
    case 466u: goto L_005D3B98;
    case 467u: goto L_005D3BA0;
    case 468u: goto L_005D3BAC;
    case 469u: goto L_005D3BC0;
    case 470u: goto L_005D3BD0;
    case 471u: goto L_005D3BD8;
    case 472u: goto L_005D3BE0;
    case 473u: goto L_005D3BEC;
    case 474u: goto L_005D3C20;
    case 475u: goto L_005D3C30;
    case 476u: goto L_005D3C38;
    case 477u: goto L_005D3C40;
    case 478u: goto L_005D3C4C;
    case 479u: goto L_005D3C60;
    case 480u: goto L_005D3C70;
    case 481u: goto L_005D3C78;
    case 482u: goto L_005D3C80;
    case 483u: goto L_005D3C8C;
    case 484u: goto L_005D3CA0;
    case 485u: goto L_005D3CB0;
    case 486u: goto L_005D3CB8;
    case 487u: goto L_005D3CC0;
    case 488u: goto L_005D3CCC;
    case 489u: goto L_005D3CE0;
    case 490u: goto L_005D3CF0;
    case 491u: goto L_005D3CF8;
    case 492u: goto L_005D3D00;
    case 493u: goto L_005D3D0C;
    case 494u: goto L_005D3D20;
    case 495u: goto L_005D3D30;
    case 496u: goto L_005D3D38;
    case 497u: goto L_005D3D40;
    case 498u: goto L_005D3D4C;
    case 499u: goto L_005D3D60;
    case 500u: goto L_005D3D70;
    case 501u: goto L_005D3D78;
    case 502u: goto L_005D3D80;
    case 503u: goto L_005D3D8C;
    case 504u: goto L_005D3DA0;
    case 505u: goto L_005D3DB0;
    case 506u: goto L_005D3DB8;
    case 507u: goto L_005D3DC0;
    case 508u: goto L_005D3DCC;
    case 509u: goto L_005D3DE0;
    case 510u: goto L_005D3DF0;
    case 511u: goto L_005D3DF8;
    case 512u: goto L_005D3E00;
    case 513u: goto L_005D3E0C;
    case 514u: goto L_005D3E20;
    case 515u: goto L_005D3E30;
    case 516u: goto L_005D3E38;
    case 517u: goto L_005D3E40;
    case 518u: goto L_005D3E4C;
    case 519u: goto L_005D3E60;
    case 520u: goto L_005D3E70;
    case 521u: goto L_005D3E78;
    case 522u: goto L_005D3E80;
    case 523u: goto L_005D3E8C;
    case 524u: goto L_005D3EA0;
    case 525u: goto L_005D3EB0;
    case 526u: goto L_005D3EB8;
    case 527u: goto L_005D3EC0;
    case 528u: goto L_005D3ECC;
    case 529u: goto L_005D3ED4;
    case 530u: goto L_005D3EF0;
    case 531u: goto L_005D3F00;
    case 532u: goto L_005D3F08;
    case 533u: goto L_005D3F10;
    case 534u: goto L_005D3F1C;
    case 535u: goto L_005D3F30;
    case 536u: goto L_005D3F40;
    case 537u: goto L_005D3F48;
    case 538u: goto L_005D3F50;
    case 539u: goto L_005D3F5C;
    case 540u: goto L_005D3F64;
    case 541u: goto L_005D3F6C;
    case 542u: goto L_005D3F74;
    case 543u: goto L_005D3F7C;
    case 544u: goto L_005D3F84;
    case 545u: goto L_005D3F8C;
    case 546u: goto L_005D3F94;
    case 547u: goto L_005D3F9C;
    case 548u: goto L_005D3FA4;
    case 549u: goto L_005D3FAC;
    case 550u: goto L_005D3FB4;
    case 551u: goto L_005D3FBC;
    case 552u: goto L_005D3FC4;
    case 553u: goto L_005D3FCC;
    case 554u: goto L_005D3FD4;
    case 555u: goto L_005D3FDC;
    case 556u: goto L_005D3FE4;
    case 557u: goto L_005D3FEC;
    case 558u: goto L_005D3FF8;
    default: bad_entry(c, 0x005D0000u); return;
    }
L_005D0000:
    st64((c.r[29].w[0] + 96u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0010u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0010u) [[unlikely]] return; }
    goto L_005D0010;
L_005D000C:
    st64((c.r[29].w[0] + 112u), 0ull);
    c.budget -= 1;
L_005D0010:
    set32(c.r[11], 0u + 4u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[11].d[0]);
    set32(c.r[3], 0u + 19u);
    c.budget -= 4;
L_005D0020:
    st64((c.r[29].w[0] + 8u), 0ull);
    c.budget -= 1;
L_005D0024:
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 25824u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D007Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D007Cu) [[unlikely]] return; }
L_005D007C:
    set32(c.r[12], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 32u);
    st64((c.r[29].w[0]), c.r[12].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 25904u);
    st64((c.r[29].w[0] + 32u), c.r[12].d[0]);
    set32(c.r[6], 0u + 128u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[5].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[12].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[12].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[12].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[3].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D00ECu); st64((c.r[29].w[0] + 112u), c.r[5].d[0]);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D00ECu) [[unlikely]] return; }
L_005D00EC:
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[12], 0u + 16u);
    st64((c.r[29].w[0]), c.r[5].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 25984u);
    st64((c.r[29].w[0] + 32u), c.r[5].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 40u), c.r[12].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[5].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[5].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[12].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[12].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D015Cu); st64((c.r[29].w[0] + 112u), c.r[5].d[0]);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D015Cu) [[unlikely]] return; }
L_005D015C:
    set32(c.r[5], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0]), c.r[5].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 32u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26064u);
    st64((c.r[29].w[0] + 40u), c.r[6].d[0]);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D01D0u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D01D0u) [[unlikely]] return; }
L_005D01D0:
    set32(c.r[8], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], 0u + 16u);
    st64((c.r[29].w[0]), c.r[8].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26144u);
    st64((c.r[29].w[0] + 32u), c.r[8].d[0]);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0240u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0240u) [[unlikely]] return; }
L_005D0240:
    set32(c.r[2], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[6], 0u + 32u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26224u);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D02B0u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D02B0u) [[unlikely]] return; }
L_005D02B0:
    set32(c.r[8], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0]), c.r[8].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26304u);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 40u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D031Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D031Cu) [[unlikely]] return; }
L_005D031C:
    set32(c.r[12], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 32u);
    st64((c.r[29].w[0]), c.r[12].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26384u);
    st64((c.r[29].w[0] + 32u), c.r[12].d[0]);
    set32(c.r[6], 0u + 128u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[5].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[12].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[12].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[12].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[3].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D038Cu); st64((c.r[29].w[0] + 112u), c.r[5].d[0]);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D038Cu) [[unlikely]] return; }
L_005D038C:
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[12], 0u + 16u);
    st64((c.r[29].w[0]), c.r[5].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26464u);
    st64((c.r[29].w[0] + 32u), c.r[5].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 40u), c.r[12].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[5].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[5].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[12].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[12].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D03FCu); st64((c.r[29].w[0] + 112u), c.r[5].d[0]);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D03FCu) [[unlikely]] return; }
L_005D03FC:
    set32(c.r[2], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[6], 0u + 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[3], 0u + 19u);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26544u);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0470u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0470u) [[unlikely]] return; }
L_005D0470:
    set32(c.r[8], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], 0u + 16u);
    st64((c.r[29].w[0]), c.r[8].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26624u);
    st64((c.r[29].w[0] + 32u), c.r[8].d[0]);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D04E4u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D04E4u) [[unlikely]] return; }
L_005D04E4:
    set32(c.r[5], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0]), c.r[5].d[0]);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[7].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 24u), c.r[7].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 32u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26704u);
    st64((c.r[29].w[0] + 40u), c.r[6].d[0]);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 48u), c.r[7].d[0]);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D055Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D055Cu) [[unlikely]] return; }
L_005D055C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0]), c.r[4].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[4].d[0]);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26784u);
    st64((c.r[29].w[0] + 40u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D05CCu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D05CCu) [[unlikely]] return; }
L_005D05CC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[12], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 40u), c.r[12].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26864u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[12].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[12].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D063Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D063Cu) [[unlikely]] return; }
L_005D063C:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[10], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[10].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 40u), c.r[10].d[0]);
    set32(c.r[4], c.r[4].w[0] + 26944u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[10].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D06ACu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D06ACu) [[unlikely]] return; }
L_005D06AC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 27024u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0718u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0718u) [[unlikely]] return; }
L_005D0718:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[10], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[10].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 40u), c.r[10].d[0]);
    set32(c.r[4], c.r[4].w[0] + 27104u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[10].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0788u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0788u) [[unlikely]] return; }
L_005D0788:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[12], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 27184u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[12].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[12].d[0]);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D07FCu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D07FCu) [[unlikely]] return; }
L_005D07FC:
    st64((c.r[29].w[0]), 0ull);
    c.budget -= 1;
L_005D0800:
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 27264u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[3].d[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0868u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0868u) [[unlikely]] return; }
L_005D0868:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 27344u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[2].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D08D4u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D08D4u) [[unlikely]] return; }
L_005D08D4:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 27424u);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 15u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0940u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0940u) [[unlikely]] return; }
L_005D0940:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 27504u);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 3u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D09ACu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D09ACu) [[unlikely]] return; }
L_005D09AC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 27584u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[11], 0u + 15u);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0A20u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0A20u) [[unlikely]] return; }
L_005D0A20:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 8u), c.r[11].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[9], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[3], 0u + 14u);
    st64((c.r[29].w[0] + 40u), c.r[9].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 27664u);
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[6], 0u + 10u);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[11].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0A90u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0A90u) [[unlikely]] return; }
L_005D0A90:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 8u), c.r[11].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 27744u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[2].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0AFCu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0AFCu) [[unlikely]] return; }
L_005D0AFC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[12], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 40u), c.r[12].d[0]);
    set32(c.r[4], c.r[4].w[0] + 27824u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[12].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[12].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[8].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0B6Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0B6Cu) [[unlikely]] return; }
L_005D0B6C:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 27904u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[8].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0BD8u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0BD8u) [[unlikely]] return; }
L_005D0BD8:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[12], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 27984u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[12].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[12].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0C48u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0C48u) [[unlikely]] return; }
L_005D0C48:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[10], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[10].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 40u), c.r[10].d[0]);
    set32(c.r[4], c.r[4].w[0] + 28064u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[10].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0CB8u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0CB8u) [[unlikely]] return; }
L_005D0CB8:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 28144u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0D24u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0D24u) [[unlikely]] return; }
L_005D0D24:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 28224u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[8].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0D90u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0D90u) [[unlikely]] return; }
L_005D0D90:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 28304u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[3].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0DFCu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0DFCu) [[unlikely]] return; }
L_005D0DFC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 28384u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[3].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0E68u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0E68u) [[unlikely]] return; }
L_005D0E68:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[10], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[10].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 40u), c.r[10].d[0]);
    set32(c.r[4], c.r[4].w[0] + 28464u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    set32(c.r[6], 0u + 24u);
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[10].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0ED8u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0ED8u) [[unlikely]] return; }
L_005D0ED8:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 28544u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[3].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0F44u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0F44u) [[unlikely]] return; }
L_005D0F44:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), 0ull);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 28624u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 3u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[3].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D0FB0u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D0FB0u) [[unlikely]] return; }
L_005D0FB0:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[12], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[3], 0u + 14u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 40u), c.r[12].d[0]);
    set32(c.r[4], c.r[4].w[0] + 28704u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), 0ull);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[12].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[12].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1020u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1020u) [[unlikely]] return; }
L_005D1020:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[12], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[12].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[3], 0u + 14u);
    st64((c.r[29].w[0] + 40u), c.r[12].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 28784u);
    st64((c.r[29].w[0] + 56u), c.r[6].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 72u), c.r[12].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[12].d[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1094u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1094u) [[unlikely]] return; }
L_005D1094:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[10], 0u + 10u);
    st64((c.r[29].w[0] + 8u), c.r[10].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 40u), c.r[10].d[0]);
    set32(c.r[4], c.r[4].w[0] + 28864u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[10].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[3].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1104u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1104u) [[unlikely]] return; }
L_005D1104:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[11], 0u + 2u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 28944u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 56u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[11].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1170u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1170u) [[unlikely]] return; }
L_005D1170:
    set32(c.r[12], 0u + 2u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0]), c.r[12].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[5].d[0]);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29024u);
    st64((c.r[29].w[0] + 32u), c.r[12].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[5].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[12].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[12].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[11].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[12].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D11E0u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D11E0u) [[unlikely]] return; }
L_005D11E0:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 24u), 0ull);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 40u), c.r[6].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29104u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1250u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1250u) [[unlikely]] return; }
L_005D1250:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[11], 0u + 5u);
    st64((c.r[29].w[0] + 8u), c.r[11].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[5], 0u + 9u);
    st64((c.r[29].w[0] + 40u), c.r[11].d[0]);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29184u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 64u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[11].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D12BCu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D12BCu) [[unlikely]] return; }
L_005D12BC:
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], 0u + 8u);
    st64((c.r[29].w[0]), c.r[5].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 29264u);
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1330u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1330u) [[unlikely]] return; }
L_005D1330:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29344u);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 9u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D139Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D139Cu) [[unlikely]] return; }
L_005D139C:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29424u);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 9u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1408u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1408u) [[unlikely]] return; }
L_005D1408:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29504u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[11], 0u + 9u);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D147Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D147Cu) [[unlikely]] return; }
L_005D147C:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29584u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[5], 0u + 12u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[6], 0u + 8u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[11], 0u + 9u);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D14F0u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D14F0u) [[unlikely]] return; }
L_005D14F0:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[5].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29664u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[8].d[0]);
    set32(c.r[11], 0u + 5u);
    st64((c.r[29].w[0] + 88u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 96u), 0ull);
    st64((c.r[29].w[0] + 104u), c.r[5].d[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D155Cu); st64((c.r[29].w[0] + 112u), c.r[8].d[0]);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D155Cu) [[unlikely]] return; }
L_005D155C:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 16u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[11], 0u + 5u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29744u);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 64u), c.r[11].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[11].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D15CCu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D15CCu) [[unlikely]] return; }
L_005D15CC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], 0u + 10u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 11u);
    st64((c.r[29].w[0] + 32u), 0ull);
    st64((c.r[29].w[0] + 40u), c.r[6].d[0]);
    set32(c.r[3], 0u + 7u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[11], 0u + 5u);
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 29824u);
    st64((c.r[29].w[0] + 72u), c.r[6].d[0]);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 80u), c.r[8].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[11].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1644u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1644u) [[unlikely]] return; }
L_005D1644:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[5], 0u + 9u);
    st64((c.r[29].w[0] + 40u), c.r[3].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[11], 0u + 5u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29904u);
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 72u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[11].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[3].d[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D16B4u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D16B4u) [[unlikely]] return; }
L_005D16B4:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[7], 0u + 10u);
    st64((c.r[29].w[0] + 8u), c.r[7].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[8].d[0]);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[5], 0u + 7u);
    st64((c.r[29].w[0] + 40u), c.r[7].d[0]);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 29984u);
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[5], 0u + 8u);
    st64((c.r[29].w[0] + 72u), c.r[7].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 80u), c.r[8].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 96u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), c.r[2].d[0]);
    set32(c.r[11], 0u + 5u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D172Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D172Cu) [[unlikely]] return; }
L_005D172C:
    set32(c.r[3], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 8u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 30064u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[3].d[0]);
    set32(c.r[11], 0u + 14u);
    st64((c.r[29].w[0] + 72u), 0ull);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1798u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1798u) [[unlikely]] return; }
L_005D1798:
    set32(c.r[3], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 30144u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 32u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[3].d[0]);
    set32(c.r[11], 0u + 14u);
    st64((c.r[29].w[0] + 72u), 0ull);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1804u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1804u) [[unlikely]] return; }
L_005D1804:
    set32(c.r[3], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 30224u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 32u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[3].d[0]);
    set32(c.r[11], 0u + 14u);
    st64((c.r[29].w[0] + 72u), 0ull);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1870u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1870u) [[unlikely]] return; }
L_005D1870:
    set32(c.r[3], 0u + 5u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 64u);
    st64((c.r[29].w[0]), c.r[3].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    set32(c.r[2], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 30304u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[5], 0u + 11u);
    st64((c.r[29].w[0] + 32u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 56u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[3].d[0]);
    set32(c.r[11], 0u + 14u);
    st64((c.r[29].w[0] + 72u), 0ull);
    st64((c.r[29].w[0] + 80u), 0ull);
    st64((c.r[29].w[0] + 88u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D18DCu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D18DCu) [[unlikely]] return; }
L_005D18DC:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 30384u);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[5], 0u + 15u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 17u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1948u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1948u) [[unlikely]] return; }
L_005D1948:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 8u), c.r[6].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 24u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 30464u);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[5], 0u + 15u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[11], 0u + 17u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D19B4u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D19B4u) [[unlikely]] return; }
L_005D19B4:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[8].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[5], 0u + 15u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 48u), 0ull);
    set32(c.r[4], c.r[4].w[0] + 30544u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[6], 0u + 16u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 72u), 0ull);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    set32(c.r[11], 0u + 18u);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1A24u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1A24u) [[unlikely]] return; }
L_005D1A24:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 40u), c.r[4].d[0]);
    set32(c.r[5], 0u + 15u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), 0ull);
    set32(c.r[11], 0u + 18u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1A9Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1A9Cu) [[unlikely]] return; }
L_005D1A9C:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[2], 0u + 24u);
    st64((c.r[29].w[0] + 40u), c.r[2].d[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[4], c.r[4].w[0] + 30704u);
    st64((c.r[29].w[0] + 72u), 0ull);
    set32(c.r[5], 0u + 15u);
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 18u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1B18u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1B18u) [[unlikely]] return; }
L_005D1B18:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], 0u + 17u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 40u), c.r[4].d[0]);
    set32(c.r[5], 0u + 15u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 56u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 30784u);
    st64((c.r[29].w[0] + 64u), c.r[2].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 72u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), 0ull);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 104u), 0ull);
    set32(c.r[11], 0u + 14u);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1B90u); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1B90u) [[unlikely]] return; }
L_005D1B90:
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[4], 0u + 4u);
    st64((c.r[29].w[0] + 8u), c.r[4].d[0]);
    set32(c.r[2], 0u + 14u);
    st64((c.r[29].w[0] + 16u), 0ull);
    set32(c.r[5], 0u + 17u);
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    set32(c.r[7], 0u + 24u);
    st64((c.r[29].w[0] + 32u), 0ull);
    set32(c.r[3], 0u + 19u);
    st64((c.r[29].w[0] + 40u), c.r[4].d[0]);
    set32(c.r[2], 0u + 5u);
    st64((c.r[29].w[0] + 48u), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 56u), c.r[5].d[0]);
    set32(c.r[4], c.r[4].w[0] + 30864u);
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[5], 0u + 15u);
    st64((c.r[29].w[0] + 72u), c.r[7].d[0]);
    set32(c.r[6], 0u + 32u);
    st64((c.r[29].w[0] + 80u), 0ull);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[3].d[0]);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[2].d[0]);
    set32(c.r[9], 0u - 1u);
    st64((c.r[29].w[0] + 104u), 0ull);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 18u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1C0Cu); st64((c.r[29].w[0] + 112u), 0ull);  if (depth < kMaxDepth) unit_0071(c, 351u, depth + 1u); else { c.pc = 0x002C7CD0u; return; } if (c.pc != 0x005D1C0Cu) [[unlikely]] return; }
L_005D1C0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_005D1C20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 31000u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 31008u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 31004u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 31016u), 0u);
    st32((c.r[3].w[0] + 31012u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 31020u), c.r[5].w[0]);  c.pc = t; return; }
L_005D1C60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 31024u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 31040u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 31028u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 31048u), 0u);
    st32((c.r[3].w[0] + 31032u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 31060u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 31044u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 31072u), 0u);
    st32((c.r[3].w[0] + 31056u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 31080u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 31064u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 31092u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 31076u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 31088u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 31096u), c.r[5].w[0]);  c.pc = t; return; }
L_005D1CE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 31120u);
    set32(c.r[5], c.r[5].w[0] + 31166u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 20784u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D1D00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 31184u);
    set32(c.r[5], c.r[5].w[0] + 31192u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23920u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D1D20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 31220u), 0u);
    st32((c.r[4].w[0] + 31216u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 31228u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 31224u), 0u);  c.pc = t; return; }
L_005D1D50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 31280u);
    set32(c.r[5], c.r[5].w[0] + 31341u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 20904u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D1D70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 31360u);
    set32(c.r[5], c.r[5].w[0] + 31552u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1D90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D1D90u) [[unlikely]] return; }
L_005D1D90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27616u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] + 15664u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1DB4u); st32((c.r[28].w[0] - 27616u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D1DB4u) [[unlikely]] return; }
L_005D1DB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D1DC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 31568u);
    set32(c.r[5], c.r[5].w[0] + 31584u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 31608u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D1DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 31608u);
    set32(c.r[5], c.r[5].w[0] + 31616u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1E04u); set32(c.r[6], c.r[6].w[0] - 19792u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D1E04u) [[unlikely]] return; }
L_005D1E04:
    set32(c.r[4], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 15680u), c.r[4].w[0]);
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 15684u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 15688u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D1E40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 31640u);
    set32(c.r[5], c.r[5].w[0] + 31648u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D1E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 31664u);
    set32(c.r[5], c.r[5].w[0] + 31680u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1E88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D1E88u) [[unlikely]] return; }
L_005D1E88:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27608u), 0u);  if (t) { goto L_005D1EAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1E9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D1E9Cu) [[unlikely]] return; }
L_005D1E9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1EACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D1EACu) [[unlikely]] return; }
L_005D1EAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27608u);
    set32(c.r[5], c.r[5].w[0] - 17600u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1EC4u); set32(c.r[6], c.r[6].w[0] + 15696u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D1EC4u) [[unlikely]] return; }
L_005D1EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D1EE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27604u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] + 15712u);
    c.budget -= 9;
    { st32((c.r[28].w[0] - 27604u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003981B0u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 13u, depth); }
L_005D1F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 31712u);
    set32(c.r[5], c.r[5].w[0] + 31728u);
    c.budget -= 6;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D1F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 31752u);
    set32(c.r[5], c.r[5].w[0] + 31760u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1F50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D1F50u) [[unlikely]] return; }
L_005D1F50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27600u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] + 15728u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1F74u); st32((c.r[28].w[0] - 27600u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D1F74u) [[unlikely]] return; }
L_005D1F74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D1F80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 31776u);
    set32(c.r[5], c.r[5].w[0] + 31836u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D1FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 31856u);
    set32(c.r[5], c.r[5].w[0] + 31864u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1FC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D1FC0u) [[unlikely]] return; }
L_005D1FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27596u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] + 15744u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D1FE4u); st32((c.r[28].w[0] - 27596u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D1FE4u) [[unlikely]] return; }
L_005D1FE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D1FF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 31880u);
    set32(c.r[5], c.r[5].w[0] + 31888u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18040u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2010:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 31912u);
    set32(c.r[5], c.r[5].w[0] + 32047u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18016u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2030:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 32072u);
    set32(c.r[5], c.r[5].w[0] + 32118u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 20904u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 32136u);
    set32(c.r[5], c.r[5].w[0] + 32144u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32192u);
    set32(c.r[5], c.r[5].w[0] + 32218u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2098u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2098u) [[unlikely]] return; }
L_005D2098:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27592u), 0u);  if (t) { goto L_005D20BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D20ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D20ACu) [[unlikely]] return; }
L_005D20AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D20BCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D20BCu) [[unlikely]] return; }
L_005D20BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27592u);
    set32(c.r[5], c.r[5].w[0] + 1472u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D20D4u); set32(c.r[6], c.r[6].w[0] + 15760u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D20D4u) [[unlikely]] return; }
L_005D20D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D20F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32240u);
    set32(c.r[5], c.r[5].w[0] + 32256u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2110u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2110u) [[unlikely]] return; }
L_005D2110:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 32248u);
    set32(c.r[5], c.r[5].w[0] + 32265u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2128u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2128u) [[unlikely]] return; }
L_005D2128:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D2140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16336u);
    set32(c.r[5], c.r[5].w[0] - 25088u);
    set32(c.r[6], c.r[6].w[0] + 6944u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D216Cu); set32(c.r[8], 0u + 14u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005D216Cu) [[unlikely]] return; }
L_005D216C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26704u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2184u); set32(c.r[6], c.r[6].w[0] + 16320u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2184u) [[unlikely]] return; }
L_005D2184:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 29464u);
    set32(c.r[5], c.r[5].w[0] - 29339u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D21A0u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D21A0u) [[unlikely]] return; }
L_005D21A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D21B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 29312u);
    set32(c.r[5], c.r[5].w[0] - 29264u);
    c.budget -= 6;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D21D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 29240u);
    set32(c.r[5], c.r[5].w[0] - 29232u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D21F4u); set32(c.r[6], c.r[6].w[0] - 29176u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D21F4u) [[unlikely]] return; }
L_005D21F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 3;
L_005D2200:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27560u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] + 16392u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2218u); st32((c.r[28].w[0] - 27560u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2218u) [[unlikely]] return; }
L_005D2218:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D2230:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 29216u);
    set32(c.r[5], c.r[5].w[0] - 29200u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27552u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27548u)));  goto L_005D2298; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2270u); set32(c.r[4], c.r[4].w[0] + 16432u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005D2270u) [[unlikely]] return; }
L_005D2270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16432u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D228Cu); set32(c.r[6], c.r[6].w[0] + 16408u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D228Cu) [[unlikely]] return; }
L_005D228C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 27552u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27548u)));
    c.budget -= 3;
L_005D2298:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_005D22D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D22ACu); set32(c.r[4], c.r[4].w[0] + 16464u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005D22ACu) [[unlikely]] return; }
L_005D22AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16464u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D22C8u); set32(c.r[6], c.r[6].w[0] + 16448u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D22C8u) [[unlikely]] return; }
L_005D22C8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 27548u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_005D22D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D22E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 29176u);
    set32(c.r[5], c.r[5].w[0] - 29168u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2300u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2300u) [[unlikely]] return; }
L_005D2300:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[4].w[0] + 16496u);
    set32(c.r[5], c.r[5].w[0] - 25088u);
    set32(c.r[6], c.r[6].w[0] + 6944u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2324u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005D2324u) [[unlikely]] return; }
L_005D2324:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 29328u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D233Cu); set32(c.r[6], c.r[6].w[0] + 16480u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D233Cu) [[unlikely]] return; }
L_005D233C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D2350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 29152u);
    set32(c.r[5], c.r[5].w[0] - 29136u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 22304u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2370:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 29072u);
    set32(c.r[5], c.r[5].w[0] - 29064u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2390:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 29048u);
    set32(c.r[5], c.r[5].w[0] - 28982u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D23B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 28960u);
    set32(c.r[5], c.r[5].w[0] - 28944u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D23D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 28928u);
    set32(c.r[5], c.r[5].w[0] - 28912u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23832u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D23F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28888u);
    set32(c.r[5], c.r[5].w[0] - 28880u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 28864u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 28864u);
    set32(c.r[5], c.r[5].w[0] - 28841u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2434u); set32(c.r[6], c.r[6].w[0] - 19792u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2434u) [[unlikely]] return; }
L_005D2434:
    set32(c.r[4], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16512u), c.r[4].w[0]);
    set32(c.r[5], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 16516u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 16520u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D2470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 28824u);
    set32(c.r[5], c.r[5].w[0] - 28808u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2498u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2498u) [[unlikely]] return; }
L_005D2498:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27540u), 0u);  if (t) { goto L_005D24BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D24ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D24ACu) [[unlikely]] return; }
L_005D24AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D24BCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D24BCu) [[unlikely]] return; }
L_005D24BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27540u);
    set32(c.r[5], c.r[5].w[0] + 8240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D24D4u); set32(c.r[6], c.r[6].w[0] + 16528u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D24D4u) [[unlikely]] return; }
L_005D24D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D24F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 28784u);
    set32(c.r[5], c.r[5].w[0] - 28704u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 31120u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 28688u);
    set32(c.r[5], c.r[5].w[0] - 25577u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19672u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 21072u);
    set32(c.r[5], c.r[5].w[0] - 20551u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2558u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2558u) [[unlikely]] return; }
L_005D2558:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27536u), 0u);  if (t) { goto L_005D257C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D256Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D256Cu) [[unlikely]] return; }
L_005D256C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D257Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D257Cu) [[unlikely]] return; }
L_005D257C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27536u);
    set32(c.r[5], c.r[5].w[0] + 32336u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2594u); set32(c.r[6], c.r[6].w[0] + 16544u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2594u) [[unlikely]] return; }
L_005D2594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D25B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x14030000u);
    st32((c.r[2].w[0] - 20528u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[3].d[0] | 9ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 20520u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 10ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] - 20512u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16576u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D25F4u); st32((c.r[2].w[0] - 20504u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005D25F4u) [[unlikely]] return; }
L_005D25F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16576u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2610u); set32(c.r[6], c.r[6].w[0] + 16560u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2610u) [[unlikely]] return; }
L_005D2610:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D2620:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 20072u);
    set32(c.r[5], c.r[5].w[0] - 20054u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 20032u);
    set32(c.r[5], c.r[5].w[0] - 19993u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 19968u);
    set32(c.r[5], c.r[5].w[0] - 19923u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23832u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 19904u);
    set32(c.r[5], c.r[5].w[0] - 19856u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D26A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 19832u);
    set32(c.r[5], c.r[5].w[0] - 19824u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D26C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 19816u);
    set32(c.r[5], c.r[5].w[0] - 19808u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 23872u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D26E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    set32(c.r[5], c.r[5].w[0] - 19736u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2704u); set32(c.r[6], c.r[6].w[0] + 23920u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2704u) [[unlikely]] return; }
L_005D2704:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2710u); set32(c.r[4], c.r[4].w[0] + 16608u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005D2710u) [[unlikely]] return; }
L_005D2710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16608u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D272Cu); set32(c.r[6], c.r[6].w[0] + 16592u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D272Cu) [[unlikely]] return; }
L_005D272C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[4], c.r[4].w[0] + 16640u);
    set32(c.r[5], c.r[5].w[0] + 20000u);
    set32(c.r[6], c.r[6].w[0] + 18816u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2750u); set32(c.r[8], 0u + 10u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005D2750u) [[unlikely]] return; }
L_005D2750:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19968u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2768u); set32(c.r[6], c.r[6].w[0] + 16624u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2768u) [[unlikely]] return; }
L_005D2768:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2774u); set32(c.r[4], c.r[4].w[0] + 16688u);  if (depth < kMaxDepth) unit_0071(c, 352u, depth + 1u); else { c.pc = 0x002C7D90u; return; } if (c.pc != 0x005D2774u) [[unlikely]] return; }
L_005D2774:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D2780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 19720u);
    set32(c.r[5], c.r[5].w[0] - 19352u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D27A4u); set32(c.r[6], c.r[6].w[0] + 19328u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D27A4u) [[unlikely]] return; }
L_005D27A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + 16784u);
    set32(c.r[5], c.r[5].w[0] - 25088u);
    set32(c.r[6], c.r[6].w[0] + 6944u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D27C8u); c.r[8].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005D27C8u) [[unlikely]] return; }
L_005D27C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00310000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 29744u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D27E0u); set32(c.r[6], c.r[6].w[0] + 16760u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D27E0u) [[unlikely]] return; }
L_005D27E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D27F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] - 19284u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] - 19316u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 19268u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 19252u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 19328u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 19324u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 19320u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 19312u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 19308u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19328u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 19304u), c.r[3].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 28;
    { st32((c.r[2].w[0] - 19248u), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00317450u | kUnwind; return; } [[clang::musttail]] return unit_0085(c, 298u, depth); }
L_005D2860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 19232u);
    set32(c.r[5], c.r[5].w[0] - 18406u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2888u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2888u) [[unlikely]] return; }
L_005D2888:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27512u), 0u);  if (t) { goto L_005D28AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D289Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D289Cu) [[unlikely]] return; }
L_005D289C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D28ACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D28ACu) [[unlikely]] return; }
L_005D28AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27512u);
    set32(c.r[5], c.r[5].w[0] - 4096u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D28C4u); set32(c.r[6], c.r[6].w[0] + 16800u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D28C4u) [[unlikely]] return; }
L_005D28C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[4].w[0] + 16832u);
    set32(c.r[5], c.r[5].w[0] - 25088u);
    set32(c.r[6], c.r[6].w[0] + 6944u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D28E8u); set32(c.r[8], 0u + 10u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005D28E8u) [[unlikely]] return; }
L_005D28E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16560u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2900u); set32(c.r[6], c.r[6].w[0] + 16816u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2900u) [[unlikely]] return; }
L_005D2900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D2910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 18368u);
    set32(c.r[5], c.r[5].w[0] - 18147u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2934u); set32(c.r[6], c.r[6].w[0] + 23872u);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2934u) [[unlikely]] return; }
L_005D2934:
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2944u); st32((c.r[29].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x005D2944u) [[unlikely]] return; }
L_005D2944:
    st32((c.r[28].w[0] - 27504u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 27500u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 27504u);
    set32(c.r[5], c.r[5].w[0] - 12992u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2968u); set32(c.r[6], c.r[6].w[0] + 16872u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2968u) [[unlikely]] return; }
L_005D2968:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005D2980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 27472u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_005D29C8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D29A0u); set32(c.r[4], c.r[4].w[0] + 16912u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x005D29A0u) [[unlikely]] return; }
L_005D29A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[5], c.r[5].w[0] - 25552u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D29BCu); set32(c.r[6], c.r[6].w[0] + 16888u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D29BCu) [[unlikely]] return; }
L_005D29BC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 27472u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_005D29C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D29D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 18128u);
    set32(c.r[5], c.r[5].w[0] - 18120u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19952u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D29F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 18104u);
    set32(c.r[5], c.r[5].w[0] - 18062u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 20024u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2A10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 18040u);
    set32(c.r[5], c.r[5].w[0] - 18032u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18128u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2A30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 18016u);
    set32(c.r[5], c.r[5].w[0] - 17969u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2A50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 17952u);
    set32(c.r[5], c.r[5].w[0] - 17936u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18016u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2A70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 17912u);
    set32(c.r[5], c.r[5].w[0] - 17904u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18128u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2A90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 17888u);
    set32(c.r[5], c.r[5].w[0] - 17827u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 18104u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2AB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 17808u);
    set32(c.r[5], c.r[5].w[0] - 17757u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 17736u);
    set32(c.r[5], c.r[5].w[0] - 17589u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2AF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2AF8u) [[unlikely]] return; }
L_005D2AF8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27468u), 0u);  if (t) { goto L_005D2B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2B0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D2B0Cu) [[unlikely]] return; }
L_005D2B0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2B1Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D2B1Cu) [[unlikely]] return; }
L_005D2B1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27468u);
    set32(c.r[5], c.r[5].w[0] - 6400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2B34u); set32(c.r[6], c.r[6].w[0] + 16928u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2B34u) [[unlikely]] return; }
L_005D2B34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D2B50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 17560u);
    set32(c.r[5], c.r[5].w[0] - 17552u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] + 19432u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CC580u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 43u, depth); }
L_005D2B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 17392u);
    set32(c.r[5], c.r[5].w[0] - 17376u);
    set32(c.r[6], c.r[6].w[0] + 31360u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2B98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2B98u) [[unlikely]] return; }
L_005D2B98:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27464u), 0u);  if (t) { goto L_005D2BBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2BACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D2BACu) [[unlikely]] return; }
L_005D2BAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2BBCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D2BBCu) [[unlikely]] return; }
L_005D2BBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27464u);
    set32(c.r[5], c.r[5].w[0] + 29072u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2BD4u); set32(c.r[6], c.r[6].w[0] + 16944u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2BD4u) [[unlikely]] return; }
L_005D2BD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D2BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 17352u);
    set32(c.r[5], c.r[5].w[0] - 17331u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2C18u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2C18u) [[unlikely]] return; }
L_005D2C18:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27460u), 0u);  if (t) { goto L_005D2C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2C2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D2C2Cu) [[unlikely]] return; }
L_005D2C2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2C3Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D2C3Cu) [[unlikely]] return; }
L_005D2C3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27460u);
    set32(c.r[5], c.r[5].w[0] + 9232u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2C54u); set32(c.r[6], c.r[6].w[0] + 16960u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2C54u) [[unlikely]] return; }
L_005D2C54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D2C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 17304u);
    set32(c.r[5], c.r[5].w[0] - 17159u);
    set32(c.r[6], c.r[6].w[0] + 31184u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2C98u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 43u, depth + 1u); else { c.pc = 0x002CC580u; return; } if (c.pc != 0x005D2C98u) [[unlikely]] return; }
L_005D2C98:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27456u), 0u);  if (t) { goto L_005D2CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2CACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005D2CACu) [[unlikely]] return; }
L_005D2CAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2CBCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005D2CBCu) [[unlikely]] return; }
L_005D2CBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 27456u);
    set32(c.r[5], c.r[5].w[0] + 11072u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2CD4u); set32(c.r[6], c.r[6].w[0] + 16976u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2CD4u) [[unlikely]] return; }
L_005D2CD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005D2CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 20880u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2D08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0093(c, 53u, depth + 1u); else { c.pc = 0x0034C790u; return; } if (c.pc != 0x005D2D08u) [[unlikely]] return; }
L_005D2D08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 20880u);
    set32(c.r[5], c.r[5].w[0] - 14576u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2D24u); set32(c.r[6], c.r[6].w[0] + 20864u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2D24u) [[unlikely]] return; }
L_005D2D24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2D30u); set32(c.r[4], c.r[4].w[0] + 20976u);  if (depth < kMaxDepth) unit_0095(c, 201u, depth + 1u); else { c.pc = 0x00357090u; return; } if (c.pc != 0x005D2D30u) [[unlikely]] return; }
L_005D2D30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 20976u);
    set32(c.r[5], c.r[5].w[0] + 28720u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2D4Cu); set32(c.r[6], c.r[6].w[0] + 20952u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2D4Cu) [[unlikely]] return; }
L_005D2D4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2D58u); set32(c.r[4], c.r[4].w[0] + 21072u);  if (depth < kMaxDepth) unit_0092(c, 99u, depth + 1u); else { c.pc = 0x00349630u; return; } if (c.pc != 0x005D2D58u) [[unlikely]] return; }
L_005D2D58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 21072u);
    set32(c.r[5], c.r[5].w[0] - 27216u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2D74u); set32(c.r[6], c.r[6].w[0] + 21048u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2D74u) [[unlikely]] return; }
L_005D2D74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2D80u); set32(c.r[4], c.r[4].w[0] + 21408u);  if (depth < kMaxDepth) unit_0094(c, 462u, depth + 1u); else { c.pc = 0x00353A60u; return; } if (c.pc != 0x005D2D80u) [[unlikely]] return; }
L_005D2D80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 21408u);
    set32(c.r[5], c.r[5].w[0] + 14848u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2D9Cu); set32(c.r[6], c.r[6].w[0] + 21384u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2D9Cu) [[unlikely]] return; }
L_005D2D9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2DA8u); set32(c.r[4], c.r[4].w[0] + 21568u);  if (depth < kMaxDepth) unit_0098(c, 48u, depth + 1u); else { c.pc = 0x00360B80u; return; } if (c.pc != 0x005D2DA8u) [[unlikely]] return; }
L_005D2DA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00360000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 21568u);
    set32(c.r[5], c.r[5].w[0] + 2800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2DC4u); set32(c.r[6], c.r[6].w[0] + 21552u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2DC4u) [[unlikely]] return; }
L_005D2DC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2DD0u); set32(c.r[4], c.r[4].w[0] + 21872u);  if (depth < kMaxDepth) unit_008F(c, 221u, depth + 1u); else { c.pc = 0x0033F590u; return; } if (c.pc != 0x005D2DD0u) [[unlikely]] return; }
L_005D2DD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 21872u);
    set32(c.r[5], c.r[5].w[0] - 2768u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2DECu); set32(c.r[6], c.r[6].w[0] + 21848u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2DECu) [[unlikely]] return; }
L_005D2DEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2DF8u); set32(c.r[4], c.r[4].w[0] + 21968u);  if (depth < kMaxDepth) unit_0098(c, 210u, depth + 1u); else { c.pc = 0x00363690u; return; } if (c.pc != 0x005D2DF8u) [[unlikely]] return; }
L_005D2DF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 21984u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 21988u), 0u);
    st32((c.r[2].w[0] + 21992u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    st32((c.r[2].w[0] + 22000u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 32292u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 21996u), 0u);
    set32(c.r[4], c.r[4].w[0] + 21968u);
    set32(c.r[5], c.r[5].w[0] - 14512u);
    set32(c.r[6], c.r[6].w[0] + 21952u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2E48u); st32((c.r[2].w[0] + 22004u), c.f[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2E48u) [[unlikely]] return; }
L_005D2E48:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], c.r[16].w[0] + 22032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2E58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0098(c, 210u, depth + 1u); else { c.pc = 0x00363690u; return; } if (c.pc != 0x005D2E58u) [[unlikely]] return; }
L_005D2E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 22048u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 32292u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 22060u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 22056u), 0u);
    st32((c.r[2].w[0] + 22052u), 0u);
    st32((c.r[4].w[0] + 22112u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 22072u), 0u);
    set32(c.r[4], c.r[4].w[0] + 22076u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], 0u + 36u);
    st32((c.r[2].w[0] + 22068u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2EB0u); st32((c.r[2].w[0] + 22064u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x005D2EB0u) [[unlikely]] return; }
L_005D2EB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 14608u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 22008u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2ED8u); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2ED8u) [[unlikely]] return; }
L_005D2ED8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2EE4u); set32(c.r[4], c.r[4].w[0] + 22144u);  if (depth < kMaxDepth) unit_0098(c, 210u, depth + 1u); else { c.pc = 0x00363690u; return; } if (c.pc != 0x005D2EE4u) [[unlikely]] return; }
L_005D2EE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 22164u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 22160u), 0u);
    st32((c.r[2].w[0] + 22172u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 22168u), 0u);
    st32((c.r[2].w[0] + 22180u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 22176u), 0u);
    st32((c.r[2].w[0] + 22188u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 32292u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] + 22184u), 0u);
    set32(c.r[4], c.r[4].w[0] + 22144u);
    set32(c.r[5], c.r[5].w[0] - 14704u);
    set32(c.r[6], c.r[6].w[0] + 22120u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2F4Cu); st32((c.r[2].w[0] + 22192u), c.f[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2F4Cu) [[unlikely]] return; }
L_005D2F4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2F58u); set32(c.r[4], c.r[4].w[0] + 22224u);  if (depth < kMaxDepth) unit_0098(c, 210u, depth + 1u); else { c.pc = 0x00363690u; return; } if (c.pc != 0x005D2F58u) [[unlikely]] return; }
L_005D2F58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00330000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 22224u);
    set32(c.r[5], c.r[5].w[0] - 14800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2F74u); set32(c.r[6], c.r[6].w[0] + 22200u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2F74u) [[unlikely]] return; }
L_005D2F74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_005D2F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00330000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 22720u);
    set32(c.r[5], c.r[5].w[0] - 8080u);
    set32(c.r[6], c.r[6].w[0] - 16144u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2FBCu); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x005D2FBCu) [[unlikely]] return; }
L_005D2FBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2FD4u); set32(c.r[6], c.r[6].w[0] + 22704u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D2FD4u) [[unlikely]] return; }
L_005D2FD4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D2FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2FF0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D2FF0u) [[unlikely]] return; }
L_005D2FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D2FF8u); st32((c.r[28].w[0] - 27252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D2FF8u) [[unlikely]] return; }
L_005D2FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3000u); st32((c.r[28].w[0] - 27256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3000u) [[unlikely]] return; }
L_005D3000:
    st32((c.r[28].w[0] - 27260u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D300Cu); set32(c.r[4], c.r[28].w[0] - 27264u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D300Cu) [[unlikely]] return; }
L_005D300C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3030u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3030u) [[unlikely]] return; }
L_005D3030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3038u); st32((c.r[28].w[0] - 27236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3038u) [[unlikely]] return; }
L_005D3038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3040u); st32((c.r[28].w[0] - 27240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3040u) [[unlikely]] return; }
L_005D3040:
    st32((c.r[28].w[0] - 27244u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D304Cu); set32(c.r[4], c.r[28].w[0] - 27248u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D304Cu) [[unlikely]] return; }
L_005D304C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 8u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 7760u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 32396u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D306Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 133u, depth + 1u); else { c.pc = 0x003B2B30u; return; } if (c.pc != 0x005D306Cu) [[unlikely]] return; }
L_005D306C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 7760u);
    set32(c.r[5], c.r[5].w[0] + 11136u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3088u); set32(c.r[6], c.r[6].w[0] - 7784u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D3088u) [[unlikely]] return; }
L_005D3088:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D30A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D30B0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D30B0u) [[unlikely]] return; }
L_005D30B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D30B8u); st32((c.r[28].w[0] - 27220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D30B8u) [[unlikely]] return; }
L_005D30B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D30C0u); st32((c.r[28].w[0] - 27224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D30C0u) [[unlikely]] return; }
L_005D30C0:
    st32((c.r[28].w[0] - 27228u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D30CCu); set32(c.r[4], c.r[28].w[0] - 27232u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D30CCu) [[unlikely]] return; }
L_005D30CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D30E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D30F0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D30F0u) [[unlikely]] return; }
L_005D30F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D30F8u); st32((c.r[28].w[0] - 27204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D30F8u) [[unlikely]] return; }
L_005D30F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3100u); st32((c.r[28].w[0] - 27208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3100u) [[unlikely]] return; }
L_005D3100:
    st32((c.r[28].w[0] - 27212u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D310Cu); set32(c.r[4], c.r[28].w[0] - 27216u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D310Cu) [[unlikely]] return; }
L_005D310C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3130u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3130u) [[unlikely]] return; }
L_005D3130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3138u); st32((c.r[28].w[0] - 27188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3138u) [[unlikely]] return; }
L_005D3138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3140u); st32((c.r[28].w[0] - 27192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3140u) [[unlikely]] return; }
L_005D3140:
    st32((c.r[28].w[0] - 27196u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D314Cu); set32(c.r[4], c.r[28].w[0] - 27200u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D314Cu) [[unlikely]] return; }
L_005D314C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3170u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3170u) [[unlikely]] return; }
L_005D3170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3178u); st32((c.r[28].w[0] - 27172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3178u) [[unlikely]] return; }
L_005D3178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3180u); st32((c.r[28].w[0] - 27176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3180u) [[unlikely]] return; }
L_005D3180:
    st32((c.r[28].w[0] - 27180u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D318Cu); set32(c.r[4], c.r[28].w[0] - 27184u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D318Cu) [[unlikely]] return; }
L_005D318C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D31A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D31B0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D31B0u) [[unlikely]] return; }
L_005D31B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D31B8u); st32((c.r[28].w[0] - 27156u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D31B8u) [[unlikely]] return; }
L_005D31B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D31C0u); st32((c.r[28].w[0] - 27160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D31C0u) [[unlikely]] return; }
L_005D31C0:
    st32((c.r[28].w[0] - 27164u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D31CCu); set32(c.r[4], c.r[28].w[0] - 27168u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D31CCu) [[unlikely]] return; }
L_005D31CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D31E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D31F0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D31F0u) [[unlikely]] return; }
L_005D31F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D31F8u); st32((c.r[28].w[0] - 27140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D31F8u) [[unlikely]] return; }
L_005D31F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3200u); st32((c.r[28].w[0] - 27144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3200u) [[unlikely]] return; }
L_005D3200:
    st32((c.r[28].w[0] - 27148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D320Cu); set32(c.r[4], c.r[28].w[0] - 27152u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D320Cu) [[unlikely]] return; }
L_005D320C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3230u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3230u) [[unlikely]] return; }
L_005D3230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3238u); st32((c.r[28].w[0] - 27124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3238u) [[unlikely]] return; }
L_005D3238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3240u); st32((c.r[28].w[0] - 27128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3240u) [[unlikely]] return; }
L_005D3240:
    st32((c.r[28].w[0] - 27132u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D324Cu); set32(c.r[4], c.r[28].w[0] - 27136u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D324Cu) [[unlikely]] return; }
L_005D324C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3270u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3270u) [[unlikely]] return; }
L_005D3270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3278u); st32((c.r[28].w[0] - 27108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3278u) [[unlikely]] return; }
L_005D3278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3280u); st32((c.r[28].w[0] - 27112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3280u) [[unlikely]] return; }
L_005D3280:
    st32((c.r[28].w[0] - 27116u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D328Cu); set32(c.r[4], c.r[28].w[0] - 27120u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D328Cu) [[unlikely]] return; }
L_005D328C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D32A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D32B0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D32B0u) [[unlikely]] return; }
L_005D32B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D32B8u); st32((c.r[28].w[0] - 27092u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D32B8u) [[unlikely]] return; }
L_005D32B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D32C0u); st32((c.r[28].w[0] - 27096u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D32C0u) [[unlikely]] return; }
L_005D32C0:
    st32((c.r[28].w[0] - 27100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D32CCu); set32(c.r[4], c.r[28].w[0] - 27104u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D32CCu) [[unlikely]] return; }
L_005D32CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D32E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D32F0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D32F0u) [[unlikely]] return; }
L_005D32F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D32F8u); st32((c.r[28].w[0] - 27076u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D32F8u) [[unlikely]] return; }
L_005D32F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3300u); st32((c.r[28].w[0] - 27080u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3300u) [[unlikely]] return; }
L_005D3300:
    st32((c.r[28].w[0] - 27084u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D330Cu); set32(c.r[4], c.r[28].w[0] - 27088u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D330Cu) [[unlikely]] return; }
L_005D330C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3330u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3330u) [[unlikely]] return; }
L_005D3330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3338u); st32((c.r[28].w[0] - 27060u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3338u) [[unlikely]] return; }
L_005D3338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3340u); st32((c.r[28].w[0] - 27064u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3340u) [[unlikely]] return; }
L_005D3340:
    st32((c.r[28].w[0] - 27068u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D334Cu); set32(c.r[4], c.r[28].w[0] - 27072u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D334Cu) [[unlikely]] return; }
L_005D334C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3370u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3370u) [[unlikely]] return; }
L_005D3370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3378u); st32((c.r[28].w[0] - 27040u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3378u) [[unlikely]] return; }
L_005D3378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3380u); st32((c.r[28].w[0] - 27044u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3380u) [[unlikely]] return; }
L_005D3380:
    st32((c.r[28].w[0] - 27048u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D338Cu); set32(c.r[4], c.r[28].w[0] - 27052u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D338Cu) [[unlikely]] return; }
L_005D338C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D33A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D33B0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D33B0u) [[unlikely]] return; }
L_005D33B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D33B8u); st32((c.r[28].w[0] - 27020u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D33B8u) [[unlikely]] return; }
L_005D33B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D33C0u); st32((c.r[28].w[0] - 27024u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D33C0u) [[unlikely]] return; }
L_005D33C0:
    st32((c.r[28].w[0] - 27028u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D33CCu); set32(c.r[4], c.r[28].w[0] - 27032u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D33CCu) [[unlikely]] return; }
L_005D33CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D33E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D33F0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D33F0u) [[unlikely]] return; }
L_005D33F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D33F8u); st32((c.r[28].w[0] - 27004u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D33F8u) [[unlikely]] return; }
L_005D33F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3400u); st32((c.r[28].w[0] - 27008u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3400u) [[unlikely]] return; }
L_005D3400:
    st32((c.r[28].w[0] - 27012u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D340Cu); set32(c.r[4], c.r[28].w[0] - 27016u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D340Cu) [[unlikely]] return; }
L_005D340C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3430u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3430u) [[unlikely]] return; }
L_005D3430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3438u); st32((c.r[28].w[0] - 26980u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3438u) [[unlikely]] return; }
L_005D3438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3440u); st32((c.r[28].w[0] - 26984u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3440u) [[unlikely]] return; }
L_005D3440:
    st32((c.r[28].w[0] - 26988u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D344Cu); set32(c.r[4], c.r[28].w[0] - 26992u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D344Cu) [[unlikely]] return; }
L_005D344C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3454u); c.f[12] = ld32((c.r[28].w[0] - 32416u));  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x005D3454u) [[unlikely]] return; }
L_005D3454:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[3].w[0] - 24088u), c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3480u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3480u) [[unlikely]] return; }
L_005D3480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3488u); st32((c.r[28].w[0] - 26960u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3488u) [[unlikely]] return; }
L_005D3488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3490u); st32((c.r[28].w[0] - 26964u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3490u) [[unlikely]] return; }
L_005D3490:
    st32((c.r[28].w[0] - 26968u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D349Cu); set32(c.r[4], c.r[28].w[0] - 26972u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D349Cu) [[unlikely]] return; }
L_005D349C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D34B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D34C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D34C0u) [[unlikely]] return; }
L_005D34C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D34C8u); st32((c.r[28].w[0] - 26944u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D34C8u) [[unlikely]] return; }
L_005D34C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D34D0u); st32((c.r[28].w[0] - 26948u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D34D0u) [[unlikely]] return; }
L_005D34D0:
    st32((c.r[28].w[0] - 26952u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D34DCu); set32(c.r[4], c.r[28].w[0] - 26956u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D34DCu) [[unlikely]] return; }
L_005D34DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D34F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3500u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3500u) [[unlikely]] return; }
L_005D3500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3508u); st32((c.r[28].w[0] - 26928u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3508u) [[unlikely]] return; }
L_005D3508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3510u); st32((c.r[28].w[0] - 26932u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3510u) [[unlikely]] return; }
L_005D3510:
    st32((c.r[28].w[0] - 26936u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D351Cu); set32(c.r[4], c.r[28].w[0] - 26940u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D351Cu) [[unlikely]] return; }
L_005D351C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3540u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3540u) [[unlikely]] return; }
L_005D3540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3548u); st32((c.r[28].w[0] - 26904u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3548u) [[unlikely]] return; }
L_005D3548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3550u); st32((c.r[28].w[0] - 26908u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3550u) [[unlikely]] return; }
L_005D3550:
    st32((c.r[28].w[0] - 26912u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D355Cu); set32(c.r[4], c.r[28].w[0] - 26916u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D355Cu) [[unlikely]] return; }
L_005D355C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3580u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3580u) [[unlikely]] return; }
L_005D3580:
    st32((c.r[28].w[0] - 26868u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D358Cu);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D358Cu) [[unlikely]] return; }
L_005D358C:
    st32((c.r[28].w[0] - 26872u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3598u);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3598u) [[unlikely]] return; }
L_005D3598:
    st32((c.r[28].w[0] - 26876u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 26880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D35A8u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D35A8u) [[unlikely]] return; }
L_005D35A8:
    set32(c.r[4], c.r[28].w[0] - 26900u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D35B4u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D35B4u) [[unlikely]] return; }
L_005D35B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_005D35D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D35E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D35E0u) [[unlikely]] return; }
L_005D35E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D35E8u); st32((c.r[28].w[0] - 26840u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D35E8u) [[unlikely]] return; }
L_005D35E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D35F0u); st32((c.r[28].w[0] - 26844u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D35F0u) [[unlikely]] return; }
L_005D35F0:
    st32((c.r[28].w[0] - 26848u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D35FCu); set32(c.r[4], c.r[28].w[0] - 26852u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D35FCu) [[unlikely]] return; }
L_005D35FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3620u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3620u) [[unlikely]] return; }
L_005D3620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3628u); st32((c.r[28].w[0] - 26824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3628u) [[unlikely]] return; }
L_005D3628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3630u); st32((c.r[28].w[0] - 26828u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3630u) [[unlikely]] return; }
L_005D3630:
    st32((c.r[28].w[0] - 26832u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D363Cu); set32(c.r[4], c.r[28].w[0] - 26836u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D363Cu) [[unlikely]] return; }
L_005D363C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3660u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3660u) [[unlikely]] return; }
L_005D3660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3668u); st32((c.r[28].w[0] - 26808u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3668u) [[unlikely]] return; }
L_005D3668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3670u); st32((c.r[28].w[0] - 26812u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3670u) [[unlikely]] return; }
L_005D3670:
    st32((c.r[28].w[0] - 26816u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D367Cu); set32(c.r[4], c.r[28].w[0] - 26820u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D367Cu) [[unlikely]] return; }
L_005D367C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D36A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D36A0u) [[unlikely]] return; }
L_005D36A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D36A8u); st32((c.r[28].w[0] - 26792u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D36A8u) [[unlikely]] return; }
L_005D36A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D36B0u); st32((c.r[28].w[0] - 26796u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D36B0u) [[unlikely]] return; }
L_005D36B0:
    st32((c.r[28].w[0] - 26800u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D36BCu); set32(c.r[4], c.r[28].w[0] - 26804u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D36BCu) [[unlikely]] return; }
L_005D36BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D36D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D36E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D36E0u) [[unlikely]] return; }
L_005D36E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D36E8u); st32((c.r[28].w[0] - 26776u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D36E8u) [[unlikely]] return; }
L_005D36E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D36F0u); st32((c.r[28].w[0] - 26780u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D36F0u) [[unlikely]] return; }
L_005D36F0:
    st32((c.r[28].w[0] - 26784u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D36FCu); set32(c.r[4], c.r[28].w[0] - 26788u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D36FCu) [[unlikely]] return; }
L_005D36FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3720u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3720u) [[unlikely]] return; }
L_005D3720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3728u); st32((c.r[28].w[0] - 26760u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3728u) [[unlikely]] return; }
L_005D3728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3730u); st32((c.r[28].w[0] - 26764u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3730u) [[unlikely]] return; }
L_005D3730:
    st32((c.r[28].w[0] - 26768u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D373Cu); set32(c.r[4], c.r[28].w[0] - 26772u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D373Cu) [[unlikely]] return; }
L_005D373C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3760u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3760u) [[unlikely]] return; }
L_005D3760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3768u); st32((c.r[28].w[0] - 26744u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3768u) [[unlikely]] return; }
L_005D3768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3770u); st32((c.r[28].w[0] - 26748u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3770u) [[unlikely]] return; }
L_005D3770:
    st32((c.r[28].w[0] - 26752u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D377Cu); set32(c.r[4], c.r[28].w[0] - 26756u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D377Cu) [[unlikely]] return; }
L_005D377C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D37A0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D37A0u) [[unlikely]] return; }
L_005D37A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D37A8u); st32((c.r[28].w[0] - 26728u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D37A8u) [[unlikely]] return; }
L_005D37A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D37B0u); st32((c.r[28].w[0] - 26732u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D37B0u) [[unlikely]] return; }
L_005D37B0:
    st32((c.r[28].w[0] - 26736u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D37BCu); set32(c.r[4], c.r[28].w[0] - 26740u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D37BCu) [[unlikely]] return; }
L_005D37BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D37D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D37E0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D37E0u) [[unlikely]] return; }
L_005D37E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D37E8u); st32((c.r[28].w[0] - 26708u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D37E8u) [[unlikely]] return; }
L_005D37E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D37F0u); st32((c.r[28].w[0] - 26712u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D37F0u) [[unlikely]] return; }
L_005D37F0:
    st32((c.r[28].w[0] - 26716u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D37FCu); set32(c.r[4], c.r[28].w[0] - 26720u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D37FCu) [[unlikely]] return; }
L_005D37FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[28].w[0] - 26724u);
    set32(c.r[5], c.r[5].w[0] + 6944u);
    set32(c.r[6], c.r[6].w[0] - 2048u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3820u); st32((c.r[28].w[0] - 26724u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x005D3820u) [[unlikely]] return; }
L_005D3820:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3840u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3840u) [[unlikely]] return; }
L_005D3840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3848u); st32((c.r[28].w[0] - 26692u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3848u) [[unlikely]] return; }
L_005D3848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3850u); st32((c.r[28].w[0] - 26696u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3850u) [[unlikely]] return; }
L_005D3850:
    st32((c.r[28].w[0] - 26700u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D385Cu); set32(c.r[4], c.r[28].w[0] - 26704u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D385Cu) [[unlikely]] return; }
L_005D385C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3880u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3880u) [[unlikely]] return; }
L_005D3880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3888u); st32((c.r[28].w[0] - 26676u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3888u) [[unlikely]] return; }
L_005D3888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3890u); st32((c.r[28].w[0] - 26680u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3890u) [[unlikely]] return; }
L_005D3890:
    st32((c.r[28].w[0] - 26684u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D389Cu); set32(c.r[4], c.r[28].w[0] - 26688u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D389Cu) [[unlikely]] return; }
L_005D389C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D38B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D38C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D38C0u) [[unlikely]] return; }
L_005D38C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D38C8u); st32((c.r[28].w[0] - 26660u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D38C8u) [[unlikely]] return; }
L_005D38C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D38D0u); st32((c.r[28].w[0] - 26664u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D38D0u) [[unlikely]] return; }
L_005D38D0:
    st32((c.r[28].w[0] - 26668u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D38DCu); set32(c.r[4], c.r[28].w[0] - 26672u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D38DCu) [[unlikely]] return; }
L_005D38DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D38F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3900u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3900u) [[unlikely]] return; }
L_005D3900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3908u); st32((c.r[28].w[0] - 26644u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3908u) [[unlikely]] return; }
L_005D3908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3910u); st32((c.r[28].w[0] - 26648u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3910u) [[unlikely]] return; }
L_005D3910:
    st32((c.r[28].w[0] - 26652u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D391Cu); set32(c.r[4], c.r[28].w[0] - 26656u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D391Cu) [[unlikely]] return; }
L_005D391C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3940u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3940u) [[unlikely]] return; }
L_005D3940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3948u); st32((c.r[28].w[0] - 26628u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3948u) [[unlikely]] return; }
L_005D3948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3950u); st32((c.r[28].w[0] - 26632u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3950u) [[unlikely]] return; }
L_005D3950:
    st32((c.r[28].w[0] - 26636u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D395Cu); set32(c.r[4], c.r[28].w[0] - 26640u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D395Cu) [[unlikely]] return; }
L_005D395C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3980u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3980u) [[unlikely]] return; }
L_005D3980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3988u); st32((c.r[28].w[0] - 26612u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3988u) [[unlikely]] return; }
L_005D3988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3990u); st32((c.r[28].w[0] - 26616u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3990u) [[unlikely]] return; }
L_005D3990:
    st32((c.r[28].w[0] - 26620u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D399Cu); set32(c.r[4], c.r[28].w[0] - 26624u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D399Cu) [[unlikely]] return; }
L_005D399C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D39B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D39C0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D39C0u) [[unlikely]] return; }
L_005D39C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D39C8u); st32((c.r[28].w[0] - 26596u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D39C8u) [[unlikely]] return; }
L_005D39C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D39D0u); st32((c.r[28].w[0] - 26600u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D39D0u) [[unlikely]] return; }
L_005D39D0:
    st32((c.r[28].w[0] - 26604u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D39DCu); set32(c.r[4], c.r[28].w[0] - 26608u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D39DCu) [[unlikely]] return; }
L_005D39DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D39F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3A00u) [[unlikely]] return; }
L_005D3A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A08u); st32((c.r[28].w[0] - 26576u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3A08u) [[unlikely]] return; }
L_005D3A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A10u); st32((c.r[28].w[0] - 26580u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3A10u) [[unlikely]] return; }
L_005D3A10:
    st32((c.r[28].w[0] - 26584u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A1Cu); set32(c.r[4], c.r[28].w[0] - 26588u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3A1Cu) [[unlikely]] return; }
L_005D3A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A24u);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005D3A24u) [[unlikely]] return; }
L_005D3A24:
    st32((c.r[28].w[0] - 26592u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A50u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3A50u) [[unlikely]] return; }
L_005D3A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A58u); st32((c.r[28].w[0] - 26552u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3A58u) [[unlikely]] return; }
L_005D3A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A60u); st32((c.r[28].w[0] - 26556u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3A60u) [[unlikely]] return; }
L_005D3A60:
    st32((c.r[28].w[0] - 26560u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A6Cu); set32(c.r[4], c.r[28].w[0] - 26564u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3A6Cu) [[unlikely]] return; }
L_005D3A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3A80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A90u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3A90u) [[unlikely]] return; }
L_005D3A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3A98u); st32((c.r[28].w[0] - 26536u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3A98u) [[unlikely]] return; }
L_005D3A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3AA0u); st32((c.r[28].w[0] - 26540u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3AA0u) [[unlikely]] return; }
L_005D3AA0:
    st32((c.r[28].w[0] - 26544u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3AACu); set32(c.r[4], c.r[28].w[0] - 26548u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3AACu) [[unlikely]] return; }
L_005D3AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3AC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3AD0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3AD0u) [[unlikely]] return; }
L_005D3AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3AD8u); st32((c.r[28].w[0] - 26520u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3AD8u) [[unlikely]] return; }
L_005D3AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3AE0u); st32((c.r[28].w[0] - 26524u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3AE0u) [[unlikely]] return; }
L_005D3AE0:
    st32((c.r[28].w[0] - 26528u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3AECu); set32(c.r[4], c.r[28].w[0] - 26532u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3AECu) [[unlikely]] return; }
L_005D3AEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3B00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3B10u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3B10u) [[unlikely]] return; }
L_005D3B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3B18u); st32((c.r[28].w[0] - 26504u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3B18u) [[unlikely]] return; }
L_005D3B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3B20u); st32((c.r[28].w[0] - 26508u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3B20u) [[unlikely]] return; }
L_005D3B20:
    st32((c.r[28].w[0] - 26512u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3B2Cu); set32(c.r[4], c.r[28].w[0] - 26516u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3B2Cu) [[unlikely]] return; }
L_005D3B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3B40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3B50u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3B50u) [[unlikely]] return; }
L_005D3B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3B58u); st32((c.r[28].w[0] - 26488u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3B58u) [[unlikely]] return; }
L_005D3B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3B60u); st32((c.r[28].w[0] - 26492u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3B60u) [[unlikely]] return; }
L_005D3B60:
    st32((c.r[28].w[0] - 26496u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3B6Cu); set32(c.r[4], c.r[28].w[0] - 26500u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3B6Cu) [[unlikely]] return; }
L_005D3B6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3B90u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3B90u) [[unlikely]] return; }
L_005D3B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3B98u); st32((c.r[28].w[0] - 26472u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3B98u) [[unlikely]] return; }
L_005D3B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3BA0u); st32((c.r[28].w[0] - 26476u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3BA0u) [[unlikely]] return; }
L_005D3BA0:
    st32((c.r[28].w[0] - 26480u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3BACu); set32(c.r[4], c.r[28].w[0] - 26484u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3BACu) [[unlikely]] return; }
L_005D3BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3BD0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3BD0u) [[unlikely]] return; }
L_005D3BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3BD8u); st32((c.r[28].w[0] - 26456u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3BD8u) [[unlikely]] return; }
L_005D3BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3BE0u); st32((c.r[28].w[0] - 26460u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3BE0u) [[unlikely]] return; }
L_005D3BE0:
    st32((c.r[28].w[0] - 26464u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3BECu); set32(c.r[4], c.r[28].w[0] - 26468u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3BECu) [[unlikely]] return; }
L_005D3BEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] - 2000u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st8((c.r[3].w[0] - 1996u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st8((c.r[3].w[0] - 1995u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3C20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3C30u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3C30u) [[unlikely]] return; }
L_005D3C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3C38u); st32((c.r[28].w[0] - 26440u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3C38u) [[unlikely]] return; }
L_005D3C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3C40u); st32((c.r[28].w[0] - 26444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3C40u) [[unlikely]] return; }
L_005D3C40:
    st32((c.r[28].w[0] - 26448u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3C4Cu); set32(c.r[4], c.r[28].w[0] - 26452u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3C4Cu) [[unlikely]] return; }
L_005D3C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3C60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3C70u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3C70u) [[unlikely]] return; }
L_005D3C70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3C78u); st32((c.r[28].w[0] - 26424u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3C78u) [[unlikely]] return; }
L_005D3C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3C80u); st32((c.r[28].w[0] - 26428u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3C80u) [[unlikely]] return; }
L_005D3C80:
    st32((c.r[28].w[0] - 26432u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3C8Cu); set32(c.r[4], c.r[28].w[0] - 26436u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3C8Cu) [[unlikely]] return; }
L_005D3C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3CB0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3CB0u) [[unlikely]] return; }
L_005D3CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3CB8u); st32((c.r[28].w[0] - 26408u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3CB8u) [[unlikely]] return; }
L_005D3CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3CC0u); st32((c.r[28].w[0] - 26412u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3CC0u) [[unlikely]] return; }
L_005D3CC0:
    st32((c.r[28].w[0] - 26416u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3CCCu); set32(c.r[4], c.r[28].w[0] - 26420u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3CCCu) [[unlikely]] return; }
L_005D3CCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3CF0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3CF0u) [[unlikely]] return; }
L_005D3CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3CF8u); st32((c.r[28].w[0] - 26392u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3CF8u) [[unlikely]] return; }
L_005D3CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3D00u); st32((c.r[28].w[0] - 26396u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3D00u) [[unlikely]] return; }
L_005D3D00:
    st32((c.r[28].w[0] - 26400u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3D0Cu); set32(c.r[4], c.r[28].w[0] - 26404u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3D0Cu) [[unlikely]] return; }
L_005D3D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3D30u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3D30u) [[unlikely]] return; }
L_005D3D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3D38u); st32((c.r[28].w[0] - 26372u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3D38u) [[unlikely]] return; }
L_005D3D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3D40u); st32((c.r[28].w[0] - 26376u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3D40u) [[unlikely]] return; }
L_005D3D40:
    st32((c.r[28].w[0] - 26380u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3D4Cu); set32(c.r[4], c.r[28].w[0] - 26384u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3D4Cu) [[unlikely]] return; }
L_005D3D4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3D70u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3D70u) [[unlikely]] return; }
L_005D3D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3D78u); st32((c.r[28].w[0] - 26356u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3D78u) [[unlikely]] return; }
L_005D3D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3D80u); st32((c.r[28].w[0] - 26360u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3D80u) [[unlikely]] return; }
L_005D3D80:
    st32((c.r[28].w[0] - 26364u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3D8Cu); set32(c.r[4], c.r[28].w[0] - 26368u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3D8Cu) [[unlikely]] return; }
L_005D3D8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3DB0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3DB0u) [[unlikely]] return; }
L_005D3DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3DB8u); st32((c.r[28].w[0] - 26340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3DB8u) [[unlikely]] return; }
L_005D3DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3DC0u); st32((c.r[28].w[0] - 26344u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3DC0u) [[unlikely]] return; }
L_005D3DC0:
    st32((c.r[28].w[0] - 26348u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3DCCu); set32(c.r[4], c.r[28].w[0] - 26352u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3DCCu) [[unlikely]] return; }
L_005D3DCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3DE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3DF0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3DF0u) [[unlikely]] return; }
L_005D3DF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3DF8u); st32((c.r[28].w[0] - 26308u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3DF8u) [[unlikely]] return; }
L_005D3DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3E00u); st32((c.r[28].w[0] - 26312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3E00u) [[unlikely]] return; }
L_005D3E00:
    st32((c.r[28].w[0] - 26316u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3E0Cu); set32(c.r[4], c.r[28].w[0] - 26320u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3E0Cu) [[unlikely]] return; }
L_005D3E0C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3E30u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3E30u) [[unlikely]] return; }
L_005D3E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3E38u); st32((c.r[28].w[0] - 26292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3E38u) [[unlikely]] return; }
L_005D3E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3E40u); st32((c.r[28].w[0] - 26296u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3E40u) [[unlikely]] return; }
L_005D3E40:
    st32((c.r[28].w[0] - 26300u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3E4Cu); set32(c.r[4], c.r[28].w[0] - 26304u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3E4Cu) [[unlikely]] return; }
L_005D3E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3E70u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3E70u) [[unlikely]] return; }
L_005D3E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3E78u); st32((c.r[28].w[0] - 26276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3E78u) [[unlikely]] return; }
L_005D3E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3E80u); st32((c.r[28].w[0] - 26280u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3E80u) [[unlikely]] return; }
L_005D3E80:
    st32((c.r[28].w[0] - 26284u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3E8Cu); set32(c.r[4], c.r[28].w[0] - 26288u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3E8Cu) [[unlikely]] return; }
L_005D3E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3EB0u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3EB0u) [[unlikely]] return; }
L_005D3EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3EB8u); st32((c.r[28].w[0] - 26260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3EB8u) [[unlikely]] return; }
L_005D3EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3EC0u); st32((c.r[28].w[0] - 26264u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3EC0u) [[unlikely]] return; }
L_005D3EC0:
    st32((c.r[28].w[0] - 26268u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3ECCu); set32(c.r[4], c.r[28].w[0] - 26272u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3ECCu) [[unlikely]] return; }
L_005D3ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3ED4u); c.f[12] = ld32((c.r[28].w[0] - 32276u));  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x005D3ED4u) [[unlikely]] return; }
L_005D3ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[3].w[0] - 2848u), c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F00u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3F00u) [[unlikely]] return; }
L_005D3F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F08u); st32((c.r[28].w[0] - 26240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3F08u) [[unlikely]] return; }
L_005D3F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F10u); st32((c.r[28].w[0] - 26244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3F10u) [[unlikely]] return; }
L_005D3F10:
    st32((c.r[28].w[0] - 26248u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F1Cu); set32(c.r[4], c.r[28].w[0] - 26252u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3F1Cu) [[unlikely]] return; }
L_005D3F1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005D3F30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F40u);  if (depth < kMaxDepth) unit_0053(c, 403u, depth + 1u); else { c.pc = 0x0024FAA0u; return; } if (c.pc != 0x005D3F40u) [[unlikely]] return; }
L_005D3F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F48u); st32((c.r[28].w[0] - 26140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0057(c, 262u, depth + 1u); else { c.pc = 0x0025E030u; return; } if (c.pc != 0x005D3F48u) [[unlikely]] return; }
L_005D3F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F50u); st32((c.r[28].w[0] - 26144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 73u, depth + 1u); else { c.pc = 0x00248930u; return; } if (c.pc != 0x005D3F50u) [[unlikely]] return; }
L_005D3F50:
    st32((c.r[28].w[0] - 26148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F5Cu); set32(c.r[4], c.r[28].w[0] - 26152u);  if (depth < kMaxDepth) unit_003D(c, 506u, depth + 1u); else { c.pc = 0x001F79E0u; return; } if (c.pc != 0x005D3F5Cu) [[unlikely]] return; }
L_005D3F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F64u);  if (depth < kMaxDepth) unit_004E(c, 453u, depth + 1u); else { c.pc = 0x0023BDD0u; return; } if (c.pc != 0x005D3F64u) [[unlikely]] return; }
L_005D3F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F6Cu); st32((c.r[28].w[0] - 26236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 9u, depth + 1u); else { c.pc = 0x002700D0u; return; } if (c.pc != 0x005D3F6Cu) [[unlikely]] return; }
L_005D3F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F74u); st32((c.r[28].w[0] - 26232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 32u, depth + 1u); else { c.pc = 0x0023CA50u; return; } if (c.pc != 0x005D3F74u) [[unlikely]] return; }
L_005D3F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F7Cu); st32((c.r[28].w[0] - 26228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 249u, depth + 1u); else { c.pc = 0x00272A40u; return; } if (c.pc != 0x005D3F7Cu) [[unlikely]] return; }
L_005D3F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F84u); st32((c.r[28].w[0] - 26224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 69u, depth + 1u); else { c.pc = 0x0023D220u; return; } if (c.pc != 0x005D3F84u) [[unlikely]] return; }
L_005D3F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F8Cu); st32((c.r[28].w[0] - 26220u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 172u, depth + 1u); else { c.pc = 0x00259610u; return; } if (c.pc != 0x005D3F8Cu) [[unlikely]] return; }
L_005D3F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F94u); st32((c.r[28].w[0] - 26216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 406u, depth + 1u); else { c.pc = 0x002636D0u; return; } if (c.pc != 0x005D3F94u) [[unlikely]] return; }
L_005D3F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3F9Cu); st32((c.r[28].w[0] - 26212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 435u, depth + 1u); else { c.pc = 0x00263B50u; return; } if (c.pc != 0x005D3F9Cu) [[unlikely]] return; }
L_005D3F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FA4u); st32((c.r[28].w[0] - 26208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 9u, depth + 1u); else { c.pc = 0x002640C0u; return; } if (c.pc != 0x005D3FA4u) [[unlikely]] return; }
L_005D3FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FACu); st32((c.r[28].w[0] - 26204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 40u, depth + 1u); else { c.pc = 0x00264600u; return; } if (c.pc != 0x005D3FACu) [[unlikely]] return; }
L_005D3FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FB4u); st32((c.r[28].w[0] - 26200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 165u, depth + 1u); else { c.pc = 0x00276380u; return; } if (c.pc != 0x005D3FB4u) [[unlikely]] return; }
L_005D3FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FBCu); st32((c.r[28].w[0] - 26196u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 233u, depth + 1u); else { c.pc = 0x00276F40u; return; } if (c.pc != 0x005D3FBCu) [[unlikely]] return; }
L_005D3FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FC4u); st32((c.r[28].w[0] - 26192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 117u, depth + 1u); else { c.pc = 0x002753C0u; return; } if (c.pc != 0x005D3FC4u) [[unlikely]] return; }
L_005D3FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FCCu); st32((c.r[28].w[0] - 26188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 336u, depth + 1u); else { c.pc = 0x002734D0u; return; } if (c.pc != 0x005D3FCCu) [[unlikely]] return; }
L_005D3FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FD4u); st32((c.r[28].w[0] - 26184u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 363u, depth + 1u); else { c.pc = 0x002739C0u; return; } if (c.pc != 0x005D3FD4u) [[unlikely]] return; }
L_005D3FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FDCu); st32((c.r[28].w[0] - 26180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 388u, depth + 1u); else { c.pc = 0x00273DE0u; return; } if (c.pc != 0x005D3FDCu) [[unlikely]] return; }
L_005D3FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FE4u); st32((c.r[28].w[0] - 26176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 23u, depth + 1u); else { c.pc = 0x00274340u; return; } if (c.pc != 0x005D3FE4u) [[unlikely]] return; }
L_005D3FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FECu); st32((c.r[28].w[0] - 26172u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005D(c, 53u, depth + 1u); else { c.pc = 0x00274880u; return; } if (c.pc != 0x005D3FECu) [[unlikely]] return; }
L_005D3FEC:
    st32((c.r[28].w[0] - 26168u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D3FF8u); set32(c.r[4], c.r[28].w[0] - 26164u);  if (depth < kMaxDepth) unit_004E(c, 417u, depth + 1u); else { c.pc = 0x0023B850u; return; } if (c.pc != 0x005D3FF8u) [[unlikely]] return; }
L_005D3FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005D4000u); set32(c.r[4], c.r[28].w[0] - 26160u);  if (depth < kMaxDepth) unit_004C(c, 184u, depth + 1u); else { c.pc = 0x002323C0u; return; } if (c.pc != 0x005D4000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0135(c, 1u, depth);
}

}
