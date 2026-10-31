#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00F7[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0,
    0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0,
    0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53,
    0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0,
    70, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00F7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004DC000;
    case 2u: goto L_004DC040;
    case 3u: goto L_004DC04C;
    case 4u: goto L_004DC0E8;
    case 5u: goto L_004DC0F0;
    case 6u: goto L_004DC118;
    case 7u: goto L_004DC220;
    case 8u: goto L_004DC2A4;
    case 9u: goto L_004DC2E4;
    case 10u: goto L_004DC300;
    case 11u: goto L_004DC368;
    case 12u: goto L_004DC3C4;
    case 13u: goto L_004DC3D0;
    case 14u: goto L_004DC3DC;
    case 15u: goto L_004DC3EC;
    case 16u: goto L_004DC3F8;
    case 17u: goto L_004DC408;
    case 18u: goto L_004DC414;
    case 19u: goto L_004DC430;
    case 20u: goto L_004DC500;
    case 21u: goto L_004DC53C;
    case 22u: goto L_004DC560;
    case 23u: goto L_004DC584;
    case 24u: goto L_004DC58C;
    case 25u: goto L_004DC5C4;
    case 26u: goto L_004DC5F0;
    case 27u: goto L_004DC610;
    case 28u: goto L_004DC63C;
    case 29u: goto L_004DC644;
    case 30u: goto L_004DC650;
    case 31u: goto L_004DC664;
    case 32u: goto L_004DC678;
    case 33u: goto L_004DC690;
    case 34u: goto L_004DC6A0;
    case 35u: goto L_004DC6B0;
    case 36u: goto L_004DC6C0;
    case 37u: goto L_004DC6D0;
    case 38u: goto L_004DC6E0;
    case 39u: goto L_004DC6F0;
    case 40u: goto L_004DC700;
    case 41u: goto L_004DC710;
    case 42u: goto L_004DC728;
    case 43u: goto L_004DC738;
    case 44u: goto L_004DC748;
    case 45u: goto L_004DC758;
    case 46u: goto L_004DC768;
    case 47u: goto L_004DC778;
    case 48u: goto L_004DC788;
    case 49u: goto L_004DC798;
    case 50u: goto L_004DC7A8;
    case 51u: goto L_004DC7D0;
    case 52u: goto L_004DC7F4;
    case 53u: goto L_004DC7FC;
    case 54u: goto L_004DC808;
    case 55u: goto L_004DC814;
    case 56u: goto L_004DC8E4;
    case 57u: goto L_004DC938;
    case 58u: goto L_004DC9C4;
    case 59u: goto L_004DC9E4;
    case 60u: goto L_004DCA00;
    case 61u: goto L_004DCA10;
    case 62u: goto L_004DCAB0;
    case 63u: goto L_004DCBA8;
    case 64u: goto L_004DCD04;
    case 65u: goto L_004DCD20;
    case 66u: goto L_004DCDB8;
    case 67u: goto L_004DCE20;
    case 68u: goto L_004DCF70;
    case 69u: goto L_004DCF78;
    case 70u: goto L_004DCF80;
    case 71u: goto L_004DCF88;
    case 72u: goto L_004DCF98;
    case 73u: goto L_004DCFA4;
    case 74u: goto L_004DCFAC;
    case 75u: goto L_004DCFBC;
    case 76u: goto L_004DCFDC;
    case 77u: goto L_004DD008;
    case 78u: goto L_004DD018;
    case 79u: goto L_004DD024;
    case 80u: goto L_004DD030;
    case 81u: goto L_004DD040;
    case 82u: goto L_004DD04C;
    case 83u: goto L_004DD058;
    case 84u: goto L_004DD0FC;
    case 85u: goto L_004DD148;
    case 86u: goto L_004DD238;
    case 87u: goto L_004DD2B0;
    case 88u: goto L_004DD3B4;
    case 89u: goto L_004DD3E0;
    case 90u: goto L_004DD40C;
    case 91u: goto L_004DD42C;
    case 92u: goto L_004DD43C;
    case 93u: goto L_004DD448;
    case 94u: goto L_004DD46C;
    case 95u: goto L_004DD48C;
    case 96u: goto L_004DD49C;
    case 97u: goto L_004DD4A8;
    case 98u: goto L_004DD530;
    case 99u: goto L_004DD60C;
    case 100u: goto L_004DD630;
    case 101u: goto L_004DD65C;
    case 102u: goto L_004DD6E8;
    case 103u: goto L_004DD80C;
    case 104u: goto L_004DD830;
    case 105u: goto L_004DD8D4;
    case 106u: goto L_004DD998;
    case 107u: goto L_004DDA28;
    case 108u: goto L_004DDA84;
    case 109u: goto L_004DDAB0;
    case 110u: goto L_004DDBBC;
    case 111u: goto L_004DDC04;
    case 112u: goto L_004DDC2C;
    case 113u: goto L_004DDC38;
    case 114u: goto L_004DDC64;
    case 115u: goto L_004DDCD4;
    case 116u: goto L_004DDD80;
    case 117u: goto L_004DDEBC;
    case 118u: goto L_004DDEE0;
    case 119u: goto L_004DDF90;
    case 120u: goto L_004DDFD4;
    case 121u: goto L_004DE018;
    case 122u: goto L_004DE030;
    case 123u: goto L_004DE08C;
    case 124u: goto L_004DE110;
    case 125u: goto L_004DE120;
    case 126u: goto L_004DE218;
    case 127u: goto L_004DE354;
    case 128u: goto L_004DE370;
    case 129u: goto L_004DE424;
    case 130u: goto L_004DE684;
    case 131u: goto L_004DE6D8;
    case 132u: goto L_004DE774;
    case 133u: goto L_004DE828;
    case 134u: goto L_004DE8F0;
    case 135u: goto L_004DE910;
    case 136u: goto L_004DE9D8;
    case 137u: goto L_004DE9F8;
    case 138u: goto L_004DEA6C;
    case 139u: goto L_004DEA9C;
    case 140u: goto L_004DEAA4;
    case 141u: goto L_004DEB78;
    case 142u: goto L_004DEBC0;
    case 143u: goto L_004DEC14;
    case 144u: goto L_004DED04;
    case 145u: goto L_004DEDF0;
    case 146u: goto L_004DEE40;
    case 147u: goto L_004DEEBC;
    case 148u: goto L_004DEF40;
    case 149u: goto L_004DEF5C;
    case 150u: goto L_004DEF70;
    case 151u: goto L_004DF0A4;
    case 152u: goto L_004DF0B0;
    case 153u: goto L_004DF134;
    case 154u: goto L_004DF140;
    case 155u: goto L_004DF210;
    case 156u: goto L_004DF274;
    case 157u: goto L_004DF2D0;
    case 158u: goto L_004DF2F0;
    case 159u: goto L_004DF3B8;
    case 160u: goto L_004DF3E4;
    case 161u: goto L_004DF404;
    case 162u: goto L_004DF420;
    case 163u: goto L_004DF730;
    case 164u: goto L_004DF768;
    case 165u: goto L_004DF7C8;
    case 166u: goto L_004DF818;
    case 167u: goto L_004DF850;
    case 168u: goto L_004DF890;
    case 169u: goto L_004DF980;
    case 170u: goto L_004DFA44;
    case 171u: goto L_004DFA80;
    case 172u: goto L_004DFAF8;
    case 173u: goto L_004DFB60;
    case 174u: goto L_004DFB90;
    case 175u: goto L_004DFBA0;
    case 176u: goto L_004DFBB0;
    case 177u: goto L_004DFBC0;
    case 178u: goto L_004DFBD0;
    case 179u: goto L_004DFBE0;
    case 180u: goto L_004DFBF0;
    case 181u: goto L_004DFC00;
    case 182u: goto L_004DFC10;
    case 183u: goto L_004DFC28;
    case 184u: goto L_004DFC38;
    case 185u: goto L_004DFC48;
    case 186u: goto L_004DFC58;
    case 187u: goto L_004DFC68;
    case 188u: goto L_004DFC78;
    case 189u: goto L_004DFC88;
    case 190u: goto L_004DFC98;
    case 191u: goto L_004DFCA8;
    case 192u: goto L_004DFCE4;
    case 193u: goto L_004DFD1C;
    case 194u: goto L_004DFD70;
    case 195u: goto L_004DFE30;
    case 196u: goto L_004DFEA4;
    case 197u: goto L_004DFEC8;
    case 198u: goto L_004DFED0;
    case 199u: goto L_004DFF60;
    default: bad_entry(c, 0x004DC000u); return;
    }
L_004DC000:
    st32((c.r[20].w[0] + 1084u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[20].w[0] + 1088u), 0u);
    c.f[22] = c.r[3].w[0];
    st32((c.r[20].w[0] + 1092u), 0u);
    c.f[20] = c.f[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 1872u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.f[21] = c.f[22];  if (t) { goto L_004DC0DC; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC040u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0004(c, 375u, depth + 1u); else { c.pc = 0x00113EC0u; return; } if (c.pc != 0x004DC040u) [[unlikely]] return; }
L_004DC040:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC04Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DC04Cu) [[unlikely]] return; }
L_004DC04C:
    c.f[4] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[20].w[0] + 356u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 360u));
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[3] = fp::sub(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0] + 364u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 2u, c.f[0], c.f[2]);
    c.f[5] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 3u, c.f[0], c.f[2]);
    c.f[6] = fp::mul(c.f[4], c.f[2]);
    c.f[4] = fp::mul(c.f[1], c.f[2]);
    c.f[2] = ld32((c.r[20].w[0] + 476u));
    c.f[1] = ld32((c.r[20].w[0] + 480u));
    c.f[0] = ld32((c.r[20].w[0] + 484u));
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 29;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[17], ld32((c.r[18].w[0] + 12u)));  goto L_004DC0E0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DC0DC; } }
    st32((c.r[20].w[0] + 1084u), c.r[16].w[0]);
    c.budget -= 1;
L_004DC0DC:
    set32(c.r[17], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_004DC0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004DC1DC; } }
L_004DC0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC0F0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004DC0F0u) [[unlikely]] return; }
L_004DC0F0:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0] + 1872u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004DC1DC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 424u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004DC1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC118u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DC118u) [[unlikely]] return; }
L_004DC118:
    c.f[4] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[20].w[0] + 356u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 360u));
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[3] = fp::sub(c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[20].w[0] + 364u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 2u, c.f[0], c.f[2]);
    c.f[5] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 3u, c.f[0], c.f[2]);
    c.f[6] = fp::mul(c.f[4], c.f[2]);
    c.f[4] = fp::mul(c.f[1], c.f[2]);
    c.f[2] = ld32((c.r[20].w[0] + 476u));
    c.f[1] = ld32((c.r[20].w[0] + 480u));
    c.f[0] = ld32((c.r[20].w[0] + 484u));
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[2] = ld32((c.r[20].w[0] + 664u));
    c.f[1] = ld32((c.r[20].w[0] + 668u));
    c.f[0] = ld32((c.r[20].w[0] + 672u));
    c.facc = fp::mul(c.f[6], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 37;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DC1C4; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DC1D8; } }
    st32((c.r[20].w[0] + 1088u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[3];  if (t) { goto L_004DC1D8; } }
L_004DC1C4:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DC1D8; } }
    st32((c.r[20].w[0] + 1092u), c.r[16].w[0]);
    c.f[21] = c.f[3];
    c.budget -= 2;
L_004DC1D8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004DC1DC:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004DC0E8u | kUnwind; return; } goto L_004DC0E8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004DC220:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 476u));
    st32((c.r[4].w[0] + 748u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 480u));
    st32((c.r[4].w[0] + 752u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 484u));
    st32((c.r[4].w[0] + 756u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1872u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 412u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 464u), c.r[3].w[0]);  if (t) { goto L_004DC4EC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 306u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 112u)));  goto L_004DC2A8; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1172u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DC2A4; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 328u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[12] = ld32((c.r[17].w[0] + 852u));  goto L_004DC29C; }
    c.f[1] = ld32((c.r[17].w[0] + 852u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 5;
L_004DC29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC2A4u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00D6(c, 190u, depth + 1u); else { c.pc = 0x004596C0u; return; } if (c.pc != 0x004DC2A4u) [[unlikely]] return; }
L_004DC2A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_004DC2A8:
    set32(c.r[6], c.r[17].w[0] + 488u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    set32(c.r[8], c.r[17].w[0] + 476u);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 468u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    st32((c.r[17].w[0] + 472u), c.f[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.f[12] = ld32((c.r[17].w[0] + 472u));
    set32(c.r[5], ld32((c.r[17].w[0] + 468u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC2E4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 181u, depth + 1u); else { c.pc = 0x0046A520u; return; } if (c.pc != 0x004DC2E4u) [[unlikely]] return; }
L_004DC2E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 464u)));
    c.f[12] = ld32((c.r[17].w[0] + 472u));
    set32(c.r[6], ld32((c.r[17].w[0] + 468u)));
    set32(c.r[7], c.r[16].w[0] + 28u);
    set32(c.r[5], c.r[17].w[0] + 512u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC300u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x004DC300u) [[unlikely]] return; }
L_004DC300:
    c.f[8] = ld32((c.r[17].w[0] + 512u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[7] = ld32((c.r[17].w[0] + 528u));
    c.f[10] = 0u;
    c.f[6] = ld32((c.r[17].w[0] + 544u));
    c.f[9] = c.r[2].w[0];
    c.f[5] = ld32((c.r[17].w[0] + 516u));
    c.f[4] = ld32((c.r[17].w[0] + 532u));
    c.f[3] = ld32((c.r[17].w[0] + 548u));
    c.f[2] = ld32((c.r[17].w[0] + 520u));
    c.f[1] = ld32((c.r[17].w[0] + 536u));
    c.f[0] = ld32((c.r[17].w[0] + 552u));
    c.facc = fp::mul(c.f[10], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[7]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[10], c.f[6]));
    c.facc = fp::mul(c.f[10], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[4]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[10], c.f[3]));
    c.facc = fp::mul(c.f[10], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[10], c.f[0]));
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 500u), c.f[6]);
    st32((c.r[17].w[0] + 504u), c.f[3]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC368u); st32((c.r[17].w[0] + 508u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004DC368u) [[unlikely]] return; }
L_004DC368:
    c.f[0] = ld32((c.r[17].w[0] + 512u));
    set32(c.r[4], c.r[17].w[0] + 512u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 528u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 544u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 60u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 516u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 532u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 548u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 76u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 520u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 536u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 552u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC3C4u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_00C9(c, 147u, depth + 1u); else { c.pc = 0x00425110u; return; } if (c.pc != 0x004DC3C4u) [[unlikely]] return; }
L_004DC3C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC3D0u); set32(c.r[4], c.r[17].w[0] + 512u);  if (depth < kMaxDepth) unit_00C9(c, 150u, depth + 1u); else { c.pc = 0x00425140u; return; } if (c.pc != 0x004DC3D0u) [[unlikely]] return; }
L_004DC3D0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC3DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 17u, depth + 1u); else { c.pc = 0x00420560u; return; } if (c.pc != 0x004DC3DCu) [[unlikely]] return; }
L_004DC3DC:
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[17].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC3ECu); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_00C9(c, 149u, depth + 1u); else { c.pc = 0x00425130u; return; } if (c.pc != 0x004DC3ECu) [[unlikely]] return; }
L_004DC3EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC3F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 17u, depth + 1u); else { c.pc = 0x00420560u; return; } if (c.pc != 0x004DC3F8u) [[unlikely]] return; }
L_004DC3F8:
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[4], c.r[17].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC408u); st32((c.r[29].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_00C9(c, 148u, depth + 1u); else { c.pc = 0x00425120u; return; } if (c.pc != 0x004DC408u) [[unlikely]] return; }
L_004DC408:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC414u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 17u, depth + 1u); else { c.pc = 0x00420560u; return; } if (c.pc != 0x004DC414u) [[unlikely]] return; }
L_004DC414:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC430u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004DC430u) [[unlikely]] return; }
L_004DC430:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[17].w[0] + 576u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[17].w[0] + 580u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[17].w[0] + 584u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[17].w[0] + 588u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[17].w[0] + 592u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[17].w[0] + 596u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[17].w[0] + 600u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[17].w[0] + 604u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    st32((c.r[17].w[0] + 608u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[17].w[0] + 612u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[17].w[0] + 616u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[17].w[0] + 620u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[17].w[0] + 624u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[17].w[0] + 628u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[17].w[0] + 632u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[17].w[0] + 636u), c.f[0]);
    c.f[6] = ld32((c.r[17].w[0] + 484u));
    c.f[3] = ld32((c.r[17].w[0] + 504u));
    c.f[1] = ld32((c.r[17].w[0] + 508u));
    c.f[2] = ld32((c.r[17].w[0] + 480u));
    c.facc = fp::mul(c.f[3], c.f[6]);
    c.f[4] = ld32((c.r[17].w[0] + 476u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));
    c.f[5] = ld32((c.r[17].w[0] + 500u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    st32((c.r[17].w[0] + 676u), c.f[0]);
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[4]));
    st32((c.r[17].w[0] + 680u), c.f[1]);
    st32((c.r[17].w[0] + 684u), c.f[0]);
    c.budget -= 47;
L_004DC4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004DC500:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = ld32((c.r[2].w[0] + 4768u));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = ld32((c.r[2].w[0] + 4772u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[14] = ld32((c.r[2].w[0] + 4776u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC53Cu); set32(c.r[5], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_008E(c, 174u, depth + 1u); else { c.pc = 0x0033AB80u; return; } if (c.pc != 0x004DC53Cu) [[unlikely]] return; }
L_004DC53C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = ld32((c.r[2].w[0] + 4800u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[13] = ld32((c.r[2].w[0] + 4804u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[14] = ld32((c.r[2].w[0] + 4808u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC560u); set32(c.r[5], c.r[16].w[0] + 400u);  if (depth < kMaxDepth) unit_008E(c, 174u, depth + 1u); else { c.pc = 0x0033AB80u; return; } if (c.pc != 0x004DC560u) [[unlikely]] return; }
L_004DC560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = ld32((c.r[2].w[0] + 4784u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[13] = ld32((c.r[2].w[0] + 4788u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[14] = ld32((c.r[2].w[0] + 4792u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC584u); set32(c.r[5], c.r[16].w[0] + 384u);  if (depth < kMaxDepth) unit_008E(c, 174u, depth + 1u); else { c.pc = 0x0033AB80u; return; } if (c.pc != 0x004DC584u) [[unlikely]] return; }
L_004DC584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC58Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 192u, depth + 1u); else { c.pc = 0x0033B090u; return; } if (c.pc != 0x004DC58Cu) [[unlikely]] return; }
L_004DC58C:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[16].w[0] + 448u);
    st32((c.r[16].w[0] + 416u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 420u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 424u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 420u));
    c.f[1] = ld32((c.r[16].w[0] + 424u));
    c.f[0] = ld32((c.r[16].w[0] + 416u));
    st32((c.r[16].w[0] + 448u), c.f[0]);
    st32((c.r[16].w[0] + 452u), c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC5C4u); st32((c.r[16].w[0] + 456u), c.f[1]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x004DC5C4u) [[unlikely]] return; }
L_004DC5C4:
    c.f[2] = ld32((c.r[16].w[0] + 420u));
    c.f[1] = ld32((c.r[16].w[0] + 416u));
    c.f[0] = ld32((c.r[16].w[0] + 424u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    st32((c.r[16].w[0] + 348u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC5F0u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 191u, depth + 1u); else { c.pc = 0x0033B080u; return; } if (c.pc != 0x004DC5F0u) [[unlikely]] return; }
L_004DC5F0:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 432u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 436u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 440u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC610u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 195u, depth + 1u); else { c.pc = 0x0033B0C0u; return; } if (c.pc != 0x004DC610u) [[unlikely]] return; }
L_004DC610:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC63Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1880u)));  if (depth < kMaxDepth) unit_008E(c, 211u, depth + 1u); else { c.pc = 0x0033B1F0u; return; } if (c.pc != 0x004DC63Cu) [[unlikely]] return; }
L_004DC63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC644u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 194u, depth + 1u); else { c.pc = 0x0033B0B0u; return; } if (c.pc != 0x004DC644u) [[unlikely]] return; }
L_004DC644:
    set32(c.r[4], ld32((c.r[16].w[0] + 1880u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC650u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x0033B170u; return; } if (c.pc != 0x004DC650u) [[unlikely]] return; }
L_004DC650:
    c.f[12] = ld32((c.r[16].w[0] + 416u));
    c.f[13] = ld32((c.r[16].w[0] + 420u));
    c.f[14] = ld32((c.r[16].w[0] + 424u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC664u); set32(c.r[4], ld32((c.r[16].w[0] + 1880u)));  if (depth < kMaxDepth) unit_008E(c, 197u, depth + 1u); else { c.pc = 0x0033B0E0u; return; } if (c.pc != 0x004DC664u) [[unlikely]] return; }
L_004DC664:
    c.f[12] = ld32((c.r[16].w[0] + 432u));
    c.f[13] = ld32((c.r[16].w[0] + 436u));
    c.f[14] = ld32((c.r[16].w[0] + 440u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC678u); set32(c.r[4], ld32((c.r[16].w[0] + 1880u)));  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033B0D0u; return; } if (c.pc != 0x004DC678u) [[unlikely]] return; }
L_004DC678:
    set32(c.r[2], ld32((c.r[16].w[0] + 1876u)));
    set32(c.r[17], c.r[2].w[0] + 168u);
    set32(c.r[18], c.r[2].w[0] + 52u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC690u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DC690u) [[unlikely]] return; }
L_004DC690:
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC6A0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DC6A0u) [[unlikely]] return; }
L_004DC6A0:
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC6B0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DC6B0u) [[unlikely]] return; }
L_004DC6B0:
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC6C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DC6C0u) [[unlikely]] return; }
L_004DC6C0:
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC6D0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DC6D0u) [[unlikely]] return; }
L_004DC6D0:
    st32((c.r[29].w[0] + 84u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC6E0u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DC6E0u) [[unlikely]] return; }
L_004DC6E0:
    st32((c.r[29].w[0] + 88u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC6F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DC6F0u) [[unlikely]] return; }
L_004DC6F0:
    st32((c.r[29].w[0] + 96u), c.f[0]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC700u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DC700u) [[unlikely]] return; }
L_004DC700:
    set32(c.r[4], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC710u); st32((c.r[29].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DC710u) [[unlikely]] return; }
L_004DC710:
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[16].w[0] + 1876u)));
    set32(c.r[17], c.r[2].w[0] + 168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC728u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DC728u) [[unlikely]] return; }
L_004DC728:
    st32((c.r[16].w[0] + 2232u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC738u); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DC738u) [[unlikely]] return; }
L_004DC738:
    st32((c.r[16].w[0] + 2236u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC748u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DC748u) [[unlikely]] return; }
L_004DC748:
    st32((c.r[16].w[0] + 2240u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC758u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DC758u) [[unlikely]] return; }
L_004DC758:
    st32((c.r[16].w[0] + 2248u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC768u); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DC768u) [[unlikely]] return; }
L_004DC768:
    st32((c.r[16].w[0] + 2252u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC778u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DC778u) [[unlikely]] return; }
L_004DC778:
    st32((c.r[16].w[0] + 2256u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC788u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DC788u) [[unlikely]] return; }
L_004DC788:
    st32((c.r[16].w[0] + 2264u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC798u); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DC798u) [[unlikely]] return; }
L_004DC798:
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC7A8u); st32((c.r[16].w[0] + 2268u), c.f[0]);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DC7A8u) [[unlikely]] return; }
L_004DC7A8:
    st32((c.r[16].w[0] + 2272u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004DC7D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC7F4u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00F7(c, 20u, depth + 1u); else { c.pc = 0x004DC500u; return; } if (c.pc != 0x004DC7F4u) [[unlikely]] return; }
L_004DC7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC7FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F7(c, 7u, depth + 1u); else { c.pc = 0x004DC220u; return; } if (c.pc != 0x004DC7FCu) [[unlikely]] return; }
L_004DC7FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC808u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F6(c, 157u, depth + 1u); else { c.pc = 0x004DBBF0u; return; } if (c.pc != 0x004DC808u) [[unlikely]] return; }
L_004DC808:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC814u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F6(c, 154u, depth + 1u); else { c.pc = 0x004DB7E0u; return; } if (c.pc != 0x004DC814u) [[unlikely]] return; }
L_004DC814:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1194u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DC82C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DC82C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DC86C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DC84C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DC84C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DC85C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DC85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DC86C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DC86C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 420u));  goto L_004DC8B4; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1168u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DC8B0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1166u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DC8B0; } }
    c.f[1] = ld32((c.r[17].w[0] + 1340u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DC8B0; } }
    c.f[0] = ld32((c.r[17].w[0] + 348u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 352u), c.f[0]);  if (t) { goto L_004DC8DC; } }
L_004DC8B0:
    c.f[1] = ld32((c.r[17].w[0] + 420u));
    c.budget -= 1;
L_004DC8B4:
    c.f[0] = ld32((c.r[17].w[0] + 480u));
    c.f[3] = ld32((c.r[17].w[0] + 416u));
    c.f[2] = ld32((c.r[17].w[0] + 476u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[17].w[0] + 424u));
    c.f[4] = ld32((c.r[17].w[0] + 484u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[17].w[0] + 352u), c.f[0]);
    c.budget -= 10;
L_004DC8DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC8E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F6(c, 148u, depth + 1u); else { c.pc = 0x004DB200u; return; } if (c.pc != 0x004DC8E4u) [[unlikely]] return; }
L_004DC8E4:
    c.f[1] = ld32((c.r[17].w[0] + 700u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_004DC904; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DC904:
    st8((c.r[17].w[0] + 1160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 464u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 328u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004DC930; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1160u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[17].w[0] + 1160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_004DC930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC938u);  if (depth < kMaxDepth) unit_00F6(c, 133u, depth + 1u); else { c.pc = 0x004DAC50u; return; } if (c.pc != 0x004DC938u) [[unlikely]] return; }
L_004DC938:
    c.f[7] = ld32((c.r[17].w[0] + 648u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[17].w[0] + 692u));
    c.f[2] = ld32((c.r[17].w[0] + 696u));
    c.f[3] = ld32((c.r[17].w[0] + 644u));
    c.facc = fp::mul(c.f[4], c.f[7]);
    c.f[5] = ld32((c.r[17].w[0] + 640u));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[6] = ld32((c.r[17].w[0] + 688u));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[6], c.f[7]));
    st32((c.r[17].w[0] + 664u), c.f[1]);
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    st32((c.r[17].w[0] + 668u), c.f[2]);
    st32((c.r[17].w[0] + 672u), c.f[1]);
    c.f[3] = ld32((c.r[17].w[0] + 664u));
    c.f[2] = ld32((c.r[17].w[0] + 668u));
    c.f[1] = ld32((c.r[17].w[0] + 672u));
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    fpu_rsqrt(c, 1u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[17].w[0] + 664u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 668u));
    c.f[12] = c.f[20];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 668u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 672u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC9C4u); st32((c.r[17].w[0] + 672u), c.f[0]);  if (depth < kMaxDepth) unit_00F6(c, 151u, depth + 1u); else { c.pc = 0x004DB5E0u; return; } if (c.pc != 0x004DC9C4u) [[unlikely]] return; }
L_004DC9C4:
    set32(c.r[3], 0u + 3u);
    mmi::divu(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004DC9E8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC9E4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00F6(c, 170u, depth + 1u); else { c.pc = 0x004DBFC0u; return; } if (c.pc != 0x004DC9E4u) [[unlikely]] return; }
L_004DC9E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004DC9E8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DCA00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 800u), 0u);  c.pc = t; return; }
L_004DCA10:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 1166u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 436u));
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[4] = ld32((c.r[4].w[0] + 432u));
    c.f[3] = ld32((c.r[4].w[0] + 368u));
    c.facc = fp::mul(c.f[2], c.f[0]);
    c.f[6] = ld32((c.r[4].w[0] + 440u));
    c.f[5] = ld32((c.r[4].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DCA54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DCA6C; } }
L_004DCA54:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_004DCA68; }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_004DCA68:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_004DCA6C:
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 2284u));
    c.f[12] = 0u;
    c.f[14] = c.f[12];
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.budget -= 14;
    { c.f[13] = fp::mul(c.f[1], c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033AF40u | kUnwind; return; } [[clang::musttail]] return unit_008E(c, 184u, depth); }
L_004DCAB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 356u));
    c.f[2] = ld32((c.r[4].w[0] + 488u));
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    c.f[0] = ld32((c.r[4].w[0] + 492u));
    c.f[5] = fp::sub(c.f[3], c.f[2]);
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 364u));
    c.f[0] = ld32((c.r[4].w[0] + 496u));
    c.f[2] = ld32((c.r[4].w[0] + 500u));
    c.f[1] = ld32((c.r[4].w[0] + 504u));
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 508u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 28;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004DCD08; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1080u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1194u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DCB40; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DCB40:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DCB80; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DCB60; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DCB60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DCB70; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DCB70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DCB80; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DCB80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004DCD04; } }
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[3] = 0u;
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[20] = fp::mul(c.f[2], c.f[3]);
    c.f[21] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCBA8u); c.f[22] = fp::mul(c.f[0], c.f[3]);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DCBA8u) [[unlikely]] return; }
L_004DCBA8:
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[6] = fp::add(c.f[2], c.f[22]);
    c.f[3] = fp::add(c.f[0], c.f[20]);
    c.f[4] = fp::add(c.f[1], c.f[21]);
    c.f[2] = ld32((c.r[16].w[0] + 360u));
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    st32((c.r[29].w[0] + 48u), c.f[3]);
    c.f[5] = fp::sub(c.f[4], c.f[2]);
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[4]);
    c.f[1] = ld32((c.r[16].w[0] + 364u));
    c.f[0] = ld32((c.r[16].w[0] + 500u));
    c.f[2] = ld32((c.r[16].w[0] + 504u));
    c.f[4] = fp::sub(c.f[6], c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[6]);
    c.f[1] = ld32((c.r[16].w[0] + 508u));
    st32((c.r[29].w[0] + 52u), c.f[5]);
    st32((c.r[29].w[0] + 56u), c.f[4]);
    st32((c.r[29].w[0] + 48u), c.f[3]);
    c.facc = fp::mul(c.f[3], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[2]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = fp::mul(c.f[6], c.f[2]);
    c.f[2] = fp::sub(c.f[5], c.f[0]);
    c.f[0] = fp::mul(c.f[6], c.f[1]);
    c.f[1] = fp::sub(c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    fpu_rsqrt(c, 5u, c.f[0], c.f[5]);
    fpu_div(c, 7u, c.f[0], c.f[5]);
    c.f[10] = fp::mul(c.f[3], c.f[5]);
    c.f[9] = fp::mul(c.f[2], c.f[5]);
    c.f[8] = fp::mul(c.f[1], c.f[5]);
    c.f[4] = c.r[3].w[0];
    st32((c.r[29].w[0] + 48u), c.f[10]);
    st32((c.r[29].w[0] + 52u), c.f[9]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[4]));
    c.budget -= 52;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 56u), c.f[8]);  if (t) { goto L_004DCC80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1186u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004DCD04; } }
L_004DCC80:
    set32(c.r[3], ld32((c.r[16].w[0] + 1080u)));
    c.f[1] = fp::sqrt(c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 424u));
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    c.f[3] = ld32((c.r[16].w[0] + 1392u));
    c.f[5] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[4], c.f[3]);
    c.f[6] = fp::mul(c.f[3], c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 420u));
    c.f[1] = ld32((c.r[3].w[0] + 112u));
    c.f[4] = ld32((c.r[16].w[0] + 416u));
    c.f[3] = ld32((c.r[3].w[0] + 108u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[3] = fp::sub(c.f[4], c.f[3]);
    c.facc = fp::mul(c.f[9], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[3]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[8], c.f[5]));
    c.f[0] = fp::mul(c.f[7], c.f[0]);
    c.f[1] = fp::mul(c.f[6], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[13] = fp::mul(c.f[9], c.f[0]);
    c.f[14] = fp::mul(c.f[8], c.f[0]);
    c.f[12] = fp::mul(c.f[10], c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[13]);
    st32((c.r[29].w[0] + 56u), c.f[14]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCD04u); st32((c.r[29].w[0] + 48u), c.f[12]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DCD04u) [[unlikely]] return; }
L_004DCD04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004DCD08:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DCD20:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 1672u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1187u));
    c.f[22] = c.f[12];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = fp::mul(c.f[0], c.f[0]);  if (t) { goto L_004DD3B4; } }
    c.f[1] = ld32((c.r[16].w[0] + 1100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[22]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1100u), c.f[1]);  if (t) { goto L_004DCD98; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1187u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004DD3B8; }
    st8((c.r[16].w[0] + 1187u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1190u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DD3B4; } }
L_004DCD98:
    set32(c.r[3], ld32((c.r[16].w[0] + 1096u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 1096u)));  goto L_004DCE08; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1084u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004DCE04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCDB8u);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DCDB8u) [[unlikely]] return; }
L_004DCDB8:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 356u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 364u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DCE04; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1084u)));
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    st32((c.r[16].w[0] + 1096u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1104u), c.f[0]);
    c.budget -= 4;
L_004DCE04:
    set32(c.r[4], ld32((c.r[16].w[0] + 1096u)));
    c.budget -= 1;
L_004DCE08:
    st32((c.r[29].w[0] + 368u), 0u);
    st32((c.r[29].w[0] + 372u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 376u), 0u);  if (t) { goto L_004DCEB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCE20u);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DCE20u) [[unlikely]] return; }
L_004DCE20:
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[16].w[0] + 360u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 364u));
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    c.f[2] = c.r[3].w[0];
    st32((c.r[29].w[0] + 372u), c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 376u), c.f[3]);
    st32((c.r[29].w[0] + 368u), c.f[1]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    fpu_rsqrt(c, 5u, c.f[2], c.f[5]);
    fpu_div(c, 21u, c.f[2], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 368u), c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 372u), c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[5]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 30;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 376u), c.f[1]);  if (t) { goto L_004DCED8; } }
    c.f[2] = ld32((c.r[16].w[0] + 476u));
    c.f[1] = ld32((c.r[16].w[0] + 480u));
    c.f[0] = ld32((c.r[16].w[0] + 484u));
    c.f[21] = ld32((c.r[16].w[0] + 1104u));
    st32((c.r[29].w[0] + 368u), c.f[2]);
    st32((c.r[29].w[0] + 372u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 376u), c.f[0]);  if (t) { goto L_004DCED8; } }
L_004DCEB8:
    c.f[0] = ld32((c.r[16].w[0] + 476u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = ld32((c.r[16].w[0] + 480u));
    c.f[21] = c.r[3].w[0];
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 484u));
    st32((c.r[29].w[0] + 372u), c.f[1]);
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.budget -= 8;
L_004DCED8:
    c.f[0] = ld32((c.r[16].w[0] + 1104u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = ld32((c.r[29].w[0] + 368u));  goto L_004DCF24; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DCF20; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1187u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004DD3B4; } }
    st8((c.r[16].w[0] + 1187u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1190u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DD3B4; } }
L_004DCF20:
    c.f[2] = ld32((c.r[29].w[0] + 368u));
    c.budget -= 1;
L_004DCF24:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[1] = ld32((c.r[29].w[0] + 372u));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.f[5] = ld32((c.r[16].w[0] + 376u));
    c.f[4] = ld32((c.r[16].w[0] + 372u));
    c.f[3] = ld32((c.r[16].w[0] + 368u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 336u), 0u);
    st32((c.r[29].w[0] + 304u), c.f[3]);
    st32((c.r[29].w[0] + 340u), 0u);
    st32((c.r[29].w[0] + 308u), c.f[4]);
    st32((c.r[29].w[0] + 344u), 0u);
    st32((c.r[29].w[0] + 312u), c.f[5]);
    st32((c.r[29].w[0] + 320u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCF70u); st32((c.r[29].w[0] + 328u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004DCF70u) [[unlikely]] return; }
L_004DCF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCF78u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004DCF78u) [[unlikely]] return; }
L_004DCF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCF80u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004DCF80u) [[unlikely]] return; }
L_004DCF80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCF88u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004DCF88u) [[unlikely]] return; }
L_004DCF88:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCF98u); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x004DCF98u) [[unlikely]] return; }
L_004DCF98:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCFA4u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004DCFA4u) [[unlikely]] return; }
L_004DCFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCFACu); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0013(c, 292u, depth + 1u); else { c.pc = 0x0014E450u; return; } if (c.pc != 0x004DCFACu) [[unlikely]] return; }
L_004DCFAC:
    c.f[20] = c.f[0];
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCFBCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x004DCFBCu) [[unlikely]] return; }
L_004DCFBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004DCFE8; }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCFDCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 362u, depth + 1u); else { c.pc = 0x00127FD0u; return; } if (c.pc != 0x004DCFDCu) [[unlikely]] return; }
L_004DCFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_004DD00C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_004DCFE8:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD008u);  if (depth < kMaxDepth) unit_0013(c, 291u, depth + 1u); else { c.pc = 0x0014E420u; return; } if (c.pc != 0x004DD008u) [[unlikely]] return; }
L_004DD008:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_004DD00C:
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD018u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x004DD018u) [[unlikely]] return; }
L_004DD018:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD024u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x004DD024u) [[unlikely]] return; }
L_004DD024:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD030u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004DD030u) [[unlikely]] return; }
L_004DD030:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD040u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x004DD040u) [[unlikely]] return; }
L_004DD040:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD04Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x004DD04Cu) [[unlikely]] return; }
L_004DD04C:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD058u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x004DD058u) [[unlikely]] return; }
L_004DD058:
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[29].w[0] + 124u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    st32((c.r[29].w[0] + 160u), 0u);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 164u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[29].w[0] + 72u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD0FCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_008E(c, 204u, depth + 1u); else { c.pc = 0x0033B170u; return; } if (c.pc != 0x004DD0FCu) [[unlikely]] return; }
L_004DD0FC:
    c.f[3] = ld32((c.r[16].w[0] + 436u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = ld32((c.r[29].w[0] + 372u));
    c.f[5] = ld32((c.r[16].w[0] + 432u));
    c.f[4] = ld32((c.r[29].w[0] + 368u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[7] = ld32((c.r[16].w[0] + 440u));
    c.f[6] = ld32((c.r[29].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[1] = ld32((c.r[29].w[0] + 372u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.f[20] = fp::mul(c.f[4], c.f[2]);
    c.f[23] = fp::mul(c.f[1], c.f[2]);
    c.f[24] = fp::mul(c.f[0], c.f[2]);
    c.f[12] = c.f[20];
    c.f[13] = c.f[23];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD148u); c.f[14] = c.f[24];  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033B0D0u; return; } if (c.pc != 0x004DD148u) [[unlikely]] return; }
L_004DD148:
    st32((c.r[16].w[0] + 432u), c.f[20]);
    st32((c.r[16].w[0] + 436u), c.f[23]);
    st32((c.r[16].w[0] + 440u), c.f[24]);
    st32((c.r[16].w[0] + 1104u), c.f[21]);
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    c.f[10] = ld32((c.r[16].w[0] + 420u));
    c.f[1] = ld32((c.r[29].w[0] + 368u));
    c.f[9] = ld32((c.r[16].w[0] + 416u));
    c.facc = fp::mul(c.f[0], c.f[10]);
    c.f[2] = ld32((c.r[29].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[9]));
    c.f[4] = ld32((c.r[16].w[0] + 424u));
    c.f[3] = ld32((c.r[16].w[0] + 356u));
    c.f[1] = ld32((c.r[16].w[0] + 360u));
    c.f[20] = fp::add(c.facc, fp::mul(c.f[2], c.f[4]));
    c.f[2] = ld32((c.r[16].w[0] + 488u));
    c.f[0] = ld32((c.r[16].w[0] + 492u));
    c.f[7] = ld32((c.r[16].w[0] + 500u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 364u));
    c.f[0] = ld32((c.r[16].w[0] + 496u));
    c.f[6] = ld32((c.r[16].w[0] + 504u));
    c.f[5] = ld32((c.r[16].w[0] + 508u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[8] = 0u;
    c.facc = fp::mul(c.f[3], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[5]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 1u, c.f[21], c.f[20]);
    c.facc = fp::mul(c.f[10], c.f[6]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[7]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 43;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[8] = ld32((c.r[16].w[0] + 504u));  goto L_004DD23C; }
    c.f[3] = ld32((c.r[28].w[0] - 32344u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.facc = fp::add(c.f[8], c.f[2]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 32184u));
    c.f[2] = ld32((c.r[16].w[0] + 1392u));
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[7], c.f[2]);
    c.f[12] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[6], c.f[2]);
    c.f[0] = fp::mul(c.f[5], c.f[2]);
    c.f[13] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD238u); c.f[14] = fp::mul(c.f[0], c.f[3]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DD238u) [[unlikely]] return; }
L_004DD238:
    c.f[8] = ld32((c.r[16].w[0] + 504u));
    c.budget -= 1;
L_004DD23C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = ld32((c.r[29].w[0] + 376u));
    c.f[7] = ld32((c.r[29].w[0] + 372u));
    c.f[1] = ld32((c.r[16].w[0] + 508u));
    c.facc = fp::mul(c.f[8], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[1], c.f[7]));
    c.f[4] = ld32((c.r[16].w[0] + 500u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 420u));
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::mul(c.f[4], c.f[7]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[8], c.f[0]));
    c.f[2] = ld32((c.r[16].w[0] + 416u));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[3] = ld32((c.r[16].w[0] + 424u));
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[6]));
    c.f[0] = ld32((c.r[16].w[0] + 1392u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 1u, c.f[1], c.f[22]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[12] = fp::mul(c.f[6], c.f[0]);
    c.f[13] = fp::mul(c.f[5], c.f[0]);
    c.f[14] = fp::mul(c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 352u), c.f[6]);
    st32((c.r[29].w[0] + 356u), c.f[5]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD2B0u); st32((c.r[29].w[0] + 360u), c.f[4]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DD2B0u) [[unlikely]] return; }
L_004DD2B0:
    c.f[1] = ld32((c.r[16].w[0] + 1060u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 368u));  goto L_004DD364; }
    c.f[3] = ld32((c.r[29].w[0] + 372u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[1] = ld32((c.r[29].w[0] + 368u));
    c.f[4] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[3], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = ld32((c.r[16].w[0] + 420u));
    c.f[2] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[29].w[0] + 372u), c.f[3]);
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[22]);
    c.f[5] = fp::mul(c.f[2], c.f[4]);
    st32((c.r[29].w[0] + 372u), c.f[1]);
    c.f[4] = ld32((c.r[16].w[0] + 424u));
    st32((c.r[29].w[0] + 376u), c.f[5]);
    c.f[2] = ld32((c.r[16].w[0] + 416u));
    c.f[5] = fp::sub(c.f[5], c.f[4]);
    c.f[4] = fp::sub(c.f[6], c.f[2]);
    st32((c.r[29].w[0] + 368u), c.f[6]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[5], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 1392u));
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 368u), c.f[4]);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 376u), c.f[5]);
    st32((c.r[29].w[0] + 372u), c.f[1]);
    c.budget -= 36;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 376u), c.f[0]);  if (t) { goto L_004DD3A0; } }
    c.f[0] = ld32((c.r[29].w[0] + 368u));
    c.budget -= 1;
L_004DD364:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = ld32((c.r[29].w[0] + 372u));
    c.f[4] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[5] = ld32((c.r[16].w[0] + 1392u));
    c.f[3] = fp::mul(c.f[2], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 376u));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[5]);
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 372u), c.f[1]);
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.budget -= 15;
L_004DD3A0:
    c.f[12] = ld32((c.r[29].w[0] + 368u));
    c.f[13] = ld32((c.r[29].w[0] + 372u));
    c.f[14] = ld32((c.r[29].w[0] + 376u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD3B4u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DD3B4u) [[unlikely]] return; }
L_004DD3B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004DD3B8:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_004DD3E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 7549u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD40Cu); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004DD40Cu) [[unlikely]] return; }
L_004DD40C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 88u);  goto L_004DD424; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004DD44C; } }
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 1;
L_004DD424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD42Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004DD42Cu) [[unlikely]] return; }
L_004DD42C:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD43Cu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004DD43Cu) [[unlikely]] return; }
L_004DD43C:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD448u); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004DD448u) [[unlikely]] return; }
L_004DD448:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD44C:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004DD610; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 7565u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD46Cu); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004DD46Cu) [[unlikely]] return; }
L_004DD46C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_004DD484; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004DD4AC; } }
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_004DD484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD48Cu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004DD48Cu) [[unlikely]] return; }
L_004DD48C:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD49Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004DD49Cu) [[unlikely]] return; }
L_004DD49C:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD4A8u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004DD4A8u) [[unlikely]] return; }
L_004DD4A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD4AC:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));  goto L_004DD4C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DD60C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 1;
L_004DD4C4:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1201u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);  goto L_004DD4EC; }
    set32(c.r[2], 0u + 1500u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004DD4F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.budget -= 1;
L_004DD4EC:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_004DD4F0:
    c.f[1] = ld32((c.r[16].w[0] + 388u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[16].w[0] + 504u));
    c.f[3] = ld32((c.r[16].w[0] + 384u));
    c.f[2] = ld32((c.r[16].w[0] + 500u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[16].w[0] + 392u));
    c.f[4] = ld32((c.r[16].w[0] + 508u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[6] = c.r[2].w[0];
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[1] = fp::max(c.f[0], c.f[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD530u); c.f[12] = fp::min(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 428u, depth + 1u); else { c.pc = 0x003AF710u; return; } if (c.pc != 0x004DD530u) [[unlikely]] return; }
L_004DD530:
    c.f[3] = ld32((c.r[16].w[0] + 372u));
    c.f[1] = ld32((c.r[16].w[0] + 504u));
    c.f[5] = ld32((c.r[16].w[0] + 368u));
    c.f[4] = ld32((c.r[16].w[0] + 500u));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[7] = ld32((c.r[16].w[0] + 376u));
    c.f[6] = ld32((c.r[16].w[0] + 508u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[2] = 0u;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { c.f[8] = ld32((c.r[16].w[0] + 2280u));  goto L_004DD5AC; }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DD578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004DD590; } }
L_004DD578:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004DD588; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DD588:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_004DD590:
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[1] = ld32((c.r[28].w[0] - 32288u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[8] = ld32((c.r[16].w[0] + 2280u));
    c.budget -= 7;
L_004DD5AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = 0u;
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[20], c.f[8]);
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[3] = ld32((c.r[16].w[0] + 436u));
    c.f[2] = ld32((c.r[16].w[0] + 404u));
    c.f[5] = ld32((c.r[16].w[0] + 432u));
    c.f[4] = ld32((c.r[16].w[0] + 400u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[7] = ld32((c.r[16].w[0] + 440u));
    c.f[6] = ld32((c.r[16].w[0] + 408u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[13] = c.f[12];
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.facc = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    fpu_div(c, 0u, c.f[0], c.f[8]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD60Cu); c.f[14] = fp::mul(c.f[0], c.f[8]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004DD60Cu) [[unlikely]] return; }
L_004DD60C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004DD610:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004DD630:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1186u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004DD80C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD65Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1080u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DD65Cu) [[unlikely]] return; }
L_004DD65C:
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[16].w[0] + 364u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    c.f[3] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 56u), c.f[4]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[3]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1080u)));
    fpu_rsqrt(c, 2u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[2]);
    fpu_div(c, 3u, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = fp::mul(c.f[4], c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 1112u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[21] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[20] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD6E8u); c.f[22] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DD6E8u) [[unlikely]] return; }
L_004DD6E8:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[1] = fp::add(c.f[1], c.f[21]);
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[22]);
    c.f[1] = ld32((c.r[16].w[0] + 364u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = fp::add(c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    st32((c.r[29].w[0] + 52u), c.f[4]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    fpu_rsqrt(c, 5u, c.f[3], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[1] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    fpu_div(c, 1u, c.f[3], c.f[5]);
    c.f[2] = fp::mul(c.f[2], c.f[5]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 56u), c.f[2]);  if (t) { goto L_004DD774; } }
    st8((c.r[16].w[0] + 1186u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004DD774:
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.f[7] = ld32((c.r[16].w[0] + 420u));
    c.f[9] = ld32((c.r[29].w[0] + 48u));
    c.f[8] = ld32((c.r[16].w[0] + 416u));
    c.facc = fp::mul(c.f[0], c.f[7]);
    c.f[3] = ld32((c.r[29].w[0] + 56u));
    c.f[10] = ld32((c.r[16].w[0] + 424u));
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[8]));
    c.f[0] = ld32((c.r[16].w[0] + 1112u));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[3], c.f[10]));
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[3] = ld32((c.r[16].w[0] + 1108u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[16].w[0] + 1392u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[9], c.f[3]);
    c.f[12] = fp::mul(c.f[0], c.f[4]);
    c.f[13] = fp::mul(c.f[2], c.f[4]);
    c.f[14] = fp::mul(c.f[1], c.f[4]);
    c.f[6] = 0u;
    st32((c.r[29].w[0] + 48u), c.f[12]);
    st32((c.r[29].w[0] + 52u), c.f[13]);
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 56u), c.f[14]);  if (t) { goto L_004DD80C; } }
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[12], c.f[8]));
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[10]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004DD810; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD80Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DD80Cu) [[unlikely]] return; }
L_004DD80C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004DD810:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DD830:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1180u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_004DD868; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1158u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 348u));  goto L_004DD870; }
L_004DD868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004DDA88; } }
L_004DD870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = ld32((c.r[17].w[0] + 376u));  goto L_004DD890; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004DDA88; } }
L_004DD890:
    c.r[16].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[17].w[0] + 480u));
    c.f[5] = ld32((c.r[17].w[0] + 372u));
    c.f[1] = ld32((c.r[17].w[0] + 484u));
    c.facc = fp::mul(c.f[3], c.f[4]);
    c.f[6] = ld32((c.r[17].w[0] + 368u));
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[1], c.f[5]));
    c.f[0] = ld32((c.r[17].w[0] + 476u));
    c.facc = fp::mul(c.f[1], c.f[6]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[4]));
    c.facc = fp::mul(c.f[0], c.f[5]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[6]));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD8D4u); set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004DD8D4u) [[unlikely]] return; }
L_004DD8D4:
    c.f[8] = ld32((c.r[17].w[0] + 1392u));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1160u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 424u));
    fpu_div(c, 1u, c.f[1], c.f[8]);
    c.f[6] = 0u;
    c.facc = fp::add(c.f[6], c.f[0]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.f[1] = ld32((c.r[17].w[0] + 416u));
    fpu_div(c, 2u, c.f[2], c.f[8]);
    c.facc = fp::add(c.f[6], c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.f[1] = ld32((c.r[17].w[0] + 420u));
    fpu_div(c, 2u, c.f[0], c.f[8]);
    c.facc = fp::add(c.f[6], c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 668u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.f[3] = ld32((c.r[17].w[0] + 664u));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[5] = ld32((c.r[17].w[0] + 672u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[4]));
    c.f[20] = fp::add(c.facc, fp::mul(c.f[5], c.f[7]));
    c.f[0] = fp::mul(c.f[8], c.f[20]);
    fpu_div(c, 22u, c.f[0], c.f[21]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[6]));
    c.budget -= 33;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_004DD960; }
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_004DD960:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004DDA88; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.f[22] ^ fp::kSign;
    c.f[3] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 664u));
    c.f[1] = ld32((c.r[17].w[0] + 668u));
    c.f[0] = ld32((c.r[17].w[0] + 672u));
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD998u); c.f[14] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DD998u) [[unlikely]] return; }
L_004DD998:
    c.f[0] = c.f[22] & fp::kAbs;
    c.f[2] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 1392u));
    c.f[0] = ld32((c.r[28].w[0] - 32232u));
    c.f[3] = ld32((c.r[28].w[0] - 32148u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::max(c.f[0], c.f[3]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 2344u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = c.f[20] & fp::kAbs;
    st32((c.r[17].w[0] + 2348u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 1808u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004DDA84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 4u, c.f[0], c.f[21]);
    c.f[5] = ld32((c.r[17].w[0] + 1812u));
    c.f[2] = ld32((c.r[17].w[0] + 416u));
    c.f[1] = ld32((c.r[17].w[0] + 420u));
    c.f[0] = ld32((c.r[17].w[0] + 424u));
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[3] = ld32((c.r[17].w[0] + 1392u));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDA28u); c.f[14] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DDA28u) [[unlikely]] return; }
L_004DDA28:
    set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1202u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DDA84; } }
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DDA84; } }
    c.f[0] = ld32((c.r[17].w[0] + 356u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 7578u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 364u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDA84u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_00D5(c, 18u, depth + 1u); else { c.pc = 0x004541E0u; return; } if (c.pc != 0x004DDA84u) [[unlikely]] return; }
L_004DDA84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004DDA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004DDAB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1188u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004DDADC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004DDEC0; } }
L_004DDADC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1168u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 1336u));  goto L_004DDC68; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1194u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDB00; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDB00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDB40; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDB20; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDB20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDB30; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDB30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDB40; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDB40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DDC64; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 1872u)));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 1180u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DDC64; } }
    c.f[1] = ld32((c.r[16].w[0] + 348u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DDC64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004DDB98; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DDB98:
    c.f[1] = ld32((c.r[16].w[0] + 1340u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004DDC64; } }
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDBBCu); set32(c.r[4], ld32((c.r[4].w[0] + 420u)));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x004DDBBCu) [[unlikely]] return; }
L_004DDBBC:
    c.f[1] = ld32((c.r[16].w[0] + 1632u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1340u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1632u));
    st32((c.r[16].w[0] + 1336u), c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[16].w[0] + 1178u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_004DDC0C; } }
    c.f[0] = ld32((c.r[16].w[0] + 2280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[14] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDC04u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004DDC04u) [[unlikely]] return; }
L_004DDC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 1872u)));  if (t) { goto L_004DDC30; } }
L_004DDC0C:
    c.f[0] = ld32((c.r[16].w[0] + 2280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2040000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[14] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDC2Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004DDC2Cu) [[unlikely]] return; }
L_004DDC2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 1;
L_004DDC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDC38u);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DDC38u) [[unlikely]] return; }
L_004DDC38:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 7463u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDC64u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_00D5(c, 18u, depth + 1u); else { c.pc = 0x004541E0u; return; } if (c.pc != 0x004DDC64u) [[unlikely]] return; }
L_004DDC64:
    c.f[0] = ld32((c.r[16].w[0] + 1336u));
    c.budget -= 1;
L_004DDC68:
    c.f[7] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[7]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[16].w[0] + 1340u));  goto L_004DDD88; }
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[16].w[0] + 1336u), c.f[0]);
    c.f[4] = ld32((c.r[16].w[0] + 484u));
    c.f[2] = ld32((c.r[16].w[0] + 372u));
    c.f[6] = ld32((c.r[16].w[0] + 476u));
    c.f[3] = ld32((c.r[16].w[0] + 376u));
    c.f[1] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::mul(c.f[3], c.f[6]);
    c.f[5] = ld32((c.r[16].w[0] + 480u));
    c.facc = fp::add(c.f[7], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[5]));
    st32((c.r[29].w[0] + 64u), c.f[1]);
    c.facc = fp::add(c.f[7], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[4]));
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.facc = fp::add(c.f[7], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[6]));
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDCD4u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 242u, depth + 1u); else { c.pc = 0x0033B730u; return; } if (c.pc != 0x004DDCD4u) [[unlikely]] return; }
L_004DDCD4:
    c.f[4] = ld32((c.r[16].w[0] + 1628u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1178u));
    c.f[3] = ld32((c.r[16].w[0] + 1392u));
    c.f[2] = ld32((c.r[29].w[0] + 64u));
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[12] = fp::mul(c.f[2], c.f[3]);
    c.f[13] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.f[14] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_004DDD18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.f[13] = fp::mul(c.f[0], c.f[13]);
    c.f[14] = fp::mul(c.f[0], c.f[14]);
    c.budget -= 6;
L_004DDD18:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1194u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDD30; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDD30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDD70; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDD50; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDD60; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDD70; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDD70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st8((c.r[16].w[0] + 1163u), static_cast<std::uint8_t>(0u));  goto L_004DDD84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDD80u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DDD80u) [[unlikely]] return; }
L_004DDD80:
    st8((c.r[16].w[0] + 1163u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004DDD84:
    c.f[0] = ld32((c.r[16].w[0] + 1340u));
    c.budget -= 1;
L_004DDD88:
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 1340u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1158u));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004DDEC0; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1194u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDDB4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDDB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDDF4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDDD4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDDD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDDE4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDDE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDDF4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DDDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DDEBC; } }
    c.f[1] = ld32((c.r[16].w[0] + 700u));
    c.f[0] = ld32((c.r[28].w[0] - 32160u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[16].w[0] + 668u));  goto L_004DDE24; }
    c.f[0] = ld32((c.r[28].w[0] - 32156u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DDEBC; } }
    c.f[3] = ld32((c.r[16].w[0] + 668u));
    c.budget -= 1;
L_004DDE24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[2] = ld32((c.r[16].w[0] + 420u));
    c.f[5] = ld32((c.r[16].w[0] + 664u));
    c.f[4] = ld32((c.r[16].w[0] + 416u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[7] = ld32((c.r[16].w[0] + 672u));
    c.f[6] = ld32((c.r[16].w[0] + 424u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[3] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = 0u;
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DDEBC; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1160u));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004DDE74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DDE74:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004DDEBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[0], c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 1392u));
    c.f[0] = ld32((c.r[16].w[0] + 668u));
    c.f[1] = ld32((c.r[16].w[0] + 664u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    fpu_div(c, 2u, c.f[2], c.f[20]);
    c.f[13] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 672u));
    c.f[12] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDEBCu); c.f[14] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DDEBCu) [[unlikely]] return; }
L_004DDEBC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DDEC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004DDEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[13] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[8] = ld32((c.r[4].w[0] + 436u));
    c.f[0] = ld32((c.r[4].w[0] + 388u));
    c.f[7] = ld32((c.r[4].w[0] + 432u));
    c.f[1] = ld32((c.r[4].w[0] + 384u));
    c.facc = fp::mul(c.f[8], c.f[0]);
    c.f[6] = ld32((c.r[4].w[0] + 440u));
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.f[2] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[1] = ld32((c.r[4].w[0] + 368u));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[6], c.f[2]));
    c.facc = fp::mul(c.f[8], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[1]));
    c.f[4] = ld32((c.r[4].w[0] + 376u));
    c.f[1] = ld32((c.r[4].w[0] + 404u));
    c.f[2] = ld32((c.r[4].w[0] + 400u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[4]));
    c.f[21] = c.f[0] ^ fp::kSign;
    c.facc = fp::mul(c.f[8], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    c.f[4] = c.f[5] & fp::kAbs;
    c.f[3] = ld32((c.r[4].w[0] + 408u));
    c.facc = fp::add(c.facc, fp::mul(c.f[7], c.f[2]));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 33;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));  if (t) { goto L_004DDF90; } }
    c.f[2] = ld32((c.r[16].w[0] + 1576u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[1] = ld32((c.r[28].w[0] - 32172u));
    c.f[0] = ld32((c.r[16].w[0] + 2288u));
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[14] = c.f[13];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDF90u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004DDF90u) [[unlikely]] return; }
L_004DDF90:
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    c.f[1] = c.f[21] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32480u));  goto L_004DDFD8; }
    c.f[2] = ld32((c.r[16].w[0] + 1576u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[1] = ld32((c.r[28].w[0] - 32168u));
    c.f[2] = fp::mul(c.f[21], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 2284u));
    c.f[14] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDFD4u); c.f[13] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004DDFD4u) [[unlikely]] return; }
L_004DDFD4:
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    c.budget -= 1;
L_004DDFD8:
    c.f[1] = c.f[20] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004DE01C; }
    c.f[2] = ld32((c.r[16].w[0] + 1576u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = 0u;
    c.f[1] = ld32((c.r[28].w[0] - 32164u));
    c.f[2] = fp::mul(c.f[20], c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 2280u));
    c.f[13] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE018u); c.f[14] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004DE018u) [[unlikely]] return; }
L_004DE018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004DE01C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DE030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1186u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.f[2] = ld32((c.r[4].w[0] + 348u));  goto L_004DE054; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1169u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004DE114; }
    c.f[2] = ld32((c.r[4].w[0] + 348u));
    c.budget -= 1;
L_004DE054:
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[4] = ld32((c.r[4].w[0] + 1392u));  goto L_004DE098; }
    set32(c.r[2], ld32((c.r[4].w[0] + 1872u)));
    c.f[13] = 0u;
    c.f[0] = ld32((c.r[2].w[0] + 1088u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DE094; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[12] = c.f[13];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE08Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_008E(c, 197u, depth + 1u); else { c.pc = 0x0033B0E0u; return; } if (c.pc != 0x004DE08Cu) [[unlikely]] return; }
L_004DE08C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DE110; } }
L_004DE094:
    c.f[4] = ld32((c.r[4].w[0] + 1392u));
    c.budget -= 1;
L_004DE098:
    c.f[1] = ld32((c.r[4].w[0] + 1584u));
    c.f[0] = 0u;
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    fpu_div(c, 5u, c.f[2], c.f[12]);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_004DE0C4; }
    c.f[5] = c.f[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 2;
L_004DE0C4:
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[4].w[0] + 1068u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[3] = fp::mul(c.f[0], c.f[4]);
    c.f[2] = ld32((c.r[4].w[0] + 448u));
    c.f[1] = ld32((c.r[4].w[0] + 452u));
    c.f[0] = ld32((c.r[4].w[0] + 456u));
    c.f[12] = fp::mul(c.f[2], c.f[3]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[13] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE110u); c.f[14] = fp::mul(c.f[0], c.f[3]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DE110u) [[unlikely]] return; }
L_004DE110:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004DE114:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004DE120:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1194u));
    c.f[20] = c.f[12];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004DE160; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1163u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE160; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE160:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004DE1AC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1956u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE180; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1957u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE190; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1958u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE190:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE1A0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1959u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE1AC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE1AC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004DE358; }
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE1C8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1163u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE1C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE1D8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1960u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE1D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE1E8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1961u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE1E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE1F8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1962u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE1F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE208; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1963u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE218u); set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004DE218u) [[unlikely]] return; }
L_004DE218:
    c.f[5] = ld32((c.r[17].w[0] + 1392u));
    st32((c.r[29].w[0] + 64u), 0u);
    c.f[1] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 68u), 0u);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 72u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 416u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_div(c, 1u, c.f[1], c.f[5]);
    c.f[4] = 0u;
    c.facc = fp::add(c.f[4], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[2] = ld32((c.r[17].w[0] + 420u));
    fpu_div(c, 3u, c.f[3], c.f[5]);
    c.facc = fp::add(c.f[4], c.f[2]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[20], c.f[3]));
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    fpu_div(c, 9u, c.f[2], c.f[20]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    fpu_div(c, 2u, c.f[1], c.f[5]);
    c.f[1] = ld32((c.r[17].w[0] + 424u));
    fpu_div(c, 10u, c.f[0], c.f[20]);
    c.facc = fp::add(c.f[4], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    fpu_div(c, 8u, c.f[1], c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 408u));
    c.f[5] = ld32((c.r[17].w[0] + 644u));
    c.f[7] = ld32((c.r[17].w[0] + 404u));
    c.f[6] = ld32((c.r[17].w[0] + 648u));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[2] = ld32((c.r[17].w[0] + 400u));
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[3] = ld32((c.r[17].w[0] + 640u));
    c.facc = fp::mul(c.f[2], c.f[6]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[3]));
    c.facc = fp::mul(c.f[7], c.f[3]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 64u), c.f[4]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[3]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    fpu_rsqrt(c, 5u, c.f[0], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[2] = fp::mul(c.f[4], c.f[5]);
    c.f[0] = fp::mul(c.f[3], c.f[5]);
    c.facc = fp::mul(c.f[9], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[2]));
    c.f[1] = ld32((c.r[17].w[0] + 1572u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[8], c.f[0]));
    c.f[0] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 63;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DE31C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004DE330; } }
L_004DE31C:
    fpu_div(c, 0u, c.f[2], c.f[0]);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 5;
L_004DE330:
    c.f[3] = c.f[2] ^ fp::kSign;
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[2] = ld32((c.r[17].w[0] + 384u));
    c.f[1] = ld32((c.r[17].w[0] + 388u));
    c.f[0] = ld32((c.r[17].w[0] + 392u));
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE354u); c.f[14] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DE354u) [[unlikely]] return; }
L_004DE354:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004DE358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004DE370:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 2340u), 0u);
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1163u));
    c.f[21] = ld32((c.r[29].w[0] + 100u));
    c.f[22] = ld32((c.r[29].w[0] + 104u));
    c.f[25] = c.f[12];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.f[24] = c.r[4].w[0];
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004DE3D4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1162u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE3D4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32272u));  goto L_004DE418; }
    c.f[2] = ld32((c.r[17].w[0] + 372u));
    c.f[1] = ld32((c.r[17].w[0] + 504u));
    c.f[4] = ld32((c.r[17].w[0] + 368u));
    c.f[3] = ld32((c.r[17].w[0] + 500u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[17].w[0] + 376u));
    c.f[5] = ld32((c.r[17].w[0] + 508u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[0] = ld32((c.r[28].w[0] - 32220u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DE414; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004DE414:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.budget -= 1;
L_004DE418:
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
L_004DE424:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004DE484; } }
    set32(c.r[3], c.r[17].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1956u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004DE478; } }
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[17].w[0] + 372u));
    c.f[4] = ld32((c.r[3].w[0] + 52u));
    c.f[3] = ld32((c.r[17].w[0] + 368u));
    c.facc = fp::mul(c.f[2], c.f[1]);
    c.f[6] = ld32((c.r[3].w[0] + 60u));
    c.f[5] = ld32((c.r[17].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DE478; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_004DE478:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] + c.r[29].w[0]);  goto L_004DE488; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE484:
    set32(c.r[3], c.r[8].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_004DE488:
    st8((c.r[3].w[0] + 124u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE424u | kUnwind; return; } goto L_004DE424; } }
    c.f[1] = ld32((c.r[17].w[0] + 1336u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_004DEB94; }
    c.f[1] = ld32((c.r[17].w[0] + 1244u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DEB90; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004DEB90; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1162u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[17].w[0] + 1198u), static_cast<std::uint8_t>(0u));  goto L_004DE5C0; }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1194u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004DE50C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1163u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DE50C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE50C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004DE558; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DE52C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE52C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DE53C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE53C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DE54C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE54C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DE558; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE558:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004DEB90; } }
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DE574; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE574:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DE584; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1960u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE584:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DE594; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1961u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE594:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DE5A4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1962u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE5A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DE5B4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1963u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DE5B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004DEB90; } }
    st8((c.r[17].w[0] + 1198u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004DE5C0:
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));
    c.f[23] = ld32((c.r[17].w[0] + 1636u));
    set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));
    st32((c.r[17].w[0] + 2340u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004DE634; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 124u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004DE638; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 125u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE634; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 126u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE634; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 127u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[16], 0u + 15u);
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::mul(c.f[23], c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1198u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004DEA60; } }
L_004DE634:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004DE638:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));  goto L_004DE7E0; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 124u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE7DC; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 125u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE7DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] | 3ull;  if (t) { goto L_004DE6E4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1052u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[28].w[0] - 32480u));  goto L_004DE6DC; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE684u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004DE684u) [[unlikely]] return; }
L_004DE684:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  goto L_004DE6CC; }
    set32(c.r[8], ld32((c.r[17].w[0] + 2312u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 1872u)));
    set32(c.r[6], c.r[6].w[0] + 22832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43480000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 22688u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.budget -= 16;
L_004DE6CC:
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE6D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004DE6D8u) [[unlikely]] return; }
L_004DE6D8:
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    c.budget -= 1;
L_004DE6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[23] = fp::mul(c.f[23], c.f[0]);  if (t) { goto L_004DE7DC; } }
L_004DE6E4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1166u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 1084u)));  goto L_004DE758; }
    c.f[3] = ld32((c.r[17].w[0] + 420u));
    c.f[1] = ld32((c.r[17].w[0] + 404u));
    c.f[5] = ld32((c.r[17].w[0] + 416u));
    c.f[4] = ld32((c.r[17].w[0] + 400u));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[7] = ld32((c.r[17].w[0] + 424u));
    c.f[6] = ld32((c.r[17].w[0] + 408u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[0] = ld32((c.r[17].w[0] + 348u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[2] = 0u;
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32180u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DE754; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[2].w[0];
    c.f[23] = fp::mul(c.f[23], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 1388u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[24] = c.f[2];  if (t) { goto L_004DE7DC; } }
L_004DE754:
    set32(c.r[18], ld32((c.r[17].w[0] + 1084u)));
    c.budget -= 1;
L_004DE758:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004DE7DC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1186u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE7DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE774u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DE774u) [[unlikely]] return; }
L_004DE774:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 356u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 360u));
    c.f[0] = ld32((c.r[17].w[0] + 364u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DE7DC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004DE7DC; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st8((c.r[17].w[0] + 1186u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 1080u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 1108u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1112u), c.r[2].w[0]);
    c.budget -= 6;
L_004DE7DC:
    set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));
    c.budget -= 1;
L_004DE7E0:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));  goto L_004DE894; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 126u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE890; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 127u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE890; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 1084u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] | 12ull;  if (t) { goto L_004DE890; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1186u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE828u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DE828u) [[unlikely]] return; }
L_004DE828:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 356u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 360u));
    c.f[0] = ld32((c.r[17].w[0] + 364u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DE890; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004DE890; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st8((c.r[17].w[0] + 1186u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 1080u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 1108u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1112u), c.r[2].w[0]);
    c.budget -= 6;
L_004DE890:
    set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));
    c.budget -= 1;
L_004DE894:
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));  goto L_004DE97C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 124u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE978; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 126u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE978; } }
    c.f[2] = ld32((c.r[17].w[0] + 1392u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3BE0000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[0] = ld32((c.r[17].w[0] + 388u));
    c.r[16].d[0] = c.r[16].d[0] | 5ull;
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 384u));
    c.f[0] = ld32((c.r[17].w[0] + 392u));
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE8F0u); c.f[14] = fp::mul(c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DE8F0u) [[unlikely]] return; }
L_004DE8F0:
    set32(c.r[18], ld32((c.r[17].w[0] + 1088u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004DE978; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1186u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE910u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DE910u) [[unlikely]] return; }
L_004DE910:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 356u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 360u));
    c.f[0] = ld32((c.r[17].w[0] + 364u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DE978; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004DE978; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st8((c.r[17].w[0] + 1186u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 1080u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 1108u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1112u), c.r[2].w[0]);
    c.budget -= 6;
L_004DE978:
    set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));
    c.budget -= 1;
L_004DE97C:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1104u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));  goto L_004DEA64; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 125u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DEA60; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 127u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DEA60; } }
    c.f[2] = ld32((c.r[17].w[0] + 1392u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43BE0000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[0] = ld32((c.r[17].w[0] + 388u));
    c.r[16].d[0] = c.r[16].d[0] | 10ull;
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 384u));
    c.f[0] = ld32((c.r[17].w[0] + 392u));
    c.f[12] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE9D8u); c.f[14] = fp::mul(c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DE9D8u) [[unlikely]] return; }
L_004DE9D8:
    set32(c.r[18], ld32((c.r[17].w[0] + 1092u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004DEA60; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1186u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DEA60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE9F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004DE9F8u) [[unlikely]] return; }
L_004DE9F8:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 356u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 360u));
    c.f[0] = ld32((c.r[17].w[0] + 364u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DEA60; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004DEA60; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st8((c.r[17].w[0] + 1186u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 1080u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 1108u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 1112u), c.r[2].w[0]);
    c.budget -= 6;
L_004DEA60:
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.budget -= 1;
L_004DEA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEA6Cu);  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004DEA6Cu) [[unlikely]] return; }
L_004DEA6C:
    fpu_div(c, 23u, c.f[23], c.f[25]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DEB90; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 1168u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 1244u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEA9Cu); set32(c.r[4], ld32((c.r[17].w[0] + 1872u)));  if (depth < kMaxDepth) unit_00EE(c, 90u, depth + 1u); else { c.pc = 0x004B8C70u; return; } if (c.pc != 0x004DEA9Cu) [[unlikely]] return; }
L_004DEA9C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_004DEAA4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 1404u));  goto L_004DEB14; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[17].w[0] + 1408u));  goto L_004DEB00; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[17].w[0] + 1404u));  goto L_004DEAEC; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.f[2] = ld32((c.r[17].w[0] + 1408u));  goto L_004DEAD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_004DEB24; } }
L_004DEAD4:
    c.f[1] = ld32((c.r[17].w[0] + 1404u));
    c.f[0] = ld32((c.r[17].w[0] + 1400u));
    c.f[20] = c.f[2] ^ fp::kSign;
    c.f[21] = c.f[1] ^ fp::kSign;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0] ^ fp::kSign;  if (t) { goto L_004DEB20; } }
L_004DEAEC:
    c.f[0] = ld32((c.r[17].w[0] + 1400u));
    c.f[20] = ld32((c.r[17].w[0] + 1408u));
    c.f[21] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0] ^ fp::kSign;  if (t) { goto L_004DEB20; } }
L_004DEB00:
    c.f[0] = ld32((c.r[17].w[0] + 1404u));
    c.f[22] = ld32((c.r[17].w[0] + 1400u));
    c.f[20] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0] ^ fp::kSign;  if (t) { goto L_004DEB20; } }
L_004DEB14:
    c.f[20] = ld32((c.r[17].w[0] + 1408u));
    c.f[22] = ld32((c.r[17].w[0] + 1400u));
    c.f[21] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
L_004DEB20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_004DEB24:
    set32(c.r[3], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004DEB84; }
    set32(c.r[3], ld32((c.r[17].w[0] + 1872u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = 0u;
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[0] = ld32((c.r[28].w[0] - 32176u));
    c.f[3] = ld32((c.r[3].w[0] + 72u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[24], c.f[23]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[17] = fp::mul(c.f[22], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 1392u));
    c.f[15] = fp::mul(c.f[20], c.f[2]);
    c.f[13] = fp::mul(c.f[0], c.f[1]);
    c.f[16] = c.f[21];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEB78u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_008E(c, 182u, depth + 1u); else { c.pc = 0x0033ADC0u; return; } if (c.pc != 0x004DEB78u) [[unlikely]] return; }
L_004DEB78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[24] = c.r[3].w[0];
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_004DEB84:
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004DEAA4u | kUnwind; return; } goto L_004DEAA4; }
L_004DEB90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004DEB94:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004DEBC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1190u));
    c.f[21] = ld32((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 100u));
    c.f[23] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004DEE00; } }
    c.f[27] = ld32((c.r[17].w[0] + 1748u));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_004DEC14:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 1404u));  goto L_004DEC84; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[17].w[0] + 1408u));  goto L_004DEC70; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.f[1] = ld32((c.r[17].w[0] + 1404u));  goto L_004DEC5C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[2] = ld32((c.r[17].w[0] + 1408u));  goto L_004DEC44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 1412u));  if (t) { goto L_004DEC94; } }
L_004DEC44:
    c.f[1] = ld32((c.r[17].w[0] + 1404u));
    c.f[0] = ld32((c.r[17].w[0] + 1400u));
    c.f[21] = c.f[2] ^ fp::kSign;
    c.f[22] = c.f[1] ^ fp::kSign;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[23] = c.f[0] ^ fp::kSign;  if (t) { goto L_004DEC90; } }
L_004DEC5C:
    c.f[0] = ld32((c.r[17].w[0] + 1400u));
    c.f[21] = ld32((c.r[17].w[0] + 1408u));
    c.f[22] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[23] = c.f[0] ^ fp::kSign;  if (t) { goto L_004DEC90; } }
L_004DEC70:
    c.f[0] = ld32((c.r[17].w[0] + 1404u));
    c.f[23] = ld32((c.r[17].w[0] + 1400u));
    c.f[21] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0] ^ fp::kSign;  if (t) { goto L_004DEC90; } }
L_004DEC84:
    c.f[21] = ld32((c.r[17].w[0] + 1408u));
    c.f[23] = ld32((c.r[17].w[0] + 1400u));
    c.f[22] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
L_004DEC90:
    c.f[1] = ld32((c.r[17].w[0] + 1412u));
    c.budget -= 1;
L_004DEC94:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[22] = fp::sub(c.f[22], c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 1416u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004DEDF4; }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 376u));
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 368u));
    c.f[24] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 372u));
    c.f[0] = 0u;
    c.f[26] = fp::mul(c.f[3], c.f[2]);
    c.facc = fp::add(c.f[0], c.f[21]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[26]));
    c.f[25] = fp::mul(c.f[3], c.f[1]);
    c.facc = fp::add(c.f[0], c.f[22]);
    c.f[13] = fp::add(c.facc, fp::mul(c.f[20], c.f[25]));
    c.facc = fp::add(c.f[0], c.f[23]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DED04u); c.f[14] = fp::add(c.facc, fp::mul(c.f[20], c.f[24]));  if (depth < kMaxDepth) unit_008E(c, 176u, depth + 1u); else { c.pc = 0x0033AC50u; return; } if (c.pc != 0x004DED04u) [[unlikely]] return; }
L_004DED04:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.f[6] = ld32((c.r[4].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[5] = ld32((c.r[4].w[0] + 52u));
    c.facc = fp::mul(c.f[6], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[4] = ld32((c.r[4].w[0] + 60u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    c.facc = fp::mul(c.f[6], c.f[25]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[26]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[4], c.f[24]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.f[4] = 0u;
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DEDF0; } }
    c.f[1] = ld32((c.r[17].w[0] + 1760u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);  goto L_004DED84; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DED94; } }
L_004DED84:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[0], c.f[2]);
    c.f[4] = fp::mul(c.f[3], c.f[2]);
    c.budget -= 4;
L_004DED94:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 1756u));  goto L_004DEDAC; }
    c.f[1] = ld32((c.r[17].w[0] + 1752u));
    c.budget -= 1;
L_004DEDAC:
    c.f[0] = fp::mul(c.f[27], c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 1392u));
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = ld32((c.r[17].w[0] + 372u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 368u));
    c.f[0] = ld32((c.r[17].w[0] + 376u));
    c.f[15] = c.f[21];
    c.f[12] = fp::mul(c.f[2], c.f[1]);
    c.f[14] = fp::mul(c.f[2], c.f[0]);
    c.f[16] = c.f[22];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEDF0u); c.f[17] = c.f[23];  if (depth < kMaxDepth) unit_008E(c, 183u, depth + 1u); else { c.pc = 0x0033AE90u; return; } if (c.pc != 0x004DEDF0u) [[unlikely]] return; }
L_004DEDF0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004DEDF4:
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 3u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004DEC14u | kUnwind; return; } goto L_004DEC14; }
L_004DEE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004DEE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1194u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004DEE64; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DEE64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DEEA4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DEE84; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DEE84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DEE94; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DEE94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DEEA4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DEEA4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004DEF60; }
    set32(c.r[2], ld32((c.r[16].w[0] + 1872u)));
    c.f[12] = ld32((c.r[2].w[0] + 1088u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEEBCu); set32(c.r[4], ld32((c.r[16].w[0] + 2228u)));  if (depth < kMaxDepth) unit_00F1(c, 145u, depth + 1u); else { c.pc = 0x004C51D0u; return; } if (c.pc != 0x004DEEBCu) [[unlikely]] return; }
L_004DEEBC:
    set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));
    c.f[5] = ld32((c.r[16].w[0] + 1396u));
    c.f[1] = ld32((c.r[16].w[0] + 408u));
    c.f[4] = ld32((c.r[16].w[0] + 400u));
    c.f[7] = ld32((c.r[3].w[0] + 72u));
    c.f[3] = ld32((c.r[16].w[0] + 404u));
    c.f[2] = ld32((c.r[3].w[0] + 1088u));
    fpu_div(c, 6u, c.f[5], c.f[7]);
    c.f[5] = fp::mul(c.f[0], c.f[7]);
    fpu_div(c, 5u, c.f[5], c.f[6]);
    c.f[14] = fp::mul(c.f[5], c.f[1]);
    c.f[1] = 0u;
    c.f[12] = fp::mul(c.f[5], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[13] = fp::mul(c.f[5], c.f[3]);  if (t) { goto L_004DEF48; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1171u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DEF24; } }
    c.f[2] = ld32((c.r[16].w[0] + 348u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DEF5C; } }
L_004DEF24:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DEF5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEF40u); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DEF40u) [[unlikely]] return; }
L_004DEF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DEF5C; } }
L_004DEF48:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DEF5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEF5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DEF5Cu) [[unlikely]] return; }
L_004DEF5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004DEF60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DEF70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1194u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DEF90; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DEF90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DEFD0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DEFB0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DEFB0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DEFC0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DEFC0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DEFD0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DEFD0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004DF0A8; }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1171u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004DF000; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 1872u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 1088u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[4].w[0] + 348u));  goto L_004DF028; }
L_004DF000:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_004DF0A4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 1872u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 1088u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DF0A4; } }
    c.f[1] = ld32((c.r[4].w[0] + 348u));
    c.budget -= 1;
L_004DF028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[28].w[0] - 32596u));  goto L_004DF04C; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 1166u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[28].w[0] - 32596u));
    c.budget -= 3;
L_004DF04C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[4].w[0] + 348u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[5] = fp::min(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1A00000u);
    c.f[2] = ld32((c.r[4].w[0] + 448u));
    c.f[1] = ld32((c.r[4].w[0] + 452u));
    c.f[0] = ld32((c.r[4].w[0] + 456u));
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    c.f[3] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[5], c.f[1]);
    c.f[0] = fp::mul(c.f[5], c.f[0]);
    c.f[4] = ld32((c.r[4].w[0] + 1392u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[12] = fp::mul(c.f[4], c.f[2]);
    c.f[13] = fp::mul(c.f[4], c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF0A4u); c.f[14] = fp::mul(c.f[4], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DF0A4u) [[unlikely]] return; }
L_004DF0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004DF0A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004DF0B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1173u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004DF138; }
    c.f[3] = ld32((c.r[4].w[0] + 484u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1160u));
    c.f[2] = ld32((c.r[4].w[0] + 504u));
    c.f[5] = ld32((c.r[4].w[0] + 480u));
    c.f[4] = ld32((c.r[4].w[0] + 508u));
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[4].w[0] + 476u));
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[1] = ld32((c.r[4].w[0] + 500u));
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[1], c.f[3]));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.f[2] = fp::sub(c.facc, fp::mul(c.f[2], c.f[0]));  if (t) { goto L_004DF114; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.f[6] = fp::mul(c.f[6], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 6;
L_004DF114:
    c.f[1] = ld32((c.r[4].w[0] + 1804u));
    c.f[0] = ld32((c.r[4].w[0] + 1392u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 1876u)));
    c.f[12] = fp::mul(c.f[0], c.f[6]);
    c.f[13] = fp::mul(c.f[0], c.f[3]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF134u); c.f[14] = fp::mul(c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DF134u) [[unlikely]] return; }
L_004DF134:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004DF138:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004DF140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32228u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 1684u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1188u));
    c.f[0] = ld32((c.r[4].w[0] + 1116u));
    c.f[20] = c.f[12];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.f[9] = fp::mul(c.f[1], c.f[0]);  if (t) { goto L_004DF2D0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1128u));
    c.f[3] = 0u;
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    c.f[1] = fp::add(c.f[1], c.f[20]);
    st32((c.r[16].w[0] + 1128u), c.f[1]);
    c.f[4] = ld32((c.r[16].w[0] + 436u));
    c.f[2] = ld32((c.r[16].w[0] + 372u));
    c.f[6] = ld32((c.r[16].w[0] + 432u));
    c.f[5] = ld32((c.r[16].w[0] + 368u));
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.f[8] = ld32((c.r[16].w[0] + 440u));
    c.f[7] = ld32((c.r[16].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[1] = ld32((c.r[16].w[0] + 1120u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    c.facc = fp::add(c.f[3], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[16].w[0] + 1120u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 1128u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 22;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004DF1F0; }
    c.f[1] = ld32((c.r[16].w[0] + 1120u));
    c.f[0] = ld32((c.r[16].w[0] + 1116u));
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004DF208; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_004DF1F0:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[16].w[0] + 436u));  goto L_004DF27C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004DF208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF210u); st8((c.r[16].w[0] + 1188u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00F6(c, 12u, depth + 1u); else { c.pc = 0x004D8300u; return; } if (c.pc != 0x004DF210u) [[unlikely]] return; }
L_004DF210:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1188u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004DF2D4; }
    st8((c.r[16].w[0] + 1240u), static_cast<std::uint8_t>(0u));
    c.f[12] = 0u;
    c.f[3] = ld32((c.r[16].w[0] + 436u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = ld32((c.r[16].w[0] + 372u));
    c.f[5] = ld32((c.r[16].w[0] + 432u));
    c.f[4] = ld32((c.r[16].w[0] + 368u));
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[7] = ld32((c.r[16].w[0] + 440u));
    c.f[6] = ld32((c.r[16].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[1] = ld32((c.r[16].w[0] + 1676u));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 2284u));
    c.f[14] = c.f[12];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF274u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004DF274u) [[unlikely]] return; }
L_004DF274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004DF2D0; } }
L_004DF27C:
    c.f[0] = ld32((c.r[16].w[0] + 372u));
    c.f[3] = ld32((c.r[16].w[0] + 432u));
    c.f[2] = ld32((c.r[16].w[0] + 368u));
    c.facc = fp::mul(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[16].w[0] + 440u));
    c.f[4] = ld32((c.r[16].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[12] = 0u;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[9]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DF2D0; } }
    c.f[2] = ld32((c.r[16].w[0] + 1680u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[1] = ld32((c.r[16].w[0] + 1124u));
    c.f[0] = ld32((c.r[16].w[0] + 2284u));
    c.f[14] = c.f[12];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF2D0u); c.f[13] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 184u, depth + 1u); else { c.pc = 0x0033AF40u; return; } if (c.pc != 0x004DF2D0u) [[unlikely]] return; }
L_004DF2D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004DF2D4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DF2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1052u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004DF408; }
    c.f[1] = ld32((c.r[16].w[0] + 1708u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 348u));
    c.f[4] = ld32((c.r[16].w[0] + 1060u));
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = 0u;
    c.f[5] = ld32((c.r[16].w[0] + 1040u));
    c.f[6] = ld32((c.r[16].w[0] + 1044u));
    c.f[7] = ld32((c.r[16].w[0] + 1048u));
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[2] = fp::min(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 22;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[4], ld32((c.r[16].w[0] + 1872u)));  goto L_004DF3BC; }
    c.f[1] = ld32((c.r[16].w[0] + 1688u));
    c.f[0] = ld32((c.r[16].w[0] + 1392u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0; c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004DF384; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004DF3A0; } }
L_004DF384:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_004DF3A0:
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[12] = fp::mul(c.f[5], c.f[0]);
    c.f[13] = fp::mul(c.f[6], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF3B8u); c.f[14] = fp::mul(c.f[7], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DF3B8u) [[unlikely]] return; }
L_004DF3B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 1872u)));
    c.budget -= 1;
L_004DF3BC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004DF404; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF3E4u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 253u, depth + 1u); else { c.pc = 0x004FE210u; return; } if (c.pc != 0x004DF3E4u) [[unlikely]] return; }
L_004DF3E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 32456u));  goto L_004DF3F4; }
    set32(c.r[2], c.r[2].w[0] - 8u);
    c.f[12] = ld32((c.r[28].w[0] - 32456u));
    c.budget -= 2;
L_004DF3F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[13] = c.r[3].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF404u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F0(c, 449u, depth + 1u); else { c.pc = 0x004C3800u; return; } if (c.pc != 0x004DF404u) [[unlikely]] return; }
L_004DF404:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004DF408:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DF420:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1180u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_004DF850; } }
    c.f[2] = ld32((c.r[16].w[0] + 1132u));
    c.f[10] = ld32((c.r[16].w[0] + 500u));
    c.f[1] = ld32((c.r[16].w[0] + 1136u));
    c.f[9] = ld32((c.r[16].w[0] + 504u));
    c.f[0] = ld32((c.r[16].w[0] + 1140u));
    c.f[8] = ld32((c.r[16].w[0] + 508u));
    c.facc = fp::mul(c.f[2], c.f[10]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[9]));
    c.f[20] = fp::add(c.facc, fp::mul(c.f[0], c.f[8]));
    c.f[0] = ld32((c.r[28].w[0] - 32304u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004DF854; }
    c.f[1] = ld32((c.r[16].w[0] + 360u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[16].w[0] + 492u));
    c.f[3] = ld32((c.r[16].w[0] + 356u));
    c.f[2] = ld32((c.r[16].w[0] + 488u));
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    c.f[7] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 484u));
    c.f[3] = ld32((c.r[16].w[0] + 364u));
    c.f[2] = ld32((c.r[16].w[0] + 496u));
    c.f[1] = ld32((c.r[16].w[0] + 480u));
    c.f[13] = fp::mul(c.f[9], c.f[0]);
    c.f[14] = fp::mul(c.f[10], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 476u));
    c.f[5] = fp::sub(c.f[3], c.f[2]);
    c.f[15] = fp::mul(c.f[8], c.f[1]);
    c.f[3] = fp::mul(c.f[10], c.f[1]);
    c.f[12] = fp::mul(c.f[8], c.f[0]);
    c.f[11] = fp::mul(c.f[9], c.f[0]);
    c.f[2] = fp::sub(c.f[13], c.f[15]);
    c.f[1] = fp::sub(c.f[12], c.f[14]);
    c.f[0] = fp::sub(c.f[3], c.f[11]);
    c.f[4] = c.r[3].w[0];
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[11] = fp::sub(c.f[11], c.f[3]);
    c.f[12] = fp::sub(c.f[14], c.f[12]);
    c.f[13] = fp::sub(c.f[15], c.f[13]);
    c.f[0] = ld32((c.r[16].w[0] + 708u));
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[16].w[0] + 704u));
    c.f[14] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[28].w[0] - 32316u));
    c.f[0] = ld32((c.r[16].w[0] + 712u));
    c.f[29] = ld32((c.r[16].w[0] + 528u));
    c.f[15] = fp::add(c.f[1], c.f[3]);
    c.f[28] = ld32((c.r[16].w[0] + 512u));
    c.facc = fp::mul(c.f[14], c.f[29]);
    c.f[17] = fp::add(c.f[0], c.f[2]);
    c.f[16] = ld32((c.r[16].w[0] + 544u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[28]));
    c.f[27] = ld32((c.r[16].w[0] + 532u));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[17], c.f[16]));
    c.f[26] = ld32((c.r[16].w[0] + 516u));
    c.facc = fp::mul(c.f[14], c.f[27]);
    c.f[25] = ld32((c.r[16].w[0] + 548u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[26]));
    c.f[24] = ld32((c.r[16].w[0] + 536u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[17], c.f[25]));
    c.f[23] = ld32((c.r[16].w[0] + 520u));
    c.facc = fp::mul(c.f[14], c.f[24]);
    c.f[22] = ld32((c.r[16].w[0] + 552u));
    c.facc = fp::add(c.facc, fp::mul(c.f[15], c.f[23]));
    c.f[15] = ld32((c.r[16].w[0] + 716u));
    c.f[14] = ld32((c.r[16].w[0] + 720u));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[17], c.f[22]));
    c.f[18] = fp::sub(c.f[15], c.f[3]);
    c.f[17] = fp::sub(c.f[14], c.f[2]);
    c.f[14] = ld32((c.r[16].w[0] + 724u));
    c.facc = fp::mul(c.f[17], c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[18], c.f[28]));
    c.f[2] = fp::sub(c.f[14], c.f[2]);
    c.f[16] = fp::add(c.facc, fp::mul(c.f[2], c.f[16]));
    c.facc = fp::mul(c.f[17], c.f[27]);
    c.facc = fp::add(c.facc, fp::mul(c.f[18], c.f[26]));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[2], c.f[25]));
    c.facc = fp::mul(c.f[17], c.f[24]);
    c.facc = fp::add(c.facc, fp::mul(c.f[18], c.f[23]));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[2], c.f[22]));
    st32((c.r[29].w[0] + 80u), c.f[13]);
    st32((c.r[29].w[0] + 84u), c.f[12]);
    st32((c.r[29].w[0] + 88u), c.f[11]);
    c.facc = fp::mul(c.f[13], c.f[13]);
    c.facc = fp::add(c.facc, fp::mul(c.f[12], c.f[12]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[11], c.f[11]));
    fpu_rsqrt(c, 2u, c.f[4], c.f[2]);
    c.f[13] = fp::mul(c.f[13], c.f[2]);
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    c.f[11] = fp::mul(c.f[11], c.f[2]);
    st32((c.r[29].w[0] + 80u), c.f[13]);
    st32((c.r[29].w[0] + 84u), c.f[12]);
    st32((c.r[29].w[0] + 88u), c.f[11]);
    c.facc = fp::mul(c.f[13], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[12], c.f[6]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[11], c.f[5]));
    c.facc = fp::mul(c.f[13], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[12], c.f[0]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[11], c.f[19]));
    c.facc = fp::mul(c.f[13], c.f[16]);
    c.facc = fp::add(c.facc, fp::mul(c.f[12], c.f[15]));
    c.f[11] = fp::add(c.facc, fp::mul(c.f[11], c.f[14]));
    c.facc = fp::mul(c.f[10], c.f[7]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[6]));
    c.f[5] = fp::add(c.facc, fp::mul(c.f[8], c.f[5]));
    c.facc = fp::mul(c.f[10], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[0]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[8], c.f[19]));
    c.facc = fp::mul(c.f[10], c.f[16]);
    c.facc = fp::add(c.facc, fp::mul(c.f[9], c.f[15]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[8], c.f[14]));
    st8((c.r[16].w[0] + 1193u), static_cast<std::uint8_t>(0u));
    c.f[0] = fp::sub(c.f[2], c.f[3]);
    set32(c.r[7], c.r[16].w[0] + 1193u);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 107;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004DF648; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DF648:
    c.f[0] = ld32((c.r[28].w[0] - 32316u));
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[5], c.r[16].w[0] + 1193u);
    c.f[9] = fp::add(c.f[0], c.f[11]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1193u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[9]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004DF678; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DF678:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1193u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004DF850; } }
    c.f[3] = ld32((c.r[16].w[0] + 420u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = 0u;
    c.f[6] = ld32((c.r[16].w[0] + 416u));
    c.f[5] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[8] = ld32((c.r[16].w[0] + 424u));
    c.f[7] = ld32((c.r[29].w[0] + 88u));
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[22] = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));  if (t) { goto L_004DF6D0; } }
    c.f[0] = ld32((c.r[28].w[0] - 32316u));
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[24] = fp::sub(c.f[0], c.f[4]);  if (t) { goto L_004DF6D4; } }
L_004DF6D0:
    c.f[24] = fp::sub(c.f[9], c.f[4]);
    c.budget -= 1;
L_004DF6D4:
    c.f[1] = fp::mul(c.f[4], c.f[24]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004DF850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.f[24] & fp::kAbs;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[16].w[0] + 1796u));  goto L_004DF734; }
    set32(c.r[4], ld32((c.r[16].w[0] + 1872u)));
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DF730; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DF730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF730u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004DF730u) [[unlikely]] return; }
L_004DF730:
    c.f[3] = ld32((c.r[16].w[0] + 1796u));
    c.budget -= 1;
L_004DF734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = ld32((c.r[16].w[0] + 1392u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 1800u));
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[2] = fp::sqrt(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.facc = fp::mul(c.f[24], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[22], c.f[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF768u); c.f[23] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 181u, depth + 1u); else { c.pc = 0x0033ADB0u; return; } if (c.pc != 0x004DF768u) [[unlikely]] return; }
L_004DF768:
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 80u));
    c.facc = fp::mul(c.f[2], c.f[0]);
    c.f[6] = ld32((c.r[2].w[0] + 8u));
    c.f[5] = ld32((c.r[29].w[0] + 88u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[1] = 0u;
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[3] = fp::mul(c.f[20], c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[23]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DF7C8; } }
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF7C8u); c.f[14] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DF7C8u) [[unlikely]] return; }
L_004DF7C8:
    fpu_div(c, 1u, c.f[22], c.f[21]);
    c.f[2] = ld32((c.r[16].w[0] + 1392u));
    c.f[0] = 0u;
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[3] = fp::mul(c.f[20], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[23]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 80u));  goto L_004DF81C; }
    c.f[2] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF818u); c.f[14] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 186u, depth + 1u); else { c.pc = 0x0033AFE0u; return; } if (c.pc != 0x004DF818u) [[unlikely]] return; }
L_004DF818:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004DF81C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1876u)));
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    c.f[5] = ld32((c.r[16].w[0] + 356u));
    c.f[4] = fp::mul(c.f[0], c.f[24]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[2] = fp::mul(c.f[2], c.f[24]);
    c.f[3] = ld32((c.r[16].w[0] + 360u));
    c.f[0] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = ld32((c.r[16].w[0] + 364u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF850u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 211u, depth + 1u); else { c.pc = 0x0033B1F0u; return; } if (c.pc != 0x004DF850u) [[unlikely]] return; }
L_004DF850:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004DF854:
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004DF890:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1191u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004DF8D4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1165u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1163u));  goto L_004DF938; }
L_004DF8D4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1194u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DF8EC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DF8EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DF92C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DF90C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DF90C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DF91C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DF91C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DF92C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004DF92C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004DFA58; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1163u));
    c.budget -= 1;
L_004DF938:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DFA54; } }
    c.f[2] = ld32((c.r[17].w[0] + 348u));
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DFA54; } }
    c.f[1] = ld32((c.r[17].w[0] + 1460u));
    c.f[0] = ld32((c.r[17].w[0] + 1464u));
    c.f[23] = fp::mul(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[17].w[0] + 1392u));  goto L_004DF974; }
    c.f[23] = c.f[0];
    c.f[0] = ld32((c.r[17].w[0] + 1392u));
    c.budget -= 2;
L_004DF974:
    c.r[16].d[0] = 0ull + 0ull;
    c.f[23] = fp::mul(c.f[23], c.f[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
L_004DF980:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 1404u));  goto L_004DF9F0; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[17].w[0] + 1408u));  goto L_004DF9DC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.f[1] = ld32((c.r[17].w[0] + 1404u));  goto L_004DF9C8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.f[2] = ld32((c.r[17].w[0] + 1408u));  goto L_004DF9B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_004DFA00; } }
L_004DF9B0:
    c.f[1] = ld32((c.r[17].w[0] + 1404u));
    c.f[0] = ld32((c.r[17].w[0] + 1400u));
    c.f[20] = c.f[2] ^ fp::kSign;
    c.f[21] = c.f[1] ^ fp::kSign;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0] ^ fp::kSign;  if (t) { goto L_004DF9FC; } }
L_004DF9C8:
    c.f[0] = ld32((c.r[17].w[0] + 1400u));
    c.f[20] = ld32((c.r[17].w[0] + 1408u));
    c.f[21] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[0] ^ fp::kSign;  if (t) { goto L_004DF9FC; } }
L_004DF9DC:
    c.f[0] = ld32((c.r[17].w[0] + 1404u));
    c.f[22] = ld32((c.r[17].w[0] + 1400u));
    c.f[20] = c.f[1] ^ fp::kSign;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[21] = c.f[0] ^ fp::kSign;  if (t) { goto L_004DF9FC; } }
L_004DF9F0:
    c.f[20] = ld32((c.r[17].w[0] + 1408u));
    c.f[22] = ld32((c.r[17].w[0] + 1400u));
    c.f[21] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
L_004DF9FC:
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_004DFA00:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1956u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[2] = ld32((c.r[17].w[0] + 368u));  goto L_004DFA18; }
    c.f[0] = ld32((c.r[17].w[0] + 1480u));
    c.f[23] = fp::mul(c.f[23], c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 368u));
    c.budget -= 3;
L_004DFA18:
    set32(c.r[4], ld32((c.r[17].w[0] + 1876u)));
    c.f[1] = ld32((c.r[17].w[0] + 372u));
    c.f[3] = c.f[23] ^ fp::kSign;
    c.f[0] = ld32((c.r[17].w[0] + 376u));
    c.f[12] = fp::mul(c.f[3], c.f[2]);
    c.f[13] = fp::mul(c.f[3], c.f[1]);
    c.f[14] = fp::mul(c.f[3], c.f[0]);
    c.f[15] = c.f[20];
    c.f[16] = c.f[21];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFA44u); c.f[17] = c.f[22];  if (depth < kMaxDepth) unit_008E(c, 183u, depth + 1u); else { c.pc = 0x0033AE90u; return; } if (c.pc != 0x004DFA44u) [[unlikely]] return; }
L_004DFA44:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 3u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF980u | kUnwind; return; } goto L_004DF980; }
L_004DFA54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004DFA58:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004DFA80:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32456u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[4].w[0] + 892u));
    c.f[2] = ld32((c.r[4].w[0] + 1568u));
    c.f[1] = ld32((c.r[4].w[0] + 888u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004DFD1C; } }
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[18].w[0] + 924u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFAF8u); set32(c.r[6], c.r[18].w[0] + 912u);  if (depth < kMaxDepth) unit_00F7(c, 194u, depth + 1u); else { c.pc = 0x004DFD70u; return; } if (c.pc != 0x004DFAF8u) [[unlikely]] return; }
L_004DFAF8:
    c.f[2] = ld32((c.r[18].w[0] + 928u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 932u));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.f[3] = ld32((c.r[18].w[0] + 924u));
    set32(c.r[6], c.r[18].w[0] + 912u);
    c.f[30] = fp::mul(c.f[0], c.f[2]);
    c.f[29] = fp::mul(c.f[0], c.f[1]);
    c.f[31] = fp::mul(c.f[0], c.f[3]);
    c.f[5] = ld32((c.r[18].w[0] + 928u));
    c.f[2] = ld32((c.r[18].w[0] + 920u));
    c.f[4] = ld32((c.r[18].w[0] + 916u));
    c.f[1] = ld32((c.r[18].w[0] + 932u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[6] = ld32((c.r[18].w[0] + 912u));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[3] = ld32((c.r[18].w[0] + 924u));
    c.facc = fp::mul(c.f[1], c.f[6]);
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::mul(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[6]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFB60u); st32((c.r[29].w[0] + 184u), c.f[0]);  if (depth < kMaxDepth) unit_00F7(c, 194u, depth + 1u); else { c.pc = 0x004DFD70u; return; } if (c.pc != 0x004DFB60u) [[unlikely]] return; }
L_004DFB60:
    c.f[3] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[2], ld32((c.r[18].w[0] + 1876u)));
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.f[28] = fp::mul(c.f[0], c.f[3]);
    set32(c.r[16], c.r[2].w[0] + 168u);
    set32(c.r[17], c.r[2].w[0] + 52u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[27] = fp::mul(c.f[0], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFB90u); c.f[26] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DFB90u) [[unlikely]] return; }
L_004DFB90:
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFBA0u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DFBA0u) [[unlikely]] return; }
L_004DFBA0:
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFBB0u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DFBB0u) [[unlikely]] return; }
L_004DFBB0:
    st32((c.r[29].w[0] + 136u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFBC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DFBC0u) [[unlikely]] return; }
L_004DFBC0:
    st32((c.r[29].w[0] + 144u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFBD0u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DFBD0u) [[unlikely]] return; }
L_004DFBD0:
    st32((c.r[29].w[0] + 148u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFBE0u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DFBE0u) [[unlikely]] return; }
L_004DFBE0:
    st32((c.r[29].w[0] + 152u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFBF0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DFBF0u) [[unlikely]] return; }
L_004DFBF0:
    st32((c.r[29].w[0] + 160u), c.f[0]);
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC00u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DFC00u) [[unlikely]] return; }
L_004DFC00:
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC10u); st32((c.r[29].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_008E(c, 29u, depth + 1u); else { c.pc = 0x00338980u; return; } if (c.pc != 0x004DFC10u) [[unlikely]] return; }
L_004DFC10:
    st32((c.r[29].w[0] + 168u), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[18].w[0] + 1876u)));
    set32(c.r[16], c.r[2].w[0] + 168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DFC28u) [[unlikely]] return; }
L_004DFC28:
    c.f[25] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC38u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DFC38u) [[unlikely]] return; }
L_004DFC38:
    c.f[24] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC48u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DFC48u) [[unlikely]] return; }
L_004DFC48:
    c.f[23] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC58u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DFC58u) [[unlikely]] return; }
L_004DFC58:
    c.f[22] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC68u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DFC68u) [[unlikely]] return; }
L_004DFC68:
    c.f[21] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC78u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DFC78u) [[unlikely]] return; }
L_004DFC78:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC88u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DFC88u) [[unlikely]] return; }
L_004DFC88:
    st32((c.r[29].w[0] + 124u), c.f[0]);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC98u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DFC98u) [[unlikely]] return; }
L_004DFC98:
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFCA8u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0089(c, 233u, depth + 1u); else { c.pc = 0x00327B70u; return; } if (c.pc != 0x004DFCA8u) [[unlikely]] return; }
L_004DFCA8:
    c.facc = fp::mul(c.f[24], c.f[30]);
    set32(c.r[4], ld32((c.r[18].w[0] + 1876u)));
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[31]));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[23], c.f[29]));
    c.facc = fp::mul(c.f[21], c.f[30]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[31]));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[20], c.f[29]));
    c.facc = fp::mul(c.f[0], c.f[30]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[31]));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFCE4u); c.f[14] = fp::add(c.facc, fp::mul(c.f[0], c.f[29]));  if (depth < kMaxDepth) unit_008E(c, 185u, depth + 1u); else { c.pc = 0x0033AFB0u; return; } if (c.pc != 0x004DFCE4u) [[unlikely]] return; }
L_004DFCE4:
    c.facc = fp::mul(c.f[24], c.f[27]);
    set32(c.r[4], ld32((c.r[18].w[0] + 1876u)));
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[28]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[23], c.f[26]));
    c.facc = fp::mul(c.f[21], c.f[27]);
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[28]));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[20], c.f[26]));
    c.facc = fp::mul(c.f[0], c.f[27]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[28]));
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFD1Cu); c.f[14] = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));  if (depth < kMaxDepth) unit_008E(c, 185u, depth + 1u); else { c.pc = 0x0033AFB0u; return; } if (c.pc != 0x004DFD1Cu) [[unlikely]] return; }
L_004DFD1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004DFD70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[3] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 436u));
    c.f[4] = ld32((c.r[4].w[0] + 432u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.facc = fp::mul(c.f[0], c.f[1]);
    c.f[8] = ld32((c.r[4].w[0] + 440u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    c.f[7] = ld32((c.r[5].w[0] + 8u));
    c.f[24] = c.f[12];
    c.f[6] = ld32((c.r[6].w[0] + 4u));
    c.f[21] = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    fpu_div(c, 0u, c.f[21], c.f[24]);
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[5] = ld32((c.r[6].w[0]));
    c.facc = fp::mul(c.f[6], c.f[7]);
    c.f[23] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[4], c.f[1]));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[7]));
    c.facc = fp::mul(c.f[5], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[6], c.f[2]));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[1] = ld32((c.r[4].w[0] + 368u));
    c.f[2] = ld32((c.r[4].w[0] + 376u));
    c.facc = fp::mul(c.f[6], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[4], c.f[2]));
    c.f[1] = fp::max(c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFE30u); c.f[12] = fp::min(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 427u, depth + 1u); else { c.pc = 0x003AF6F8u; return; } if (c.pc != 0x004DFE30u) [[unlikely]] return; }
L_004DFE30:
    c.f[1] = ld32((c.r[29].w[0] + 68u));
    c.f[3] = ld32((c.r[16].w[0] + 372u));
    c.f[4] = ld32((c.r[29].w[0] + 64u));
    c.f[5] = ld32((c.r[16].w[0] + 368u));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[6] = ld32((c.r[29].w[0] + 72u));
    c.f[7] = ld32((c.r[16].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[4]));
    c.f[2] = 0u;
    c.f[1] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[22] = c.f[0];  if (t) { goto L_004DFE6C; } }
    c.f[1] = ld32((c.r[28].w[0] - 32228u));
    c.f[22] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 2;
L_004DFE6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.f[20] = fp::mul(c.f[21], c.f[24]);
    c.f[2] = fp::mul(c.f[0], c.f[24]);
    c.f[1] = fp::add(c.f[22], c.f[20]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[26] = fp::add(c.facc, fp::mul(c.f[24], c.f[2]));
    c.f[13] = ld32((c.r[28].w[0] - 32228u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFEA4u); c.f[12] = c.f[26];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x004DFEA4u) [[unlikely]] return; }
L_004DFEA4:
    c.f[1] = ld32((c.r[28].w[0] - 32288u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[25] = c.f[0] ^ fp::kSign;  goto L_004DFEBC; }
    c.f[1] = ld32((c.r[28].w[0] - 32228u));
    c.f[25] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 2;
L_004DFEBC:
    c.f[25] = fp::add(c.f[25], c.f[26]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFEC8u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x004DFEC8u) [[unlikely]] return; }
L_004DFEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFED0u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x004DFED0u) [[unlikely]] return; }
L_004DFED0:
    c.f[0] = fp::sub(c.f[25], c.f[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::sub(c.f[0], c.f[20]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = c.f[21] & fp::kAbs;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.f[0] = fp::mul(c.f[24], c.f[24]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DFF24; } }
    c.f[1] = ld32((c.r[28].w[0] - 32564u));
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004DFF2C; }
L_004DFF24:
    c.f[0] = c.f[23];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_004DFF2C:
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004DFF60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 1504u), 0u);
    c.f[1] = ld32((c.r[4].w[0] + 1504u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1162u));
    c.f[2] = ld32((c.r[4].w[0] + 348u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 3u, c.f[1], c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DFFB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 4;
L_004DFFB8:
    c.f[1] = 0u;
    c.f[3] = fp::max(c.f[3], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::min(c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));  [[clang::musttail]] return unit_00F8(c, 3u, depth); }
    set32(c.r[3], ld32((c.r[16].w[0] + 1872u)));
    c.f[0] = ld32((c.r[3].w[0] + 1088u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_00F8(c, 2u, depth); } }
    [[clang::musttail]] return unit_00F8(c, 1u, depth);
}

}
