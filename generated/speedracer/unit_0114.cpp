#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0114[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0,
    0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0,
};

void unit_0114(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00550000;
    case 2u: goto L_00550004;
    case 3u: goto L_00550008;
    case 4u: goto L_0055002C;
    case 5u: goto L_00550038;
    case 6u: goto L_00550088;
    case 7u: goto L_005500D8;
    case 8u: goto L_00550100;
    case 9u: goto L_00550158;
    case 10u: goto L_005501A8;
    case 11u: goto L_0055023C;
    case 12u: goto L_00550264;
    case 13u: goto L_00550338;
    case 14u: goto L_005504BC;
    case 15u: goto L_00550530;
    case 16u: goto L_005505F0;
    case 17u: goto L_00550648;
    case 18u: goto L_00550768;
    case 19u: goto L_00550780;
    case 20u: goto L_005507B4;
    case 21u: goto L_00550800;
    case 22u: goto L_00550820;
    case 23u: goto L_00550830;
    case 24u: goto L_00550850;
    case 25u: goto L_00550860;
    case 26u: goto L_00550880;
    case 27u: goto L_005508BC;
    case 28u: goto L_00550910;
    case 29u: goto L_00550944;
    case 30u: goto L_00550974;
    case 31u: goto L_005509C4;
    case 32u: goto L_00550A48;
    case 33u: goto L_00550A6C;
    case 34u: goto L_00550AB0;
    case 35u: goto L_00550AC0;
    case 36u: goto L_00550B40;
    case 37u: goto L_00550B68;
    case 38u: goto L_00550B98;
    case 39u: goto L_00550BDC;
    case 40u: goto L_00550C34;
    case 41u: goto L_00550C70;
    case 42u: goto L_00550C90;
    case 43u: goto L_00550C94;
    case 44u: goto L_00550CC0;
    case 45u: goto L_00550D34;
    case 46u: goto L_00550D7C;
    case 47u: goto L_00550DCC;
    case 48u: goto L_00550E00;
    case 49u: goto L_00550E40;
    case 50u: goto L_00550E64;
    case 51u: goto L_00550EA8;
    case 52u: goto L_00550ED0;
    case 53u: goto L_00550F78;
    case 54u: goto L_00550FA0;
    case 55u: goto L_00550FC0;
    case 56u: goto L_00551024;
    case 57u: goto L_00551038;
    case 58u: goto L_00551078;
    case 59u: goto L_005510A8;
    case 60u: goto L_005510DC;
    case 61u: goto L_00551114;
    case 62u: goto L_00551140;
    case 63u: goto L_0055118C;
    case 64u: goto L_005511A4;
    case 65u: goto L_005511C4;
    case 66u: goto L_005511F4;
    case 67u: goto L_00551248;
    case 68u: goto L_00551270;
    case 69u: goto L_005512BC;
    case 70u: goto L_00551330;
    case 71u: goto L_00551358;
    case 72u: goto L_00551380;
    case 73u: goto L_005513AC;
    case 74u: goto L_00551404;
    case 75u: goto L_00551434;
    case 76u: goto L_00551564;
    case 77u: goto L_005515A4;
    case 78u: goto L_005515CC;
    case 79u: goto L_00551620;
    case 80u: goto L_0055162C;
    case 81u: goto L_0055169C;
    case 82u: goto L_005516D0;
    case 83u: goto L_005516E0;
    case 84u: goto L_0055171C;
    case 85u: goto L_0055176C;
    case 86u: goto L_005517AC;
    case 87u: goto L_005517DC;
    case 88u: goto L_005517E8;
    case 89u: goto L_00551824;
    case 90u: goto L_00551840;
    case 91u: goto L_005518C4;
    case 92u: goto L_00551914;
    case 93u: goto L_00551940;
    case 94u: goto L_00551964;
    case 95u: goto L_00551990;
    case 96u: goto L_005519D0;
    case 97u: goto L_00551A04;
    case 98u: goto L_00551A3C;
    case 99u: goto L_00551A58;
    case 100u: goto L_00551AC0;
    case 101u: goto L_00551B04;
    case 102u: goto L_00551B5C;
    case 103u: goto L_00551B88;
    case 104u: goto L_00551BE0;
    case 105u: goto L_00551C0C;
    case 106u: goto L_00551C78;
    case 107u: goto L_00551CA4;
    case 108u: goto L_00551D74;
    case 109u: goto L_00551DBC;
    case 110u: goto L_00551E40;
    case 111u: goto L_00551E8C;
    case 112u: goto L_00551ED8;
    case 113u: goto L_00551EF4;
    case 114u: goto L_00551F58;
    case 115u: goto L_00551F80;
    case 116u: goto L_00551F8C;
    case 117u: goto L_00551F98;
    case 118u: goto L_00551FAC;
    case 119u: goto L_00551FE4;
    case 120u: goto L_0055200C;
    case 121u: goto L_005520DC;
    case 122u: goto L_005520E8;
    case 123u: goto L_00552104;
    case 124u: goto L_00552120;
    case 125u: goto L_00552150;
    case 126u: goto L_0055216C;
    case 127u: goto L_0055219C;
    case 128u: goto L_005521B8;
    case 129u: goto L_005521E8;
    case 130u: goto L_00552204;
    case 131u: goto L_00552234;
    case 132u: goto L_00552250;
    case 133u: goto L_00552280;
    case 134u: goto L_005522C0;
    case 135u: goto L_00552374;
    case 136u: goto L_00552390;
    case 137u: goto L_005523B4;
    case 138u: goto L_005523C8;
    case 139u: goto L_005523F8;
    case 140u: goto L_0055240C;
    case 141u: goto L_0055243C;
    case 142u: goto L_00552450;
    case 143u: goto L_00552480;
    case 144u: goto L_00552494;
    case 145u: goto L_005524C4;
    case 146u: goto L_005524D8;
    case 147u: goto L_00552508;
    case 148u: goto L_00552548;
    case 149u: goto L_0055257C;
    case 150u: goto L_00552680;
    case 151u: goto L_005526BC;
    case 152u: goto L_00552700;
    case 153u: goto L_00552764;
    case 154u: goto L_00552770;
    case 155u: goto L_005527A8;
    case 156u: goto L_005527DC;
    case 157u: goto L_00552824;
    case 158u: goto L_0055284C;
    case 159u: goto L_00552898;
    case 160u: goto L_00552910;
    case 161u: goto L_00552920;
    case 162u: goto L_00552AC4;
    case 163u: goto L_00552B28;
    case 164u: goto L_00552B30;
    case 165u: goto L_00552B70;
    case 166u: goto L_00552B90;
    case 167u: goto L_00552BB4;
    case 168u: goto L_00552BC0;
    case 169u: goto L_00552BE8;
    case 170u: goto L_00552C08;
    case 171u: goto L_00552C10;
    case 172u: goto L_00552C84;
    case 173u: goto L_00552CC0;
    case 174u: goto L_00552CD0;
    case 175u: goto L_00552D24;
    case 176u: goto L_00552D48;
    case 177u: goto L_00552D78;
    case 178u: goto L_00552D9C;
    case 179u: goto L_00552DC0;
    case 180u: goto L_00552DDC;
    case 181u: goto L_00552E00;
    case 182u: goto L_00552E2C;
    case 183u: goto L_00552E70;
    case 184u: goto L_00552EAC;
    case 185u: goto L_00552EB8;
    case 186u: goto L_00552F08;
    case 187u: goto L_00552F4C;
    case 188u: goto L_00552F54;
    case 189u: goto L_00552F94;
    case 190u: goto L_00552FE4;
    case 191u: goto L_00553008;
    case 192u: goto L_0055316C;
    case 193u: goto L_00553178;
    case 194u: goto L_00553190;
    case 195u: goto L_005531DC;
    case 196u: goto L_00553244;
    case 197u: goto L_0055325C;
    case 198u: goto L_00553274;
    case 199u: goto L_005532AC;
    case 200u: goto L_00553370;
    case 201u: goto L_00553388;
    case 202u: goto L_005533B0;
    case 203u: goto L_00553430;
    case 204u: goto L_00553478;
    case 205u: goto L_0055348C;
    case 206u: goto L_005534F8;
    case 207u: goto L_00553538;
    case 208u: goto L_00553588;
    case 209u: goto L_00553610;
    case 210u: goto L_0055365C;
    case 211u: goto L_00553680;
    case 212u: goto L_005536B0;
    case 213u: goto L_00553700;
    case 214u: goto L_00553708;
    case 215u: goto L_0055374C;
    case 216u: goto L_005537A0;
    case 217u: goto L_00553808;
    case 218u: goto L_00553868;
    case 219u: goto L_00553878;
    case 220u: goto L_005538A4;
    case 221u: goto L_005538C0;
    case 222u: goto L_005538EC;
    case 223u: goto L_00553908;
    case 224u: goto L_00553958;
    case 225u: goto L_00553990;
    case 226u: goto L_005539B0;
    case 227u: goto L_00553A10;
    case 228u: goto L_00553A38;
    case 229u: goto L_00553A6C;
    case 230u: goto L_00553A8C;
    case 231u: goto L_00553AE0;
    case 232u: goto L_00553B04;
    case 233u: goto L_00553B3C;
    case 234u: goto L_00553B60;
    case 235u: goto L_00553B80;
    case 236u: goto L_00553C98;
    case 237u: goto L_00553D10;
    case 238u: goto L_00553D8C;
    case 239u: goto L_00553DA0;
    case 240u: goto L_00553DE8;
    case 241u: goto L_00553E04;
    case 242u: goto L_00553E3C;
    case 243u: goto L_00553E70;
    case 244u: goto L_00553EB8;
    case 245u: goto L_00553EC4;
    case 246u: goto L_00553ED4;
    case 247u: goto L_00553EE8;
    case 248u: goto L_00553F10;
    case 249u: goto L_00553F1C;
    case 250u: goto L_00553F2C;
    case 251u: goto L_00553F40;
    case 252u: goto L_00553F68;
    case 253u: goto L_00553F74;
    case 254u: goto L_00553F84;
    case 255u: goto L_00553F98;
    case 256u: goto L_00553FC0;
    case 257u: goto L_00553FCC;
    case 258u: goto L_00553FDC;
    case 259u: goto L_00553FF0;
    default: bad_entry(c, 0x00550000u); return;
    }
L_00550000:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00550004:
    c.budget -= 1;
L_00550008:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_005500D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00550058; } }
    c.budget -= 1;
L_00550028:
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 1;
L_0055002C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00550058; } }
    c.budget -= 1;
L_00550038:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00550038u | kUnwind; return; } goto L_00550038; } }
    c.budget -= 1;
L_00550058:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], 0u + 8u);
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00550078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005500B8; } }
    c.budget -= 1;
L_00550078:
    set32(c.r[5], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[3], c.r[2].w[0] + 120u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_005500B0; } }
L_00550088:
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_005500A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005500B8; } }
L_005500A0:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00550088u | kUnwind; return; } goto L_00550088; } }
    c.budget -= 1;
L_005500B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_005500B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005500C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005500D8; } }
L_005500C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005500D8; } }
L_005500D0:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_005500D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005500F0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00550208; } }
L_005500F0:
    st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00550208; } }
    c.budget -= 1;
L_00550100:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00550208; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00550208; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], 0u + 32u);
    c.r[4].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00550208; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00550208; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00550178; } }
L_00550148:
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00550178; } }
    c.budget -= 1;
L_00550158:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00550158u | kUnwind; return; } goto L_00550158; } }
    c.budget -= 1;
L_00550178:
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], 0u + 8u);
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00550198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005501D8; } }
    c.budget -= 1;
L_00550198:
    set32(c.r[5], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[3], c.r[2].w[0] + 120u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_005501D0; } }
L_005501A8:
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_005501C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005501D8; } }
L_005501C0:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005501A8u | kUnwind; return; } goto L_005501A8; } }
    c.budget -= 1;
L_005501D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_005501D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005501F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00550208; } }
    c.budget -= 1;
L_005501F8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 287u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00550208:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 287u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));  goto L_005507D4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005507D0; } }
    st8((c.r[29].w[0] + 284u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_005502D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055023Cu); set32(c.r[5], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_0105(c, 201u, depth + 1u); else { c.pc = 0x005161F0u; return; } if (c.pc != 0x0055023Cu) [[unlikely]] return; }
L_0055023C:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00550258; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005502C0; } }
    c.budget -= 1;
L_00550258:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550264u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0115(c, 161u, depth + 1u); else { c.pc = 0x005558A0u; return; } if (c.pc != 0x00550264u) [[unlikely]] return; }
L_00550264:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_00550274; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_00550274:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_005502D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005502A0; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005502D0; } }
L_005502A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 256ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_005502D0; } }
    c.budget -= 1;
L_005502C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005502D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_005502D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_005502D4:
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005502E8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_005502E8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 284u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550720; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550310; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_005503A8; }
L_00550310:
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550740; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550338u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0114(c, 44u, depth + 1u); else { c.pc = 0x00550CC0u; return; } if (c.pc != 0x00550338u) [[unlikely]] return; }
L_00550338:
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00550350; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00550358; } }
L_00550350:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00550358:
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00550398; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550740; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00550740; } }
L_00550398:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_005503A8:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[22].sd[0] <= 0; set32(c.r[18], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00550428; } }
    c.r[1].d[0] = c.r[22].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00550428; } }
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00550428; } }
    c.f[0] = c.r[21].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00550410; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550410; } }
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 3;
L_00550410:
    c.f[1] = ld32((c.r[20].w[0] + 300u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 6;
L_00550428:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00550718; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0; st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00550460; } }
    c.r[1].d[0] = c.r[22].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00550490; } }
L_00550460:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550488; } }
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00550568; } }
    c.budget -= 1;
L_00550488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00550568; } }
L_00550490:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00550568; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[22].d[0]; st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_005504F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005504BCu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x005504BCu) [[unlikely]] return; }
L_005504BC:
    set32(c.r[3], c.r[22].w[0] - c.r[18].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_00550508; } }
    c.budget -= 1;
L_005504F0:
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 6;
L_00550508:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00550568; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[22].d[0];  if (t) { goto L_00550558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550530u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x00550530u) [[unlikely]] return; }
L_00550530:
    set32(c.r[3], c.r[22].w[0] - c.r[18].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_00550568; } }
    c.budget -= 1;
L_00550558:
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.budget -= 4;
L_00550568:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550618; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005505D8; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005505C8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005505D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_005505D8; } }
L_005505C8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_005505D8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005505D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00550618; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], c.r[16].w[0] + 120u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00550618; } }
L_005505F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00550618; } }
L_00550608:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005505F0u | kUnwind; return; } goto L_005505F0; } }
    c.budget -= 1;
L_00550618:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00550740; }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[17].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 283u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550648u); st8((c.r[29].w[0] + 283u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0114(c, 44u, depth + 1u); else { c.pc = 0x00550CC0u; return; } if (c.pc != 0x00550648u) [[unlikely]] return; }
L_00550648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550680; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 283u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550740; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_00550740; } }
L_00550680:
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00550698; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005506B0; } }
L_00550698:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], 0u - 257u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_00550740; } }
L_005506B0:
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00550710; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], 0u - 257u);
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550740; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00550740; } }
    c.budget -= 1;
L_00550710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_00550718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00550740; } }
L_00550720:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44260000u);
    c.r[3].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 100u), c.r[3].w[0]);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00550740:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_005507D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005507D0; } }
    c.r[6].d[0] = ld8((c.r[29].w[0] + 284u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550768u); c.r[7].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0114(c, 90u, depth + 1u); else { c.pc = 0x00551840u; return; } if (c.pc != 0x00550768u) [[unlikely]] return; }
L_00550768:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  goto L_00550778; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_00550778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550780u); set32(c.r[5], c.r[29].w[0] + 282u);  if (depth < kMaxDepth) unit_0105(c, 264u, depth + 1u); else { c.pc = 0x005168A0u; return; } if (c.pc != 0x00550780u) [[unlikely]] return; }
L_00550780:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 282u));  goto L_005507A0; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0055079C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_0055079C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 282u));
    c.budget -= 1;
L_005507A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005507D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005507B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0105(c, 267u, depth + 1u); else { c.pc = 0x005168F0u; return; } if (c.pc != 0x005507B4u) [[unlikely]] return; }
L_005507B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005507D0; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005507D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_005507D0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_005507D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[30], ld32((c.r[30].w[0])));  goto L_00550844; }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550820; } }
    set32(c.r[9], ld32((c.r[20].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00550820; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[16].d[0] + 0ull;  goto L_00550800; }
L_00550800:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 368u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[9].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00550820u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00550820u) [[unlikely]] return; }
L_00550820:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550830u); st32((c.r[16].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0115(c, 161u, depth + 1u); else { c.pc = 0x005558A0u; return; } if (c.pc != 0x00550830u) [[unlikely]] return; }
L_00550830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_00550840:
    set32(c.r[30], ld32((c.r[30].w[0])));
    c.budget -= 1;
L_00550844:
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054FE60u | kUnwind; return; } [[clang::musttail]] return unit_0113(c, 221u, depth); } }
L_00550850:
    set32(c.r[16], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00550AB0; } }
L_00550860:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550AA0; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], c.r[16].w[0] + 120u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00550AA0; } }
L_00550880:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550A90; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00550960; } }
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00550964; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005508BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0114(c, 44u, depth + 1u); else { c.pc = 0x00550CC0u; return; } if (c.pc != 0x005508BCu) [[unlikely]] return; }
L_005508BC:
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005508D8; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005508E0; } }
    c.budget -= 1;
L_005508D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_005508E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_00550900; }
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005508FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_005508FC:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00550900:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00550A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550910u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_0105(c, 264u, depth + 1u); else { c.pc = 0x005168A0u; return; } if (c.pc != 0x00550910u) [[unlikely]] return; }
L_00550910:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 280u));  goto L_00550930; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0055092C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_0055092C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 280u));
    c.budget -= 1;
L_00550930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550A88; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550944u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0105(c, 267u, depth + 1u); else { c.pc = 0x005168F0u; return; } if (c.pc != 0x00550944u) [[unlikely]] return; }
L_00550944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550A88; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00550A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_00550960:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00550964:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550974u); c.r[7].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0114(c, 90u, depth + 1u); else { c.pc = 0x00551840u; return; } if (c.pc != 0x00550974u) [[unlikely]] return; }
L_00550974:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00550998; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00550998; } }
    set32(c.r[3], 0u + 37u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005509A0; } }
L_00550998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_005509B0; } }
L_005509A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005509B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_005509B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00550A08; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005509C4u); set32(c.r[5], c.r[29].w[0] + 281u);  if (depth < kMaxDepth) unit_0105(c, 201u, depth + 1u); else { c.pc = 0x005161F0u; return; } if (c.pc != 0x005509C4u) [[unlikely]] return; }
L_005509C4:
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005509E0; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_005509E8; } }
    c.budget -= 1;
L_005509E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 281u), static_cast<std::uint8_t>(0u));  if (t) { goto L_005509F8; } }
L_005509E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 281u));  goto L_005509FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C90; } }
L_005509F8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 281u));
    c.budget -= 1;
L_005509FC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
L_00550A08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00550A80; } }
    set32(c.r[9], ld32((c.r[20].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00550A48; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] + 0ull;  goto L_00550A28; }
L_00550A28:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 368u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[9].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00550A48u); set32(c.r[5], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00550A48u) [[unlikely]] return; }
L_00550A48:
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u - 513u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550A6Cu); st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0115(c, 174u, depth + 1u); else { c.pc = 0x00555C30u; return; } if (c.pc != 0x00550A6Cu) [[unlikely]] return; }
L_00550A6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_00550A88; } }
    c.budget -= 1;
L_00550A80:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00550A88:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00550A90:
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[16].w[0] + 120u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00550880u | kUnwind; return; } goto L_00550880; } }
L_00550AA0:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00550860u | kUnwind; return; } goto L_00550860; } }
L_00550AB0:
    set32(c.r[19], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[20].w[0] + 324u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0054FD54u | kUnwind; return; } [[clang::musttail]] return unit_0113(c, 217u, depth); }
L_00550AC0:
    set32(c.r[3], ld32((c.r[20].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 304u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 240u));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_00550AE4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.budget -= 1;
L_00550AE4:
    set32(c.r[4], ld32((c.r[20].w[0] + 304u)));
    c.r[3].d[0] = ~(c.r[23].d[0] | 0ull);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[20].w[0] + 304u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_00550BE4; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 224u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);  goto L_00550BE8; }
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550BE4; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 208u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550BE4; } }
    set32(c.r[16], ld32((c.r[20].w[0] + 336u)));
    set32(c.r[2], c.r[20].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00550BC0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00550B40:
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550BB0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00550BB0; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_00550B68:
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00550B7C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00550B7C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550BA0; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00550B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00550B98u) [[unlikely]] return; }
L_00550B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00550BB0; } }
L_00550BA0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00550B68u | kUnwind; return; } goto L_00550B68; } }
L_00550BB0:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[20].w[0] + 336u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00550B40u | kUnwind; return; } goto L_00550B40; }
L_00550BC0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00550C90; }
    set32(c.r[25], ld32((c.r[20].w[0] + 420u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00550BDCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00550BDCu) [[unlikely]] return; }
L_00550BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550C8C; } }
L_00550BE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 1;
L_00550BE8:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  goto L_00550C50; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550C4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550C4C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 224u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550C4C; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 420u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00550C34u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00550C34u) [[unlikely]] return; }
L_00550C34:
    set32(c.r[3], ld32((c.r[20].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 304u), c.r[2].w[0]);  if (t) { goto L_00550C8C; } }
L_00550C4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00550C50:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550C8C; } }
    set32(c.r[25], ld32((c.r[20].w[0] + 420u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00550C70u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00550C70u) [[unlikely]] return; }
L_00550C70:
    set32(c.r[4], ld32((c.r[20].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xEFFF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[2], 0u + 84u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_00550C90; } }
L_00550C8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00550C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00550C94:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00550CC0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[5].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00550D10; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 64u);  goto L_00550D20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_00550D20; } }
L_00550D10:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00550D20; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 1;
L_00550D20:
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550D34u); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0115(c, 179u, depth + 1u); else { c.pc = 0x00555D70u; return; } if (c.pc != 0x00550D34u) [[unlikely]] return; }
L_00550D34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_00550D60; }
    set32(c.r[3], 0u + 54u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00551824; }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_00551820; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00550D60:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 32u)));  goto L_0055101C; }
    st32((c.r[29].w[0] + 284u), c.r[4].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00550D7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00550D7Cu) [[unlikely]] return; }
L_00550D7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  goto L_00550DEC; }
    set32(c.r[16], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  goto L_00550DB0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 168u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00550DE8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_00550DB0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[29].w[0] + 284u), c.r[16].w[0]);  goto L_00550DE8; }
    set32(c.r[25], ld32((c.r[4].w[0] + 300u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00550DCCu); set32(c.r[6], c.r[29].w[0] + 284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00550DCCu) [[unlikely]] return; }
L_00550DCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00550DE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 54u);  if (t) { goto L_00551820; } }
    st32((c.r[29].w[0] + 284u), c.r[16].w[0]);
    c.budget -= 1;
L_00550DE8:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00550DEC:
    set32(c.r[5], c.r[29].w[0] + 296u);
    set32(c.r[6], c.r[29].w[0] + 292u);
    set32(c.r[7], c.r[29].w[0] + 288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550E00u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 257u, depth + 1u); else { c.pc = 0x0052F7A0u; return; } if (c.pc != 0x00550E00u) [[unlikely]] return; }
L_00550E00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_00550E14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_00550E14:
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[5].sd[0] < 0) { set32(c.r[5], ld32((c.r[19].w[0] + 104u)));  goto L_00550E2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  if (t) { goto L_00550E30; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 1;
L_00550E2C:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00550E30:
    c.f[13] = ld32((c.r[29].w[0] + 292u));
    c.f[14] = ld32((c.r[29].w[0] + 288u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550E40u); c.f[12] = ld32((c.r[29].w[0] + 296u));  if (depth < kMaxDepth) unit_010B(c, 260u, depth + 1u); else { c.pc = 0x0052F830u; return; } if (c.pc != 0x00550E40u) [[unlikely]] return; }
L_00550E40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 172u)));  goto L_00550E54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 1;
L_00550E54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04300000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550E64u); c.r[5].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_010B(c, 227u, depth + 1u); else { c.pc = 0x0052F340u; return; } if (c.pc != 0x00550E64u) [[unlikely]] return; }
L_00550E64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_00550E78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_00550E78:
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);  goto L_00550F28; }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00550F24; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550EA8u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00550EA8u) [[unlikely]] return; }
L_00550EA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  goto L_00550EBC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_00550EBC:
    c.r[2].d[0] = c.r[2].d[0] | 43195ull;
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550ED0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00550ED0u) [[unlikely]] return; }
L_00550ED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[2].d[0] | 7686ull;
    c.f[5] = fp::sub(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[3] = ld32((c.r[19].w[0] + 288u));
    c.f[2] = 0u;
    c.f[4] = c.r[4].w[0];
    c.facc = fp::add(c.f[2], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[1] = c.r[3].w[0];
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[3]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_00550F58; } }
L_00550F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.budget -= 1;
L_00550F28:
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = ld32((c.r[19].w[0] + 288u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 12;
L_00550F58:
    set32(c.r[5], 0u - 1u);
    set32(c.r[7], 0u + 1u);
    st32((c.r[18].w[0] + 136u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550F78u); set32(c.r[8], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_010E(c, 27u, depth + 1u); else { c.pc = 0x005382E0u; return; } if (c.pc != 0x00550F78u) [[unlikely]] return; }
L_00550F78:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00550FA0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 44u)));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 76u)));  goto L_00550FA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00550FA0u);  if (depth < kMaxDepth) unit_0105(c, 186u, depth + 1u); else { c.pc = 0x00516080u; return; } if (c.pc != 0x00550FA0u) [[unlikely]] return; }
L_00550FA0:
    set32(c.r[4], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_00550FA4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 76u)));  goto L_00550FB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00550FE0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 1;
L_00550FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00550FE0; } }
L_00550FC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00550FC0u | kUnwind; return; } goto L_00550FC0; } }
    c.budget -= 1;
L_00550FE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + 80u);
    set32(c.r[2], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  goto L_00550FFC; }
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 2;
L_00550FFC:
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_005510C0; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_0055101C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], 0u - 1u);  goto L_005510B4; }
L_00551024:
    set32(c.r[5], c.r[29].w[0] + 296u);
    set32(c.r[6], c.r[29].w[0] + 292u);
    set32(c.r[7], c.r[29].w[0] + 288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551038u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0109(c, 244u, depth + 1u); else { c.pc = 0x00527DC0u; return; } if (c.pc != 0x00551038u) [[unlikely]] return; }
L_00551038:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_0055104C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_0055104C:
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[5].sd[0] < 0) { set32(c.r[5], ld32((c.r[19].w[0] + 104u)));  goto L_00551064; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 32u)));  if (t) { goto L_00551068; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 1;
L_00551064:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_00551068:
    c.f[13] = ld32((c.r[29].w[0] + 292u));
    c.f[14] = ld32((c.r[29].w[0] + 288u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551078u); c.f[12] = ld32((c.r[29].w[0] + 296u));  if (depth < kMaxDepth) unit_0109(c, 247u, depth + 1u); else { c.pc = 0x00527E40u; return; } if (c.pc != 0x00551078u) [[unlikely]] return; }
L_00551078:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], 0u - 1u);  goto L_0055108C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_0055108C:
    set32(c.r[7], 0u + 1u);
    st32((c.r[18].w[0] + 136u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005510A8u); set32(c.r[8], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_010E(c, 24u, depth + 1u); else { c.pc = 0x00538270u; return; } if (c.pc != 0x005510A8u) [[unlikely]] return; }
L_005510A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_005510C0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_005510B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_00551820; } }
L_005510C0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_005510D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00551820; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_005510D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005510DCu); set32(c.r[5], ld32((c.r[19].w[0] + 32u)));  if (depth < kMaxDepth) unit_0105(c, 183u, depth + 1u); else { c.pc = 0x00516040u; return; } if (c.pc != 0x005510DCu) [[unlikely]] return; }
L_005510DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 364u)));  goto L_005510F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 364u)));
    c.budget -= 1;
L_005510F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_00551190; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 76u)));  goto L_00551154; }
    st32((c.r[29].w[0] + 276u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551114u); set32(c.r[5], c.r[29].w[0] + 276u);  if (depth < kMaxDepth) unit_010B(c, 236u, depth + 1u); else { c.pc = 0x0052F4B0u; return; } if (c.pc != 0x00551114u) [[unlikely]] return; }
L_00551114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00551150; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00551150; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] - 26016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551140u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0105(c, 225u, depth + 1u); else { c.pc = 0x00516440u; return; } if (c.pc != 0x00551140u) [[unlikely]] return; }
L_00551140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00551150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_00551150:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_00551154:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] + 0ull;  goto L_00551168; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_0055116C; } }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00551168:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_0055116C:
    set32(c.r[7], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[19].w[0] + 368u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 364u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055118Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055118Cu) [[unlikely]] return; }
L_0055118C:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00551190:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 26016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005511A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0105(c, 225u, depth + 1u); else { c.pc = 0x00516440u; return; } if (c.pc != 0x005511A4u) [[unlikely]] return; }
L_005511A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  goto L_005511B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_005511B8:
    set32(c.r[5], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005511C4u); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_0105(c, 228u, depth + 1u); else { c.pc = 0x005164A0u; return; } if (c.pc != 0x005511C4u) [[unlikely]] return; }
L_005511C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 304u)));  goto L_005511E4; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005511E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_005511E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 304u)));
    c.budget -= 1;
L_005511E4:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005511F4u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0105(c, 243u, depth + 1u); else { c.pc = 0x00516610u; return; } if (c.pc != 0x005511F4u) [[unlikely]] return; }
L_005511F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 172u)));  goto L_00551214; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00551210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_00551210:
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 1;
L_00551214:
    st32((c.r[29].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_0055123C; }
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    set32(c.r[2], 0u - 7u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 5;
L_0055123C:
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551248u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0105(c, 192u, depth + 1u); else { c.pc = 0x00516110u; return; } if (c.pc != 0x00551248u) [[unlikely]] return; }
L_00551248:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_00551268; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00551264; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_00551264:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00551268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551270u); set32(c.r[5], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x00551270u) [[unlikely]] return; }
L_00551270:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 300u)));  goto L_00551290; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0055128C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_0055128C:
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 1;
L_00551290:
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[19].w[0] + 236u));  goto L_005515EC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[12] = ld32((c.r[19].w[0] + 184u));  goto L_005512DC; }
    c.f[12] = ld32((c.r[19].w[0] + 176u));
    c.f[13] = ld32((c.r[19].w[0] + 180u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005512BCu); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_0105(c, 219u, depth + 1u); else { c.pc = 0x005163A0u; return; } if (c.pc != 0x005512BCu) [[unlikely]] return; }
L_005512BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005512D8; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005512D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_005512D8:
    c.f[12] = ld32((c.r[19].w[0] + 184u));
    c.budget -= 1;
L_005512DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[12]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_00551324; }
    c.f[0] = ld32((c.r[19].w[0] + 188u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00551320; } }
    c.f[1] = ld32((c.r[19].w[0] + 192u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_00551378; }
L_00551320:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00551324:
    c.f[14] = ld32((c.r[19].w[0] + 192u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551330u); c.f[13] = ld32((c.r[19].w[0] + 188u));  if (depth < kMaxDepth) unit_0105(c, 216u, depth + 1u); else { c.pc = 0x00516340u; return; } if (c.pc != 0x00551330u) [[unlikely]] return; }
L_00551330:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_00551350; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0055134C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_0055134C:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00551350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551358u); set32(c.r[5], c.r[19].w[0] + 160u);  if (depth < kMaxDepth) unit_0105(c, 213u, depth + 1u); else { c.pc = 0x00516300u; return; } if (c.pc != 0x00551358u) [[unlikely]] return; }
L_00551358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00551374; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00551374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_00551374:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00551378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551380u); c.f[12] = ld32((c.r[19].w[0] + 196u));  if (depth < kMaxDepth) unit_0105(c, 204u, depth + 1u); else { c.pc = 0x00516240u; return; } if (c.pc != 0x00551380u) [[unlikely]] return; }
L_00551380:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_005513A0; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0055139C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_0055139C:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_005513A0:
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005513ACu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0117(c, 277u, depth + 1u); else { c.pc = 0x0055EF00u; return; } if (c.pc != 0x005513ACu) [[unlikely]] return; }
L_005513AC:
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[5], c.r[29].w[0] + 256u);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[18].w[0] + 92u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 108u));
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 112u));
    c.f[0] = ld32((c.r[18].w[0] + 92u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551404u); set32(c.r[6], c.r[19].w[0] + 148u);  if (depth < kMaxDepth) unit_0105(c, 222u, depth + 1u); else { c.pc = 0x005163F0u; return; } if (c.pc != 0x00551404u) [[unlikely]] return; }
L_00551404:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 240u)));  goto L_00551424; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00551420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_00551420:
    set32(c.r[5], ld32((c.r[19].w[0] + 240u)));
    c.budget -= 1;
L_00551424:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.f[2] = ld32((c.r[19].w[0] + 244u));  goto L_00551460; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551434u); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_0105(c, 234u, depth + 1u); else { c.pc = 0x00516520u; return; } if (c.pc != 0x00551434u) [[unlikely]] return; }
L_00551434:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 300u)));  goto L_0055158C; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00551588; } }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00551588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
    c.f[2] = ld32((c.r[19].w[0] + 244u));
    c.budget -= 1;
L_00551460:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00551488; }
    c.f[0] = ld32((c.r[19].w[0] + 248u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00551588; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00551488:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = ld32((c.r[19].w[0] + 248u));  if (t) { goto L_005514A0; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_005514A0:
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_005514C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_005514E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_005514C0:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = c.f[0];  goto L_005514E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = c.f[2];  if (t) { goto L_005514E4; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_005514E0:
    c.f[3] = c.f[2];
    c.budget -= 1;
L_005514E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_005514E8:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00551500; } }
    c.f[1] = c.f[4];
    c.budget -= 1;
L_00551500:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00551520; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 244u), c.f[3]);  if (t) { goto L_00551548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00551520:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = c.f[0];  goto L_00551540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[4];  if (t) { goto L_00551544; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_00551540:
    c.f[0] = c.f[4];
    c.budget -= 1;
L_00551544:
    st32((c.r[19].w[0] + 244u), c.f[3]);
    c.budget -= 1;
L_00551548:
    st32((c.r[19].w[0] + 248u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 372u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00551578; }
    c.f[13] = ld32((c.r[19].w[0] + 248u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551564u); c.f[12] = ld32((c.r[19].w[0] + 244u));  if (depth < kMaxDepth) unit_0106(c, 243u, depth + 1u); else { c.pc = 0x0051B890u; return; } if (c.pc != 0x00551564u) [[unlikely]] return; }
L_00551564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00551574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551578; } }
L_00551574:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00551578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00551588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_00551588:
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 1;
L_0055158C:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005515E8; } }
    c.f[12] = ld32((c.r[19].w[0] + 280u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005515A4u); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_0105(c, 210u, depth + 1u); else { c.pc = 0x005162C0u; return; } if (c.pc != 0x005515A4u) [[unlikely]] return; }
L_005515A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  goto L_005515C4; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005515C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_005515C0:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_005515C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005515CCu); c.f[12] = ld32((c.r[19].w[0] + 284u));  if (depth < kMaxDepth) unit_0105(c, 207u, depth + 1u); else { c.pc = 0x00516280u; return; } if (c.pc != 0x005515CCu) [[unlikely]] return; }
L_005515CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005515E8; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005515E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_005515E8:
    c.f[0] = ld32((c.r[19].w[0] + 236u));
    c.budget -= 1;
L_005515EC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_00551614; }
    c.f[0] = ld32((c.r[19].w[0] + 232u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_005516C8; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_00551614:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551620u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00551620u) [[unlikely]] return; }
L_00551620:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055162Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0105(c, 231u, depth + 1u); else { c.pc = 0x005164E0u; return; } if (c.pc != 0x0055162Cu) [[unlikely]] return; }
L_0055162C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[19].w[0] + 236u));  goto L_0055164C; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00551648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_00551648:
    c.f[0] = ld32((c.r[19].w[0] + 236u));
    c.budget -= 1;
L_0055164C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 232u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055169Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0105(c, 234u, depth + 1u); else { c.pc = 0x00516520u; return; } if (c.pc != 0x0055169Cu) [[unlikely]] return; }
L_0055169C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005516C4; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005516C4; } }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005516C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_005516C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_005516C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005516D0u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0117(c, 289u, depth + 1u); else { c.pc = 0x0055F250u; return; } if (c.pc != 0x005516D0u) [[unlikely]] return; }
L_005516D0:
    st32((c.r[18].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005516E0u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0117(c, 282u, depth + 1u); else { c.pc = 0x0055F040u; return; } if (c.pc != 0x005516E0u) [[unlikely]] return; }
L_005516E0:
    st32((c.r[18].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_0055173C; }
    c.f[12] = ld32((c.r[19].w[0] + 200u));
    c.f[13] = ld32((c.r[19].w[0] + 204u));
    c.f[14] = ld32((c.r[19].w[0] + 208u));
    c.f[15] = ld32((c.r[19].w[0] + 212u));
    c.f[16] = ld32((c.r[19].w[0] + 216u));
    c.f[17] = ld32((c.r[19].w[0] + 220u));
    c.f[18] = ld32((c.r[19].w[0] + 224u));
    c.f[19] = ld32((c.r[19].w[0] + 228u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055171Cu); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_0105(c, 249u, depth + 1u); else { c.pc = 0x005166A0u; return; } if (c.pc != 0x0055171Cu) [[unlikely]] return; }
L_0055171C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00551738; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00551738; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_00551738:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_0055173C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_005517D0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005517CC; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[5], c.r[29].w[0] + 272u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055176Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010B(c, 245u, depth + 1u); else { c.pc = 0x0052F5E0u; return; } if (c.pc != 0x0055176Cu) [[unlikely]] return; }
L_0055176C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 272u)));  goto L_00551780; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 1;
L_00551780:
    set32(c.r[3], ld32((c.r[18].w[0] + 132u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 132u)));  goto L_005517A0; }
    mmi::divu(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 132u)));
    c.budget -= 4;
L_005517A0:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005517ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0105(c, 240u, depth + 1u); else { c.pc = 0x005165C0u; return; } if (c.pc != 0x005517ACu) [[unlikely]] return; }
L_005517AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 132u), 0u);  goto L_005517CC; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005517C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551820; } }
L_005517C8:
    st32((c.r[18].w[0] + 132u), 0u);
    c.budget -= 1;
L_005517CC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_005517D0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005517DCu); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x005517DCu) [[unlikely]] return; }
L_005517DC:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005517E8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0105(c, 231u, depth + 1u); else { c.pc = 0x005164E0u; return; } if (c.pc != 0x005517E8u) [[unlikely]] return; }
L_005517E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u - 666u);  goto L_00551808; }
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 116u), c.r[2].w[0]);  if (t) { goto L_00551810; } }
    set32(c.r[2], 0u - 666u);
    c.budget -= 1;
L_00551808:
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_00551810:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_00551820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00551824:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00551840:
    set32(c.r[29], c.r[29].w[0] - 464u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.f[21] = c.r[3].w[0];
    c.f[20] = ld32((c.r[5].w[0] + 80u));
    c.f[23] = ld32((c.r[5].w[0] + 84u));
    c.f[22] = ld32((c.r[17].w[0] + 20u));
    c.f[24] = c.f[21];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 33;
L_005518C4:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005518C4u | kUnwind; return; } goto L_005518C4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 32u)));  goto L_00551924; }
    set32(c.r[5], c.r[29].w[0] + 452u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551914u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 257u, depth + 1u); else { c.pc = 0x0052F7A0u; return; } if (c.pc != 0x00551914u) [[unlikely]] return; }
L_00551914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 456u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 448u), c.r[3].w[0]);  if (t) { goto L_00551940; } }
L_00551924:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005528B8; }
    set32(c.r[5], c.r[29].w[0] + 452u);
    set32(c.r[6], c.r[29].w[0] + 448u);
    set32(c.r[7], c.r[29].w[0] + 456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551940u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0109(c, 244u, depth + 1u); else { c.pc = 0x00527DC0u; return; } if (c.pc != 0x00551940u) [[unlikely]] return; }
L_00551940:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  goto L_00551950; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_005528BC; } }
L_00551950:
    set32(c.r[18], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00551AA8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_00551964:
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005519A8; } }
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00551A90; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551990u); set32(c.r[5], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551990u) [[unlikely]] return; }
L_00551990:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 460u));  goto L_005519A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_005519A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[21] = fp::mul(c.f[21], c.f[0]);  if (t) { goto L_00551A90; } }
L_005519A8:
    c.r[2].d[0] = c.r[16].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00551A10; } }
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00551A90; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005519D0u); set32(c.r[5], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x005519D0u) [[unlikely]] return; }
L_005519D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 460u));  goto L_005519E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_005519E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551A04u); c.f[13] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00551A04u) [[unlikely]] return; }
L_00551A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[24] = fp::mul(c.f[24], c.f[0]);  if (t) { goto L_00551A90; } }
    c.budget -= 1;
L_00551A10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00551A90; } }
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00551A90; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551A3Cu); set32(c.r[5], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551A3Cu) [[unlikely]] return; }
L_00551A3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[29].w[0] + 460u));  goto L_00551A4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551A4C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
L_00551A58:
    set32(c.r[2], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00551A78; } }
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 4;
L_00551A78:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00551A58u | kUnwind; return; } goto L_00551A58; } }
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00551A90:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 96u);
    c.budget -= 5;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00551964u | kUnwind; return; } goto L_00551964; }
    c.budget -= 1;
L_00551AA8:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_00551AD4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551AC0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0105(c, 246u, depth + 1u); else { c.pc = 0x00516650u; return; } if (c.pc != 0x00551AC0u) [[unlikely]] return; }
L_00551AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00551AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551AD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_00551AD4:
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[26] = ld32((c.r[20].w[0] + 280u));  goto L_00551B28; }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00551B24; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551B04u); set32(c.r[5], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551B04u) [[unlikely]] return; }
L_00551B04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 460u));  goto L_00551B14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[26] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_00551B28; } }
L_00551B24:
    c.f[26] = ld32((c.r[20].w[0] + 280u));
    c.budget -= 1;
L_00551B28:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 52u)));  goto L_00551C4C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00551C48; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551B5Cu); set32(c.r[5], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551B5Cu) [[unlikely]] return; }
L_00551B5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 460u));  goto L_00551B6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551B6C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[18], 0u - 10000u);  goto L_00551BB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551B88u);  if (depth < kMaxDepth) unit_00AB(c, 433u, depth + 1u); else { c.pc = 0x003AF788u; return; } if (c.pc != 0x00551B88u) [[unlikely]] return; }
L_00551B88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 10;
L_00551BB0:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_00551D40; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00551C3C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551BE0u); set32(c.r[5], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551BE0u) [[unlikely]] return; }
L_00551BE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 460u));  goto L_00551BF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551BF0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], 0u - 10000u);  goto L_00551D40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551C0Cu);  if (depth < kMaxDepth) unit_00AB(c, 433u, depth + 1u); else { c.pc = 0x003AF788u; return; } if (c.pc != 0x00551C0Cu) [[unlikely]] return; }
L_00551C0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551D40; } }
L_00551C3C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551D40; } }
L_00551C48:
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 1;
L_00551C4C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  goto L_00551D04; }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00551D00; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551C78u); set32(c.r[5], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551C78u) [[unlikely]] return; }
L_00551C78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 460u));  goto L_00551C88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551C88:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[18], 0u - 10000u);  goto L_00551CCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551CA4u);  if (depth < kMaxDepth) unit_00AB(c, 433u, depth + 1u); else { c.pc = 0x003AF788u; return; } if (c.pc != 0x00551CA4u) [[unlikely]] return; }
L_00551CA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[18], c.f[0]);
    c.budget -= 10;
L_00551CCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = ld32((c.r[20].w[0] + 232u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00551D40; } }
L_00551D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_00551D04:
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[20].w[0] + 236u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[18], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 232u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[0]);
    c.budget -= 15;
L_00551D40:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.f[25] = ld32((c.r[20].w[0] + 284u));  if (t) { goto L_00551D88; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_00551D8C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551D74u); set32(c.r[5], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551D74u) [[unlikely]] return; }
L_00551D74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 460u));  goto L_00551D84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551D84:
    c.f[25] = fp::mul(c.f[25], c.f[0]);
    c.budget -= 1;
L_00551D88:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_00551D8C:
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_00551E00; }
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00551DFC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551DBCu); set32(c.r[5], c.r[29].w[0] + 460u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551DBCu) [[unlikely]] return; }
L_00551DBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 460u));  goto L_00551DCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551DCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[29].w[0] + 456u), c.f[0]);
    c.budget -= 12;
L_00551DFC:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_00551E00:
    set32(c.r[21], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { c.f[3] = ld32((c.r[17].w[0] + 24u));  goto L_0055202C; }
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00552028; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552028; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551E40u); set32(c.r[5], c.r[29].w[0] + 444u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551E40u) [[unlikely]] return; }
L_00551E40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_00551E50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551E50:
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[29].w[0] + 444u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[29].w[0] + 444u), c.f[0]);
    set32(c.r[21], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551E8Cu); set32(c.r[5], c.r[29].w[0] + 440u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551E8Cu) [[unlikely]] return; }
L_00551E8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_00551E9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551E9C:
    c.f[3] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = ld32((c.r[29].w[0] + 440u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    st32((c.r[29].w[0] + 440u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551ED8u); set32(c.r[5], c.r[29].w[0] + 436u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00551ED8u) [[unlikely]] return; }
L_00551ED8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00551EE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551EE8:
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551EF4u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_010E(c, 78u, depth + 1u); else { c.pc = 0x00538910u; return; } if (c.pc != 0x00551EF4u) [[unlikely]] return; }
L_00551EF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  goto L_00551F04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00551F04:
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], ld32((c.r[29].w[0] + 432u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00551F38; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], 0u + 1u);  goto L_00551F30; }
    set32(c.r[21], 0u + 3u);
    c.budget -= 1;
L_00551F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 304u);  if (t) { goto L_00551F4C; } }
L_00551F38:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_00551F48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], 0u + 2u);  if (t) { goto L_00551F48; } }
L_00551F48:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 1;
L_00551F4C:
    set32(c.r[5], c.r[20].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551F58u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00551F58u) [[unlikely]] return; }
L_00551F58:
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    c.f[27] = ld32((c.r[29].w[0] + 440u));
    c.f[12] = c.f[0] ^ fp::kSign;
    c.facc = fp::mul(c.f[12], c.f[12]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[27], c.f[27]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551F80u); st32((c.r[29].w[0] + 424u), c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00551F80u) [[unlikely]] return; }
L_00551F80:
    c.f[12] = c.f[27];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551F8Cu); c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00551F8Cu) [[unlikely]] return; }
L_00551F8C:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551F98u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 421u, depth + 1u); else { c.pc = 0x003AF668u; return; } if (c.pc != 0x00551F98u) [[unlikely]] return; }
L_00551F98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551FACu); c.r[4].d[0] = c.r[2].d[0] ^ c.r[3].d[0];  if (depth < kMaxDepth) unit_00AC(c, 108u, depth + 1u); else { c.pc = 0x003B25A0u; return; } if (c.pc != 0x00551FACu) [[unlikely]] return; }
L_00551FAC:
    c.f[1] = ld32((c.r[29].w[0] + 424u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 420u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[6].d[0] = c.r[21].d[0] + 0ull;  goto L_00551FD4; }
    st32((c.r[29].w[0] + 424u), c.f[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_00551FD4:
    set32(c.r[4], c.r[29].w[0] + 424u);
    set32(c.r[5], c.r[29].w[0] + 420u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00551FE4u); set32(c.r[7], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0116(c, 159u, depth + 1u); else { c.pc = 0x00559AB0u; return; } if (c.pc != 0x00551FE4u) [[unlikely]] return; }
L_00551FE4:
    c.f[12] = ld32((c.r[29].w[0] + 304u));
    c.f[13] = ld32((c.r[29].w[0] + 308u));
    c.f[14] = ld32((c.r[29].w[0] + 312u));
    c.f[15] = ld32((c.r[29].w[0] + 316u));
    c.f[16] = ld32((c.r[29].w[0] + 320u));
    c.f[17] = ld32((c.r[29].w[0] + 324u));
    c.f[18] = ld32((c.r[29].w[0] + 328u));
    c.f[19] = ld32((c.r[29].w[0] + 332u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055200Cu); set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  if (depth < kMaxDepth) unit_0105(c, 249u, depth + 1u); else { c.pc = 0x005166A0u; return; } if (c.pc != 0x0055200Cu) [[unlikely]] return; }
L_0055200C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552028; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00552028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00552028:
    c.f[3] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 1;
L_0055202C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_00552054; }
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::mul(c.f[22], c.f[21]);  goto L_00552560; }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_00552054:
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[17].w[0] + 28u));  goto L_005522D8; }
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_005522D4; } }
    c.f[0] = fp::sub(c.f[1], c.f[2]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_005520A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 48u)));  if (t) { goto L_005520B0; } }
L_005520A0:
    fpu_div(c, 1u, c.f[0], c.f[3]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
L_005520B0:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00552284; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 19040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00550000u < 16384u) { entry = entries_0114[(t - 0x00550000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_005520DC:
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0055255C; } }
L_005520E8:
    c.f[1] = fp::sqrt(c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_00552104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552120u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00552120u) [[unlikely]] return; }
L_00552120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_00552150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40BA0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 33408ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055216Cu); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0055216Cu) [[unlikely]] return; }
L_0055216C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x409A0000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 33408ull;
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_0055219C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40090000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 44648ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005521B8u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x005521B8u) [[unlikely]] return; }
L_005521B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F930000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 23761ull;
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_005521E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB90000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 51905ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552204u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00552204u) [[unlikely]] return; }
L_00552204:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EE70000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 11010ull;
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_00552234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41FF0000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 63491ull;
    c.f[12] = c.r[3].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552250u); c.f[13] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00552250u) [[unlikely]] return; }
L_00552250:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F70000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 63491ull;
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_00552280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00552284:
    st32((c.r[29].w[0] + 272u), 0u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    c.f[12] = c.f[1];
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[4], c.r[29].w[0] + 408u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 288u), 0u);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005522C0u); st32((c.r[29].w[0] + 292u), c.f[0]);  if (depth < kMaxDepth) unit_0116(c, 158u, depth + 1u); else { c.pc = 0x005599E0u; return; } if (c.pc != 0x005522C0u) [[unlikely]] return; }
L_005522C0:
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = fp::sub(c.f[1], c.f[0]);  if (t) { goto L_0055255C; } }
L_005522D4:
    c.f[2] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 1;
L_005522D8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0055255C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0055255C; } }
    c.f[3] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0055255C; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00552338; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 48u)));  if (t) { goto L_00552348; } }
L_00552338:
    fpu_div(c, 13u, c.f[0], c.f[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
L_00552348:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { st32((c.r[29].w[0] + 272u), 0u);  goto L_0055250C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 19072u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00550000u < 16384u) { entry = entries_0114[(t - 0x00550000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00552374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[13]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_0055255C; } }
L_00552390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[13]);
    c.f[1] = fp::sqrt(c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_005523B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005523C8u);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x005523C8u) [[unlikely]] return; }
L_005523C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_005523F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40BA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 33408ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055240Cu);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x0055240Cu) [[unlikely]] return; }
L_0055240C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x409A0000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 33408ull;
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_0055243C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40090000u);
    c.r[2].d[0] = c.r[2].d[0] | 44648ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552450u);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00552450u) [[unlikely]] return; }
L_00552450:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F930000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 23761ull;
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_00552480:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63491ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552494u);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00552494u) [[unlikely]] return; }
L_00552494:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F70000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 63491ull;
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_005524C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FB90000u);
    c.r[2].d[0] = c.r[2].d[0] | 51905ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005524D8u);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x005524D8u) [[unlikely]] return; }
L_005524D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EE70000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 11010ull;
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[22] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0055255C; } }
L_00552508:
    st32((c.r[29].w[0] + 272u), 0u);
    c.budget -= 1;
L_0055250C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.f[12] = c.f[13];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 276u), c.f[0]);
    st32((c.r[29].w[0] + 288u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552548u); st32((c.r[29].w[0] + 284u), c.f[0]);  if (depth < kMaxDepth) unit_0116(c, 158u, depth + 1u); else { c.pc = 0x005599E0u; return; } if (c.pc != 0x00552548u) [[unlikely]] return; }
L_00552548:
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[22] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
L_0055255C:
    c.f[1] = fp::mul(c.f[22], c.f[21]);
    c.budget -= 1;
L_00552560:
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.f[0] = ld32((c.r[29].w[0] + 448u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055257Cu); c.f[20] = fp::mul(c.f[0], c.f[1]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055257Cu) [[unlikely]] return; }
L_0055257C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 452u));  goto L_0055258C; }
    c.f[20] = 0u;
    c.f[0] = ld32((c.r[29].w[0] + 452u));
    c.budget -= 2;
L_0055258C:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.r[2].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = fp::mul(c.f[24], c.f[0]);  if (t) { goto L_00552634; } }
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.f[1] = c.f[2];  if (t) { goto L_005525C4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 512u);  goto L_005525C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 16u));  if (t) { goto L_005525E4; } }
L_005525C4:
    set32(c.r[2], 0u + 512u);
    c.budget -= 1;
L_005525C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_005525E4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005525E4; } }
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 1;
L_005525E4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00552604; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x322B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52343ull;
    c.f[2] = c.r[2].w[0];
    c.budget -= 3;
L_00552604:
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = 0u;
    c.f[2] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 12;
L_00552634:
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[21] = fp::add(c.f[21], c.f[0]);  if (t) { goto L_00552664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC4260000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 7;
L_00552664:
    c.f[0] = ld32((c.r[19].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[19].w[0] + 104u));  goto L_005526A4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552680u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0105(c, 261u, depth + 1u); else { c.pc = 0x00516850u; return; } if (c.pc != 0x00552680u) [[unlikely]] return; }
L_00552680:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 100u), c.f[20]);  goto L_005526A0; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0055269C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_0055269C:
    st32((c.r[19].w[0] + 100u), c.f[20]);
    c.budget -= 1;
L_005526A0:
    c.f[0] = ld32((c.r[19].w[0] + 104u));
    c.budget -= 1;
L_005526A4:
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[20].w[0] + 172u)));  goto L_005526E0; }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005526BCu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0105(c, 258u, depth + 1u); else { c.pc = 0x00516810u; return; } if (c.pc != 0x005526BCu) [[unlikely]] return; }
L_005526BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 104u), c.f[21]);  goto L_005526DC; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005526D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_005526D8:
    st32((c.r[19].w[0] + 104u), c.f[21]);
    c.budget -= 1;
L_005526DC:
    set32(c.r[2], ld32((c.r[20].w[0] + 172u)));
    c.budget -= 1;
L_005526E0:
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 112u)));  goto L_00552740; }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0055273C; } }
    c.f[12] = ld32((c.r[29].w[0] + 456u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552700u); set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  if (depth < kMaxDepth) unit_0105(c, 255u, depth + 1u); else { c.pc = 0x005167C0u; return; } if (c.pc != 0x00552700u) [[unlikely]] return; }
L_00552700:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 456u));  goto L_00552738; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00552734; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00552734; } }
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00552734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00552734:
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.budget -= 1;
L_00552738:
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.budget -= 1;
L_0055273C:
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 1;
L_00552740:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_00552758; }
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  goto L_005527D4; }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_00552758:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552764u); set32(c.r[6], 0u + 72u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00552764u) [[unlikely]] return; }
L_00552764:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552770u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0105(c, 231u, depth + 1u); else { c.pc = 0x005164E0u; return; } if (c.pc != 0x00552770u) [[unlikely]] return; }
L_00552770:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 112u), c.r[18].w[0]);  goto L_00552790; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0055278C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_0055278C:
    st32((c.r[19].w[0] + 112u), c.r[18].w[0]);
    c.budget -= 1;
L_00552790:
    st32((c.r[29].w[0] + 200u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 116u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005527A8u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0105(c, 234u, depth + 1u); else { c.pc = 0x00516520u; return; } if (c.pc != 0x005527A8u) [[unlikely]] return; }
L_005527A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005527D0; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005527D0; } }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005527D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_005527D0:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_005527D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005527DCu); set32(c.r[5], c.r[29].w[0] + 428u);  if (depth < kMaxDepth) unit_0105(c, 189u, depth + 1u); else { c.pc = 0x005160C0u; return; } if (c.pc != 0x005527DCu) [[unlikely]] return; }
L_005527DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 172u)));  goto L_005527FC; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005527F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_005527F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 172u)));
    c.budget -= 1;
L_005527FC:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 172u)));  goto L_0055286C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 428u)));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552868; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552824u); c.f[12] = c.f[26];  if (depth < kMaxDepth) unit_0105(c, 210u, depth + 1u); else { c.pc = 0x005162C0u; return; } if (c.pc != 0x00552824u) [[unlikely]] return; }
L_00552824:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  goto L_00552844; }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00552840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00552840:
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_00552844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055284Cu); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_0105(c, 207u, depth + 1u); else { c.pc = 0x00516280u; return; } if (c.pc != 0x0055284Cu) [[unlikely]] return; }
L_0055284C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552868; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00552868; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_00552868:
    set32(c.r[2], ld32((c.r[20].w[0] + 172u)));
    c.budget -= 1;
L_0055286C:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005528B8; }
    c.r[2].d[0] = c.r[30].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005528B4; } }
    c.f[12] = ld32((c.r[20].w[0] + 184u));
    c.f[13] = ld32((c.r[20].w[0] + 188u));
    c.f[14] = ld32((c.r[20].w[0] + 192u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552898u); set32(c.r[4], ld32((c.r[19].w[0] + 36u)));  if (depth < kMaxDepth) unit_0105(c, 216u, depth + 1u); else { c.pc = 0x00516340u; return; } if (c.pc != 0x00552898u) [[unlikely]] return; }
L_00552898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005528B4; } }
    set32(c.r[3], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_005528B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005528B8; } }
L_005528B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005528B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_005528BC:
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 464u);  c.pc = t; return; }
L_00552910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00552920:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0055294C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 82u);  if (t) { goto L_00552CA4; } }
L_0055294C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { st16((c.r[19].w[0] + 316u), static_cast<std::uint16_t>(0u));  goto L_00552A40; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 314u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 304u)));  goto L_00552970; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552A3C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.budget -= 1;
L_00552970:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552A3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 316u)));  goto L_00552A2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st16((c.r[19].w[0] + 316u), static_cast<std::uint16_t>(c.r[4].w[0]));  goto L_00552A18; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 312u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st16((c.r[19].w[0] + 316u), static_cast<std::uint16_t>(c.r[4].w[0]));  goto L_00552A04; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552A00; } }
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 316u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00552A04; } }
L_00552A00:
    st16((c.r[19].w[0] + 316u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 1;
L_00552A04:
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.budget -= 5;
L_00552A18:
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 316u)));
    c.budget -= 5;
L_00552A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552A3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00552CA4; } }
L_00552A3C:
    st16((c.r[19].w[0] + 316u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00552A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFCF0000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 304u)));  goto L_00552AE0; }
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 360u)));  goto L_00552AC8; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 364u)));  goto L_00552A9C; }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u - 4097u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 364u)));
    c.budget -= 5;
L_00552A9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552AC4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00552AC4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[8], ld32((c.r[19].w[0] + 368u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00552AC4u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00552AC4u) [[unlikely]] return; }
L_00552AC4:
    set32(c.r[3], ld32((c.r[19].w[0] + 360u)));
    c.budget -= 1;
L_00552AC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00552ADC; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00552ADC:
    set32(c.r[5], ld32((c.r[19].w[0] + 304u)));
    c.budget -= 1;
L_00552AE0:
    set32(c.r[4], 0u - 4097u);
    set32(c.r[3], c.r[19].w[0] + 36u);
    set32(c.r[2], c.r[19].w[0] + 324u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[19].w[0] + 304u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 44u), 0u);
    set32(c.r[16], ld32((c.r[19].w[0] + 324u)));
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00552B50; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00552B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552B30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0114(c, 239u, depth + 1u); else { c.pc = 0x00553DA0u; return; } if (c.pc != 0x00552B30u) [[unlikely]] return; }
L_00552B30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_00552B40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00552B94; } }
L_00552B40:
    set32(c.r[2], c.r[19].w[0] + 324u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00552B28u | kUnwind; return; } goto L_00552B28; }
    c.budget -= 1;
L_00552B50:
    set32(c.r[3], ld32((c.r[19].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00552B94; }
    set32(c.r[4], ld32((c.r[19].w[0] + 372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552B70u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0106(c, 219u, depth + 1u); else { c.pc = 0x0051B5F0u; return; } if (c.pc != 0x00552B70u) [[unlikely]] return; }
L_00552B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00552B90; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00552B90; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552B90u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_010A(c, 8u, depth + 1u); else { c.pc = 0x005280E0u; return; } if (c.pc != 0x00552B90u) [[unlikely]] return; }
L_00552B90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00552B94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 324u)));  goto L_00552BA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00552CA8; } }
L_00552BA4:
    set32(c.r[2], c.r[19].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00552C70; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 1;
L_00552BB4:
    set32(c.r[2], c.r[18].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00552C60; } }
L_00552BC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00552BE0; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 120u)));  goto L_00552BF8; }
    c.budget -= 1;
L_00552BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552BE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 174u, depth + 1u); else { c.pc = 0x00555C30u; return; } if (c.pc != 0x00552BE8u) [[unlikely]] return; }
L_00552BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552C50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00552CA4; } }
L_00552BF8:
    set32(c.r[2], c.r[17].w[0] + 120u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00552C48; } }
    c.budget -= 1;
L_00552C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552C10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 174u, depth + 1u); else { c.pc = 0x00555C30u; return; } if (c.pc != 0x00552C10u) [[unlikely]] return; }
L_00552C10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 20u)));  goto L_00552C20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00552CA4; } }
L_00552C20:
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u - 513u);
    set32(c.r[2], c.r[17].w[0] + 120u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00552C08u | kUnwind; return; } goto L_00552C08; } }
L_00552C48:
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 2;
L_00552C50:
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[18].w[0] + 84u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00552BC0u | kUnwind; return; } goto L_00552BC0; } }
L_00552C60:
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[19].w[0] + 324u);
    c.budget -= 4;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[17], ld32((c.r[18].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00552BB4u | kUnwind; return; } goto L_00552BB4; }
L_00552C70:
    set32(c.r[5], ld32((c.r[19].w[0] + 336u)));
    set32(c.r[4], c.r[19].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00552CA0; } }
    set32(c.r[3], 0u - 3u);
    c.budget -= 1;
L_00552C84:
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[5].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00552C84u | kUnwind; return; } goto L_00552C84; } }
L_00552CA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00552CA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00552CA8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00552CC0:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00552920u | kUnwind; return; } goto L_00552920; }
L_00552CD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00552CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 82u);  if (t) { goto L_00553178; } }
L_00552CF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 304u)));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 360u)));  goto L_00552D8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 420u)));  goto L_00552D38; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552D24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0114(c, 161u, depth + 1u); else { c.pc = 0x00552920u; return; } if (c.pc != 0x00552D24u) [[unlikely]] return; }
L_00552D24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0055317C; } }
L_00552D34:
    set32(c.r[25], ld32((c.r[17].w[0] + 420u)));
    c.budget -= 1;
L_00552D38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00552D48u); set32(c.r[5], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00552D48u) [[unlikely]] return; }
L_00552D48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  goto L_00552D58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553178; } }
L_00552D58:
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00552D6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00553178; } }
L_00552D6C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552D78u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0114(c, 161u, depth + 1u); else { c.pc = 0x00552920u; return; } if (c.pc != 0x00552D78u) [[unlikely]] return; }
L_00552D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553178; } }
L_00552D88:
    set32(c.r[4], ld32((c.r[17].w[0] + 360u)));
    c.budget -= 1;
L_00552D8C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 372u)));  goto L_00552DB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552D9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0118(c, 42u, depth + 1u); else { c.pc = 0x00560830u; return; } if (c.pc != 0x00552D9Cu) [[unlikely]] return; }
L_00552D9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552DAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553178; } }
L_00552DAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 372u)));
    c.budget -= 1;
L_00552DB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00552DD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552DC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 183u, depth + 1u); else { c.pc = 0x0054F4E0u; return; } if (c.pc != 0x00552DC0u) [[unlikely]] return; }
L_00552DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553178; } }
L_00552DD0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00552DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552DDCu);  if (depth < kMaxDepth) unit_0113(c, 171u, depth + 1u); else { c.pc = 0x0054F220u; return; } if (c.pc != 0x00552DDCu) [[unlikely]] return; }
L_00552DDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 304u)));  goto L_00552DEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553178; } }
L_00552DEC:
    set32(c.r[4], ld32((c.r[17].w[0] + 372u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 8192ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552E00u); c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0106(c, 240u, depth + 1u); else { c.pc = 0x0051B840u; return; } if (c.pc != 0x00552E00u) [[unlikely]] return; }
L_00552E00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 296u));  goto L_00552E10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553178; } }
L_00552E10:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = ld32((c.r[17].w[0] + 292u));  if (t) { goto L_00552E74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552E2Cu);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x00552E2Cu) [[unlikely]] return; }
L_00552E2C:
    c.f[0] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[13] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 296u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552E70u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 434u, depth + 1u); else { c.pc = 0x003AF7A0u; return; } if (c.pc != 0x00552E70u) [[unlikely]] return; }
L_00552E70:
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 1;
L_00552E74:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[20] = c.f[0];  goto L_00552E88; }
L_00552E88:
    st32((c.r[17].w[0] + 300u), c.f[20]);
    set32(c.r[7], c.r[17].w[0] + 324u);
    set32(c.r[9], ld32((c.r[17].w[0] + 324u)));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_00552F38; } }
    set32(c.r[4], 0u - 1u);
    set32(c.r[6], 0u - 906u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[8], ld32((c.r[9].w[0] + 84u)));
    c.budget -= 4;
L_00552EAC:
    set32(c.r[3], c.r[9].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_00552EF8; } }
L_00552EB8:
    st32((c.r[8].w[0] + 68u), 0u);
    st32((c.r[8].w[0] + 132u), 0u);
    set32(c.r[2], ld32((c.r[8].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st32((c.r[8].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00552EE8; } }
    st32((c.r[8].w[0] + 52u), c.r[4].w[0]);
    c.budget -= 1;
L_00552EE8:
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00552EB8u | kUnwind; return; } goto L_00552EB8; } }
    c.budget -= 1;
L_00552EF8:
    set32(c.r[8], ld32((c.r[9].w[0] + 96u)));
    set32(c.r[3], c.r[9].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_00552F28; } }
L_00552F08:
    c.r[2].d[0] = ld16((c.r[8].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[8].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], ld32((c.r[8].w[0])));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00552F08u | kUnwind; return; } goto L_00552F08; } }
    c.budget -= 1;
L_00552F28:
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 3;
    if (c.r[9].d[0] != c.r[7].d[0]) { set32(c.r[8], ld32((c.r[9].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00552EACu | kUnwind; return; } goto L_00552EAC; }
    c.budget -= 1;
L_00552F38:
    set32(c.r[16], ld32((c.r[17].w[0] + 324u)));
    set32(c.r[2], c.r[17].w[0] + 324u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00552F70; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00552F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00552F54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0114(c, 239u, depth + 1u); else { c.pc = 0x00553DA0u; return; } if (c.pc != 0x00552F54u) [[unlikely]] return; }
L_00552F54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  goto L_00552F64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00552F74; } }
L_00552F64:
    set32(c.r[2], c.r[17].w[0] + 324u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00552F4Cu | kUnwind; return; } goto L_00552F4C; }
L_00552F70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00552F74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 336u)));  goto L_00552F84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553178; } }
L_00552F84:
    set32(c.r[2], c.r[17].w[0] + 336u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00553048; } }
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_00552F94:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 6ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00552FE8; } }
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00552FE8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00552FE8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 48u)));
    c.f[12] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00552FE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00552FE4u) [[unlikely]] return; }
L_00552FE4:
    c.budget -= 1;
L_00552FE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 48ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 32u)));  goto L_0055301C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553008u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0118(c, 158u, depth + 1u); else { c.pc = 0x00562180u; return; } if (c.pc != 0x00553008u) [[unlikely]] return; }
L_00553008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00553018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553178; } }
L_00553018:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_0055301C:
    set32(c.r[4], 0u - 3u);
    set32(c.r[3], 0u - 5u);
    set32(c.r[2], c.r[17].w[0] + 336u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 10;
    if (c.r[16].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 28u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00552F94u | kUnwind; return; } goto L_00552F94; }
    c.budget -= 1;
L_00553048:
    st32((c.r[17].w[0] + 308u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 304u)));  goto L_005530A0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 360u)));  goto L_00553088; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 360u)));
    c.budget -= 8;
L_00553088:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0055309C; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0055309C:
    set32(c.r[4], ld32((c.r[17].w[0] + 304u)));
    c.budget -= 1;
L_005530A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 4096ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 304u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[17].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 260u)));
    st32((c.r[17].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 256u)));
    st32((c.r[17].w[0] + 264u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 276u), 0u);
    st32((c.r[17].w[0] + 272u), 0u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 312u)));
    c.budget -= 25;
    if (c.r[2].d[0] == 0ull) { st16((c.r[17].w[0] + 316u), static_cast<std::uint16_t>(0u));  goto L_0055311C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[17].w[0] + 304u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 312u)));
    st16((c.r[17].w[0] + 316u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0055311C:
    st32((c.r[17].w[0] + 44u), c.r[17].w[0]);
    set32(c.r[3], c.r[17].w[0] + 36u);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 84u)));
    set32(c.r[4], c.r[5].w[0] + 80u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 364u)));
    c.budget -= 14;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00553170; }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[8], ld32((c.r[17].w[0] + 368u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0055316Cu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0055316Cu) [[unlikely]] return; }
L_0055316C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00553170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553178u);  if (depth < kMaxDepth) unit_0113(c, 210u, depth + 1u); else { c.pc = 0x0054FA40u; return; } if (c.pc != 0x00553178u) [[unlikely]] return; }
L_00553178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0055317C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00553190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_005531BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005531C0; } }
L_005531BC:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_005531C0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00553200; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], c.r[3].w[0] + 48u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_005531F8; } }
L_005531DC:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[16].d[0]) { set32(c.r[3], ld32((c.r[3].w[0])));  goto L_005531EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[4].w[0]);  if (t) { goto L_00553200; } }
L_005531EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005531DCu | kUnwind; return; } goto L_005531DC; } }
    c.budget -= 1;
L_005531F8:
    set32(c.r[4], 0u - 1u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 2;
L_00553200:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00553210; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00553210:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00553418; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { st32((c.r[17].w[0]), 0u);  goto L_00553228; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { goto L_0055322C; } }
L_00553228:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055322C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055323C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0055341C; } }
L_0055323C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553244u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0113(c, 35u, depth + 1u); else { c.pc = 0x0054CAE0u; return; } if (c.pc != 0x00553244u) [[unlikely]] return; }
L_00553244:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00553254; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553418; } }
L_00553254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055325Cu); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_0113(c, 31u, depth + 1u); else { c.pc = 0x0054CA10u; return; } if (c.pc != 0x0055325Cu) [[unlikely]] return; }
L_0055325C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0055326C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553418; } }
L_0055326C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553274u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0113(c, 28u, depth + 1u); else { c.pc = 0x0054C930u; return; } if (c.pc != 0x00553274u) [[unlikely]] return; }
L_00553274:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 21868u)));  goto L_00553284; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553418; } }
L_00553284:
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 384u)));  goto L_005532A0; }
    set32(c.r[2], ld32((c.r[16].w[0] + 404u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_005532A4; } }
L_005532A0:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_005532A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005532ACu); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0104(c, 263u, depth + 1u); else { c.pc = 0x00512E20u; return; } if (c.pc != 0x005532ACu) [[unlikely]] return; }
L_005532AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 276u)));  goto L_005532BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553418; } }
L_005532BC:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 304u)));
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);  goto L_00553314; }
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00553310; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_00553310; }
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 268u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
L_00553310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.budget -= 1;
L_00553314:
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[3] = ld32((c.r[18].w[0] + 288u));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 20;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00553380; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553370u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0113(c, 22u, depth + 1u); else { c.pc = 0x0054C810u; return; } if (c.pc != 0x00553370u) [[unlikely]] return; }
L_00553370:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_0055339C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553418; } }
L_00553380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553388u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0113(c, 15u, depth + 1u); else { c.pc = 0x0054C620u; return; } if (c.pc != 0x00553388u) [[unlikely]] return; }
L_00553388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00553398; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00553418; } }
L_00553398:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0055339C:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00553410; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_005533B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005533F8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_005533F0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_005533F0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_005533F0:
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 2;
L_005533F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005533B0u | kUnwind; return; } goto L_005533B0; } }
    c.budget -= 1;
L_00553410:
    st32((c.r[17].w[0] + 36u), c.r[8].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00553418:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0055341C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00553430:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_005534C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_005534B0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00553478:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055348Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0114(c, 203u, depth + 1u); else { c.pc = 0x00553430u; return; } if (c.pc != 0x0055348Cu) [[unlikely]] return; }
L_0055348C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 12u)));  goto L_0055349C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_005535D8; } }
L_0055349C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00553478u | kUnwind; return; } goto L_00553478; } }
    c.budget -= 1;
L_005534B0:
    set32(c.r[4], ld32((c.r[21].w[0] + 304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_005535D4; } }
L_005534C8:
    set32(c.r[3], ld32((c.r[21].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 24u)));  goto L_005534E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005535D4; } }
L_005534E4:
    set32(c.r[2], ld32((c.r[3].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_005535C0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[23].d[0] = c.r[22].d[0] & 2ull;
    c.budget -= 2;
L_005534F8:
    set32(c.r[2], ld32((c.r[3].w[0] + 380u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005535A8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 388u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[30].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[16], c.r[30].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[16].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_005535A8; } }
L_00553538:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 64u);  goto L_00553560; }
    set32(c.r[2], ld32((c.r[21].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0055355C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_00553560; } }
L_0055355C:
    set32(c.r[3], 0u + 64u);
    c.budget -= 1;
L_00553560:
    set32(c.r[2], ld32((c.r[21].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (t) { goto L_00553574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 24u);  if (t) { goto L_005535D4; } }
L_00553574:
    set32(c.r[8], ld32((c.r[21].w[0] + 60u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553588u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0115(c, 282u, depth + 1u); else { c.pc = 0x00557390u; return; } if (c.pc != 0x00553588u) [[unlikely]] return; }
L_00553588:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00553598; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005535D4; } }
L_00553598:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00553538u | kUnwind; return; } goto L_00553538; } }
    c.budget -= 1;
L_005535A8:
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 376u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005534F8u | kUnwind; return; } goto L_005534F8; } }
L_005535C0:
    set32(c.r[4], ld32((c.r[21].w[0] + 304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[21].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 5;
L_005535D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_005535D8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00553610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00553634; } }
    set32(c.r[16], 0u + 255u);
    c.budget -= 1;
L_00553634:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_00553664; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 5147u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0055365Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x0055365Cu) [[unlikely]] return; }
L_0055365C:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.budget -= 2;
L_00553664:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[16].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 5151u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553680u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 37u, depth + 1u); else { c.pc = 0x0052C7C0u; return; } if (c.pc != 0x00553680u) [[unlikely]] return; }
L_00553680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00553690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 42u);  if (t) { goto L_00553698; } }
L_00553690:
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00553698:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005536B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 304u)));
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_005536E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00553B64; } }
L_005536E8:
    c.r[2].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00553700u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00553700u) [[unlikely]] return; }
L_00553700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553708u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0113(c, 179u, depth + 1u); else { c.pc = 0x0054F440u; return; } if (c.pc != 0x00553708u) [[unlikely]] return; }
L_00553708:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  goto L_00553728; }
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_00553B64; } }
L_00553728:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_005537D8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005537D8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_005537D8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0055374C:
    set32(c.r[2], ld32((c.r[5].w[0] + 380u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  goto L_005537C4; }
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005537C0; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 388u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005537A0u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0115(c, 256u, depth + 1u); else { c.pc = 0x00557080u; return; } if (c.pc != 0x005537A0u) [[unlikely]] return; }
L_005537A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005537C0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFDFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_00553B64; } }
L_005537C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_005537C4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 376u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0055374Cu | kUnwind; return; } goto L_0055374C; } }
L_005537D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 324u)));  goto L_0055386C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00553848; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00553808:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00553830; } }
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
L_00553830:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00553808u | kUnwind; return; } goto L_00553808; } }
    c.budget -= 1;
L_00553848:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 5017u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553868u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00553868u) [[unlikely]] return; }
L_00553868:
    set32(c.r[4], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 1;
L_0055386C:
    set32(c.r[2], c.r[16].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_005538B0; } }
L_00553878:
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005538A4u); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0115(c, 122u, depth + 1u); else { c.pc = 0x00555290u; return; } if (c.pc != 0x005538A4u) [[unlikely]] return; }
L_005538A4:
    set32(c.r[2], c.r[16].w[0] + 324u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00553878u | kUnwind; return; } goto L_00553878; } }
L_005538B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 336u)));
    set32(c.r[2], c.r[16].w[0] + 336u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_005538F8; } }
L_005538C0:
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005538ECu); st32((c.r[4].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0118(c, 174u, depth + 1u); else { c.pc = 0x00562EC0u; return; } if (c.pc != 0x005538ECu) [[unlikely]] return; }
L_005538EC:
    set32(c.r[2], c.r[16].w[0] + 336u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005538C0u | kUnwind; return; } goto L_005538C0; } }
L_005538F8:
    set32(c.r[18], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[2], c.r[16].w[0] + 348u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_005539C0; } }
L_00553908:
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[18].w[0]), c.r[18].w[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00553958; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 634u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553958u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00553958u) [[unlikely]] return; }
L_00553958:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00553990; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00553990; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 639u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553990u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00553990u) [[unlikely]] return; }
L_00553990:
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 642u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005539B0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x005539B0u) [[unlikely]] return; }
L_005539B0:
    set32(c.r[2], c.r[16].w[0] + 348u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00553908u | kUnwind; return; } goto L_00553908; } }
    c.budget -= 1;
L_005539C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[16].w[0] + 48u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 380u)));
    c.budget -= 13;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 404u)));  goto L_00553A14; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 5060u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553A10u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00553A10u) [[unlikely]] return; }
L_00553A10:
    set32(c.r[5], ld32((c.r[16].w[0] + 404u)));
    c.budget -= 1;
L_00553A14:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  goto L_00553A3C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 5065u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553A38u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00553A38u) [[unlikely]] return; }
L_00553A38:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00553A3C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_00553A70; }
    set32(c.r[2], ld32((c.r[16].w[0] + 416u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00553A6C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 5074u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553A6Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00553A6Cu) [[unlikely]] return; }
L_00553A6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00553A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00553AB8; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00553AB8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_00553A8C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00553AA8; }
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_00553AB8; } }
L_00553AA8:
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00553A8Cu | kUnwind; return; } goto L_00553A8C; } }
    c.budget -= 1;
L_00553AB8:
    set32(c.r[5], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_00553AE4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 5087u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553AE0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00553AE0u) [[unlikely]] return; }
L_00553AE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00553AE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_00553B08; }
    set32(c.r[4], ld32((c.r[28].w[0] - 21868u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00553B04u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00553B04u) [[unlikely]] return; }
L_00553B04:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00553B08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[16].w[0]), c.r[16].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 416u)));
    c.budget -= 11;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29352u)));  goto L_00553B44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553B3Cu);  if (depth < kMaxDepth) unit_0119(c, 17u, depth + 1u); else { c.pc = 0x005642A0u; return; } if (c.pc != 0x00553B3Cu) [[unlikely]] return; }
L_00553B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00553B64; } }
L_00553B44:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19456u);
    set32(c.r[7], 0u + 5107u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553B60u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 38u, depth + 1u); else { c.pc = 0x0052C7D0u; return; } if (c.pc != 0x00553B60u) [[unlikely]] return; }
L_00553B60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00553B64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00553B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 16384ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[7], 0u + 128u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[5], c.r[5].w[0] - 20032u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[6], 0u + 32u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 84u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 104u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 172u), 0u);
    st32((c.r[4].w[0] + 144u), 0u);
    st32((c.r[4].w[0] + 176u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 192u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 196u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 232u), 0u);
    st32((c.r[4].w[0] + 236u), 0u);
    st32((c.r[4].w[0] + 240u), 0u);
    st32((c.r[4].w[0] + 244u), 0u);
    st32((c.r[4].w[0] + 248u), 0u);
    st32((c.r[4].w[0] + 280u), 0u);
    st32((c.r[4].w[0] + 284u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 288u), 0u);
    st32((c.r[4].w[0] + 292u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 296u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 292u));
    st32((c.r[4].w[0] + 300u), c.f[0]);
    st32((c.r[4].w[0] + 260u), 0u);
    st32((c.r[4].w[0] + 256u), 0u);
    st32((c.r[4].w[0] + 268u), 0u);
    st32((c.r[4].w[0] + 264u), 0u);
    st32((c.r[4].w[0] + 276u), 0u);
    st32((c.r[4].w[0] + 272u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    st32((c.r[4].w[0] + 156u), 0u);
    st32((c.r[4].w[0] + 160u), 0u);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 168u), c.r[8].w[0]);
    c.budget -= 70;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553C98u); set32(c.r[4], c.r[16].w[0] + 200u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00553C98u) [[unlikely]] return; }
L_00553C98:
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 308u), 0u);
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 316u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 318u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 320u), 0u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), 0u);
    st32((c.r[16].w[0] + 368u), 0u);
    st32((c.r[16].w[0] + 372u), 0u);
    st32((c.r[16].w[0] + 376u), 0u);
    st32((c.r[16].w[0] + 380u), 0u);
    st32((c.r[16].w[0] + 388u), 0u);
    st32((c.r[16].w[0] + 384u), 0u);
    st32((c.r[16].w[0] + 392u), 0u);
    st32((c.r[16].w[0] + 396u), 0u);
    st32((c.r[16].w[0] + 400u), 0u);
    st32((c.r[16].w[0] + 404u), 0u);
    st32((c.r[16].w[0] + 416u), 0u);
    st32((c.r[16].w[0] + 412u), 0u);
    st32((c.r[16].w[0] + 408u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00553D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 19408u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + 36u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[6], c.r[16].w[0] + 48u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[5], c.r[16].w[0] + 324u);
    st32((c.r[4].w[0] + 420u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] + 336u);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 44u), 0u);
    set32(c.r[2], c.r[16].w[0] + 348u);
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 324u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 328u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 332u), 0u);
    st32((c.r[4].w[0] + 336u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 340u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 344u), 0u);
    st32((c.r[4].w[0] + 348u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 352u), c.r[2].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553D8Cu); st32((c.r[4].w[0] + 356u), 0u);  if (depth < kMaxDepth) unit_0114(c, 235u, depth + 1u); else { c.pc = 0x00553B80u; return; } if (c.pc != 0x00553D8Cu) [[unlikely]] return; }
L_00553D8C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00553DA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00553DD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0115(c, 26u, depth); } }
L_00553DD8:
    set32(c.r[16], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[2], c.r[18].w[0] + 96u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0115(c, 25u, depth); } }
L_00553DE8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  [[clang::musttail]] return unit_0115(c, 22u, depth); }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0115(c, 21u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553E04u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0109(c, 250u, depth + 1u); else { c.pc = 0x00527EC0u; return; } if (c.pc != 0x00553E04u) [[unlikely]] return; }
L_00553E04:
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00553E28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0])));  [[clang::musttail]] return unit_0115(c, 24u, depth); }
L_00553E28:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.f[12] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553E3Cu); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_0115(c, 212u, depth + 1u); else { c.pc = 0x00556640u; return; } if (c.pc != 0x00553E3Cu) [[unlikely]] return; }
L_00553E3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_00553E4C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { [[clang::musttail]] return unit_0115(c, 27u, depth); } }
L_00553E4C:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[10], c.r[29].w[0] + 92u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553E70u); set32(c.r[11], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0109(c, 253u, depth + 1u); else { c.pc = 0x00527F10u; return; } if (c.pc != 0x00553E70u) [[unlikely]] return; }
L_00553E70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  goto L_00553E80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0115(c, 26u, depth); } }
L_00553E80:
    set32(c.r[3], 0u + 1u);
    c.f[0] = 0u;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 48u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0115(c, 19u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00553EF0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0115(c, 19u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553EB8u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553EB8u) [[unlikely]] return; }
L_00553EB8:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553EC4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553EC4u) [[unlikely]] return; }
L_00553EC4:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553ED4u); c.f[12] = ld32((c.r[29].w[0] + 92u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553ED4u) [[unlikely]] return; }
L_00553ED4:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553EE8u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00553EE8u) [[unlikely]] return; }
L_00553EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_0115(c, 19u, depth); } }
L_00553EF0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00553F48; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0115(c, 19u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553F10u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553F10u) [[unlikely]] return; }
L_00553F10:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553F1Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553F1Cu) [[unlikely]] return; }
L_00553F1C:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553F2Cu); c.f[12] = ld32((c.r[29].w[0] + 92u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553F2Cu) [[unlikely]] return; }
L_00553F2C:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553F40u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00553F40u) [[unlikely]] return; }
L_00553F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_0115(c, 19u, depth); } }
L_00553F48:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00553FA0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0115(c, 19u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553F68u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553F68u) [[unlikely]] return; }
L_00553F68:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553F74u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553F74u) [[unlikely]] return; }
L_00553F74:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553F84u); c.f[12] = ld32((c.r[29].w[0] + 92u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553F84u) [[unlikely]] return; }
L_00553F84:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553F98u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00553F98u) [[unlikely]] return; }
L_00553F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_0115(c, 19u, depth); } }
L_00553FA0:
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00553FF8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0115(c, 19u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553FC0u); c.f[12] = ld32((c.r[29].w[0] + 88u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553FC0u) [[unlikely]] return; }
L_00553FC0:
    c.f[12] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553FCCu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553FCCu) [[unlikely]] return; }
L_00553FCC:
    c.f[21] = fp::sub(c.f[20], c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 84u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553FDCu); c.f[12] = ld32((c.r[29].w[0] + 92u));  if (depth < kMaxDepth) unit_00AB(c, 432u, depth + 1u); else { c.pc = 0x003AF770u; return; } if (c.pc != 0x00553FDCu) [[unlikely]] return; }
L_00553FDC:
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00553FF0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[21]));  if (depth < kMaxDepth) unit_00AB(c, 430u, depth + 1u); else { c.pc = 0x003AF740u; return; } if (c.pc != 0x00553FF0u) [[unlikely]] return; }
L_00553FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_0115(c, 19u, depth); } }
L_00553FF8:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_0115(c, 7u, depth); } }
    [[clang::musttail]] return unit_0115(c, 2u, depth);
}

}
